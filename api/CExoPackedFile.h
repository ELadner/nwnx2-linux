#ifndef _CEXOPACKEDFILE_H_
#define _CEXOPACKEDFILE_H_
#include "nwndef.h"

class CExoPackedFile
{
public:
    CExoFile * GetAsyncFile();
    CExoFile * GetFile();
    ~CExoPackedFile();
    CExoPackedFile();

};
#endif
