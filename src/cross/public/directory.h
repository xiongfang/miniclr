#ifndef __DIRECTORY_H__
#define __DIRECTORY_H__

enum SearchOption
{
	TopDirectoryOnly = 0,
	AllDirectories = 1,
};

CLR_DLL_EXPORT class Directory
{
public:
	 //static DirectoryInfo CreateDirectory(std::string path);
	 static void Delete(const std::string& path);
	 static void Delete(std::string path, bool recursive);
	 static bool Exists(std::string path);
	 //static DateTime GetCreationTime(std::string path);
	 //static DateTime GetCreationTimeUtc(std::string path);
	 static std::string GetCurrentDirectory();
	 static std::list<std::string> GetDirectories(std::string path);
	 static std::list<std::string> GetDirectories(std::string path, std::string searchPattern);
	 static std::list<std::string> GetDirectories(std::string path, std::string searchPattern, SearchOption searchOption);
	 static std::string GetDirectoryRoot(std::string path);
	 static std::list<std::string> GetFiles(std::string path);
	 static std::list<std::string> GetFiles(std::string path, std::string searchPattern);
	 static std::list<std::string> GetFiles(std::string path, std::string searchPattern, SearchOption searchOption);
	 static std::list<std::string> GetFileSystemEntries(std::string path);
	 static std::list<std::string> GetFileSystemEntries(std::string path, std::string searchPattern);
	 //static DateTime GetLastAccessTime(std::string path);
	 //static DateTime GetLastAccessTimeUtc(std::string path);
	 //static DateTime GetLastWriteTime(std::string path);
	 //static DateTime GetLastWriteTimeUtc(std::string path);
	 static std::list<std::string> GetLogicalDrives();
	 //static DirectoryInfo GetParent(std::string path);
	 static void Move(std::string sourceDirName, std::string destDirName);
	 //static void SetCreationTime(std::string path, DateTime creationTime);
	 //static void SetCreationTimeUtc(std::string path, DateTime creationTimeUtc);
	 static void SetCurrentDirectory(std::string path);
	 //static void SetLastAccessTime(std::string path, DateTime lastAccessTime);
	 //static void SetLastAccessTimeUtc(std::string path, DateTime lastAccessTimeUtc);
	 //static void SetLastWriteTime(std::string path, DateTime lastWriteTime);
	 //static void SetLastWriteTimeUtc(std::string path, DateTime lastWriteTimeUtc);
};

#endif