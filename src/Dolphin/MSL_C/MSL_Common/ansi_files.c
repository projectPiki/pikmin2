#include "types.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/ansi_files.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/critical_regions.h"

static char stdin_buff[0x100];
static char stdout_buff[0x100];
static char stderr_buff[0x100];

extern void fclose(FILE*);
extern int __read_console(u32, char*, u32*, void*);
extern int __write_console(u32, char*, u32*, void*);
extern int __close_console(u32);

// clang-format off
FILE __files[4] =
{
	{ 0,                  // _00
	  0,                  // _04, open_mode
	  1,                  // _04, io_mode
	  1,                  // _04, buffer_mode
	  __console_file,     // _04, file_kind
	  0,                  // _04, binary_io
	  __neutral,          // _08, io_state
	  0,                  // _08, free_buffer
	  0,                  // _08, eof
	  0,                  // _08, error
	  0,                  // _0C
	  0,                  // _0D
	  0,                  // _0E
	  0,                  // _0F
	  0,                  // _10
	  0,                  // _12
	  0,                  // _14
	  0,                  // _18
	  stdin_buff,         // _1C
	  sizeof(stdin_buff), // _20
	  stdin_buff,         // _24
	  0,                  // _28
	  0,                  // _2C
	  0,                  // _30
	  0,                  // _34
	  nullptr,            // _38
	  &__read_console,    // _3C
	  &__write_console,   // _40
	  &__close_console,   // _44
	  0,                  // _48
	  &__files[1]         // _4C
	},
	{ 1,                   // _00
	  0,                   // _04, open_mode
	  2,                   // _04, io_mode
	  1,                   // _04, buffer_mode
	  __console_file,      // _04, file_kind
	  0,                   // _04, binary_io
	  __neutral,           // _08, io_state
	  0,                   // _08, free_buffer
	  0,                   // _08, eof
	  0,                   // _08, error
	  0,                   // _0C
	  0,                   // _0D
	  0,                   // _0E
	  0,                   // _0F
	  0,                   // _10
	  0,                   // _12
	  0,                   // _14
	  0,                   // _18
	  stdout_buff,         // _1C
	  sizeof(stdout_buff), // _20
	  stdout_buff,         // _24
	  0,                   // _28
	  0,                   // _2C
	  0,                   // _30
	  0,                   // _34
	  nullptr,             // _38
	  &__read_console,     // _3C
	  &__write_console,    // _40
	  &__close_console,    // _44
	  0,                   // _48
	  &__files[2]          // _4C
	},
	{ 2,                   // _00
	  0,                   // _04, open_mode
	  2,                   // _04, io_mode
	  0,                   // _04, buffer_mode
	  __console_file,      // _04, file_kind
	  0,                   // _04, binary_io
	  __neutral,           // _08, io_state
	  0,                   // _08, free_buffer
	  0,                   // _08, eof
	  0,                   // _08, error
	  0,                   // _0C
	  0,                   // _0D
	  0,                   // _0E
	  0,                   // _0F
	  0,                   // _10
	  0,                   // _12
	  0,                   // _14
	  0,                   // _18
	  stderr_buff,         // _1C
	  sizeof(stderr_buff), // _20
	  stderr_buff,         // _24
	  0,                   // _28
	  0,                   // _2C
	  0,                   // _30
	  0,                   // _34
	  nullptr,             // _38
	  &__read_console,     // _3C
	  &__write_console,    // _40
	  &__close_console,    // _44
	  0,                   // _48
	  &__files[3]          // _4C
	},
};
// clang-format on

/**
 * @note Address: 0x800C2A74
 * @note Size: 0xA8
 */
void __close_all()
{
	FILE* p = &__files[0];
	FILE* plast;

	__begin_critical_region(stdin_access);

	while (p) {
		if (p->mMode.file_kind != __closed_file) {
			fclose(p);
		}

		plast = p;
		p     = p->mNextFile;
		if (plast->mIsDynamicallyAllocated)
			free(plast);
		else {
			plast->mMode.file_kind = __unavailable_file;
			if ((p != NULL) && p->mIsDynamicallyAllocated)
				plast->mNextFile = nullptr;
		}
	}

	__end_critical_region(stdin_access);
}

/**
 * @note Address: 0x800C2A04
 * @note Size: 0x70
 */

u32 __flush_all()
{
	u32 retval = 0;
	FILE* __stream;
	__stream = &__files[0];
	while (__stream) {
		if ((__stream->mMode.file_kind) && (fflush(__stream))) {
			retval = -1;
		}
		__stream = __stream->mNextFile;
	};
	return retval;
}
