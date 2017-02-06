#pragma once

#include "cmakeconfig.h"

#define int32 int
#define int64 long
#define float32 float
#define float64 double
#define int8 char
#define int16 short
#define uint32 unsigned int
#define uint64 unsigned long
#define uint8 unsigned char
#define uint16 unsigned short

#ifdef PLARFORM_WINDOWS
#ifdef DLL_EXPORTS
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT __declspec(dllimport)
#endif
#endif