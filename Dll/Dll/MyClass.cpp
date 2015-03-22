#include "stdafx.h"
#include "MyClass.h"

CMyClass::CMyClass()
{

}
CMyClass::~CMyClass()
{

}
//interface
int CMyClass::Add(int liNum1,int liNum2)
{
	int liRet=-1;
	do 
	{
		liRet=liNum1+liNum2;
	} while (FALSE);
	return liRet;
}
int CMyClass::Dec(int liNum1,int liNum2)
{
	int liRet=-1;
	do 
	{
		liRet=liNum1-liNum2;
	} while (FALSE);
	return liRet;
}
