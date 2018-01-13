#include "falcon_mainwindow.h"
#include  <QVBoxLayout>
#include <irrlicht.h>
#include <QInputDialog>
#include <QMessageBox>
using namespace irr;
using namespace scene;
using namespace core;

scene::ICameraSceneNode* Camera[2] = { 0, 0 };
MainWindow::MainWindow() : QMainWindow()
{
	QSurfaceFormat ff;
	ff.setSamples(4);
	ff.setProfile(QSurfaceFormat::CoreProfile);
	ff.setStereo(true);

	glWindow = new GLWindow(this);
	glWindow->setFormat(ff);
	glWindow->setMinimumSize(400, 300);
	setCentralWidget(glWindow);

	QString title = tr("博物馆一体化智能云服务平台");
	setWindowTitle(title);
	setWindowIcon(QIcon("./resources/misc.png"));

	irr::SIrrlichtCreationParameters p;
	p.AntiAlias = false;
	p.Bits = 32;
	p.WindowId = (void*)glWindow->winId();
	p.DriverType = video::EDT_OPENGL;

	Device = irr::createDeviceEx(p);
	Device->setResizable(true);
	Driver = Device->getVideoDriver();
	Smgr = Device->getSceneManager();
	gui = Device->getGUIEnvironment();
	//添加一个所有可操作结点的父亲节点，该节点是空节点
	emptySceneNode = Smgr->addEmptySceneNode(0, 1);

	scene::ICameraSceneNode* camera =Smgr->addCameraSceneNodeFPS();
	if (camera)
	{
		camera->setPosition(core::vector3df(0.0, 0.0, 600.0));
		camera->setTarget(irr::core::vector3df(0.0, 0.0, -1000.0));
	}
	
	scene::ISceneNode* light =Smgr->addLightSceneNode(0, core::vector3df(0.0, 100.0, 0.0),video::SColorf(0.1f, 0.1f, 0.1f, 0.0f), 8000.0f);
	glWindow->updateContent("../../3d_model/teapot001.3ds",0);
}

IrrlichtDevice*  MainWindow::getDevice()
{
	return Device;

}
scene::ISceneManager* MainWindow::getSmgr()
{
	return Smgr;
}
video::IVideoDriver* MainWindow::getDriver()
{
	return Driver;

}
gui::IGUIEnvironment* MainWindow::getGui() {
	return gui;
}

scene::ISceneNode* MainWindow::getEmptySceneNode()
{
	return emptySceneNode;
}

bool MainWindow::smgrIsEmpty() {
	if (Smgr->getActiveCamera())
		return false;
	else
		return true;
}

GLWindow * MainWindow::getGlWindow()
{
	return glWindow;
}
