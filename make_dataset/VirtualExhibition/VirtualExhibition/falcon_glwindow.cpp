#include "falcon_glwindow.h"
#include "falcon_mainwindow.h"
#include <irrlicht.h>

GLWindow::GLWindow(QWidget *parent)
	: QOpenGLWidget(parent)
{
	this->mainWindow = qobject_cast<MainWindow *>(parent);
	this->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
	this->setMouseTracking(true);
}

GLWindow::~GLWindow()   
{
}

void GLWindow::initializeGL()
{
	glClearColor(255, 132, 132, 132);
	float LightPosition[] = { 0.0f, 0.0f, 200.0f, 1.0f };
	GLfloat LightAmbient[] = { 0.5f, 0.5f, 0.5f, 1.0f };
	GLfloat mat_shininess[] = { 255.0f };
	GLfloat LightDiffuse[] = { 0.5f, 0.5f, 0.5f, 1.0f };
	GLfloat mat_specular[] = { 0.5f, 0.5f, 0.5f, 1.0f };

	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glLightfv(GL_LIGHT1, GL_AMBIENT, LightAmbient);
	glLightfv(GL_LIGHT1, GL_DIFFUSE, LightDiffuse);
	glLightfv(GL_LIGHT1, GL_POSITION, LightPosition);
	glLightfv(GL_LIGHT1, GL_SPECULAR, LightDiffuse);
	glEnable(GL_LIGHT1);
	glEnable(GL_SMOOTH);
	glEnable(GL_NORMALIZE);
	glDisable(GL_TEXTURE_2D);
	glDisable(GL_CULL_FACE);
}


void GLWindow::resizeGL(int w, int h)
{
	mainWindow->getDriver()->OnResize(core::dimension2d<u32>(w, h));//设置viewport
	scene::ICameraSceneNode* activeCamera = mainWindow->getSmgr()->getActiveCamera();
	if (activeCamera)
	{
		activeCamera->setAspectRatio((float)w / (float)h);//搞了好几个星期，真是郁闷亚。。。。。
	}
	update();
}

void GLWindow::paintGL()
{
	makeCurrent();
	glClearColor(255, 132, 132, 132);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	mainWindow->getDriver()->beginScene(true, true, video::SColor(255, 132, 132, 132));
	mainWindow->getSmgr()->drawAll();
	mainWindow->getDriver()->endScene();
	update();
}

void GLWindow::updateContent(const QString &filename, int num) {
	bool isempty = mainWindow->smgrIsEmpty();
	if (!isempty) {
		isempty = true;
	}
	if (isempty) {
		scene::IAnimatedMesh* earthMesh = mainWindow->getSmgr()->getMesh(filename.toLocal8Bit().data());
		irr::core::vector3df center(0.0, 0.0, 0.0);
		if (earthMesh)
		{
			scene::ISceneNode* rootEmptyNode = mainWindow->getEmptySceneNode();
			if (rootEmptyNode) {
				scene::IMeshSceneNode* sphere = mainWindow->getSmgr()->addMeshSceneNode(earthMesh->getMesh(0), rootEmptyNode, 1);
				sphere->setName(filename.toLocal8Bit().data());
				selectnode = sphere;
			}
		}
		core::aabbox3d<f32> box = selectnode->getBoundingBox();
		float scale;

		core::vector3df offset = box.getCenter();//11.1
		selectnode->setPosition(selectnode->getPosition() - offset);
		scene::ICameraSceneNode* camera = mainWindow->getSmgr()->getActiveCamera();
		irr::core::vector3df extend = box.getExtent();

		int x = mainWindow->getGlWindow()->height();
		int y = mainWindow->getGlWindow()->width();

		if ((extend.Y / extend.X) >= (y / x)) {
			scale = extend.Z / 2 + extend.Y / (2 * tan(camera->getFOV() / 2));
		}
		else {
			scale = extend.Z / 2 + extend.X * y / (x * 2 * tan(camera->getFOV() / 2));
		}
		if (camera) {
			camera->setPosition(core::vector3df(0.0, 50.0, scale));
			camera->setTarget(irr::core::vector3df(0.0, 0.0, 0.0));
		}
		//mainWindow->getSmgr()->setAmbientLight(video::SColorf(0.2f, 0.2f, 0.2f, 0.2f));
	}
	update();
	for (int i = 0; i < 360; i = i + 15) {
		int k = i / 15;
		QString b = QString::number(num, 10); 
		QString a = QString::number(k, 10);
		QString picname = b + "_" + a + "_0";
		getpic(picname);
		changeview();
	}
	
}

void GLWindow::changeview() {
	if (selectnode)
	{
		video::SMaterial* material = &(selectnode->getMaterial(0));
		selectnode->setMaterialFlag(video::EMF_WIREFRAME, false);
		core::vector3df rotation = selectnode->getRotation();
		rotation.Y += 15;
		selectnode->setRotation(rotation);
	}
	update();
}
void GLWindow::getpic(QString picname) {
	int w = mainWindow->getGlWindow()->width();
	int h = mainWindow->getGlWindow()->height();
	QPixmap imagelue = mainWindow->grab(QRect(0, 0, w,h));
	QString jpgPath = "../../data_output/"+ picname+".jpg";
	imagelue.save(jpgPath);
}

