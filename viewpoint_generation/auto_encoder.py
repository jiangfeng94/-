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
        self.image = tf.placeholder(shape=[self.batch_size, self.image_height, self.image_width, self.channel],
									dtype=tf.float32)
        # image 以后改成 [h,w,c*2] 
        self.target_image = tf.placeholder(shape=[self.batch_size, self.image_height, self.image_width, self.channel],
									dtype=tf.float32)

        self.c1, self.c2,self.c3,self.d1,self.d2, self.d3,self.c4,self.d4,self.c5,self.d5,self.c6,self.d6 =  [], [],[],[],[], [], [], [], [], [],[],[]
    
    def encoder(self,input_image,scope_name="encoder",reuse =False):
        with tf.variable_scope(scope_name):
            c1 = op.conv2d(input_image, 32, kernel_h=3, kernel_w=3, k_stride=2, scope_name='conv1')
            self.c1.append(c1)
            c2 = op.conv2d(c1, 100, kernel_h=3, kernel_w=3, k_stride=2, scope_name='conv2')
            self.c2.append(c2)
            c3 = op.conv2d(c2, 200, kernel_h=3, kernel_w=3, k_stride=2, scope_name='conv3')
            self.c3.append(c3)
            c4 = op.conv2d(c3, 500, kernel_h=3, kernel_w=3, k_stride=2, scope_name='conv4')
            self.c4.append(c4)
            c5 = op.conv2d(c4, 1000, kernel_h=3, kernel_w=3, k_stride=2, scope_name='conv5')
            self.c5.append(c5)
            c6 = op.conv2d(c5, 2000, kernel_h=3, kernel_w=3, k_stride=2, scope_name='conv6')
            self.c6.append(c6)
            print(c1.shape,c2.shape,c3.shape,c4.shape,c5.shape,c6.shape)
            return c6
    def decoder(self,dinput,scope_name ='decoder'):
        with tf.variable_scope(scope_name):
            d1 = op.deconv2d(dinput, kernel_size=3, stride=2, num_filter=1000,  scope_name='dconv1')
            d1 = tf.nn.relu(d1)
            self.d1.append(d1)
            d2 = op.deconv2d(d1, kernel_size=3, stride=2, num_filter=500,  scope_name='dconv2')
            d2 = tf.nn.relu(d2)
            self.d2.append(d2)
            d3 = op.deconv2d(d2, kernel_size=3, stride=2, num_filter=200,  scope_name='dconv3')
            d3 = tf.nn.relu(d3)
            self.d3.append(d3)
            d4 = op.deconv2d(d3, kernel_size=3, stride=2, num_filter=100,  scope_name='dconv4')
            d4 = tf.nn.relu(d4)
            self.d4.append(d4)
            d5 = op.deconv2d(d4, kernel_size=3, stride=2, num_filter=32,  scope_name='dconv5')
            d5 = tf.nn.relu(d5)
            self.d5.append(d5)
            d6 = op.deconv2d(d5, kernel_size=3, stride=2, num_filter=3,  scope_name='dconv6')
            self.d6.append(d6)
            print(d1.shape,d2.shape,d3.shape,d4.shape,d5.shape,d6.shape)
            return d6
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
        
    
                    