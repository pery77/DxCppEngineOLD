//Hide console window
#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")

#include "AppWindow.h"
#include <stdexcept>


int main()
{
	try
	{
		AppWindow app;
		while (app.isRun())
		{
			app.broadcast();
		}
	}
	catch ( const std::runtime_error& err)
	{
		MessageBox(nullptr, err.what(), "Error initializanding app.", MB_OK);
	}

	return 0;
}