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
		#define CLR_DLL_EXPORT __declspec(dllexport)
	#else
		#define CLR_DLL_EXPORT __declspec(dllimport)
	#endif
#else
    #define CLR_DLL_EXPORT
#endif
