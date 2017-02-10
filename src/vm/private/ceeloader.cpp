#include "config.h"
#include "ceeloader.h"

void CEELoader::AddSeachPath(const std::string& path) {
    load_path_list.push_back(path);
}

void CEELoader::Load(const std::string& name) {
    for (int32 i = 0; i < load_path_list.size(); i++) {
        std::cout << name << std::endl;
    }
}
