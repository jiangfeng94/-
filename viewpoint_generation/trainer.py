# -*- coding: utf-8 -*-
"""
Created on Mon Jan 15 16:23:29 2018

@author: SalaFeng-
"""
import os
import auto_encoder
import myconfig as config
import tensorflow as tf
import tensorflow.contrib.layers as layers
import numpy as np
from PIL import Image
log_dir = "log_dir"
class Trainer(object):
    def __init__(self,train,test):
        self.batch_size =config.batch_size
        self.learning_rate = config.learning_rate
        self.epochs = config.epochs
        self.session = tf.Session()
        self.global_step = tf.train.get_or_create_global_step(graph=None)
        self.train = train
        self.test = test
    def setup_graph(self,model):
        self.model =model
        self.loss = self.model.get_loss()
        self.build_optimizer(self.loss)
        self.session.run(tf.global_variables_initializer())
        self.summary_op = tf.summary.merge_all()
        self.summary_writer = tf.summary.FileWriter(log_dir, self.session.graph)
    def build_optimizer(self,loss,gstep=None,lrate =None):
        gstep = self.global_step
        lrate = self.learning_rate
        lr = tf.train.exponential_decay(lrate, gstep, 100, 0.98, staircase=True)
        optimizer = tf.train.AdamOptimizer(lr)
        self.opt = layers.optimize_loss(loss=loss, global_step=gstep, learning_rate=lrate,
                                        optimizer=optimizer)

    def  train_model(self,is_train_True=True):
        dataset = self.train
        l = len(dataset)
        print("Total iterations in epoch", int(l / self.batch_size))
        for e in range(self.epochs):
            for i in range(int(l / self.batch_size)):
                # for i in range(5):
                batch_input = dataset[i * self.batch_size: (i + 1) * self.batch_size]
                # batch_target = np.roll(batch_input, 1, axis=1)
                batch_target = np.zeros(batch_input.shape)
                for cnt in range(batch_input.shape[0] // 24):
                    batch_target[cnt * 24:(cnt + 1) * 24] = np.roll(batch_input[cnt * 24:(cnt + 1) * 24], 1, axis=0)
                feed_dict = {self.model.image: batch_input, self.model.target_image: batch_target}
                computed_loss, computed_opt, gstep, summary, output = self.session.run(
                    [self.loss, self.opt, self.global_step, self.summary_op, self.model.model_output],
                    feed_dict=feed_dict)
                print("Epoch: {}/{}...".format(e + 1, self.epochs), "Training loss: {:.4f}".format(computed_loss))
                ### 查看中间文件
                output = np.array(output)
                output *= 255
                output = np.rint(output)

                im2 = np.uint8(output[0])
                im2 = Image.fromarray(im2)
                im2.save("out/%d-output.jpg" % i)

                batch_input = np.array(batch_input)
                batch_input *= 255
                batch_input = np.rint(batch_input)
                im1 = np.uint8(batch_input[0])
                im1 = Image.fromarray(im1)
                im1.save("out/%d-input.jpg" % i)
                batch_target = np.array(batch_target)
                batch_target *= 255
                batch_target = np.rint(batch_target)
                im = np.uint8(batch_target[0])
                im = Image.fromarray(im)
                im.save("out/%d-target.jpg" % i)

                if i % 10 == 0:
                    self.summary_writer.add_summary(summary, global_step=gstep)
    def test_model(self):
        dataset = self.test

        l = len(dataset)
        print("Total iterations in epoch", int(l / self.batch_size))
        test_output = []
        # for i in range(int(l/self.batch_size)):
        for i in range(2):
            batch_input = dataset[i * self.batch_size: (i + 1) * self.batch_size]
            train_labels = np.zeros(batch_input.shape)

            for cnt in range(batch_input.shape[0] // 24):
                train_labels[cnt * 24:(cnt + 1) * 24] = np.roll(batch_input[cnt * 24:(cnt + 1) * 24], 1, axis=0)

            feed_dict = {self.model.image: batch_input, self.model.target_image: train_labels}

            op, computed_loss = self.session.run([self.model.model_output, self.loss], feed_dict=feed_dict)
            # print(tf.reduce_max(self.model.model_output), "TMAX")
            test_output.append(op)
            print("Training loss: {:.4f}".format(computed_loss))

        return test_output



