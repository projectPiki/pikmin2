#include "Dolphin/os.h"
#include "JSystem/JAS/JASDvd.h"
#include "JSystem/JAS/JASHeap.h"
#include "JSystem/JAS/JASThread.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .sbss # 0x80514D80 - 0x80516360
    .global sThread__6JASDvd
    sThread__6JASDvd:
        .skip 0x8
*/

JASTaskThread* JASDvd::sThread;

/*
 * --INFO--
 * Address:	800A698C
 * Size:	000008
 */
JASTaskThread* JASDvd::getThreadPointer() { return sThread; }

/*
 * --INFO--
 * Address:	800A6994
 * Size:	00007C
 */
bool JASDvd::createThread(long priority, int p2, unsigned long p3)
{
	sThread = new (JASDram, 0) JASTaskThread(priority, p2, p3);
	OSResumeThread(sThread->m_thread);
	return true;
}

/*
 * --INFO--
 * Address:	800A6A10
 * Size:	000044
 */
void JASDvd::checkPassDvdT(unsigned long p1, unsigned long* p2, void (*p3)(unsigned long))
{
	DVDThreadCheckBackArgs args;
	args._00 = p1;
	args._04 = p2;
	args._08 = p3;
	sThread->sendCmdMsg(dvdThreadCheckBack, &args, sizeof(DVDThreadCheckBackArgs));
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void JASDvd::pauseDvdT()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void JASDvd::unpauseDvdT()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A6A54
 * Size:	000048
 */
void JASDvd::dvdThreadCheckBack(void* args)
{
	DVDThreadCheckBackArgs* castedArgs = static_cast<DVDThreadCheckBackArgs*>(args);
	if (castedArgs->_04 != nullptr) {
		*castedArgs->_04 = castedArgs->_00;
	}
	if (castedArgs->_08 != nullptr) {
		castedArgs->_08(castedArgs->_00);
	}
}
