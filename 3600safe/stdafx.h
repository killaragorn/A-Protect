
// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�

#pragma once

#ifndef _SECURE_ATL
#define _SECURE_ATL 1
#endif

#define NOHOOK 0;
#define SSDTHOOK 1
#define SSDTINLINEHOOK 2
#define INLINEHOOK 3
#define WM_SHOWTASK (WM_USER +1)

/*
 * ��ʼ��
 */
#define SAFE_SYSTEM 0x11111111


#define LIST_SSDT   0x11111112                                //�оٱ��ҹ���SSDT����
#define LIST_SSDT_ALL    0x11111113                           //�о�����SSDT����  
#define SET_ALL_SSDT 0x11111114                               //�ָ�����SSDT����HOOK
#define SET_ONE_SSDT 0x11111115                               //�ָ�����SSDT����hook
#define SET_INLINE_HOOK 0x11111116                            //�ָ�����SSDT inline hook


#define LIST_TCPUDP 0x11111117                                //�о�������������



#define KILL_PROCESS_BY_PID 0x11111118                        //�ӽ���pid����һ������
#define LIST_PROCESS 0x11111119                               //�о����н���
#define DELETE_FILE 0x11111120                                //ɾ��һ���ļ�


#define LIST_PROCESS_MODULE 0x11111121                        //�оٽ���DLLģ��
#define INIT_PROCESS_LIST_PROCESS_MODULE 0x11111122           //���оٽ���DLLģ���ʱ�򣬱���Ҫ��ʼ��ĳЩ����


#define LIST_INLINEHOOK 0x11111123                            //ö��ntos*��hook������inline hook��eat hook
#define ANTI_INLINEHOOK 0x11111124                            //�ƹ�ntos* inline hook


#define KERNEL_SAFE_MODULE 0x11111125                         //�����ں˰�ȫģʽ
#define NO_KERNEL_SAFE_MODULE 0x11111126                      //�ر��ں˰�ȫģʽ


#define LIST_SYS_MODULE 0x11111127                           //�о��ں�ģ��

#define EXIT_PROCESS 0x11111128                              //�˳�3600safe��ʱ�򣬱���Ҫ���ں�������������


#define LIST_SERVICES 0x11111129                             //�о�ϵͳ����
#define CHANG_SERVICES_TYPE_1 0x11111130                     //�����ֶ�
#define CHANG_SERVICES_TYPE_2 0x11111131                     //�����Զ�
#define CHANG_SERVICES_TYPE_3 0x11111132                     //�������
#define LIST_DEPTH_SERVICES 0x11111133                       //��ȷ���ɨ��

#define LIST_LOG 0x11111134                                  //�оٷ�����־

#define INIT_DUMP_KERNEL_MODULE_MEMORY 0x11111135            //��ʼ��dump�ں�ģ��
#define DUMP_KERNEL_MODULE_MEMORY 0x11111136                 //dump�ں�ģ���ڴ浽�ļ�


#define DIS_CREATE_PROCESS      0x11111137                   //��ֹ��������
#define CREATE_PROCESS          0x11111138                   //������������

#define DIS_WRITE_FILE      0x11111139                       //��ֹ�����ļ�
#define WRITE_FILE      0x11111140                           //���������ļ� 


#define DIS_LOAD_DRIVER      0x11111141                      //��ֹ��������
#define LOAD_DRIVER      0x11111142                          //������������


#define SHUT_DOWN_SYSTEM      0x11111143                     //ǿ�ƻ�������ϵͳ


#define LIST_SHADOWSSDT       0x11111144                     //�оٱ��ҹ���shadowSSDT����
#define LIST_SHADOWSSDT_ALL       0x11111145                 //�о�����shadowSSDT����

#define SET_ALL_SHADOWSSDT 0x11111146                        //�ָ�����shadowSSDT hook
#define SET_ONE_SHADOWSSDT  0x11111147                       //�ָ�����shadowSSDT hook  

#define SET_SHADOWSSDT_INLINE_HOOK 0x11111148                //�ָ�����shadowSSDT inline hook

#define LIST_OBJECT_HOOK     0x11111149                      //���object hook

#define PROTECT_360SAFE 0x11111150                           //�Ƿ񱣻�360  ����ȥ���˹��ܣ�
#define UNPROTECT_360SAFE 0x11111151                         //

#define LIST_FSD_HOOK     0x11111152                         //�о�����NTFS FSD HOOK
#define SET_FSD_HOOK      0x11111153                         //�ָ�NTFS FSD hook
#define INIT_SET_FSD_HOOK  0x11111154                        //�ָ�NTFS FSD inline hook֮ǰ�ĳ�ʼ������

#define CLEAR_LIST_LOG  0x11111155                           //��շ�����־

