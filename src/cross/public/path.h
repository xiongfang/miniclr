#ifndef __PATH_H__
#define __PATH_H__

class Path
{
public:
	static const char AltDirectorySeparatorChar;
	static const char DirectorySeparatorChar;
	static const char PathSeparator;
	static const char VolumeSeparatorChar;

	static std::string ChangeExtension(const std::string& path, const  std::string& extension);
	static std::string Combine(const std::string& path1, const  std::string& path2);
	static std::string GetDirectoryName(std::string path);
	static std::string GetExtension(std::string path);
	static std::string GetFileName(std::string path);
	static std::string GetFileNameWithoutExtension(std::string path);
	static std::string GetFullPath(std::string path);
	static std::list<char> GetInvalidFileNameChars();
	static std::list<char> GetInvalidPathChars();
	static std::string GetPathRoot(std::string path);
	static std::string GetRandomFileName();
	static std::string GetTempFileName();
	static std::string GetTempPath();
	static bool HasExtension(const std::string& path);
	static bool IsPathRooted(std::string path);
};

#endif