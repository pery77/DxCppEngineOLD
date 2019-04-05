#pragma once
#include <Windows.h>
#include <iostream>

class Window
{
public:

	//Initialize the window
	Window();

	void broadcast();
	bool     isRun();

	//Events
	virtual void  onCreate();
	virtual void  onUpdate();
	virtual void onDestroy();

	//Release the window
	~Window();

protected:

	HWND m_hwnd   = nullptr;
	bool m_is_run = true;
};

