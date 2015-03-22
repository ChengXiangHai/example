// Dll.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "MyClass.h"

DLL_API IMyInterface *CreateIMyInterface()
{
	IMyInterface *lpInterface=new CMyClass();
	return (lpInterface==NULL)?NULL:lpInterface;
}
DLL_API void ReleaseIMyInterface(IMyInterface *lpInter)
{
	if(lpInter!=NULL)
	{
		delete (CMyClass*)lpInter;
	}
		

}


