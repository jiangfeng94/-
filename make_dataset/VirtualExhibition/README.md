# 虚拟布展系统

[![author][badge-author]][my-srv]

整个solution有两个project：falcon3d和falcon，分别在falcon和falcon_engine文件夹下面。

falcon3d是项目的主体，最终生成的是exe可运行程序，它依赖于falcon项目，后者生成一个静态库
falcon.lib，放在lib文件夹下。

include文件夹下放的是falcon项目的头文件，falcon3d和falcon都会用到。

## 快速开始
Visual Studio安装了QT插件后，打开VirtualExhibition.sln，选中解决方案，重新生成，即可重新编译，
生成falcon.lib和falcon3d.exe。

## Task list
- [x] 大图像录入基本功能
- [x] 切分后的html标题更改为对应的中文
- [x] 部署web服务器和数据库服务器
- [x] 录入已有的10幅古画，添加统一的浏览界面


[badge-author]: https://img.shields.io/badge/Author-NMLab208-blue.svg
[my-srv]: http://10.214.58.200:8080/Virtual_Exhibition_Backend/index.jsp
