#ifndef _CS_HOOK_H_
#define _CS_HOOK_H_

#include "ntifs.h"

BOOL SystemCallEntryTableHook(char *FunctionName,int *Index,DWORD NewFuctionAddress);
BOOL SystemCallEntryTableUnHook(int Index);

BOOL GetFunctionIndexByName(CHAR *lpszFunctionName,int *Index);

#endif