#include "JSystem/JKR/JKRFile.h"
#include "Dolphin/vi.h"

/*
 * --INFO--
 * Address:	80022E1C
 * Size:	00007C
 */
void JKRFile::read(void* a1, long a2, long a3)
{
	while (true) {
		if (readData(a1, a2, a3) == a2) {
			return;
		}

		VIWaitForRetrace();
	}
}
