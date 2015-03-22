// testConsole.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include "../Dll/Dll.h"

int _tmain(int argc, _TCHAR* argv[])
{
	HINSTANCE lhIns=LoadLibrary(L"Dll.dll");
	if(!lhIns)
		printf("load fails");
	pCreateIMyInterface lpC=(pCreateIMyInterface)GetProcAddress(lhIns,STRING_CREAT_A);
	IMyInterface *lpIM=lpC();
	if(!lpIM)
		printf("create fails");
	int c=lpIM->Add(3,4);
	return 0;
}

