# -*- coding: utf-8 -*-
"""
Created on Tue Jan 16 21:54:45 2018

@author: SalaFeng-
"""

path ="D:\\Desktop\\deep-learning\\haolenga\\make_dataset\data_output\\"
path2 ="D:\\Desktop\\deep-learning\\haolenga\\make_dataset\\data_cut_resize\\"
from skimage import io,transform  
import numpy as np
import os
"""for imgpath in os.listdir(path):
    tmp =path +imgpath
    img=io.imread(tmp)
    img =transform.resize(img,(256,448))

    img_cut =img[50:250,90:390,:]
    img_resize = transform.resize(img_cut, (64, 96))
    outpath =path2 +imgpath
    io.imsave(outpath,img_resize)"""

x = np.array([[[1,2,3],[4,5,6]],
              [[1,2,3],[4,5,6]],
              [[1,2,3],[4,5,6]],
              [[1,2,3],[4,5,6]]])
y = np.array([[[1,2,3],[4,5,6]],
              [[1,2,3],[4,5,6]],
              [[1,2,3],[4,5,6]],
              [[1,2,3],[4,5,6]]])
z =np.concatenate((x,y),axis=-1)
print(z.shape)

