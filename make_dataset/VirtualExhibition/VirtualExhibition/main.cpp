#include "falcon_mainwindow.h"
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QPalette * palette = new QPalette();
	palette->setColor(QPalette::Active, QPalette::Window, QColor(183, 207, 233, 255));//背景
	palette->setColor(QPalette::Active, QPalette::WindowText, QColor(0, 0, 0, 100));//前景
	palette->setColor(QPalette::Active, QPalette::Base, QColor(255, 255, 255, 255));//输入文本的窗口的背景
	palette->setColor(QPalette::Active, QPalette::Text, QColor(0, 0, 0, 255));//输入文本的窗口的前景
	palette->setColor(QPalette::Active, QPalette::ButtonText, QColor(0, 0, 0, 255));//按钮的窗口的前景
	palette->setColor(QPalette::Active, QPalette::Button, QColor(125, 125, 125, 0));//按钮的窗口的背景
	a.setPalette(*palette);
	MainWindow w;
	w.showMaximized();
	return a.exec();
}

