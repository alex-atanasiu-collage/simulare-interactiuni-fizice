#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <windows.h>

#include "debug.h"


void logInfoP(std::string info){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	std::cout << "[PHY][ INFO]: " << info << std::endl;
}

void logErrorP(std::string error){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon, FOREGROUND_RED | FOREGROUND_INTENSITY);
	std::cout << "[PHY][ERROR]: " << error << std::endl;
	SetConsoleTextAttribute(hcon, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}