#include "config.h"
#include "ceeloader.h"
#include "file.h"
#include "path.h"
void CEELoader::AddSeachPath(const std::string& path) {
    load_path_list.push_back(path);
}

void CEELoader::Load(const std::string& name) {
    for (int32 i = 0; i < load_path_list.size(); i++) {
        std::string full_path_name = Path::Combine(load_path_list[i],name);
        if(File::Exists(full_path_name))
        {
            std::vector<uint8> bytes = File::ReadAllBytes(full_path_name);
            Parse(bytes.data(),bytes.size());
            return;
        }
        
    }
}

struct PE_Header
{
    uint16 Machine;
    uint16 NumberofSections;
    uint32 TimeStamp;
    uint32 PtrSymbolTable;
    uint32 NumberOfSymbols;
    uint16 OptHeaderSize;
    uint16 Characteristics;
};

struct PE_OptHeader
{
    
};

struct CLI_Header
{
    uint32 Cb;
    uint16 MajorRuntimeVersion;
    uint16 MinorRuntimeVersion;
    uint64 MetaData;
    uint32 Flags;
    uint32 EntryPointToken;
    uint64 Resources;
    uint64 StrongNameSignature;
    uint64 CodeManagerTable;
    uint64 VTableFixups;
    uint64 ExportAddressTableJumps;
    uint64 ManagedNativeHeader;
};

struct CLI_Runtime_Flags
{
    const static uint32 COMIMAGE_FLAGS_ILONLY=            0x00000001;
    const static uint32 COMIMAGE_FLAGS_32BITREQUIRED=     0x00000002;
    const static uint32 COMIMAGE_FLAGS_STRONGNAMESIGNED=  0x00000008;
    const static uint32 COMIMAGE_FLAGS_TRACKDEBUGDATA=    0x00010000;
};



void CEELoader::Parse(uint8* data,uint32 len)
{
    //ms dos header
    char lfanew[4] = { 'P','E','\0','\0' };
    for(int32 i = 0;i<4;i++)
    {
        if(data[0x3c+i]!=lfanew[i])
        {
            Log(Info,"vm","Parse Failed,invalide .net file");
            throw clr_exception("Parse Failed,invalide .net file");
            return;
        }
    }
    data += 0x40;
    //pe header
    PE_Header* peHeader = (PE_Header*)data;
    
    //pe opt header
    data += peHeader->OptHeaderSize;
    
    //sections
    data += peHeader->NumberofSections*40;
    
    
    //CLI header
    CLI_Header* cliHeader = (CLI_Header*)data;
    
    data += 72;
    
    
    //CLI Body
}