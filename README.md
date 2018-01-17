1.首先获取数据集
a.在文件夹make_dataset\3d_model\ 中放置3d模型与纹理
纹理图片以数字排序命名
b.打开 make_dataset\VirtualExhibition\VirtualExhibition.sln
更改相应的读取三维模型的路径名，以及存放截图路径，并运行
c.每次单机屏幕，将会切换到下一个纹理，并输出相应的截图
ps.默认代码每间隔5° 截取一张模型的viewpoint

2. 运行 make_dataset\temp.py 对截图进行预处理
主要是将多余的空白部分裁去。
