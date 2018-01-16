# -*- coding: utf-8 -*-
"""
Created on Mon Jan 15 16:07:43 2018

@author: SalaFeng-
"""
import numpy as np
import json, sys ,os
import tensorflow as tf
from scipy import misc
import myconfig as config
import auto_encoder
import trainer
def run():
    print('0.getting dataset')
    
    datapath ="../make_dataset/data_output_resize"
    train, test =process_data(datapath)
    print('1.creating model')
    model = auto_encoder.AutoEncoder()
    model.build()
    print('2.Creating trainer')
    t = trainer.Trainer(train, test)
    t.setup_graph(model)
    print('3.starting train')
    print(train.shape)
    t.train_model()
    print('4.starting test')
    result = t.test_model()

    result =np.array(result)
    result *=255
    result =np.rint(result)

    test =np.array(test)
    test *=255
    test =np.rint(test)
    #show test img
    im = np.uint8(test[1])
    im = Image.fromarray(im)
    im.save("out/test1-a.jpg")
    im2 = np.uint8(result[0][1])
    im2 = Image.fromarray(im2)
    im2.save("out/test1-b.jpg")
    im = np.uint8(test[2])
    im = Image.fromarray(im)
    im.save("out/test2-a.jpg")
    im2 = np.uint8(result[0][2])
    im2 = Image.fromarray(im2)
    im2.save("out/test2-b.jpg")

    im = np.uint8(test[3])
    im = Image.fromarray(im)
    im.save("out/test3-a.jpg")
    im2 = np.uint8(result[0][3])
    im2 = Image.fromarray(im2)
    im2.save("out/test3-b.jpg")

    im = np.uint8(test[4])
    im = Image.fromarray(im)
    im.save("out/test4-a.jpg")
    im2 = np.uint8(result[0][4])
    im2 = Image.fromarray(im2)
    im2.save("out/test4-b.jpg")

    im = np.uint8(test[5])
    im = Image.fromarray(im)
    im.save("out/test5-a.jpg")
    im2 = np.uint8(result[0][5])
    im2 = Image.fromarray(im2)
    im2.save("out/test5-b.jpg")
def process_data(datapath):
    n =20
    m =24
    images= [[0]*m for i in range(n)]
    for rootdir,subdir,files in os.walk(datapath):
        for fname in files:
            if fname.endswith('.jpg'):
                    name,extension = os.path.splitext(fname)  
                    fpart, elevation_angle = name.rsplit('_',1)  #elevation_angle =0
                    img_id, azimuth_angle = fpart.rsplit('_', 1)
                    fp =os.path.join(datapath,fname)
                    
                    img_data = misc.imread(fp).astype(np.float32)
                    pos = int(azimuth_angle)
                    idx = int(img_id)
                    images[idx][pos] =img_data
    image_data =[]
    for i in range(0,n):
        for j in range(0,m):
            image_data.append(images[i][j])
    k = m*n
    l =k*0.8
    print(k)
    train =np.array(image_data[:480])
    train =train/255.0  #[0,1]
    test =np.array(image_data[240:480]) / 255.0   #[0,1]
    return train,test

if __name__ == '__main__':
    run()
             
     