import tensorflow as tf
import tensorflow.contrib.layers as layers
import tensorflow.contrib.slim as slim
import numpy as np


def conv2d(input, output, kernel_h=3, kernel_w=3, k_stride=2, scope_name="conv2d", act=tf.nn.relu):
	#act = tf.nn.leaky_relu
	with tf.variable_scope(scope_name):
		return layers.conv2d(inputs=input, num_outputs=output, kernel_size=[kernel_h, kernel_w], stride=k_stride, activation_fn=act,
			 biases_initializer=tf.zeros_initializer(), weights_initializer=tf.contrib.layers.xavier_initializer())


def deconv2d(input, kernel_size, stride, num_filter, scope_name='deconv2d'):
	with tf.variable_scope(scope_name):
		stride_shape = [stride, stride]
		kernel_shape = [kernel_size, kernel_size]
		return layers.conv2d_transpose(inputs=input, num_outputs=num_filter, stride=stride_shape, kernel_size= kernel_shape,
			padding='SAME', biases_initializer=tf.zeros_initializer(), weights_initializer=tf.contrib.layers.xavier_initializer()
		)

def batch_norm(input, is_train=True, activation_fn=None, scope_name="bn_act"):
	with tf.variable_scope(scope_name):
		return layers.batch_norm(input, scale=True, updates_collections=None)
