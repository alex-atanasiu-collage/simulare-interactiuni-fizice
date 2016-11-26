#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <windows.h>

#include "debug.h"



void CreateConsole(){
	AllocConsole();

    HANDLE handle_out = GetStdHandle(STD_OUTPUT_HANDLE);
    int hCrt = _open_osfhandle((long) handle_out, _O_TEXT);
    FILE* hf_out = _fdopen(hCrt, "w");
    setvbuf(hf_out, NULL, _IONBF, 1);
    *stdout = *hf_out;

    HANDLE handle_in = GetStdHandle(STD_INPUT_HANDLE);
    hCrt = _open_osfhandle((long) handle_in, _O_TEXT);
    FILE* hf_in = _fdopen(hCrt, "r");
    setvbuf(hf_in, NULL, _IONBF, 128);
    *stdin = *hf_in;
}

void logInfo(std::string info){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	std::cout << "[APP][ INFO]: " << info << std::endl;
}

void logError(std::string error){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon, FOREGROUND_RED | FOREGROUND_INTENSITY);
	std::cout << "[APP][ERROR]: " << error << std::endl;
	SetConsoleTextAttribute(hcon, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}