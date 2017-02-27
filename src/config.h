#pragma once

#include "cmakeconfig.h"


//标准头文件
#include <cstddef>
//#include <limits>
#include <climits>
#include <cfloat>
#include <cstdint>
#include <cstdlib>
#include <new>
#include <typeinfo>
#include <exception>
#include <initializer_list>
#include <csignal>
#include <csetjmp>
//#include <cstdalign>
#include <cstdarg>
#include <cstdbool>
#include <stdexcept>
#include <cassert>
#include <cerrno>
#include <system_error>
#include <utility>
#include <tuple>
#include <bitset>
#include <memory>
#include <cstring>
#include <functional>
#include <type_traits>
#include <ratio>
#include <chrono>
#include <ctime>
#include <scoped_allocator>
#include <typeindex>
//#include <string>
#include <cctype>
#include <cwctype>
#include <cwchar>
//#include <cuchar>
//#include <locale>
#include <codecvt>
#include <clocale>
#include <array>
#include <deque>
#include <forward_list>
#include <list>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <iterator>
#include <algorithm>
#include <cfenv>
//#include <complex>
#include <random>
#include <valarray>
#include <numeric>
#include <cmath>
#include <ctgmath>
//#include <tgmath.h>
#include <ccomplex>
#include <iosfwd>
#include <iostream>
#include <ios>
#include <streambuf>
#include <istream>
#include <ostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <cstdio>
#include <cinttypes>
#include <regex>
#include <atomic>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <future>
#include <ciso646>



typedef int int32;
typedef long int64;
typedef float float32;
typedef double float64; 
typedef char int8;
typedef short int16; 
typedef unsigned int uint32 ;
typedef unsigned long uint64; 
typedef unsigned char uint8 ;
typedef unsigned short uint16; 

#ifdef PLARFORM_WINDOWS
#ifdef DLL_EXPORTS
#define CLR_DLL_EXPORT __declspec(dllexport)
#else
#define CLR_DLL_EXPORT __declspec(dllimport)
#endif
#else
#define CLR_DLL_EXPORT
#endif

enum LogLevel
{
    Info,
    Warning,
    Error
};

void Log(LogLevel lv,const char* module,const char* msg);

class clr_exception:public std::exception
{
    const char* _msg;
public:
    clr_exception(const char* msg) _GLIBCXX_USE_NOEXCEPT
    {
        _msg = msg;
    }
    const char* what() const _GLIBCXX_USE_NOEXCEPT
    {
        return _msg;
    }
};