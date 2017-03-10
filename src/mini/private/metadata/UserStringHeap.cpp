//Licensed under the MIT license.
/* 
 * File:   UserStringHeap.cpp
 * Author: xf  xg_55@126.com
 * 
 * Created on 2017年3月10日, 上午11:31
 */
#include "config.h"
#include "UserStringHeap.h"
#include "Utilities.h"
using namespace std;
using namespace Metadata;

std::string UserStringHeap::ReadStringAt(uint32 index) {
    int start = (int) index;

    uint length = (uint) (Mixin::ReadCompressedUInt32(data,&start) & ~1);
    if (length < 1)
        return "";

    auto chars = new char [length / 2];

    for (int i = start, j = 0; i < start + length; i += 2)
        chars [j++] = (char) (data [i] | (data [i + 1] << 8));

    return new string(chars);
}
