#include "Dolphin/os.h"

ASM void targsupp(void) // encapsulating function to get the file to align properly
{
#ifdef __MWERKS__ // clang-format off
	nofralloc
	entry TRKAccessFile
		twi 31, r0, 0
		blr
	entry TRKOpenFile
		twi 31, r0, 0
		blr
	entry TRKCloseFile
		twi 31, r0, 0
		blr
	entry TRKPositionFile
		twi 31, r0, 0
		blr
#endif // clang-format on
}
