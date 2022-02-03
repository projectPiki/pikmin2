#include "types.h"
#include "Dolphin/ansi_files.h"

extern int fflush(FILE* __stream);
extern void __begin_critical_region(int);
extern void __end_critical_region(int);
extern void fclose(FILE*);

static FILE __files;

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void __flush_line_buffered_output_files(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C2A04
 * Size:	000070
 */

u32 __flush_all(void)
{
	u32 retval = 0;
	FILE* __stream;
	__stream = &__files;
	while (__stream) {
		if ((__stream->mode.file_kind) && (fflush(__stream))) {
			retval = -1;
		}
		__stream = __stream->next_file_struct;
	};
	return retval;
}

/*
 * --INFO--
 * Address:	800C2A74
 * Size:	0000A8
 */
void __close_all(void)
{
	FILE* p = &__files;
	FILE* plast;

	__begin_critical_region(2);

	while (p != nullptr) {
		if (p->mode.file_kind != __closed_file) {
			fclose(p);
		}

		plast = p;
		p     = p->next_file_struct;
		if (plast->is_dynamically_allocated)
			free(plast);
		else {
			plast->mode.file_kind = __unavailable_file;
			if ((p != NULL) && p->is_dynamically_allocated)
				plast->next_file_struct = nullptr;
		}
	}

	__end_critical_region(2);
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void __init_file(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void __find_unopened_file(void)
{
	// UNUSED FUNCTION
}
