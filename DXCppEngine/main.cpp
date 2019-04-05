//Hide console window in Release mode
#ifdef NDEBUG
#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")
#endif

#include "AppWindow.h"
#include <stdexcept>

int main()
{
	printf("Init application.\n");
	try
	{
		AppWindow app;
		if (app.isRun()) printf("Application is runing.\n");
		
		while (app.isRun())
		{
			app.broadcast();
		}
		
	}
	catch ( const std::runtime_error& err)
	{
		printf("Application fail.\n");
	}

	return 0;
}