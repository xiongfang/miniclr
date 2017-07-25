//Licensed under the MIT license.
/* 
 * File:   Section.h
 * Author: xf  xg_55@126.com
 *
 * Created on 2017年7月25日, 下午4:26
 */

#ifndef SECTION_H
#define SECTION_H

#include "peh.h"

namespace PE {

	class Section {
        public:
		std::string Name;
		RVA VirtualAddress;
		uint32 VirtualSize;
		uint32 SizeOfRawData;
		uint32 PointerToRawData;
	};
}

#endif /* SECTION_H */

