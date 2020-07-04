#pragma once
#include <stdio.h>
namespace Hazel {

	class __declspec(dllexport) Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	//To be defined in cient
	Application* CreateApplication();

}