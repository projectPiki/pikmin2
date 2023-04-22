#ifndef _MSL_DIRECT_IO_H
#define _MSL_DIRECT_IO_H

#include "types.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/ansi_files.h"

// fread
size_t fwrite(const void* pPtr, size_t memb_size, size_t num_memb, FILE* pFile);

#endif
