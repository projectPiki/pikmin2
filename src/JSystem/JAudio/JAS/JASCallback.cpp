#include "Dolphin/os.h"
#include "JSystem/JAudio/JAS/JASCallbackMgr.h"
#include "JSystem/JAudio/JAS/JASMutexLock.h"
#include "types.h"

/*
    Generated from dpostproc
*/

/*
 * --INFO--
 * Address:	800A6500
 * Size:	00009C
 */
bool JASCallbackMgr::regist(JASCallback* function, void* argument)
{
	JASCriticalSection criticalSection;
	for (int i = 0; i < 0x10; i++) {
		if (mCallbacks[i].mFunction == nullptr) {
			mCallbacks[i].mFunction = function;
			mCallbacks[i].mArgument = argument;
			return true;
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	800A659C
 * Size:	000110
 */
bool JASCallbackMgr::reject(JASCallback* function, void* argument)
{
	bool didRejectAtLeastOne = false;
	JASCriticalSection criticalSection;
	for (int i = 0; i < 0x10; i++) {
		if (mCallbacks[i].mFunction == function && mCallbacks[i].mArgument == argument) {
			mCallbacks[i].mFunction = nullptr;
			mCallbacks[i].mArgument = nullptr;
			didRejectAtLeastOne     = true;
		}
	}
	return didRejectAtLeastOne;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000134
 */
bool JASCallbackMgr::reject(JASCallback*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A66AC
 * Size:	000078
 */
void JASCallbackMgr::callback()
{
	for (int i = 0; i < 0x10; i++) {
		TCallback* cb = &mCallbacks[i];
		if (cb->mFunction && cb->mFunction(cb->mArgument) < 0) {
			cb->mFunction = nullptr;
			cb->mArgument = nullptr;
		}
	}
}
