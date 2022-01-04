#include "types.h"

#include "AppThread.h"

/*
 * --INFO--
 * Address:	80424E18
 * Size:	00003C
 */
AppThread::AppThread(u32 stackSize, int msgCount, int priority)
    : JKRThread(stackSize, msgCount, priority)
{
}
