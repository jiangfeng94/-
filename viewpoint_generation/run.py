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
import PIL as Image
def run():
    print('0.getting dataset')
    datapath ="../make_dataset/data_cut_resize"
    train, test,train_target =process_data(datapath)
    print('1.creating model')
    model = auto_encoder.AutoEncoder()
    model.build()
    print('2.Creating trainer')
    t = trainer.Trainer(train, test,train_target)
    t.setup_graph(model)
    print('3.starting train')
    print(train.shape)
    t.train_model()
    print('4.starting test')
    res = t.test_model()
    res =np.array(test)
    res *=255
    res =np.rint(test)
    #show test img
    im = np.uint8(test[1])
    im = Image.fromarray(im)
    im.save("out/test1-a.jpg")
    im2 = np.uint8(res[0][1])
    im2 = Image.fromarray(im2)
    im2.save("out/test1-b.jpg")
    
def process_data(datapath):
    n =1
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
                    if(idx ==0):
                        images[idx][pos] =img_data
                        print(fp)
    image_data =[]
    target_data=[]
    '''
    for i in range(0,n):
        for j in range(0,m):
            image_data.append(images[i][j])
    '''
    for i in range(0,24):
        tmp =np.concatenate((images[0][(i+1)%24],images[0][(i-1)%24]),axis=-1)
        image_data.append(tmp)
        target_data.append(images[0][i])
    train =np.array(image_data[:24])
    train = train / 255.0  # [0,1]
    train_target=np.array(target_data[:24])
    train_target =train_target/255


    test =np.array(image_data[0:24]) / 255.0   #[0,1]
    return train,test,train_target

if __name__ == '__main__':
    run()
             
     