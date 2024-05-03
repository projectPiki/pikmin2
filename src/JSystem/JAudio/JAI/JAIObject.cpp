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
			mDistance = dolsqrtf(_28.x * _28.x + _28.y * _28.y + _28.z * _28.z); // needs to be a more elaborate sqrt
		}

		JAISound_0x34* v1 = mSounds[i]->mSoundObj;
		v1->mPosition     = _28;
		v1->_0C.x         = mDistance;

		if (!check) {
			if (_24) {
				mPan   = mSounds[i]->setDistancePanCommon();
				mDolby = mSounds[i]->setDistanceDolbyCommon();
			}
			check = true;
		}
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	li       r29, 0
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_800BA1C0

lbl_800BA008:
	lwz      r3, 0x1c(r28)
	lwzx     r0, r3, r31
	cmplwi   r0, 0
	beq      lbl_800BA1B8
	clrlwi.  r0, r30, 0x18
	bne      lbl_800BA13C
	lwz      r4, 0x24(r28)
	cmplwi   r4, 0
	beq      lbl_800BA13C
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	addi     r5, r28, 0x28
	lwz      r3, 4(r3)
	lwz      r3, 8(r3)
	bl       PSMTXMultVec
	lfs      f1, 0x28(r28)
	lfs      f0, 0x2c(r28)
	fmuls    f2, f1, f1
	lfs      f3, 0x30(r28)
	fmuls    f1, f0, f0
	lfs      f0, lbl_80517058@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f1, f2, f1
	fadds    f4, f3, f1
	fcmpo    cr0, f4, f0
	ble      lbl_800BA0B4
	frsqrte  f1, f4
	lfd      f3, lbl_80517060@sda21(r2)
	lfd      f2, lbl_80517068@sda21(r2)
	fmul     f0, f1, f1
	fmul     f1, f3, f1
	fnmsub   f0, f4, f0, f2
	fmul     f1, f1, f0
	fmul     f0, f1, f1
	fmul     f1, f3, f1
	fnmsub   f0, f4, f0, f2
	fmul     f1, f1, f0
	fmul     f0, f1, f1
	fmul     f1, f3, f1
	fnmsub   f0, f4, f0, f2
	fmul     f0, f1, f0
	fmul     f4, f4, f0
	frsp     f4, f4
	b        lbl_800BA138

lbl_800BA0B4:
	lfd      f0, lbl_80517070@sda21(r2)
	fcmpo    cr0, f4, f0
	bge      lbl_800BA0CC
	lis      r3, __float_nan@ha
	lfs      f4, __float_nan@l(r3)
	b        lbl_800BA138

lbl_800BA0CC:
	stfs     f4, 8(r1)
	lis      r0, 0x7f80
	lwz      r4, 8(r1)
	rlwinm   r3, r4, 0, 1, 8
	cmpw     r3, r0
	beq      lbl_800BA0F4
	bge      lbl_800BA124
	cmpwi    r3, 0
	beq      lbl_800BA10C
	b        lbl_800BA124

lbl_800BA0F4:
	clrlwi.  r0, r4, 9
	beq      lbl_800BA104
	li       r0, 1
	b        lbl_800BA128

lbl_800BA104:
	li       r0, 2
	b        lbl_800BA128

lbl_800BA10C:
	clrlwi.  r0, r4, 9
	beq      lbl_800BA11C
	li       r0, 5
	b        lbl_800BA128

lbl_800BA11C:
	li       r0, 3
	b        lbl_800BA128

lbl_800BA124:
	li       r0, 4

lbl_800BA128:
	cmpwi    r0, 1
	bne      lbl_800BA138
	lis      r3, __float_nan@ha
	lfs      f4, __float_nan@l(r3)

lbl_800BA138:
	stfs     f4, 0x34(r28)

lbl_800BA13C:
	lwz      r3, 0x1c(r28)
	clrlwi.  r0, r30, 0x18
	lfs      f0, 0x28(r28)
	lwzx     r3, r3, r31
	lwz      r3, 0x34(r3)
	stfs     f0, 0(r3)
	lfs      f0, 0x2c(r28)
	stfs     f0, 4(r3)
	lfs      f0, 0x30(r28)
	stfs     f0, 8(r3)
	lfs      f0, 0x34(r28)
	stfs     f0, 0x18(r3)
	bne      lbl_800BA1B8
	lwz      r0, 0x24(r28)
	cmplwi   r0, 0
	beq      lbl_800BA1B4
	lwz      r3, 0x1c(r28)
	lwzx     r3, r3, r31
	lwz      r12, 0x10(r3)
	lwz      r12, 0xc0(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x38(r28)
	lwz      r3, 0x1c(r28)
	lwzx     r3, r3, r31
	lwz      r12, 0x10(r3)
	lwz      r12, 0xc4(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x3c(r28)

lbl_800BA1B4:
	li       r30, 1

lbl_800BA1B8:
	addi     r31, r31, 4
	addi     r29, r29, 1

lbl_800BA1C0:
	lbz      r0, 0x19(r28)
	cmplw    r29, r0
	blt      lbl_800BA008
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}
