#include "config.h"
#include "ceeloader.h"

void Log(LogLevel lv,const char* module,const char* msg)
{
    std::cout<<lv<<":"<<module<<" "<<msg;
}

int main()
{
	std::cout << "main start" << std::endl;
	

	CEELoader Loader;
        Loader.AddSeachPath("F:/Git/lightclr/bin/");
	Loader.Load("test.dll");
        
        return 0;
}