#define LIST_KERNEL_FILTER_DRIVER   0x11111156               //�оٹ�������
#define DELETE_KERNEL_FILTER_DRIVER   0x11111157             //ժ����������
#define INIT_KERNEL_FILTER_DRIVER     0x11111158             //ժ����������֮ǰ�ĳ�ʼ������

#define ONLY_DELETE_FILE  0x11111159                         //ֱ��ɾ���ļ�����Reload

#define LIST_TCPIP_HOOK         0x11111160                   //�о�����Tcpip.sysģ��hook
#define SET_TCPIP_HOOK      0x11111161                       //�ָ�Tcpip.sysģ�� hook
#define INIT_SET_TCPIP_HOOK  0x11111162                      //�ָ�Tcpip.sysģ�� inline hook֮ǰ�ĳ�ʼ������

#define LIST_NSIPROXY_HOOK         0x11111163                //�о�����Nsiproxy.sysģ��hook
#define SET_NSIPROXY_HOOK      0x11111164                    //�ָ�Nsiproxy.sysģ�� hook
#define INIT_SET_NSIPROXY_HOOK  0x11111165                   //�ָ�Nsiproxy.sysģ�� inline hook֮ǰ�ĳ�ʼ������

#define LIST_SYSTEM_THREAD   0x11111166                      //�о�ϵͳ�߳�
#define KILL_SYSTEM_THREAD   0x11111167                      //����ϵͳ�߳�

#define PROTECT_DRIVER_FILE  0x11111168                      //���������ļ�(��ȥ��)
#define UNPROTECT_DRIVER_FILE  0x11111169

#define LIST_KERNEL_THREAD   0x11111170                      //�о��ں��߳�
#define CLEAR_KERNEL_THREAD   0x11111171                     //����ں��߳���־

#define SET_EAT_HOOK          0x11111172                     //�ָ�eat hook

#define PROTECT_PROCESS       0x11111173                     //����3600safe��������
#define UNPROTECT_PROCESS       0x11111174                   //������

#define DIS_RESET_SRV 0x11111175                             //��ֹ�����д
#define RESET_SRV 0x11111176                                 //���������д

#define KERNEL_THREAD 0x11111177                             //���������ں��߳�
#define DIS_KERNEL_THREAD 0x11111178                         //��ֹ�����ں��߳� 

#define RESUME_THREAD    0x11111179                          //�ָ��߳�����
#define SUSPEND_THREAD    0x11111180                         //��ͣ�߳�����

#define LIST_KBDCLASS_HOOK         0x11111181                //�о�����kbdclass.sysģ��hook
#define SET_KBDCLASS_HOOK      0x11111182                    //�ָ�kbdclass.sysģ�� hook
#define INIT_SET_KBDCLASS_HOOK  0x11111183                   //�ָ�kbdclass.sysģ�� inline hook֮ǰ�ĳ�ʼ������

#define LIST_MOUCLASS_HOOK         0x11111184                //�о�����Mouclass.sysģ��hook
#define SET_MOUCLASS_HOOK      0x11111185                    //�ָ�Mouclass.sysģ�� hook
#define INIT_SET_MOUCLASS_HOOK  0x11111186                   //�ָ�Mouclass.sysģ�� inline hook֮ǰ�ĳ�ʼ������

#define LIST_ATAPI_HOOK         0x11111187                   //�о�����Atapi.sysģ��hook
#define SET_ATAPI_HOOK      0x11111188                       //�ָ�Atapi.sysģ�� hook
#define INIT_SET_ATAPI_HOOK  0x11111189                      //�ָ�Atapi.sysģ�� inline hook֮ǰ�ĳ�ʼ������

#define LIST_DPC_TIMER    0x11111190                         //ö��DPC��ʱ��
#define KILL_DPC_TIMER    0x11111191                         //ժ��DPC��ʱ��

#define LIST_SYSTEM_NOTIFY    0x11111192                     //ö��ϵͳ�ص�
#define KILL_SYSTEM_NOTIFY    0x11111193                     //ժ��ϵͳ�ص�
#define INIT_KILL_SYSTEM_NOTIFY 0x11111194                   //��ʼ��ժ��

#define INIT_PROCESS_THREAD   0x11111195                     //��ʼ������EPROCESS
#define LIST_PROCESS_THREAD   0x11111196                     //��ȡ�����߳�

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // �� Windows ͷ���ų�����ʹ�õ�����
#endif

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // ĳЩ CString ���캯��������ʽ��

// �ر� MFC ��ĳЩ�����������ɷ��ĺ��Եľ�����Ϣ������
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // MFC ��������ͱ�׼���
#include <afxext.h>         // MFC ��չ


#include <afxdisp.h>        // MFC �Զ�����



#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // MFC �� Internet Explorer 4 �����ؼ���֧��
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>             // MFC �� Windows �����ؼ���֧��
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>     // �������Ϳؼ����� MFC ֧��









#ifdef _UNICODE
#if defined _M_IX86
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#endif

