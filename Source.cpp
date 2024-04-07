#pragma once
#include "log.h"
#include <Windows.h>
#include "trevmenu.h"

using namespace kursme;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew kursme::log());
	return 0;
}
