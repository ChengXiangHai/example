// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the DLL_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// DLL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif	
#define BREAK_ON_NULL(X) if((X)==NULL){break;}
#define BREAK_ON_FALSE(X) if((X)==FALSE){break;}
//this is my interface classp
class IMyInterface
{
public:
		virtual int Add(int liNum1,int liNum2)=0;
		virtual int Dec(int liNum1,int liNum2)=0;
};

//
DLL_API IMyInterface *CreateIMyInterface();
DLL_API void ReleaseIMyInterface(IMyInterface *lpInter);

typedef IMyInterface *(*pCreateIMyInterface)();
typedef void (*pReleaseIMyInterface)(IMyInterface *);

#define STRING_CREAT_A		 "CreateIMyInterface"
#define STRING_RELEASE_A	 "ReleaseIMyInterface"
