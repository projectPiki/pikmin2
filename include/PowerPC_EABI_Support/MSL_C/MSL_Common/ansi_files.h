#ifndef _MSL_COMMON_ANSI_FILES_H
#define _MSL_COMMON_ANSI_FILES_H

#include "types.h"

typedef u32 __file_handle;
typedef u32 fpos_t;
typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

#define __ungetc_buffer_size 2

enum __file_kinds { __closed_file, __disk_file, __console_file, __unavailable_file };

enum __file_orientation { __unoriented, __char_oriented, __wide_oriented };

typedef struct __file_modes {
	u32 open_mode : 2;
	u32 io_mode : 3;
	u32 buffer_mode : 2;
	u32 file_kind : 3;

#ifdef _MSL_WIDE_CHAR
	u32 file_orientation : 2;
#endif /* _MSL_WIDE_CHAR */

	u32 binary_io : 1;
} file_modes;

enum __io_states { __neutral, __writing, __reading, __rereading };

typedef struct __file_states {
	u32 io_state : 3;
	u32 free_buffer : 1;

	u8 eof;
	u8 error;
} file_states;

typedef void* __ref_con;
typedef void (*__idle_proc)(void);
typedef int (*__pos_proc)(__file_handle file, fpos_t* position, int mode, __ref_con ref_con);
typedef int (*__io_proc)(__file_handle file, char* buff, size_t* count, __ref_con ref_con);
typedef int (*__close_proc)(__file_handle file);

struct _IO_FILE {
	__file_handle mHandle;                           // _00
	file_modes mMode;                                // _04
	file_states mState;                              // _08
	u8 mIsDynamicallyAllocated;                      // _0C
	u8 mCharBuffer;                                  // _0D
	u8 mCharBufferOverflow;                          // _0E
	u8 mUngetcBuffer[__ungetc_buffer_size];          // _0F
	wchar_t mUngetcWideBuffer[__ungetc_buffer_size]; // _12
	u32 mPosition;                                   // _18
	char* mBuffer;                                   // _1C
	u32 mBufferSize;                                 // _20
	char* mBufferPtr;                                // _24
	u32 mBufferLength;                               // _28
	u32 mBufferAlignment;                            // _2C
	u32 mBufferLength2;                              // _30
	u32 mBufferPosition;                             // _34
	__pos_proc positionFunc;                         // _38
	__io_proc readFunc;                              // _3C
	__io_proc writeFunc;                             // _40
	__close_proc closeFunc;                          // _44
	__ref_con ref_con;                               // _48
	_IO_FILE* mNextFile;                             // _4C
};

typedef struct _IO_FILE FILE;

extern FILE __files[4];

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

int fflush(FILE* __stream);
void free(void*);
int __flush_buffer(FILE* file, size_t* length);
void __prep_buffer(FILE* file);
u32 __flush_all();

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
