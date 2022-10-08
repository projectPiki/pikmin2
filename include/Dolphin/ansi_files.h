#ifndef _DOLPHIN_ANSI_FILES_H
#define _DOLPHIN_ANSI_FILES_H
#include "types.h"

typedef unsigned long __file_handle;
typedef unsigned long fpos_t;
typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

#define __ungetc_buffer_size 2

enum __file_kinds { __closed_file, __disk_file, __console_file, __unavailable_file };

typedef struct __file_modes {
	uint open_mode : 2;
	uint io_mode : 3;
	uint buffer_mode : 2;
	uint file_kind : 3;

#if _MSL_WIDE_CHAR
	uint file_orientation : 2;
#endif /* _MSL_WIDE_CHAR */

	uint binary_io : 1;
} file_modes;

typedef struct __file_states {
	uint io_state : 3;
	uint free_buffer : 1;

	u8 eof;
	u8 error;
} file_states;

typedef void* __ref_con;
typedef void (*__idle_proc)(void);
typedef int (*__pos_proc)(__file_handle file, fpos_t* position, int mode, __ref_con ref_con); /*- mm 970708 -*/
typedef int (*__io_proc)(__file_handle file, unsigned char* buff, size_t* count, __ref_con ref_con);
typedef int (*__close_proc)(__file_handle file);

#define __ungetc_buffer_size 2

struct _IO_FILE {
	__file_handle m_handle;                  // _00
	file_modes m_mode;                       // _04
	file_states m_state;                     // _08
	u8 m_isDynamicallyAllocated;             // _0C
	u8 m_charBuffer;                         // _0D
	u8 m_charBufferOverflow;                 // _0E
	u8 m_ungetcBuffer[__ungetc_buffer_size]; // _0F
	u16 m_ungetcWideBuffer[2];               // _12
	uint m_position;                         // _18
	u8* m_buffer;                            // _1C
	u32 m_bufferSize;                        // _20
	u8* m_bufferPtr;                         // _24
	uint m_bufferLength;                     // _28
	uint m_bufferAlignment;                  // _2C
	uint m_bufferLength2;                    // _30
	uint m_bufferPosition;                   // _34
	void* m_positionFunc;                    // _38
	void* m_readFunc;                        // _3C
	void* m_writeFunc;                       // _40
	void* m_closeFunc;                       // _44
	void* _48;                               // _48, unknown
	_IO_FILE* m_nextFile;                    // _4C
};

typedef struct _IO_FILE FILE;

extern int fflush(FILE* __stream);
extern void free(FILE* __stream);
extern FILE __files[4];

#endif
