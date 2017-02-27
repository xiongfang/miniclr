/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "config.h"
#include "file.h"
//平台API
#include <windows.h>


using namespace std;

bool File::Exists(const std::string& path)
{
    WIN32_FIND_DATA FindFileData;
    HANDLE hFind;
    hFind = FindFirstFile(path.c_str(), &FindFileData);

    if (hFind == INVALID_HANDLE_VALUE) {
        return false;
    } else {
      FindClose(hFind);
    }
    
    return true;
}


std::vector<uint8> File::ReadAllBytes(const std::string& path)
{
    if(!Exists(path))
    {
        return std::vector<uint8>();
    }
    long size;  
    ifstream in (path.c_str(), ios::in|ios::binary|ios::ate);  
    size = in.tellg();  
    in.seekg (0, ios::beg);  
    std::vector<uint8> ret(size);
    in.read ((char*)ret.data(), size);  
    in.close(); 
    
    return ret;
}