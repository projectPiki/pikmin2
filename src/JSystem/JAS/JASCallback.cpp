#include "Dolphin/os.h"
#include "JSystem/JAS/JASCallbackMgr.h"
#include "JSystem/JAS/JASMutexLock.h"
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
		if (m_callbacks[i].m_function == nullptr) {
			m_callbacks[i].m_function = function;
			m_callbacks[i].m_argument = argument;
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
		if (m_callbacks[i].m_function == function && m_callbacks[i].m_argument == argument) {
			m_callbacks[i].m_function = nullptr;
			m_callbacks[i].m_argument = nullptr;
			didRejectAtLeastOne       = true;
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
		TCallback* cb = &m_callbacks[i];
		if (cb->m_function && cb->m_function(cb->m_argument) < 0) {
			cb->m_function = nullptr;
			cb->m_argument = nullptr;
		}
	}
}
