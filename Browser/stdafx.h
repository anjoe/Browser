#ifndef _STDAFX_H_
#define _STDAFX_H_
#pragma once

#ifndef WINVER
#define WINVER 0x0501
#endif

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0501
#endif

#ifndef _WIN32_WINDOWS
#define _WIN32_WINDOWS 0x0410
#endif

#define WIN32_LEAN_AND_MEAN

#define _CRT_SECURE_NO_DEPRECATE

#include "resource.h"
#include "config.h"

#ifdef USE_MINIBLINK
# pragma comment(lib, "node.lib")
#else
# ifdef _DEBUG
//#  define CEF_USE_SANDBOX
#  pragma comment(lib, "libcef_d.lib")
# else
#  pragma comment(lib, "libcef.lib")
# endif
#endif

#endif