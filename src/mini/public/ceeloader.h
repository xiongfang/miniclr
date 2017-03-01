#ifndef __CEELOADER_H__
#define __CEELOADER_H__
#include "config.h"


class CEELoader
{
private:
	std::vector<std::string> load_path_list;

public:

	void AddSeachPath(const std::string& path);

	void Load(const std::string& name);
        
        void Parse(uint8* data,uint32 len);
};

#endif