#include "JSystem/JStudio_JAudio.h"
#include "JSystem/JAudio/JAI/JAIBasic.h"
#include "JSystem/JAudio/JAI/JAISound.h"
#include "JSystem/JStudio_JStage.h"
#include "nans.h"

/**
 * @note Address: 0x80014FD8
 * @note Size: 0xC8
 */
JStudio_JAudio::TAdaptor_sound::TAdaptor_sound(JAIBasic* mgr, const JStage::TSystem* system)
    : JStudio::TAdaptor_sound(mVariableList, 10)
    , mSoundMgr(mgr)
    , mSound(nullptr)
    , mFlags(-1)
    , mState(0)
    , mFadeFlag(0)
    , mPosition(nullptr)
    , mSystem(system)
    , mObject(nullptr)
    , _100(-1)
    , _104(0)
{
}

/**
 * @note Address: 0x800150A0
 * @note Size: 0x84
 */
JStudio_JAudio::TAdaptor_sound::~TAdaptor_sound()
{
	if (mSound)
		mSound->stop(0);
}

/**
 * @note Address: 0x80015124
 * @note Size: 0xCC
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_prepare(const JStudio::TObject* p1)
{
	static TSetVariableValue_immediate aoData[4] = { TSetVariableValue_immediate(0, 0.0f), TSetVariableValue_immediate(1, 0.0f),
		                                             TSetVariableValue_immediate(2, 0.0f), TSetVariableValue_immediate(-1, NAN) };
	adaptor_setVariableValue_immediate(aoData);

	for (const JStudio_JAudio::TAdaptor_sound::TVVOSetValue_* output = saoVVOSetValue_; output->mValueIndex != -1; output++) {
		mVariableValues[output->mValueIndex].setOutput(output);
	}
}

/**
 * @note Address: 0x800151F0
 * @note Size: 0x58
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_end(const JStudio::TObject* object)
{
	if (!(mFlags & 0xc0000c00) && mState == 3 && mSound) {
		mSound->getFadeCounter();
	}
}

/**
 * @note Address: 0x80015248
 * @note Size: 0x14C
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_update(const JStudio::TObject* object, u32)
{
	JStudio::TControl* control = (JStudio::TControl*)object->mControl;
	JStudio::TControl::TTransform_position pos;
	Vec* result;
	adaptor_getVariableValue_Vec(&pos.mPosition, sauVariableValue_3_POSITION_XYZ);
	if (!_104) {
		if (!control->mTransformOnSet) {
			result = &pos.mPosition;

		} else {
			Vec temp;
			PSMTXMultVec(control->mTransformOnSet_Mtx, &pos.mPosition, &temp);
			result = &temp;
		}
	} else {
		f32 test[4];
		bool stop = JStudio_JStage::transform_toGlobalFromLocal(&test, pos, mObject, _100);
		if (stop) {
			return;
		}
		result = &pos.mPosition;
	}
	*mPosition = *result;

	if (!(mFlags & 0xc0000c00)) {
		if (mState == 3 && !mSound) {
			mState = 0;
		}
		if (mState) {
			mSoundMgr->startSoundVecT(mFlags, &mSound, mPosition, mFadeFlag, 0, 4);
			mFadeFlag = 0;
		}
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  lis       r5, 0x8047
	  stw       r0, 0x64(r1)
	  addi      r5, r5, 0x3454
	  stw       r31, 0x5C(r1)
	  mr        r31, r3
	  stw       r30, 0x58(r1)
	  lwz       r30, 0x14(r4)
	  addi      r4, r1, 0x14
	  bl        -0x7F44
	  lbz       r0, 0x104(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x68
	  lbz       r0, 0x74(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x4C
	  addi      r0, r1, 0x14
	  b         .loc_0x60

	.loc_0x4C:
	  addi      r3, r30, 0x98
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x8
	  bl        0xD5938
	  addi      r0, r1, 0x8

	.loc_0x60:
	  mr        r4, r0
	  b         .loc_0xB4

	.loc_0x68:
	  lwz       r5, 0xFC(r31)
	  addi      r3, r1, 0x20
	  lwz       r6, 0x100(r31)
	  addi      r4, r1, 0x14
	  bl        -0x345C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x8C
	  li        r0, 0
	  b         .loc_0xA8

	.loc_0x8C:
	  lfs       f2, 0x2C(r1)
	  li        r0, 0x1
	  lfs       f1, 0x3C(r1)
	  lfs       f0, 0x4C(r1)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)

	.loc_0xA8:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x134
	  addi      r4, r1, 0x8

	.loc_0xB4:
	  lfs       f0, 0x0(r4)
	  lis       r3, 0xC000
	  addi      r0, r3, 0xC00
	  stfs      f0, 0xEC(r31)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0xF0(r31)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0xF4(r31)
	  lwz       r3, 0xDC(r31)
	  and.      r0, r3, r0
	  bne-      .loc_0x134
	  lwz       r0, 0xE0(r31)
	  cmpwi     r0, 0x3
	  bne-      .loc_0x100
	  lwz       r0, 0xD8(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x100
	  li        r0, 0
	  stw       r0, 0xE0(r31)

	.loc_0x100:
	  lwz       r0, 0xE0(r31)
	  cmpwi     r0, 0
	  beq-      .loc_0x134
	  lwz       r3, 0xD4(r31)
	  addi      r5, r31, 0xD8
	  lwz       r4, 0xDC(r31)
	  li        r8, 0
	  lwz       r6, 0xE8(r31)
	  li        r9, 0x4
	  lwz       r7, 0xE4(r31)
	  bl        0x4FC
	  li        r0, 0
	  stw       r0, 0xE4(r31)

	.loc_0x134:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/**
 * @note Address: 0x80015394
 * @note Size: 0xA4
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_SOUND(JStudio::data::TEOperationData op, const void* data, u32 flag)
{
	switch (op) {
	case JStudio::data::TEOD_Unknown_19:
		mFlags = *(int*)data;
		if (mFlags & 0xc0000000) {
			if (mSound) {
				mSound->stop(0);
				mState = 0;
			}
			mSoundMgr->prepareSoundVecT(mFlags, &mSound, mPosition, 0, 0, 4);
			if (mSound) {
				mState = 1;
			}
		}
	}
}

/**
 * @note Address: 0x80015438
 * @note Size: 0x30
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_BEGIN(JStudio::data::TEOperationData op, const void* data, u32 flag)
{
	switch (op) {
	case JStudio::data::TEOD_Unknown_01:
		beginSound_fadeIn_(0);
		break;
	}
}

/**
 * @note Address: 0x80015468
 * @note Size: 0x48
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_BEGIN_FADE_IN(JStudio::data::TEOperationData op, const void* data, u32 flag)
{
	switch (op) {
	case JStudio::data::TEOD_Unknown_02:
		beginSound_fadeIn_(*(f32*)data);
		break;
	}
}

/**
 * @note Address: 0x800154B0
 * @note Size: 0x30
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_END(JStudio::data::TEOperationData op, const void* data, u32 flag)
{
	switch (op) {
	case JStudio::data::TEOD_Unknown_01:
		endSound_fadeOut_(0);
		break;
	}
}

/**
 * @note Address: 0x800154E0
 * @note Size: 0x48
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_END_FADE_OUT(JStudio::data::TEOperationData op, const void* data, u32 flag)
{
	switch (op) {
	case JStudio::data::TEOD_Unknown_02:
		endSound_fadeOut_(*(f32*)data);
		break;
	}
}

/**
 * @note Address: 0x80015528
 * @note Size: 0x68
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_PARENT(JStudio::data::TEOperationData op, const void* data, u32 flag)
{
	switch (op) {
	case JStudio::data::TEOD_Unknown_18:
		mObject = nullptr;

		JStage::TObject* obj;
		if (!mSystem->JSGFindObject(&obj, (const char*)data, JStage::TEO_Unknown_0)) {
			mObject = obj;
		}
		break;
	}
}

/**
 * @note Address: 0x80015590
 * @note Size: 0x80
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_PARENT_NODE(JStudio::data::TEOperationData op, const void* data, u32 flag)
{
	switch (op) {
	case JStudio::data::TEOD_Unknown_18:

		JStage::TObject* obj = mObject;
		if (obj) {
			_100 = obj->JSGFindNodeID((char*)data);
			if (_100 == -1) {
				return;
			}
		}
		break;
	case JStudio::data::TEOD_Unknown_19:
		_100 = *(int*)data;
	}
}

/**
 * @note Address: 0x80015610
 * @note Size: 0x20
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_PARENT_ENABLE(JStudio::data::TEOperationData op, const void* data, u32 flag)
{
	switch (op) {
	case JStudio::data::TEOD_Unknown_02:
		_104 = *(int*)data;
		break;
	}
}

/**
 * @note Address: 0x80015630
 * @note Size: 0x28
 * Please make this less insane. -EpochFlame
 * Also, r0/r4 regswap.
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_LOCATED(JStudio::data::TEOperationData op, const void* data, u32 flag)
{
	switch (op) {
	case JStudio::data::TEOD_Unknown_02:
		Vec* pos  = *(Vec**)data;
		mPosition = nullptr;
		if (!pos)
			return;
		mPosition = &_EC;
		break;
	}
}

/**
 * @note Address: 0x80015658
 * @note Size: 0x40
 */
