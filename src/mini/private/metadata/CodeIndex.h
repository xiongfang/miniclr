//Licensed under the MIT license.
/* 
 * File:   CodeIndex.h
 * Author: xf  xg_55@126.com
 *
 * Created on 2017年3月10日, 下午3:10
 */

#ifndef CODEINDEX_H
#define CODEINDEX_H

namespace Metadata {

    enum CodedIndex {
        TypeDefOrRef,
        HasConstant,
        HasCustomAttribute,
        HasFieldMarshal,
        HasDeclSecurity,
        MemberRefParent,
        HasSemantics,
        MethodDefOrRef,
        MemberForwarded,
        Implementation,
        CustomAttributeType,
        ResolutionScope,
        TypeOrMethodDef,
        HasCustomDebugInformation,
    };
}



#endif /* CODEINDEX_H */

