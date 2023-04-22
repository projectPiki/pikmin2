#ifndef _MSL_FILE_POS_H
#define _MSL_FILE_POS_H

#include "types.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/ansi_files.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

int fseek(FILE* stream, u32 offset, int whence);
int _fseek(FILE* stream, u32 offset, int whence);
int ftell(FILE* stream);
int _ftell(FILE* stream);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
