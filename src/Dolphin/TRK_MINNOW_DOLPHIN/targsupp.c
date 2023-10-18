#include "Dolphin/os.h"
// clang-format off
asm void targsupp(void) // encapsulating function to get the file to align properly
{
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
}
// clang-format on
