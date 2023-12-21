#include "types.h"
#include "JSystem/JKernel/JKRFile.h"
#include "Dolphin/vi.h"

/**
 * @note Address: 0x80022E1C
 * @note Size: 0x7C
 */
void JKRFile::read(void* data, s32 size, s32 offset)
{
	while (true) {
		if (readData(data, size, offset) == size) {
			return;
		} else
			VIWaitForRetrace();
	}
}
