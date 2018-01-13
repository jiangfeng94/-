#ifndef __GLWINDOW_H__
#define __GLWINDOW_H__
#include <QOpenGLWidget>
#include <QWidget>
#include <QtGui>
#include <QMouseEvent>
#include "irrlicht.h"
using namespace irr;
class MainWindow;

class GLWindow : public QOpenGLWidget
{
	Q_OBJECT

public:
	GLWindow(QWidget *parent);
	~GLWindow();
	MainWindow * mainWindow;
	scene::ISceneNode* selectnode = NULL;
	QPoint lastPos;
	void updateContent(const QString &filename, int num);
	void changeview();
	void getpic(QString picname);
protected:
	/*! Initialize OpenGL*/
	void initializeGL();
	/*! When the window is resized*/
	void resizeGL(int w, int h);
	/*! Draw the OpenGL scene*/
	void paintGL();
};
#endif 