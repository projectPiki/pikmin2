#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JAudio/JAS/JASMutexLock.h"
#include "Dolphin/os.h"
#include "stdarg.h"
#include "stdio.h"

static OSMutex sMutex;
static char* sBuffer;
static int sLineMax;
static int sLineCount;
static int sTop;

/**
 * @note Address: N/A
 * @note Size: 0x58
 */
void JASReportInit(JKRHeap*, int)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JASReportGetLineMax()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xD8
 */
void JASReportCopyBuffer(char*, int)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800A786C
 * @note Size: 0xFC
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
