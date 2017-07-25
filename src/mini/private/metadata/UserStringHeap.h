//Licensed under the MIT license.
/* 
 * File:   UserStringHeap.h
 * Author: xf  xg_55@126.com
 *
 * Created on 2017年3月10日, 上午11:31
 */

#ifndef USERSTRINGHEAP_H
#define USERSTRINGHEAP_H
#include "stringheap.h"
namespace Metadata
{
   class UserStringHeap:public StringHeap {
    public:
        UserStringHeap(const std::vector<uint8>& d)
        : StringHeap(d) {
        }
        
        virtual std::string ReadStringAt(uint32 index);
    }; 
}


#endif /* USERSTRINGHEAP_H */

