#pragma once
#include "Dll.h"	
//MyClass
class CMyClass:public IMyInterface
{
public:
	CMyClass();
	~CMyClass();
	//interface:
public:
	virtual int Add(int liNum1,int liNum2);
	virtual int Dec(int liNum1,int liNum2);
};
