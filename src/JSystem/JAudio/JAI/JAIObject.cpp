#include "Dolphin/vec.h"
#include "JSystem/JAudio/JAI/JAIBasic.h"
#include "JSystem/JAudio/JAI/JAISound.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "JSystem/JAudio/JAI/JAInter/Object.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "types.h"

/**
 * @note Address: N/A
 * @note Size: 0xC8
 */
JAInter::ObjectBase::ObjectBase(Vec* p1, JKRHeap* heap, u8 handleCount)
    : JKRDisposer()
{
	if (!heap) {
		heap = JKRGetCurrentHeap();
	}
	mHandleCount = handleCount;
	mSounds      = new (heap, 0) JAISound*[mHandleCount];

	for (u8 i = 0; i < mHandleCount; i++) {
		mSounds[i] = nullptr;
	}

	_24            = p1;
	mUseHandleFlag = 0;
	mIsEnabled     = true;
}

/**
 * @note Address: 0x800B95FC
 * @note Size: 0x74
 * __dt__Q27JAInter10ObjectBaseFv
 */
JAInter::ObjectBase::~ObjectBase() { dispose(); }

/**
 * @note Address: 0x800B9670
 * @note Size: 0x164
 */
JAISound* JAInter::ObjectBase::startSound(u32 id, u32 p2)
{
	JAISound** handlePtr = nullptr;
	if (IsJAISoundIDInUse(id)) {
		handlePtr = getUseSoundHandlePointer(id);
	}

	if (!handlePtr) {
		handlePtr = getFreeSoundHandlePointer();
	}

	if (handlePtr) {
		JAIBasic::msBasic->startSoundVecT(id, handlePtr, _24, p2, 0, 4);
		return *handlePtr;
	}

	u8 prio     = 255;
	u8 handleNo = JAI_NULL_HANDLE_ID;
	for (u8 i = 0; i < mHandleCount; i++) {
		if (mSounds[i]->mSoundInfo->mPriority <= prio) {
			prio     = mSounds[i]->mSoundInfo->mPriority;
			handleNo = i;
		}
	}
	if (handleNo != JAI_NULL_HANDLE_ID && SoundTable::getInfoPointer(id)->mPriority >= prio) {
		handleStop(handleNo, 0);
		JAIBasic::msBasic->startSoundVecT(id, mSounds + handleNo, _24, p2, 0, 4);
		return mSounds[handleNo];
	}

	return nullptr;
}

/**
 * @note Address: 0x800B97D4
 * @note Size: 0x44
 */
void JAInter::ObjectBase::handleStop(u8 handleNo, u32 p2)
{
	if (mSounds[handleNo] != nullptr) {
		mSounds[handleNo]->stop(p2);
	}
}

/**
 * @note Address: 0x800B9818
 * @note Size: 0x48
 */
void JAInter::ObjectBase::startSound(u8 handleNo, u32 id, u32 p3)
{
	JAIBasic::msBasic->startSoundVecT(id, mSounds + handleNo, _24, p3, 0, 4);
}

/**
 * @note Address: 0x800B9860
 * @note Size: 0x44
 */
void JAInter::ObjectBase::startSound(JAISound** handlePtr, u32 id, u32 p3)
{
	JAIBasic::msBasic->startSoundVecT(id, handlePtr, _24, p3, 0, 4);
}

/**
 * @note Address: 0x800B98A4
 * @note Size: 0x60
 */
void JAInter::ObjectBase::stopSound(u32 id, u32 p2)
{
	u8 handleNo = getUseSoundHandleNo(id);
	if (handleNo != JAI_NULL_HANDLE_ID) {
		handleStop(handleNo, p2);
	}
}

/**
 * @note Address: 0x800B9904
 * @note Size: 0x68
 */
void JAInter::ObjectBase::stopAllSound()
{
	for (u8 i = 0; i < mHandleCount; i++) {
		handleStop(i, 0);
	}
}

/**
 * @note Address: 0x800B996C
 * @note Size: 0x44
 */
void JAInter::ObjectBase::disable()
{
	stopAllSound();
	mIsEnabled     = false;
	mUseHandleFlag = 0;
}

/**
 * @note Address: 0x800B99B0
 * @note Size: 0x40
 */
void JAInter::ObjectBase::dispose()
{
	disable();
	delete[] mSounds;
}

/**
 * @note Address: 0x800B99F0
 * @note Size: 0x5C
 */
