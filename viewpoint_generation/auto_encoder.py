# -*- coding: utf-8 -*-
"""
Created on Mon Jan 15 16:23:29 2018

@author: SalaFeng-
"""

import tensorflow as tf
import  myconfig as config
import op
class AutoEncoder():
    def __init__(self):
        self.batch_size =config.batch_size
        self.image_height = config.height
        self.image_width = config.width
        self.channel = config.channel
        self.image = tf.placeholder(shape=[self.batch_size, self.image_height, self.image_width, 6],
									dtype=tf.float32)
        # image 以后改成 [h,w,c*2] 
        self.target_image = tf.placeholder(shape=[self.batch_size, self.image_height, self.image_width, self.channel],
									dtype=tf.float32)

        self.c1, self.c2,self.c3,self.d1,self.d2, self.d3,self.c4,self.d4,self.c5,self.d5,self.c6,self.d6 =  [], [],[],[],[], [], [], [], [], [],[],[]
    
    def encoder(self,input_image,scope_name="encoder",reuse =False):
        with tf.variable_scope(scope_name):
            c1 = op.conv2d(input_image, 64, kernel_h=5, kernel_w=5, k_stride=1, scope_name='conv1')
            c1 = op.batch_norm(c1,scope_name='bn1')
            self.c1.append(c1)
            c2 = op.conv2d(c1, 128, kernel_h=5, kernel_w=5, k_stride=2, scope_name='conv2')
            c2 = op.batch_norm(c2,scope_name='bn2')
            self.c2.append(c2)
            c3 = op.conv2d(c2, 256, kernel_h=5, kernel_w=5, k_stride=1, scope_name='conv3')
            c3 = op.batch_norm(c3,scope_name='bn3')
            self.c3.append(c3)
            c4 = op.conv2d(c3, 512, kernel_h=5, kernel_w=5, k_stride=2, scope_name='conv4')
            self.c3.append(c4)
            print(c1.shape,c2.shape,c3.shape,c4.shape)
            return c4
    def decoder(self,dinput,scope_name ='decoder'):
        with tf.variable_scope(scope_name):
            d1 = op.deconv2d(dinput, kernel_size=5, stride=2, num_filter=256,  scope_name='dconv1')
            d1 = op.batch_norm(d1,scope_name='bn4')
            d1 = tf.nn.relu(d1)
            self.d1.append(d1)
            d2 = op.deconv2d(d1, kernel_size=5, stride=1, num_filter=128,  scope_name='dconv2')
            d2 = op.batch_norm(d2,scope_name='bn5')
            d2 = tf.nn.relu(d2)
            self.d2.append(d2)
            d3 = op.deconv2d(d2, kernel_size=5, stride=2, num_filter=64,  scope_name='dconv3')
            d3 = op.batch_norm(d3,scope_name='bn6')
            d3 = tf.nn.relu(d3)
            self.d3.append(d3)
            d4 = op.deconv2d(d3, kernel_size=5, stride=1, num_filter=3,  scope_name='dconv4')
            self.d3.append(d4)
            print(d1.shape,d2.shape,d3.shape,d4.shape)
            return d4
    def get_feed_dict(self,batch_input,batch_output):
        return {self.image:batch_input,self.target_image:batch_output}
    def get_loss(self):
        return self.loss
    def build(self):
        with tf.variable_scope('AutoEncoder'):
            e =self.encoder(self.image)
            d =self.decoder(e)
            t =tf.tanh(d)  #可能有问题
            self.model_output =t
            self.loss =tf.reduce_mean(abs(t-self.target_image))
        return t
        
    
                    