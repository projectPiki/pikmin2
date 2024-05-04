#include "JSystem/JAudio/JAD/JADDataMgr.h"
#include "JSystem/JAudio/JAD/JADUtility.h"
#include "JSystem/JSupport/JSUStream.h"
#include "types.h"

/**
 * @note Address: 0x800BA7F8
 * @note Size: 0x44
 */
JADUtility::DataMgrBase::DataMgrBase()
    : JKRDisposer()
    , mExternalFlags(nullptr)
{
}

/**
 * @note Address: 0x800BA83C
 * @note Size: 0x78
 */
JADUtility::DataMgrBase::~DataMgrBase()
{
	if (mExternalFlags) {
		JKRFreeToHeap(nullptr, mExternalFlags);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xD0
 */
JADUtility::DataLoadMgrNode::DataLoadMgrNode()
    : DataMgrBase()
    , mFlagState(0)
    , _20C(0)
    , _210(0)
{
	setPath("\0");
	setLoadPath("\0");
}

/**
 * @note Address: 0x800BA8B4
 * @note Size: 0xC8
 */
JADUtility::DataLoadMgrNode::~DataLoadMgrNode()
{
	if (mFlagState == 3) {
		mExternalFlags = nullptr;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x230
 */
void JADUtility::DataLoadMgrNode::load(JADUtility::DataLoadMgrNode::ObjStatus status, bool check)
{
	// fake, just generating the right weak function
	if (isTempBuffaMode()) {
		load(status, check);
	}
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800BA984
 * @note Size: 0xF0
 */
bool JADUtility::DataLoadMgrNode::initInstanceExt(void* buffer, s32 bufferLength)
{
	JKRHeap* curHeap = JKRGetCurrentHeap();

	if (getObjHeap()) {
		getObjHeap()->becomeCurrentHeap();
	}

	bool success = initInstance(buffer, bufferLength);

	if (getObjHeap()) {
		curHeap->becomeCurrentHeap();
	}

	if (!success) {
		mFlagState     = 0;
		mExternalFlags = nullptr;
		return false;
	}

	setFlagsAsExternal(buffer);
	return true;
}

/**
 * @note Address: 0x800BAA74
 * @note Size: 0x14
 */
void JADUtility::DataLoadMgrNode::setFlagsAsExternal(void* p1)
{
	mExternalFlags = p1;
	mFlagState     = 3;
}

/**
 * @note Address: 0x800BAA88
 * @note Size: 0x15C
 */
JADUtility::DataMgrNode::DataMgrNode()
    : DataLoadMgrNode()
    , _214(0)
{
}
