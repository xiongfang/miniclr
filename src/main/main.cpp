
#include <iostream>
#include "config.h"
#include "ceeloader.h"

void main()
{
	std::cout << "main start" << std::endl;
	

	CEELoader Loader;
	Loader.Load("test.dll");
}