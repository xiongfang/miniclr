//Licensed under the MIT license.
/* 
 * File:   Utilities.h
 * Author: xf  xg_55@126.com
 *
 * Created on 2017年3月10日, 上午11:41
 */

#ifndef UTILITIES_H
#define UTILITIES_H

namespace Metadata
{
    class Mixin {
    public:
		const int TableCount = 58;
		const int CodedIndexCount = 14;

		static uint32 ReadCompressedUInt32 (std::vector<uint8>& data,int32& position);
		

		//static MetadataToken GetMetadataToken (CodedIndex& self, uint32 data);
/*
#if !READ_ONLY
		public static uint CompressMetadataToken (this CodedIndex self, MetadataToken token)
		{
			uint ret = 0;
			if (token.RID == 0)
				return ret;
			switch (self) {
			case CodedIndex.TypeDefOrRef:
				ret = token.RID << 2;
				switch (token.TokenType) {
				case TokenType.TypeDef:
					return ret | 0;
				case TokenType.TypeRef:
					return ret | 1;
				case TokenType.TypeSpec:
					return ret | 2;
				default:
					goto exit;
				}
			case CodedIndex.HasConstant:
				ret = token.RID << 2;
				switch (token.TokenType) {
				case TokenType.Field:
					return ret | 0;
				case TokenType.Param:
					return ret | 1;
				case TokenType.Property:
					return ret | 2;
				default:
					goto exit;
				}
			case CodedIndex.HasCustomAttribute:
				ret = token.RID << 5;
				switch (token.TokenType) {
				case TokenType.Method:
					return ret | 0;
				case TokenType.Field:
					return ret | 1;
				case TokenType.TypeRef:
					return ret | 2;
				case TokenType.TypeDef:
					return ret | 3;
				case TokenType.Param:
					return ret | 4;
				case TokenType.InterfaceImpl:
					return ret | 5;
				case TokenType.MemberRef:
					return ret | 6;
				case TokenType.Module:
					return ret | 7;
				case TokenType.Permission:
					return ret | 8;
				case TokenType.Property:
					return ret | 9;
				case TokenType.Event:
					return ret | 10;
				case TokenType.Signature:
					return ret | 11;
				case TokenType.ModuleRef:
					return ret | 12;
				case TokenType.TypeSpec:
					return ret | 13;
				case TokenType.Assembly:
					return ret | 14;
				case TokenType.AssemblyRef:
					return ret | 15;
				case TokenType.File:
					return ret | 16;
				case TokenType.ExportedType:
					return ret | 17;
				case TokenType.ManifestResource:
					return ret | 18;
				case TokenType.GenericParam:
					return ret | 19;
				case TokenType.GenericParamConstraint:
					return ret | 20;
				case TokenType.MethodSpec:
					return ret | 21;
				default:
					goto exit;
				}
			case CodedIndex.HasFieldMarshal:
				ret = token.RID << 1;
				switch (token.TokenType) {
				case TokenType.Field:
					return ret | 0;
				case TokenType.Param:
					return ret | 1;
				default:
					goto exit;
				}
			case CodedIndex.HasDeclSecurity:
				ret = token.RID << 2;
				switch (token.TokenType) {
				case TokenType.TypeDef:
					return ret | 0;
				case TokenType.Method:
					return ret | 1;
				case TokenType.Assembly:
					return ret | 2;
				default:
					goto exit;
				}
			case CodedIndex.MemberRefParent:
				ret = token.RID << 3;
				switch (token.TokenType) {
				case TokenType.TypeDef:
					return ret | 0;
				case TokenType.TypeRef:
					return ret | 1;
				case TokenType.ModuleRef:
					return ret | 2;
				case TokenType.Method:
					return ret | 3;
				case TokenType.TypeSpec:
					return ret | 4;
				default:
					goto exit;
				}
			case CodedIndex.HasSemantics:
				ret = token.RID << 1;
				switch (token.TokenType) {
				case TokenType.Event:
					return ret | 0;
				case TokenType.Property:
					return ret | 1;
				default:
					goto exit;
				}
			case CodedIndex.MethodDefOrRef:
				ret = token.RID << 1;
				switch (token.TokenType) {
				case TokenType.Method:
					return ret | 0;
				case TokenType.MemberRef:
					return ret | 1;
				default:
					goto exit;
				}
			case CodedIndex.MemberForwarded:
				ret = token.RID << 1;
				switch (token.TokenType) {
				case TokenType.Field:
					return ret | 0;
				case TokenType.Method:
					return ret | 1;
				default:
					goto exit;
				}
			case CodedIndex.Implementation:
				ret = token.RID << 2;
				switch (token.TokenType) {
				case TokenType.File:
					return ret | 0;
				case TokenType.AssemblyRef:
					return ret | 1;
				case TokenType.ExportedType:
					return ret | 2;
				default:
					goto exit;
				}
			case CodedIndex.CustomAttributeType:
				ret = token.RID << 3;
				switch (token.TokenType) {
				case TokenType.Method:
					return ret | 2;
				case TokenType.MemberRef:
					return ret | 3;
				default:
					goto exit;
				}
			case CodedIndex.ResolutionScope:
				ret = token.RID << 2;
				switch (token.TokenType) {
				case TokenType.Module:
					return ret | 0;
				case TokenType.ModuleRef:
					return ret | 1;
				case TokenType.AssemblyRef:
					return ret | 2;
				case TokenType.TypeRef:
					return ret | 3;
				default:
					goto exit;
				}
			case CodedIndex.TypeOrMethodDef:
				ret = token.RID << 1;
				switch (token.TokenType) {
				case TokenType.TypeDef:
					return ret | 0;
				case TokenType.Method:
					return ret | 1;
				default:
					goto exit;
				}
			case CodedIndex.HasCustomDebugInformation:
				ret = token.RID << 5;
				switch (token.TokenType) {
				case TokenType.Method:
					return ret | 0;
				case TokenType.Field:
					return ret | 1;
				case TokenType.TypeRef:
					return ret | 2;
				case TokenType.TypeDef:
					return ret | 3;
				case TokenType.Param:
					return ret | 4;
				case TokenType.InterfaceImpl:
					return ret | 5;
				case TokenType.MemberRef:
					return ret | 6;
				case TokenType.Module:
					return ret | 7;
				case TokenType.Permission:
					return ret | 8;
				case TokenType.Property:
					return ret | 9;
				case TokenType.Event:
					return ret | 10;
				case TokenType.Signature:
					return ret | 11;
				case TokenType.ModuleRef:
					return ret | 12;
				case TokenType.TypeSpec:
					return ret | 13;
				case TokenType.Assembly:
					return ret | 14;
				case TokenType.AssemblyRef:
					return ret | 15;
				case TokenType.File:
					return ret | 16;
				case TokenType.ExportedType:
					return ret | 17;
				case TokenType.ManifestResource:
					return ret | 18;
				case TokenType.GenericParam:
					return ret | 19;
				case TokenType.GenericParamConstraint:
					return ret | 20;
				case TokenType.MethodSpec:
					return ret | 21;
				case TokenType.Document:
					return ret | 22;
				case TokenType.LocalScope:
					return ret | 23;
				case TokenType.LocalVariable:
					return ret | 24;
				case TokenType.LocalConstant:
					return ret | 25;
				case TokenType.ImportScope:
					return ret | 26;
				default:
					goto exit;
				}
			default:
				goto exit;
			}
		exit:
			throw new ArgumentException ();
		}
#endif
*/
		//static int GetSize (CodedIndex& self, Func<Table, int> counter);
	};
}

#endif /* UTILITIES_H */

