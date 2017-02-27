#include "config.h"
#include "path.h"


const char Path::AltDirectorySeparatorChar = '/';
const char Path::DirectorySeparatorChar = '\\';
const char Path::PathSeparator = ';';
const char Path::VolumeSeparatorChar = ':';


std::string Path::ChangeExtension(const std::string& path, const  std::string& extension)
{
	int32 sp_index = path.find_last_of('.');
	if (sp_index != -1)
	{
		std::string temp_path = path;
		return temp_path.replace(sp_index + 1, std::string::npos, extension);
	}

	return path + extension;
}

std::string Path::Combine(const std::string& path1, const  std::string& path2)
{
	if (path1[path1.length() - 1] != AltDirectorySeparatorChar && path1[path1.length() - 1] != DirectorySeparatorChar)
		return path1 + DirectorySeparatorChar+ path2;
	else
	{

		return path1 + path2;
	}
}

bool Path::HasExtension(const std::string& path)
{
	return path.find_last_of('.') != -1;
}