#ifndef _MAIN_WINDOW_H_
#define _MAIN_WINDOW_H_

#include <QMainWindow>
#include <QWidget>
#include <QPushButton>
#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QFileDialog>
#include <QToolBar>
#include "falcon_glwindow.h"
#include "irrlicht.h"
using namespace irr;

class QueryWindow;
class AddLocalModelWindow;
class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow();
	
	IrrlichtDevice*  getDevice();
	scene::ISceneManager*  getSmgr();
	video::IVideoDriver* getDriver();
	gui::IGUIEnvironment* getGui();

	GLWindow *getGlWindow();
	bool smgrIsEmpty();
	//所有可操作节点的父亲节点
	scene::ISceneNode * emptySceneNode;
	scene::ISceneNode* getEmptySceneNode();
private:
	IrrlichtDevice* Device;
	scene::ISceneManager*  Smgr;
	video::IVideoDriver* Driver;
	gui::IGUIEnvironment* gui;
	GLWindow *glWindow;
};

#endif 