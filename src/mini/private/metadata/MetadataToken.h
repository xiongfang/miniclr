//Licensed under the MIT license.
/* 
 * File:   MetadataToken.h
 * Author: xf  xg_55@126.com
 *
 * Created on 2017年3月10日, 下午3:02
 */

#ifndef METADATATOKEN_H
#define METADATATOKEN_H

#include "tokentype.h"

struct MetadataToken {
    uint token;

    uint RID() {
        return token & 0x00ffffff;
    }

    TokenType TokenType() {
        return (TokenType) (token & 0xff000000);
    }

    static MetadataToken Zero = new MetadataToken((uint) 0);

    MetadataToken(uint token) {
        this.token = token;
    }

    MetadataToken(TokenType type)
    : this (type, 0) {
    }

    MetadataToken(TokenType type, uint rid) {
        token = (uint) type | rid;
    }

    MetadataToken(TokenType type, int rid) {
        token = (uint) type | (uint) rid;
    }

    int ToInt32() {
        return (int) token;
    }

    uint ToUInt32() {
        return token;
    }

    //		public  int GetHashCode ()
    //		{
    //			return (int) token;
    //		}

    bool Equals(const MetadataToken& other) {
        return other.token == token;
    }

    static bool operator==(MetadataToken one, MetadataToken other) {
        return one.token == other.token;
    }

    static bool operator!=(MetadataToken one, MetadataToken other) {
        return one.token != other.token;
    }

    std::string ToString() {
        std::ostringstream stm;
        stm.str("");
        stm << TokenType << ":0x" << RID;
        return stm.str();
    }
};

#endif /* METADATATOKEN_H */

