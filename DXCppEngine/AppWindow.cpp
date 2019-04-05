#include "AppWindow.h"

void AppWindow::onCreate()
{
	printf("Window created\n");
	Window::onCreate();
	//Graphics::get()->init();
}

void AppWindow::onUpdate()
{
	Window::onUpdate();
}

void AppWindow::onDestroy()
{
	Window::onDestroy();
	//Graphics::get()->release();
}
