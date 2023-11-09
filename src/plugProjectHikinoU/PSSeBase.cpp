#include "JSystem/JAudio/JAI/JAInter/Object.h"
#include "JSystem/JSupport/JSUList.h"
#include "P2Macros.h"
#include "PSSystem/ClusterSe.h"
#include "PSSystem/EnvSeBase.h"
#include "PSSystem/PSSystemIF.h"

namespace PSSystem {

/*
 * --INFO--
 * Address:	80340838
 * Size:	0000A4
 */
EnvSeBase::EnvSeBase(u32 soundID, f32 p2)
    : JSULink(this)
    , mMoveParam(0.0f, 0, 2, 0)
    , mSoundID((SoundID)soundID)
    , _28(p2)
    , _2C(0.0f)
    , _30(0.3f)
    , mSound(nullptr)
    , mPauseFlag(1)
    , mIsOn(false)
    , _3A(0)
{
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void EnvSeBase::requestMoveParam(MoveParamSet param) { mMoveParam = param; }

/*
 * --INFO--
 * Address:	........
 * Size:	00000CC
 */
void EnvSeBase::doMoveParamRequest()
{
	if (mMoveParam._08 == 2) {
		return;
	}
	switch (mMoveParam._08) {
	case 0:
		mSound->setVolume(mMoveParam._00, mMoveParam._04, mMoveParam._0C);
		break;
	case 1:
		mSound->setPitch(mMoveParam._00, mMoveParam._04, mMoveParam._0C);
		break;

	default:
		P2ASSERTLINE(62, false);
	}

	mMoveParam._00 = 0.0f;
	mMoveParam._04 = 0;
	mMoveParam._08 = 2;
	mMoveParam._0C = 0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void EnvSeBase::setPauseFlag(u8 flag)
{
	mPauseFlag = flag;
	if (_3A) {
		mPauseFlag = 0;
	}
}

/*
 * --INFO--
 * Address:	803408DC
 * Size:	00035C
 */
void EnvSeBase::exec()
{
	if (!mIsOn) {
		if (mSound) {
			mSound->setVolume(0.0f, 0, 5);
		}
		return;
	}

	switch (mPauseFlag) {
	case 1:
		break;
	case 0: {
		JAISound* sound = play();
		if (sound) {
			setPanAndDolby(sound);
			sound->setVolume(_28, 0, 0);
			sound->setFxmix(0.4f, 0, 0);
			sound->setVolume(1.0f, 20, 5);
			sound->setFxmix(_30, 0, 0);

			doMoveParamRequest();
		}
		break;
	}

	case 2:
		JAISound* sound = play();
		if (sound) {
			setPanAndDolby(sound);
			sound->setVolume(_28, 0, 0);
			sound->setFxmix(0.4f, 0, 0);
			sound->setVolume(_2C, 0, 5);
			sound->setFxmix(_30, 0, 0);

			doMoveParamRequest();
		}
		return;
	default:
		P2ASSERTLINE(132, false);
		break;
	}
}

/*
 * --INFO--
 * Address:	80340C38
 * Size:	000040
 */
JAISound* EnvSeBase::play()
{
	spSysIF->playSystemSe(mSoundID, &mSound, 60);
	return mSound;
}

/*
 * --INFO--
 * Address:	80340C78
 * Size:	000034
 */
void EnvSeMgr::setAllPauseFlag(u8 flag)
{
	for (JSULink<EnvSeBase>* link = mEnvList.getFirst(); link; link = link->getNext()) {
		link->getObject()->setPauseFlag(flag);
	}
}

/*
 * --INFO--
 * Address:	80340CAC
 * Size:	000024
 */
void EnvSeMgr::on()
{
	for (JSULink<EnvSeBase>* link = mEnvList.getFirst(); link; link = link->getNext()) {
		link->getObject()->mIsOn = true;
	}
}

/*
 * --INFO--
 * Address:	80340CD0
 * Size:	000050
 */
void EnvSeMgr::on(u32 soundID, bool p2)
{
	for (JSULink<EnvSeBase>* link = mEnvList.getFirst(); link; link = link->getNext()) {
		if ((soundID == link->getObject()->getSoundID() && p2 == true) || (soundID != link->getObject()->getSoundID() && p2 == false)) {
			link->getObject()->mIsOn = true;
		}
	}
	/*
	lwz      r7, 0(r3)
	clrlwi   r5, r5, 0x18
	li       r0, 1
	b        lbl_80340D14

lbl_80340CE0:
	lwz      r6, 0(r7)
	lwz      r3, 0x24(r6)
	cmplw    r4, r3
	bne      lbl_80340CF8
	cmplwi   r5, 1
	beq      lbl_80340D0C

lbl_80340CF8:
	lwz      r3, 0x24(r6)
	cmplw    r4, r3
	beq      lbl_80340D10
	cmplwi   r5, 0
	bne      lbl_80340D10

lbl_80340D0C:
	stb      r0, 0x39(r6)

lbl_80340D10:
	lwz      r7, 0xc(r7)

lbl_80340D14:
	cmplwi   r7, 0
	bne      lbl_80340CE0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80340D20
 * Size:	000024
 */
void EnvSeMgr::off()
{
	for (JSULink<EnvSeBase>* link = mEnvList.getFirst(); link != nullptr; link = link->getNext()) {
		link->getObject()->mIsOn = false;
	}
}

/*
 * --INFO--
 * Address:	80340D44
 * Size:	000050
 */
void EnvSeMgr::off(u32 soundID, bool p2)
{
	for (JSULink<EnvSeBase>* link = mEnvList.getFirst(); link; link = link->getNext()) {
		if ((soundID == link->getObject()->getSoundID() && p2 == true) || (soundID != link->getObject()->getSoundID() && p2 == false)) {
			link->getObject()->mIsOn = false;
		}
	}
	/*
	lwz      r7, 0(r3)
	clrlwi   r5, r5, 0x18
	li       r0, 0
	b        lbl_80340D88

lbl_80340D54:
	lwz      r6, 0(r7)
	lwz      r3, 0x24(r6)
	cmplw    r4, r3
	bne      lbl_80340D6C
	cmplwi   r5, 1
	beq      lbl_80340D80

lbl_80340D6C:
	lwz      r3, 0x24(r6)
	cmplw    r4, r3
	beq      lbl_80340D84
	cmplwi   r5, 0
	bne      lbl_80340D84

lbl_80340D80:
	stb      r0, 0x39(r6)

lbl_80340D84:
	lwz      r7, 0xc(r7)

lbl_80340D88:
	cmplwi   r7, 0
	bne      lbl_80340D54
	blr
	*/
}

/*
 * --INFO--
 * Address:	80340D94
 * Size:	00000C
 */
void EnvSeMgr::reservePauseOff() { mReservator.mState = 31; }

/*
 * --INFO--
 * Address:	80340DA0
 * Size:	000070
 */
void EnvSeMgr::setVolumeRequest(f32 p1, u32 p2, u8 p3)
{
	for (JSULink<EnvSeBase>* link = mEnvList.getFirst(); link; link = link->getNext()) {
		if (link->getObject()) {
			MoveParamSet param(p1, p2, 0, p3);
			link->getObject()->requestMoveParam(param);
		}
	}
}

/*
 * --INFO--
 * Address:	80340E10
 * Size:	000080
 */
void EnvSeMgr::exec()
{
	if (mReservator.mState) {
		if (mReservator.mState-- == 1) {
			mReservator.reservatorTask();
		}
	}

	for (JSULink<EnvSeBase>* link = mEnvList.getFirst(); link; link = link->getNext()) {
		link->getObject()->exec();
	}
}

/*
 * --INFO--
 * Address:	80340E90
 * Size:	000038
 */
void EnvSe_PauseOffReservator::reservatorTask() { mMgr->setAllPauseFlag(0); }

/*
 * --INFO--
 * Address:	80340EC8
 * Size:	000020
 */
ClusterSe::PartInitArg::PartInitArg()
{
	_00[0]   = 0xff;
	_00[1]   = 0xff;
	_00[2]   = 0xff;
	_00[3]   = 0xff;
	mSoundID = PSSE_NULL;
}

/*
 * --INFO--
 * Address:	80340EE8
 * Size:	00002C
 */
ClusterSe::Part::Part()
    : mInitArg()
{
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */

/*
 * --INFO--
 * Address:	80340F14
 * Size:	00003C
 */
void ClusterSe::Part::callSe(JAInter::Object* obj) { obj->startSound(mInitArg.mSoundID, 0); }

/*
 * --INFO--
 * Address:	80340F50
 * Size:	000060
 */
ClusterSe::Factory::Factory(u8 p1)
{
	_04 = p1;
	P2ASSERTLINE(474, p1);
}

/*
 * --INFO--
 * Address:	80340FB0
 * Size:	000074
 */
ClusterSe::Part* ClusterSe::Factory::constructPart()
{
	Part* parts = new Part[_04];
	P2ASSERTLINE(484, parts);
	return parts;
}

/*
 * --INFO--
 * Address:	80341024
 * Size:	0002B4
 */
void ClusterSe::Mgr::constructParts(PSSystem::ClusterSe::Factory& factory)
{
	mPart = factory.constructPart();
	P2ASSERTLINE(506, mPart);
	for (int i = 0; i < _00[0]; i++) {
		factory.identifyPart(i);
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	mr       r29, r3
	stw      r28, 0x20(r1)
	mr       r28, r4
	mr       r3, r28
	lbz      r0, 4(r4)
	stb      r0, 0(r29)
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r29)
	lwz      r0, 4(r29)
	cmplwi   r0, 0
	bne      lbl_80341090
	lis      r3, lbl_80490100@ha
	lis      r5, lbl_80490110@ha
	addi     r3, r3, lbl_80490100@l
	li       r4, 0x1fa
	addi     r5, r5, lbl_80490110@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341090:
	li       r30, 0
	b        lbl_803412A8

lbl_80341098:
	mr       r4, r28
	addi     r3, r1, 0x10
	lwz      r12, 0(r28)
	clrlwi   r5, r30, 0x18
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lbz      r5, 0x10(r1)
	clrlwi   r0, r30, 0x18
	lbz      r4, 0x11(r1)
	mulli    r3, r0, 0xc
	lbz      r7, 0x12(r1)
	li       r0, 0
	lbz      r6, 0x13(r1)
	stb      r5, 0x18(r1)
	lwz      r5, 0x14(r1)
	stb      r4, 0x19(r1)
	lwz      r4, 4(r29)
	stb      r7, 0x1a(r1)
	add      r31, r4, r3
	stb      r6, 0x1b(r1)
	lwz      r3, 0x18(r1)
	stw      r5, 0x1c(r1)
	stw      r3, 8(r1)
	lbz      r3, 8(r1)
	stw      r5, 0xc(r1)
	cmplwi   r3, 0
	beq      lbl_80341114
	cmplwi   r3, 0xff
	beq      lbl_80341114
	li       r0, 1

lbl_80341114:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80341138
	lis      r3, lbl_80490100@ha
	lis      r5, lbl_80490110@ha
	addi     r3, r3, lbl_80490100@l
	li       r4, 0x170
	addi     r5, r5, lbl_80490110@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341138:
	lbz      r4, 9(r1)
	li       r3, 0
	cmplwi   r4, 0xff
	beq      lbl_80341158
	lbz      r0, 8(r1)
	cmplw    r0, r4
	ble      lbl_80341158
	li       r3, 1

lbl_80341158:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034117C
	lis      r3, lbl_80490100@ha
	lis      r5, lbl_80490110@ha
	addi     r3, r3, lbl_80490100@l
	li       r4, 0x171
	addi     r5, r5, lbl_80490110@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8034117C:
	lbz      r0, 0xa(r1)
	cmplwi   r0, 0xff
	bne      lbl_803411A4
	lis      r3, lbl_80490100@ha
	lis      r5, lbl_80490110@ha
	addi     r3, r3, lbl_80490100@l
	li       r4, 0x172
	addi     r5, r5, lbl_80490110@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803411A4:
	lbz      r0, 0xb(r1)
	cmplwi   r0, 0xff
	bne      lbl_803411CC
	lis      r3, lbl_80490100@ha
	lis      r5, lbl_80490110@ha
	addi     r3, r3, lbl_80490100@l
	li       r4, 0x173
	addi     r5, r5, lbl_80490110@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803411CC:
	lbz      r3, 8(r1)
	lbz      r0, 0xa(r1)
	cmplw    r3, r0
	bge      lbl_803411F8
	lis      r3, lbl_80490100@ha
	lis      r5, lbl_80490110@ha
	addi     r3, r3, lbl_80490100@l
	li       r4, 0x175
	addi     r5, r5, lbl_80490110@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803411F8:
	lbz      r3, 0xa(r1)
	lbz      r0, 0xb(r1)
	cmplw    r3, r0
	bgt      lbl_80341224
	lis      r3, lbl_80490100@ha
	lis      r5, lbl_80490110@ha
	addi     r3, r3, lbl_80490100@l
	li       r4, 0x176
	addi     r5, r5, lbl_80490110@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341224:
	lbz      r3, 0xb(r1)
	lbz      r0, 9(r1)
	cmplw    r3, r0
	bge      lbl_80341250
	lis      r3, lbl_80490100@ha
	lis      r5, lbl_80490110@ha
	addi     r3, r3, lbl_80490100@l
	li       r4, 0x177
	addi     r5, r5, lbl_80490110@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341250:
	lwz      r3, 0xc(r1)
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	bne      lbl_8034127C
	lis      r3, lbl_80490100@ha
	lis      r5, lbl_80490110@ha
	addi     r3, r3, lbl_80490100@l
	li       r4, 0x179
	addi     r5, r5, lbl_80490110@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8034127C:
	lbz      r0, 8(r1)
	addi     r30, r30, 1
	lbz      r3, 9(r1)
	stb      r0, 4(r31)
	lbz      r0, 0xa(r1)
	stb      r3, 5(r31)
	lbz      r3, 0xb(r1)
	stb      r0, 6(r31)
	lwz      r0, 0xc(r1)
	stb      r3, 7(r31)
	stw      r0, 8(r31)

lbl_803412A8:
	lbz      r0, 0(r29)
	clrlwi   r3, r30, 0x18
	cmplw    r3, r0
	blt      lbl_80341098
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803412D8
 * Size:	0001A4
 */
void ClusterSe::Mgr::play(u8, JAInter::Object*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r25, 0x24(r1)
	or.      r30, r5, r5
	mr       r28, r3
	mr       r29, r4
	bne      lbl_80341314
	lis      r3, lbl_80490100@ha
	lis      r5, lbl_80490110@ha
	addi     r3, r3, lbl_80490100@l
	li       r4, 0x20a
	addi     r5, r5, lbl_80490110@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341314:
	clrlwi   r27, r29, 0x18
	li       r31, 0
	b        lbl_80341458

lbl_80341320:
	clrlwi   r0, r31, 0x18
	lwz      r3, 4(r28)
	mulli    r0, r0, 0xc
	add      r25, r3, r0
	lbz      r0, 4(r25)
	cmplw    r27, r0
	bgt      lbl_80341454
	lbz      r0, 5(r25)
	cmplw    r27, r0
	blt      lbl_80341454
	mr       r3, r25
	mr       r4, r30
	lwz      r12, 0(r25)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	or.      r26, r3, r3
	beq      lbl_80341454
	lbz      r5, 6(r25)
	clrlwi   r3, r29, 0x18
	lfs      f5, lbl_8051E1CC@sda21(r2)
	cmplw    r3, r5
	ble      lbl_803413CC
	lis      r4, 0x4330
	lbz      r0, 4(r25)
	stw      r3, 0xc(r1)
	li       r3, 1
	lfd      f3, lbl_8051E1D0@sda21(r2)
	stw      r4, 8(r1)
	lfs      f4, lbl_8051E1C0@sda21(r2)
	lfd      f0, 8(r1)
	stw      r0, 0x14(r1)
	fsubs    f1, f0, f3
	stw      r4, 0x10(r1)
	lfd      f0, 0x10(r1)
	stw      r5, 0x1c(r1)
	fsubs    f2, f0, f3
	stw      r4, 0x18(r1)
	lfd      f0, 0x18(r1)
	fsubs    f3, f0, f3
	bl       linearTransform__7JALCalcFfffffb
	fmr      f5, f1
	b        lbl_80341428

lbl_803413CC:
	lbz      r5, 7(r25)
	cmplw    r5, r3
	ble      lbl_80341428
	lbz      r0, 5(r25)
	lis      r4, 0x4330
	stw      r3, 0x1c(r1)
	fmr      f4, f5
	lfd      f3, lbl_8051E1D0@sda21(r2)
	li       r3, 1
	stw      r4, 0x18(r1)
	lfs      f5, lbl_8051E1C0@sda21(r2)
	lfd      f0, 0x18(r1)
	stw      r5, 0x14(r1)
	fsubs    f1, f0, f3
	stw      r4, 0x10(r1)
	lfd      f0, 0x10(r1)
	stw      r0, 0xc(r1)
	fsubs    f2, f0, f3
	stw      r4, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f3, f0, f3
	bl       linearTransform__7JALCalcFfffffb
	fmr      f5, f1

lbl_80341428:
	lfs      f0, lbl_8051E1CC@sda21(r2)
	fcmpu    cr0, f0, f5
	beq      lbl_80341454
	mr       r3, r26
	fmr      f1, f5
	lwz      r12, 0x10(r26)
	li       r4, 0
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80341454:
	addi     r31, r31, 1

lbl_80341458:
	lbz      r0, 0(r28)
	clrlwi   r3, r31, 0x18
	cmplw    r3, r0
	blt      lbl_80341320
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}
} // namespace PSSystem
