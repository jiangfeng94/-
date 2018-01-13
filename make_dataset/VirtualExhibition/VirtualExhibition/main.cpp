#include "falcon_mainwindow.h"
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QPalette * palette = new QPalette();
	palette->setColor(QPalette::Active, QPalette::Window, QColor(183, 207, 233, 255));//����
	palette->setColor(QPalette::Active, QPalette::WindowText, QColor(0, 0, 0, 100));//ǰ��
	palette->setColor(QPalette::Active, QPalette::Base, QColor(255, 255, 255, 255));//�����ı��Ĵ��ڵı���
	palette->setColor(QPalette::Active, QPalette::Text, QColor(0, 0, 0, 255));//�����ı��Ĵ��ڵ�ǰ��
	palette->setColor(QPalette::Active, QPalette::ButtonText, QColor(0, 0, 0, 255));//��ť�Ĵ��ڵ�ǰ��
	palette->setColor(QPalette::Active, QPalette::Button, QColor(125, 125, 125, 0));//��ť�Ĵ��ڵı���
	a.setPalette(*palette);
	MainWindow w;
	w.showMaximized();
	return a.exec();
}

