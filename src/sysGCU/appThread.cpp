#include "AppThread.h"

/**
 * @note Address: 0x80424E18
 * @note Size: 0x3C
 */
AppThread::AppThread(u32 stackSize, int msgCount, int priority)
    : JKRThread(stackSize, msgCount, priority)
{
}
