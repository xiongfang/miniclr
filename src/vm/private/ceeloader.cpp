#include "config.h"
#include "ceeloader.h"
#include "file.h"
#include "path.h"
void CEELoader::AddSeachPath(const std::string& path) {
    load_path_list.push_back(path);
}

void CEELoader::Load(const std::string& name) {
    for (int32 i = 0; i < load_path_list.size(); i++) {
        std::string full_path_name = Path::Combine(load_path_list[i],name);
        if(File::Exists(full_path_name))
        {
            std::vector<uint8> bytes = File::ReadAllBytes(full_path_name);
            Parse(bytes.data(),bytes.size());
            return;
        }
        
    }
}

void CEELoader::Parse(void* data,uint32 len)
{
    
}