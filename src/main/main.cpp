
#include <iostream>
#include "config.h"
#include "ceeloader.h"

int main()
{
	std::cout << "main start" << std::endl;
	

	CEELoader Loader;
	Loader.Load("test.dll");
        
        return 0;
}