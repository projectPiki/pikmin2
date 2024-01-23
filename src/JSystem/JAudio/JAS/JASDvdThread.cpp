#include "Dolphin/os.h"
#include "JSystem/JAudio/JAS/JASDvd.h"
#include "JSystem/JAudio/JAS/JASHeap.h"
#include "JSystem/JAudio/JAS/JASThread.h"

JASTaskThread* JASDvd::sThread;

/**
 * @note Address: 0x800A698C
 * @note Size: 0x8
 */
JASTaskThread* JASDvd::getThreadPointer() { return sThread; }

/**
 * @note Address: 0x800A6994
 * @note Size: 0x7C
 */
bool JASDvd::createThread(s32 priority, int p2, u32 p3)
{
	sThread = new (JASDram, 0) JASTaskThread(priority, p2, p3);
	OSResumeThread(sThread->mThread);
	return true;
}

/**
 * @note Address: 0x800A6A10
 * @note Size: 0x44
 */
void JASDvd::checkPassDvdT(u32 p1, u32* p2, JASDvdCallback p3)
{
	DVDThreadCheckBackArgs args;
	args._00 = p1;
	args._04 = p2;
	args._08 = p3;
	sThread->sendCmdMsg(dvdThreadCheckBack, &args, sizeof(DVDThreadCheckBackArgs));
}

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
void JASDvd::pauseDvdT()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
void JASDvd::unpauseDvdT()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800A6A54
 * @note Size: 0x48
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
