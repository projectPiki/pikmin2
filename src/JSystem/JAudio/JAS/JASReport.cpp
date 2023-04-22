#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JAudio/JAS/JASMutexLock.h"
#include "Dolphin/os.h"
#include "stdarg.h"
#include "stdio.h"
#include "types.h"

static OSMutex sMutex;
static char* sBuffer;
static int sLineMax;
static int sLineCount;
static int sTop;

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void JASReportInit(JKRHeap*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASReportGetLineMax()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D8
 */
void JASReportCopyBuffer(char*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A786C
 * Size:	0000FC
 */
void JASReport(const char* str, ...)
{
	if (sBuffer) {
		va_list vl;
		va_start(vl, str);
		JASMutexLock mutexLock(&sMutex);
		vsnprintf(sBuffer + (sTop * 64), 64, str, vl);
		va_end(vl);

		sTop++;
		if (sTop >= sLineMax)
			sTop = 0;

		if (sLineCount < sLineMax)
			sLineCount++;
	}
}
