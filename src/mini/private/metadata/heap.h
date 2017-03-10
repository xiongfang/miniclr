//Licensed under the MIT license.
/* 
 * File:   heap.h
 * Author: xf  xg_55@126.com
 *
 * Created on 2017年3月10日, 上午10:13
 */

#ifndef HEAP_H
#define HEAP_H

namespace Metadata {

    class Heap {
    public:
        int IndexSize;

        std::vector<uint8> data;
        virtual ~Heap(){};
    protected:

        Heap(uint8* pd, uint32 len) {
            data.resize(len);
            memcpy(data.data(), pd, len);
        }

        Heap(const std::vector<uint8>& d) {
            data = d;
        }
    };
}

#endif /* HEAP_H */

