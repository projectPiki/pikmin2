#include "types.h"
#include "JSystem/JKR/JKRFile.h"
#include "Dolphin/vi.h"

/*
 * --INFO--
 * Address:	80022E1C
 * Size:	00007C
 */
void JKRFile::read(void* data, long size, long offset)
{
	while (true) {
		if (readData(data, size, offset) == size) {
			return;
		} else
			VIWaitForRetrace();
	}
}
