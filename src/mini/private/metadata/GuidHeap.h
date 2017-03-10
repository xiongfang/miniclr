//Licensed under the MIT license.
/* 
 * File:   GuidHeap.h
 * Author: xf  xg_55@126.com
 *
 * Created on 2017年3月10日, 下午3:13
 */

#ifndef GUIDHEAP_H
#define GUIDHEAP_H

namespace Metadata {

    class GuidHeap : public Heap {
    public:

        GuidHeap(const std::vector<uint8>& d)
        : Heap(d) {
        }

        Guid Read(uint index) {
            const int guid_size = 16;

            if (index == 0 || ((index - 1) + guid_size) > data.size())
                return new Guid();

            auto buffer = new byte [guid_size];

            Buffer.BlockCopy(this.data, (int) ((index - 1) * guid_size), buffer, 0, guid_size);

            return new Guid(buffer);
        }
    };
}


#endif /* GUIDHEAP_H */

