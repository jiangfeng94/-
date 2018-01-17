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
from PIL import Image
def run():
    print('0.getting dataset')
    datapath ="../make_dataset/data_input_angle=5"
    train, test,train_target,test_target =process_data(datapath)
    print('1.creating model')
    model = auto_encoder.AutoEncoder()
    model.build()
    print('2.Creating trainer')
    t = trainer.Trainer(train, test,train_target,test_target)
    t.setup_graph(model)
    print('3.starting train')
    print(train.shape)
    t.train_model()
    print('4.starting test')
    res = t.test_model()
    #show output pic
    res =np.array(res)
    res =res[0]*255
    res =np.rint(res)
    test_show1 =test[:24,:,:,:3]
    test_show1 =test_show1*255
    test_show1 =np.rint(test_show1)
    test_show2 = test[:24, :, :, 3:6]
    test_show2 =test_show2*255
    test_show2 =np.rint(test_show2)
    test_target =test_target[:24]
    test_target =test_target*255
    test_target =np.rint(test_target)
    for num in range(0,24):
        im1 =np.uint8(test_show1[num])
        im1 =Image.fromarray(im1)
        im1.save("test/%d-left.jpg"%num)
        im2 =np.uint8(test_show2[num])
        im2 =Image.fromarray(im2)
        im2.save("test/%d-right.jpg"%num)
        im3 =np.uint8(res[num])
        im3 =Image.fromarray(im3)
        im3.save("test/%d-output.jpg"%num)
        im4 =np.uint8(test_target[num])
        im4 =Image.fromarray(im4)
        im4.save("test/%d-target.jpg"%num)

def process_data(datapath):
    n =1
    m =72
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
    image_data =[]
    target_data=[]
    '''
    for i in range(0,n):
        for j in range(0,m):
            image_data.append(images[i][j])
    '''
    for k in range(1,10):
        for i in range(0,72):
            tmp =np.concatenate((images[0][i],images[0][(i+k)%72],images[0][(i-k)%72]),axis=-1)
            image_data.append(tmp)
    data =np.array(image_data[:])
    permutation = np.random.permutation(data.shape[0])
    shuffled_dataset = data[permutation, :, :]
    l =len(image_data)

    train =shuffled_dataset[:600,:,:,3:9]
    train = train / 255.0  # [0,1]
    train_target=shuffled_dataset[:600,:,:,:3]
    train_target =train_target/255.0


    test =shuffled_dataset[600:648,:,:,3:9]
    test_target =shuffled_dataset[600:648,:,:,0:3]
    test =test/255.0
    test_target =test_target/255.0
    return train,test,train_target,test_target

if __name__ == '__main__':
    run()
             
     