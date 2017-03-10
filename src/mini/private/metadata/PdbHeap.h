//Licensed under the MIT license.
/* 
 * File:   PdbHeap.h
 * Author: xf  xg_55@126.com
 *
 * Created on 2017年3月10日, 下午3:15
 */

#ifndef PDBHEAP_H
#define PDBHEAP_H

namespace Metadata {

    class PdbHeap : public Heap {
    public:
        //byte [] Id;
        //RID EntryPoint;
        long TypeSystemTables;
        //uint [] TypeSystemTableRows;

        PdbHeap(const std::vector<uint8>& d)
        : Heap(d) {
        }

        bool HasTable(Table table) {
            return (TypeSystemTables & (1L << (int) table)) != 0;
        }
    };
}
#endif /* PDBHEAP_H */

