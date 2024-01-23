#include "Dolphin/os.h"
#include "JSystem/JAudio/JAS/JASCallbackMgr.h"
#include "JSystem/JAudio/JAS/JASMutexLock.h"

/**
 * @note Address: 0x800A6500
 * @note Size: 0x9C
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

/**
 * @note Address: 0x800A659C
 * @note Size: 0x110
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

/**
 * @note Address: N/A
 * @note Size: 0x134
 */
bool JASCallbackMgr::reject(JASCallback*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800A66AC
 * @note Size: 0x78
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
