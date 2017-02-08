#ifndef __CEELOADER_H__
#define __CEELOADER_H__
#include "config.h"


CLR_DLL_EXPORT class CEELoader
{
private:
	std::vector<std::string> load_path_list;

public:

	void AddSeachPath(const std::string& path);

	void Load(const std::string& name);
};

#endif