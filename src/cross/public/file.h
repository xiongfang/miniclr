/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   file.h
 * Author: Administrator
 *
 * Created on 2017年2月10日, 下午4:20
 */

#ifndef FILE_H
#define FILE_H
#include "config.h"

enum Encoding {
    ASCII,
    Unicode,
    UTF32,
    UTF7,
    UTF8
};

class File {
public:
    static void AppendAllText(const std::string& path, const std::string& contents);
    static void AppendAllText(const std::string& path, const std::string& contents, Encoding encoding);
    //static StreamWriter AppendText(const std::string& path);
    static void Copy(const std::string& sourceFileName, const std::string& destFileName);
    static void Copy(const std::string& sourceFileName, const std::string& destFileName, bool overwrite);
    //static FileStream Create(const std::string& path);
    //static FileStream Create(const std::string& path, int bufferSize);
    //static StreamWriter CreateText(const std::string& path);
    static void Decrypt(const std::string& path);
    static void Delete(const std::string& path);
    static void Encrypt(const std::string& path);
    static bool Exists(const std::string& path);
    //static FileAttributes GetAttributes(const std::string& path);
    //static DateTime GetCreationTime(const std::string& path);
    //static DateTime GetCreationTimeUtc(const std::string& path);
    //static DateTime GetLastAccessTime(const std::string& path);
    //static DateTime GetLastAccessTimeUtc(const std::string& path);
    //static DateTime GetLastWriteTime(const std::string& path);
    //static DateTime GetLastWriteTimeUtc(const std::string& path);
    static void Move(const std::string& sourceFileName, const std::string& destFileName);
    //static FileStream Open(const std::string& path, FileMode mode);
    //static FileStream Open(const std::string& path, FileMode mode, FileAccess access);
    //static FileStream Open(const std::string& path, FileMode mode, FileAccess access, FileShare share);
    //static FileStream OpenRead(const std::string& path);
    //static StreamReader OpenText(const std::string& path);
    //static FileStream OpenWrite(const std::string& path);
    static std::vector<uint8> ReadAllBytes(const std::string& path);
    static const std::list<std::string> ReadAllLines(const std::string& path);
    static const std::list<std::string> ReadAllLines(const std::string& path, Encoding encoding);
    static std::string ReadAllText(const std::string& path);
    static std::string ReadAllText(const std::string& path, Encoding encoding);
    static void Replace(const std::string& sourceFileName, const std::string& destinationFileName, const std::string& destinationBackupFileName);
    static void Replace(const std::string& sourceFileName, const std::string& destinationFileName, const std::string& destinationBackupFileName, bool ignoreMetadataErrors);
    //static void SetAttributes(const std::string& path, FileAttributes fileAttributes);
    //static void SetCreationTime(const std::string& path, DateTime creationTime);
    //static void SetCreationTimeUtc(const std::string& path, DateTime creationTimeUtc);
    //static void SetLastAccessTime(const std::string& path, DateTime lastAccessTime);
    //static void SetLastAccessTimeUtc(const std::string& path, DateTime lastAccessTimeUtc);
    //static void SetLastWriteTime(const std::string& path, DateTime lastWriteTime);
    //static void SetLastWriteTimeUtc(const std::string& path, DateTime lastWriteTimeUtc);
    static void WriteAllBytes(const std::string& path, uint8* bytes, int32 count);
    static void WriteAllLines(const std::string& path, const std::list<std::string>& contents);
    static void WriteAllLines(const std::string& path, const std::list<std::string>& contents, Encoding encoding);
    static void WriteAllText(const std::string& path, const std::string& contents);
    static void WriteAllText(const std::string& path, const std::string& contents, Encoding encoding);
};
#endif /* FILE_H */

