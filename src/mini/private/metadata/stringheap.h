//Licensed under the MIT license.
/* 
 * File:   stringheap.h
 * Author: xf  xg_55@126.com
 *
 * Created on 2017年3月10日, 上午10:39
 */

#ifndef STRINGHEAP_H
#define STRINGHEAP_H
#include "heap.h"

namespace Metadata {

    class StringHeap :public Heap {
        std::map<uint32, std::string> strings;

    public:

        StringHeap(const std::vector<uint8>& d)
        : Heap(d) {
        }

        std::string Read(uint32 index);
        
    protected:

        virtual std::string ReadStringAt(uint32 index);
    };

}
#endif /* STRINGHEAP_H */