JAISound** JAInter::ObjectBase::getFreeSoundHandlePointer()
{
	for (u32 i = 0; i < mHandleCount; i++) {
		if (!mSounds[i] && !IsJAIHandleInUse(i)) {
			return &mSounds[i];
		}
	}
	return nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0x58
 */
u8 JAInter::ObjectBase::getFreeSoundHandleNo()
{
	// UNUSED FUNCTION
	for (u8 i = 0; i < mHandleCount; i++) {
		if (!mSounds[i] && !IsJAIHandleInUse(i)) {
			return i;
		}
	}
	return JAI_NULL_HANDLE_ID;
}

/**
 * @note Address: 0x800B9A4C
 * @note Size: 0x54
 */
JAISound** JAInter::ObjectBase::getUseSoundHandlePointer(u32 id)
{
	for (u32 i = 0; i < mHandleCount; i++) {
		if (mSounds[i] && id == mSounds[i]->mSoundID) {
			return &mSounds[i];
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x800B9AA0
 * @note Size: 0x4C
 */
u8 JAInter::ObjectBase::getUseSoundHandleNo(u32 id)
{
	for (u8 i = 0; i < mHandleCount; i++) {
		if (mSounds[i] && id == mSounds[i]->mSoundID) {
			return i;
		}
	}
	return JAI_NULL_HANDLE_ID;
}

/**
 * @note Address: N/A
 * @note Size: 0x38
 */
void JAInter::ObjectBase::reserveSoundHandle(u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
void JAInter::ObjectBase::cancelSoundHandle(u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800B9AEC
 * @note Size: 0xF4
 * __ct__Q27JAInter6ObjectFP3VecP7JKRHeapUc
 */
JAInter::Object::Object(Vec* p1, JKRHeap* heap, u8 handleCount)
    : ObjectBase(p1, heap, handleCount)
{
	_28.x     = 0.0f;
	_28.y     = 0.0f;
	_28.z     = 0.0f;
	mDistance = 0.0f;
	mPan      = 0.5f;
	mDolby    = 0.0f;
}

/**
 * @note Address: 0x800B9BE0
 * @note Size: 0x84
 * __dt__Q27JAInter6ObjectFv
 */
JAInter::Object::~Object() { }

/**
 * @note Address: 0x800B9C64
 * @note Size: 0x21C
 */
JAISound* JAInter::Object::startSound(u32 id, u32 p2)
{
	JAISound** handlePtr = nullptr;
	if (IsJAISoundIDInUse(id)) {
		handlePtr = getUseSoundHandlePointer(id);
	}

	if (!handlePtr) {
		handlePtr = getFreeSoundHandlePointer();
	}

	if (handlePtr) {
		Vec* vec = _24;
		JAInter::Actor actor((this == nullptr) ? (void*)vec : (void*)this, vec, nullptr, 0);
		JAIBasic::msBasic->startSoundActorT(id, handlePtr, &actor, p2, 4);
		return *handlePtr;
	}

	u8 prio     = 255;
	u8 handleNo = JAI_NULL_HANDLE_ID;
	for (u8 i = 0; i < mHandleCount; i++) {
		if (!IsJAIHandleInUse(i) && mSounds[i]->mSoundInfo->mPriority <= prio) {
			prio     = mSounds[i]->mSoundInfo->mPriority;
			handleNo = i;
		}
	}
	if (handleNo != JAI_NULL_HANDLE_ID && SoundTable::getInfoPointer(id)->mPriority >= prio) {
		handleStop(0, 0);
		Vec* vec = _24;
		JAInter::Actor actor((this == nullptr) ? (void*)vec : (void*)this, vec, nullptr, 0);
		JAIBasic::msBasic->startSoundActorT(id, mSounds + handleNo, &actor, p2, 4);
		if (mSounds[handleNo]) {
			mSounds[handleNo]->_1A = 1;
		}

		return mSounds[handleNo];
	}

	return nullptr;
}

/**
 * @note Address: 0x800B9E80
 * @note Size: 0x158
 */
void JAInter::Object::disable()
{
	DummyObjectMgr::DummyObject* handlePtr = nullptr;
	for (u8 i = 0; i < mHandleCount; i++) {
		JAISound* sound = mSounds[i];
		if (!sound) {
			continue;
		}
		if (((sound->mSoundID & JAISoundID_TypeMask) == JAISoundID_Type_Se) && sound->checkSwBit(0x8000)) {
			if (!handlePtr) {
				handlePtr = JAInter::DummyObjectMgr::getPointer(JAIGlobalParameter::getParamDummyObjectLifeTime());
			}

			if (handlePtr) {
				Vec* vec                       = _24;
				handlePtr->_0C.x               = vec->x;
				handlePtr->_0C.y               = vec->y;
				handlePtr->_0C.z               = vec->z;
				handlePtr->mSound              = mSounds[i];
				mSounds[i]->_1A                = 0;
				mSounds[i]->_3C                = &handlePtr->_0C;
				mSounds[i]->mMainSoundPPointer = (void**)&handlePtr->mSound;
				mSounds[i]                     = nullptr;
				continue;
			}

			handleStop(i, 0);

		} else {
			handleStop(i, 0);
		}
	}

	mIsEnabled = false;
}

/**
 * @note Address: 0x800B9FD8
 * @note Size: 0x214
 */
void JAInter::Object::loop()
{
	bool check = false;
	for (u32 i = 0; i < mHandleCount; i++) {
		if (!mSounds[i]) {
			continue;
		}

		if (!check && _24) {
			PSMTXMultVec(*JAIBasic::msBasic->mCameras->mMtx, _24, &_28);
			mDistance = dolsqrtfull(_28.x * _28.x + _28.y * _28.y + _28.z * _28.z); // needs to be a more elaborate sqrt
		}

		JAISound_0x34* v1 = mSounds[i]->mSoundObj;
		v1->mPosition     = _28;
		v1->mDistance     = mDistance;

		if (!check) {
			if (_24) {
				mPan   = mSounds[i]->setDistancePanCommon();
				mDolby = mSounds[i]->setDistanceDolbyCommon();
			}
			check = true;
		}
	}
}
