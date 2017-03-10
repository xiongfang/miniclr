//Licensed under the MIT license.
#include "config.h"
#include "stringheap.h"

using namespace Metadata;

std::string StringHeap::Read(uint32 index) {
    if (index == 0)
        return "";

    std::string string;

    std::map<uint32, std::string>::iterator it = strings.find(index);
    if (it != strings.end())
        return it->second;

    if (index > data.size() - 1)
        return "";

    string = ReadStringAt(index);
    if (string.length() != 0)
        strings[index] = string;

    return string;
}

const std::wstring utf8_2_ws( const std::string& src )
{
	std::wstring_convert<std::codecvt_utf8<wchar_t> > conv;
	return conv.from_bytes( src );
}

std::string StringHeap::ReadStringAt(uint32 index) {
    int length = 0;
    int start = (int) index;

    for (int i = start;; i++) {
        if (data [i] == 0)
            break;

        length++;
    }
    std::string s;
    s.assign((char*)(data.data()+start),length);
    //std::wstring_convert<std::codecvt_utf8<char>>  con;
    //return con.to_bytes(&data[start],&data[start+length]);
    return s;//Encoding.UTF8.GetString(data, start, length);
}