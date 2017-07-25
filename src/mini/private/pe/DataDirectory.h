//Licensed under the MIT license.
/* 
 * File:   DataDirectory.h
 * Author: xf  xg_55@126.com
 *
 * Created on 2017年7月25日, 下午4:24
 */

#ifndef DATADIRECTORY_H
#define DATADIRECTORY_H
#include "peh.h"

namespace PE {

	struct DataDirectory {
        public:
		RVA VirtualAddress;
		uint32 Size;

		bool IsZero() {
			 return VirtualAddress == 0 && Size == 0; 
		}

		DataDirectory (RVA rva, uint32 size)
		{
			this.VirtualAddress = rva;
			this.Size = size;
		}
	};
}

#endif /* DATADIRECTORY_H */