void JStudio_JAudio::TAdaptor_sound::TVVOSetValue_::operator()(f32 value, JStudio::TAdaptor* adaptor) const
{
	if (((JStudio_JAudio::TAdaptor_sound*)adaptor)->mSound) {
		((JStudio_JAudio::TAdaptor_sound*)adaptor)->mSound->getDolby(0); // something here
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0xD8(r4)
	  mr        r4, r3
	  cmplwi    r0, 0
	  beq-      .loc_0x30
	  mr        r3, r0
	  addi      r12, r4, 0x8
	  li        r4, 0
	  bl        0xAC4A4
	  nop

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/**
 * @note Address: 0x80015698
 * @note Size: 0xD8
 */
void JStudio_JAudio::TAdaptor_sound::beginSound_fadeIn_(u32 flag)
{
	mFadeFlag = flag;
	if (mFlags & 0xc0000000) {
		if (mSound) {
			mSound->start(0);
			mState = 2;
		}
	} else {
		if (mSound) {
			mSound->stop(0);
			mState = 0;
		}
	}

	if ((mFlags & 0xc0000c00)) {
		mSoundMgr->startSoundVecT(mFlags, &mSound, mPosition, flag, 0, 4);
		if (mSound) {
			mState = 2;
		}
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	stw      r31, 0xe4(r3)
	lwz      r0, 0xdc(r3)
	rlwinm.  r0, r0, 0, 0, 1
	beq      lbl_800156EC
	lwz      r3, 0xd8(r30)
	cmplwi   r3, 0
	beq      lbl_80015758
	lwz      r12, 0x10(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	li       r0, 2
	stw      r0, 0xe0(r30)
	b        lbl_80015758

lbl_800156EC:
	lwz      r3, 0xd8(r30)
	cmplwi   r3, 0
	beq      lbl_80015714
	lwz      r12, 0x10(r3)
	li       r4, 0
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0xe0(r30)

lbl_80015714:
	lis      r3, 0xC0000C00@ha
	lwz      r4, 0xdc(r30)
	addi     r0, r3, 0xC0000C00@l
	and.     r0, r4, r0
	beq      lbl_80015750
	lwz      r3, 0xd4(r30)
	mr       r7, r31
	lwz      r6, 0xe8(r30)
	addi     r5, r30, 0xd8
	li       r8, 0
	li       r9, 4
	bl       "startSoundVecT<8JAISound>__8JAIBasicFUlPP8JAISoundP3VecUlUlUc"
	lwz      r0, 0xd8(r30)
	cmplwi   r0, 0
	beq      lbl_80015758

lbl_80015750:
	li       r0, 2
	stw      r0, 0xe0(r30)

lbl_80015758:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x80015770
 * @note Size: 0x50
 */
void JStudio_JAudio::TAdaptor_sound::endSound_fadeOut_(u32 flag)
{
	mFadeFlag = flag;
	if (mSound) {
		mSound->stop(0);
		mState = 3;
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 0xe4(r3)
	lwz      r3, 0xd8(r3)
	cmplwi   r3, 0
	beq      lbl_800157AC
	lwz      r12, 0x10(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r0, 3
	stw      r0, 0xe0(r31)

lbl_800157AC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
