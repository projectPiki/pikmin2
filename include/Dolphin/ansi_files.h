#ifndef _DOLPHIN_ANSI_FILES_H
#define _DOLPHIN_ANSI_FILES_H
#include "types.h"

typedef unsigned long __file_handle;
typedef unsigned long fpos_t;
typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

#define __ungetc_buffer_size 2

enum __file_kinds { __closed_file, __disk_file, __console_file, __unavailable_file };

typedef struct {
	unsigned int open_mode : 2;
	unsigned int io_mode : 3;
	unsigned int buffer_mode : 2;
	unsigned int file_kind : 3; /*- mm 980708 -*/

#if _MSL_WIDE_CHAR
	unsigned int file_orientation : 2;
#endif /* _MSL_WIDE_CHAR */

	unsigned int binary_io : 1;
} __file_modes;

typedef struct {
	unsigned int io_state : 3;
	unsigned int free_buffer : 1;
	unsigned char eof;
	unsigned char error;
} __file_state;

typedef void* __ref_con;
typedef void (*__idle_proc)(void);
typedef int (*__pos_proc)(__file_handle file, fpos_t* position, int mode, __ref_con ref_con); /*- mm 970708 -*/
typedef int (*__io_proc)(__file_handle file, unsigned char* buff, size_t* count, __ref_con ref_con);
typedef int (*__close_proc)(__file_handle file);

#define __ungetc_buffer_size 2

struct _IO_FILE {
	__file_handle handle;
	__file_modes mode;
	__file_state state;

	unsigned char is_dynamically_allocated; /*- mm 981007 -*/

	unsigned char char_buffer;
	unsigned char char_buffer_overflow;
	unsigned char ungetc_buffer[__ungetc_buffer_size];
	u32 padding[2];
	void* buff1;
	u32 buffsize;
	void* buff2;
	u32 padding2[5];
	void* io[3];
	u32 unknown;
	struct _IO_FILE* next_file_struct;
};

typedef struct _IO_FILE FILE;

extern int fflush(FILE* __stream);
extern void free(FILE* __stream);
extern FILE __files[4];

#endif
