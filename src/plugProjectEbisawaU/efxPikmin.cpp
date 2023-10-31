#include "Game/Piki.h"
#include "efx/TPk.h"
#include "efx/TDopingSmoke.h"
#include "efx/TOrima.h"
#include "efx/TCursor.h"
#include "efx/TFueact.h"
#include "efx/TNaviEffect.h"
#include "efx/TEnemyDead.h"
#include "efx/TGate.h"
#include "efx/TStoneAttack.h"
#include "efx/TBridge.h"
#include "game/Piki.h"
#include "trig.h"
#include "Game/MapMgr.h"
#include "JSystem/JParticle/JPAMath.h"
#include "float.h"

namespace efx {

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void TParticleCallBack_Yodare::init(JPABaseEmitter*, JPABaseParticle*)
{
	_00 = 0.0f;
	_04 = "ArgType";
	_08 = 1.0f;
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000124
 */
void TParticleCallBack_Yodare::execute(JPABaseEmitter*, JPABaseParticle*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void TTestYodareGen::create(Arg*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B66B0
 * Size:	0000F0
 */
bool TPkNageBlur::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgType", static_cast<ArgType*>(arg)->getName()) == 0;
	P2ASSERTLINE(319, nameCheck);
	ArgType* targ = static_cast<ArgType*>(arg);
	switch (targ->mType) {
	case Game::Blue:
		mEffectID = PID_PkNageBlur_Blue;
		break;
	case Game::Red:
		mEffectID = PID_PkNageBlur_Red;
		break;
	case Game::Yellow:
		mEffectID = PID_PkNageBlur_Yellow;
		break;
	case Game::Purple:
		mEffectID = PID_PkNageBlur_Purple;
		break;
	case Game::White:
		mEffectID = PID_PkNageBlur_White;
		break;
	}
	TSync::create(arg);
}

static void fakeFuncEfxPikmin(TParticleCallBack_Yodare* callback) { callback->_00 = 1.0f; }

/*
 * --INFO--
 * Address:	803B67A0
 * Size:	0001E0
 */
bool TDopingSmoke::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgDopingSmoke", static_cast<ArgDopingSmoke*>(arg)->getName()) == 0;
	P2ASSERTLINE(349, nameCheck);
	ArgDopingSmoke* targ = static_cast<ArgDopingSmoke*>(arg);
	switch (targ->mDopeType) {
	case 0:
		mEffectIDs[0] = PID_DopingSmoke_3;
		break;
	case 1:
		mEffectIDs[0] = PID_DopingSmoke_1;
		break;
	default:
		mEffectIDs[0] = PID_DangoFly_2;
	}
	if (TSimple1::create(arg)) {
		Vector3f vec      = targ->mDopePos;
		Vector3f* tempPtr = &vec;
		vec.normalise();
		setEmitterVector(tempPtr);
		if (targ->mDopeType == 0) {
			JPABaseEmitter* emit = particleMgr->create(PID_DopingSmoke_2, arg->mPosition, 0);
			if (emit) {
				emit->mEmitterCallback = &mCallBack_StaticClipping;
				emit->mLocalDir.x      = vec.x;
				emit->mLocalDir.y      = vec.y;
				emit->mLocalDir.z      = vec.z;
			} else {
				return false;
			}
		}
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803B6980
 * Size:	000060
 */
bool TOrimaLight::create(Arg* arg)
{
	switch (mNaviType) {
	case 0:
		mItems[0].mEffectID = PID_OrimaLight_Orima_1;
		mItems[1].mEffectID = PID_OrimaLight_Orima_2;
		break;
	case 1:
		mItems[0].mEffectID = PID_OrimaLight_Loozy_1;
		mItems[1].mEffectID = PID_OrimaLight_Loozy_2;
		break;
	}
	return TSyncGroup2::create(arg);
}

/*
 * --INFO--
 * Address:	803B69E0
 * Size:	000060
 */
bool TOrimaLightAct::create(Arg* arg)
{
	switch (mNaviType) {
	case 0:
		mItems[0].mEffectID = PID_OrimaLightAct_Orima_1;
		mItems[1].mEffectID = PID_OrimaLightAct_Orima_2;
		break;
	case 1:
		mItems[0].mEffectID = PID_OrimaLightAct_Loozy_1;
		mItems[1].mEffectID = PID_OrimaLightAct_Loozy_2;
		break;
	}
	return TSyncGroup2::create(arg);
}

/*
 * --INFO--
 * Address:	803B6A40
 * Size:	000078
 */
void TCursor::init(long whistleType, long cNum)
{
	if (cNum <= 0 || cNum > 16) {
		cNum = 16;
	}
	mContextNum = cNum;
	mAngleSpeed = kAngleSpeed;

	// Louie and President whistles are unused in vanilla as whistleType is always 0 for navis
	switch (whistleType) {
	case 0:
		mOneEmitter.mEffectID = PID_Cursor_Olimar;
		break;
	case 1:
		mOneEmitter.mEffectID = PID_Cursor_President;
		break;
	case 2:
		mOneEmitter.mEffectID = PID_Cursor_Louie;
		break;
	case 3:
		mOneEmitter.mEffectID = PID_WhistleFuebug;
		break;
	}
}

/*
 * --INFO--
 * Address:	803B6AB8
 * Size:	000154
 */
bool TCursor::create(Arg* arg)
{
	mAngleTimer = 0.0f;

	bool nameCheck = strcmp("ArgCursor", static_cast<ArgCursor*>(arg)->getName()) == 0;
	P2ASSERTLINE(459, nameCheck);
	ArgCursor* targ = static_cast<ArgCursor*>(arg);

	mPosition = arg->mPosition;
	f32 scale = targ->mScale;
	for (int i = 0; i < mContextNum; i++) {
		Vector3f pos;
		calcPos_(&pos, scale, i);
		mContextArray[i].mPosition = pos;
	}

	for (int i = 0; i < mContextNum; i++) {
		mOneEmitter.add(&mContextArray[i]);
	}
	mOneEmitter.create(arg);
	return true;
}

/*
 * --INFO--
 * Address:	803B6C0C
 * Size:	000100
 */
void TCursor::update(Arg* arg)
{
	P2ASSERTLINE(480, arg);
	ArgCursor* targ = static_cast<ArgCursor*>(arg);

	f32 scale = targ->mScale;
	mPosition = targ->mPosition;

	mAngleTimer -= mAngleSpeed;
	if (mAngleTimer < 0.0f) {
		mAngleTimer += TAU;
	}

	for (int i = 0; i < mContextNum; i++) {
		Vector3f pos;
		calcPos_(&pos, scale, i);
		mContextArray[i].mPosition = pos;
	}
}

/*
 * --INFO--
 * Address:	803B6D0C
 * Size:	000148
 */
void TCursor::calcPos_(Vector3f* pos, f32 mag, long id)
{
	f32 angle = mAngleTimer + ((f32)id * 2.0f * PI) / (f32)mContextNum;
	pos->x    = mag * cosf(angle) + mPosition.x;
	pos->z    = mag * sinf(angle) + mPosition.z;
	if (Game::mapMgr) {
		pos->y = Game::mapMgr->getMinY(*pos);
	} else {
		pos->y = mPosition.y;
	}
}

/*
 * --INFO--
 * Address:	803B6E54
 * Size:	0000AC
 */
bool TFueactCircle::create(Arg* arg)
{
	if (mEmitter) {
		return false;
	} else {
		mEmitter = particleMgr->create(PID_FueActCircle, Vector3f::zero, 0);
		if (mEmitter) {
			mEmitter->mEmitterCallback  = this;
			mEmitter->mParticleCallback = this;
			mEmitter->mFlags |= 0x40;
			return true;
		} else {
			return false;
		}
	}
}

/*
 * --INFO--
 * Address:	803B6F00
 * Size:	000124
 */
void TFueactCircle::execute(JPABaseEmitter* emit)
{
	P2ASSERTLINE(530, mMtx);
	P2ASSERTLINE(531, mPos);

	Vector3f sep = *mPos - mMtx->getBasis(3);

	// super wacky normalisation.
	f32 sqrLen = sep.x * sep.x + sep.y * sep.y + sep.z * sep.z;
	if (!(sqrLen <= 32.0f * __float_epsilon[0])) {
		if (sqrLen <= 0.0f) {

		} else {
			f32 len = (f32)__frsqrte(sqrLen);
			sqrLen  = (0.5f * len) * (3.0f - sqrLen * (len * len));
		}
		sep = sep * sqrLen;
	}

	emit->setAngle(sep.x, sep.y, sep.z);

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_803B6F44
	lis      r3, lbl_80495A28@ha
	lis      r5, lbl_80495A38@ha
	addi     r3, r3, lbl_80495A28@l
	li       r4, 0x212
	addi     r5, r5, lbl_80495A38@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B6F44:
	lwz      r0, 0x10(r30)
	cmplwi   r0, 0
	bne      lbl_803B6F6C
	lis      r3, lbl_80495A28@ha
	lis      r5, lbl_80495A38@ha
	addi     r3, r3, lbl_80495A28@l
	li       r4, 0x213
	addi     r5, r5, lbl_80495A38@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B6F6C:
	lwz      r5, 0x10(r30)
	lis      r3, __float_epsilon@ha
	lwz      r4, 0xc(r30)
	lfs      f1, 4(r5)
	lfs      f0, 0x1c(r4)
	lfs      f2, 0(r5)
	fsubs    f5, f1, f0
	lfs      f0, 0xc(r4)
	lfs      f1, 8(r5)
	fsubs    f4, f2, f0
	lfs      f0, 0x2c(r4)
	fmuls    f2, f5, f5
	fsubs    f6, f1, f0
	lfs      f1, lbl_8051F6A0@sda21(r2)
	lfs      f0, __float_epsilon@l(r3)
	fmadds   f2, f4, f4, f2
	fmuls    f0, f1, f0
	fmadds   f7, f6, f6, f2
	fcmpo    cr0, f7, f0
	cror     2, 0, 2
	beq      lbl_803B7000
	lfs      f0, lbl_8051F670@sda21(r2)
	fcmpo    cr0, f7, f0
	cror     2, 0, 2
	bne      lbl_803B6FD4
	b        lbl_803B6FF4

lbl_803B6FD4:
	frsqrte  f3, f7
	lfs      f2, lbl_8051F6A4@sda21(r2)
	lfs      f0, lbl_8051F6A8@sda21(r2)
	frsp     f3, f3
	fmuls    f1, f3, f3
	fmuls    f2, f2, f3
	fnmsubs  f0, f7, f1, f0
	fmuls    f7, f2, f0

lbl_803B6FF4:
	fmuls    f4, f4, f7
	fmuls    f5, f5, f7
	fmuls    f6, f6, f7

lbl_803B7000:
	stfs     f4, 0x18(r31)
	stfs     f5, 0x1c(r31)
	stfs     f6, 0x20(r31)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B7024
 * Size:	0002CC
 */
void TFueactCircle::execute(JPABaseEmitter*, JPABaseParticle* prt)
{
	P2ASSERTLINE(530, mMtx);
	P2ASSERTLINE(531, mPos);

	Vector3f ang = *mPos - mMtx->getBasis(0);
	if (ang.normalise() > 175.0f) {
		ang.normalise();
		ang *= 175.0f;
	}

	prt->mOffsetPosition.x = ang.x;
	prt->mOffsetPosition.y = ang.y;
	prt->mOffsetPosition.z = ang.z;
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	mr       r31, r5
	stw      r30, 0x58(r1)
	mr       r30, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_803B7068
	lis      r3, lbl_80495A28@ha
	lis      r5, lbl_80495A38@ha
	addi     r3, r3, lbl_80495A28@l
	li       r4, 0x223
	addi     r5, r5, lbl_80495A38@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B7068:
	lwz      r0, 0x10(r30)
	cmplwi   r0, 0
	bne      lbl_803B7090
	lis      r3, lbl_80495A28@ha
	lis      r5, lbl_80495A38@ha
	addi     r3, r3, lbl_80495A28@l
	li       r4, 0x224
	addi     r5, r5, lbl_80495A38@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B7090:
	lwz      r3, 0x10(r30)
	lwz      r4, 0xc(r30)
	lfs      f0, 0(r3)
	lfs      f1, 4(r3)
	stfs     f0, 0x38(r1)
	lfs      f0, 8(r3)
	stfs     f1, 0x3c(r1)
	lwz      r0, 0x38(r1)
	lwz      r3, 0x3c(r1)
	stfs     f0, 0x40(r1)
	lfs      f5, 0xc(r4)
	stw      r0, 0x14(r1)
	lwz      r0, 0x40(r1)
	stw      r3, 0x18(r1)
	lfs      f1, 0x1c(r4)
	lfs      f2, 0x14(r1)
	lfs      f0, 0x18(r1)
	stw      r0, 0x1c(r1)
	fsubs    f3, f2, f5
	fsubs    f4, f0, f1
	lfs      f0, 0x2c(r4)
	lfs      f2, 0x1c(r1)
	stfs     f3, 0x14(r1)
	fsubs    f3, f2, f0
	lfs      f2, lbl_8051F670@sda21(r2)
	stfs     f4, 0x18(r1)
	lwz      r0, 0x14(r1)
	lwz      r3, 0x18(r1)
	stfs     f3, 0x1c(r1)
	stw      r0, 0x2c(r1)
	lwz      r0, 0x1c(r1)
	stw      r3, 0x30(r1)
	lfs      f4, 0x2c(r1)
	lfs      f3, 0x30(r1)
	stw      r0, 0x34(r1)
	fmuls    f4, f4, f4
	fmuls    f3, f3, f3
	lfs      f6, 0x34(r1)
	stfs     f5, 0x44(r1)
	fmuls    f5, f6, f6
	fadds    f3, f4, f3
	stfs     f1, 0x48(r1)
	stfs     f0, 0x4c(r1)
	fadds    f6, f5, f3
	fcmpo    cr0, f6, f2
	cror     2, 0, 2
	bne      lbl_803B7154
	fmr      f3, f6
	b        lbl_803B7178

lbl_803B7154:
	frsqrte  f5, f6
	lfs      f4, lbl_8051F6A4@sda21(r2)
	lfs      f2, lbl_8051F6A8@sda21(r2)
	frsp     f5, f5
	fmuls    f3, f5, f5
	fmuls    f4, f4, f5
	fnmsubs  f2, f6, f3, f2
	fmuls    f2, f4, f2
	fmuls    f3, f6, f2

lbl_803B7178:
	lfs      f2, lbl_8051F6AC@sda21(r2)
	fcmpo    cr0, f3, f2
	ble      lbl_803B728C
	lis      r3, __float_epsilon@ha
	lfs      f3, lbl_8051F6A0@sda21(r2)
	lfs      f2, __float_epsilon@l(r3)
	fmuls    f2, f3, f2
	fcmpo    cr0, f6, f2
	cror     2, 0, 2
	beq      lbl_803B71F8
	lfs      f2, lbl_8051F670@sda21(r2)
	fcmpo    cr0, f6, f2
	cror     2, 0, 2
	bne      lbl_803B71B4
	b        lbl_803B71D4

lbl_803B71B4:
	frsqrte  f5, f6
	lfs      f4, lbl_8051F6A4@sda21(r2)
	lfs      f2, lbl_8051F6A8@sda21(r2)
	frsp     f5, f5
	fmuls    f3, f5, f5
	fmuls    f4, f4, f5
	fnmsubs  f2, f6, f3, f2
	fmuls    f6, f4, f2

lbl_803B71D4:
	lfs      f4, 0x2c(r1)
	lfs      f3, 0x30(r1)
	lfs      f2, 0x34(r1)
	fmuls    f4, f4, f6
	fmuls    f3, f3, f6
	fmuls    f2, f2, f6
	stfs     f4, 0x2c(r1)
	stfs     f3, 0x30(r1)
	stfs     f2, 0x34(r1)

lbl_803B71F8:
	lwz      r4, 0x44(r1)
	lwz      r3, 0x48(r1)
	lwz      r0, 0x4c(r1)
	stw      r4, 8(r1)
	lfs      f5, 0x2c(r1)
	lfs      f4, lbl_8051F6AC@sda21(r2)
	lfs      f3, 0x30(r1)
	lfs      f2, 0x34(r1)
	fmuls    f7, f5, f4
	stw      r3, 0xc(r1)
	fmuls    f6, f3, f4
	fmuls    f5, f2, f4
	lfs      f2, 8(r1)
	stw      r0, 0x10(r1)
	lfs      f3, 0xc(r1)
	fadds    f4, f2, f7
	lfs      f2, 0x10(r1)
	fadds    f3, f3, f6
	stfs     f7, 0x2c(r1)
	fadds    f2, f2, f5
	stfs     f4, 8(r1)
	stfs     f3, 0xc(r1)
	lwz      r4, 8(r1)
	stfs     f2, 0x10(r1)
	lwz      r3, 0xc(r1)
	lwz      r0, 0x10(r1)
	stw      r4, 0x20(r1)
	stw      r3, 0x24(r1)
	lfs      f4, 0x20(r1)
	stw      r0, 0x28(r1)
	lfs      f3, 0x24(r1)
	lfs      f2, 0x28(r1)
	stfs     f6, 0x30(r1)
	stfs     f5, 0x34(r1)
	stfs     f4, 0x38(r1)
	stfs     f3, 0x3c(r1)
	stfs     f2, 0x40(r1)

lbl_803B728C:
	lwz      r0, 0x7c(r31)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	bne      lbl_803B72D8
	lfs      f6, 0x84(r31)
	lfs      f2, lbl_8051F67C@sda21(r2)
	lfs      f4, 0x38(r1)
	lfs      f3, 0x3c(r1)
	fsubs    f7, f2, f6
	lfs      f2, 0x40(r1)
	fmuls    f4, f4, f6
	lfs      f5, 0x44(r1)
	fmuls    f3, f3, f6
	fmuls    f2, f2, f6
	fmadds   f4, f5, f7, f4
	fmadds   f1, f1, f7, f3
	fmadds   f0, f0, f7, f2
	stfs     f4, 0x18(r31)
	stfs     f1, 0x1c(r31)
	stfs     f0, 0x20(r31)

lbl_803B72D8:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B72F0
 * Size:	0001D4
 */
void TFueactBiriBase::doExecuteEmitterOperation(JPABaseEmitter* emit)
{
	P2ASSERTLINE(530, mMtx);
	P2ASSERTLINE(531, mPos);

	Vector3f ang = *mPos - mMtx->getBasis(0);
	ang.normalise();
	Matrixf mtx; // i cant even
	JPASetRMtxTVecfromMtx(mtx.mMatrix.mtxView, mMtx->mMatrix.mtxView, mPos);
	ang /= 100.0f;
	emit->setAngle(ang.x, ang.y, ang.z);
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r30, r3
	mr       r31, r4
	lwz      r0, 0x10(r3)
	cmplwi   r0, 0
	bne      lbl_803B733C
	lis      r3, lbl_80495A28@ha
	lis      r5, lbl_80495A38@ha
	addi     r3, r3, lbl_80495A28@l
	li       r4, 0x243
	addi     r5, r5, lbl_80495A38@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B733C:
	lwz      r0, 0x14(r30)
	cmplwi   r0, 0
	bne      lbl_803B7364
	lis      r3, lbl_80495A28@ha
	lis      r5, lbl_80495A38@ha
	addi     r3, r3, lbl_80495A28@l
	li       r4, 0x244
	addi     r5, r5, lbl_80495A38@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B7364:
	lwz      r4, 0x14(r30)
	lwz      r3, 0x10(r30)
	lfs      f0, 4(r4)
	lfs      f3, 0x1c(r3)
	lfs      f1, 8(r4)
	fsubs    f0, f0, f3
	lfs      f2, 0x2c(r3)
	lfs      f4, 0(r4)
	lfs      f10, 0xc(r3)
	fsubs    f1, f1, f2
	fmuls    f6, f0, f0
	fsubs    f8, f4, f10
	lfs      f31, lbl_8051F670@sda21(r2)
	fmuls    f7, f1, f1
	fmadds   f4, f8, f8, f6
	fadds    f9, f7, f4
	fcmpo    cr0, f9, f31
	ble      lbl_803B73C0
	ble      lbl_803B73BC
	frsqrte  f4, f9
	fmuls    f31, f4, f9
	b        lbl_803B73C0

lbl_803B73BC:
	fmr      f31, f9

lbl_803B73C0:
	lfs      f5, lbl_8051F670@sda21(r2)
	fcmpo    cr0, f9, f5
	ble      lbl_803B73E8
	fmadds   f4, f8, f8, f6
	fadds    f6, f7, f4
	fcmpo    cr0, f6, f5
	ble      lbl_803B73EC
	frsqrte  f4, f6
	fmuls    f6, f4, f6
	b        lbl_803B73EC

lbl_803B73E8:
	fmr      f6, f5

lbl_803B73EC:
	lfs      f4, lbl_8051F670@sda21(r2)
	fcmpo    cr0, f6, f4
	ble      lbl_803B740C
	lfs      f4, lbl_8051F67C@sda21(r2)
	fdivs    f4, f4, f6
	fmuls    f8, f8, f4
	fmuls    f0, f0, f4
	fmuls    f1, f1, f4

lbl_803B740C:
	lfs      f5, lbl_8051F670@sda21(r2)
	addi     r3, r1, 8
	lfs      f6, lbl_8051F67C@sda21(r2)
	addi     r4, r31, 0x68
	fmuls    f9, f5, f0
	stfs     f8, 0x10(r1)
	fmuls    f4, f5, f1
	addi     r5, r31, 0xa4
	stfs     f10, 0x14(r1)
	fnmsubs  f7, f6, f8, f9
	fmsubs   f6, f6, f1, f9
	stfs     f0, 0x20(r1)
	fmsubs   f9, f5, f8, f4
	fmuls    f4, f8, f7
	stfs     f3, 0x24(r1)
	fmuls    f3, f0, f6
	fmuls    f5, f1, f9
	stfs     f6, 8(r1)
	fmsubs   f4, f1, f6, f4
	fmsubs   f3, f8, f9, f3
	stfs     f9, 0x18(r1)
	fmsubs   f0, f0, f7, f5
	stfs     f4, 0x1c(r1)
	stfs     f0, 0xc(r1)
	stfs     f7, 0x28(r1)
	stfs     f3, 0x2c(r1)
	stfs     f1, 0x30(r1)
	stfs     f2, 0x34(r1)
	bl       "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
	lfs      f0, lbl_8051F6AC@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_803B7490
	fmr      f31, f0

lbl_803B7490:
	lfs      f0, lbl_8051F6B0@sda21(r2)
	fdivs    f0, f31, f0
	stfs     f0, 0x98(r31)
	stfs     f0, 0x9c(r31)
	stfs     f0, 0xa0(r31)
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B74C4
 * Size:	00010C
 */
void createSimpleDead(Vector3f& pos, long type)
{
	P2ASSERTLINE(618, pkEffectMgr);
	switch (type) {
	case Game::Bulbmin:
		TEnemyDead_ArgScale efx;
		ArgScale arg(pos, 0.5f);
		efx.create(&arg);
		break;
	default:
		pkEffectMgr->createS_Dead(pos, type);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void createSimpleAttack(Vector3f&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void createSimpleAttackDp(Vector3f&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void createSimpleKanden(Vector3f&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B75D0
 * Size:	00005C
 */
void createSimpleChinka(Vector3f& pos)
{
	P2ASSERTLINE(656, pkEffectMgr);
	pkEffectMgr->createS_Chinka(pos);
}

/*
 * --INFO--
 * Address:	803B762C
 * Size:	00005C
 */
void createSimpleGedoku(Vector3f& pos)
{
	P2ASSERTLINE(662, pkEffectMgr);
	pkEffectMgr->createS_Gedoku(pos);
}

/*
 * --INFO--
 * Address:	803B7688
 * Size:	000098
 */
void createSimpleBlackDrop(Vector3f& pos)
{
	Arg arg(pos);
	TPkBlackDrop efx;
	efx.create(&arg);
}

/*
 * --INFO--
 * Address:	803B7720
 * Size:	00008C
 */
void createSimpleGate1Attack(Vector3f& pos)
{
	Arg arg(pos);
	TGate1Attack efx;
	efx.create(&arg);
}

/*
 * --INFO--
 * Address:	803B77AC
 * Size:	00008C
 */
void createSimplePkAp(Vector3f& pos)
{
	Arg arg(pos);
	TPkAp efx;
	efx.create(&arg);
}

/*
 * --INFO--
 * Address:	803B7838
 * Size:	00005C
 */
void createSimpleWaterOff(Vector3f& pos)
{
	P2ASSERTLINE(689, pkEffectMgr);
	pkEffectMgr->createS_WaterOff(pos);
}

/*
 * --INFO--
 * Address:	803B7894
 * Size:	00005C
 */
void createSimpleDive(Vector3f& pos)
{
	P2ASSERTLINE(695, pkEffectMgr);
	pkEffectMgr->createS_Dive(pos);
}

/*
 * --INFO--
 * Address:	803B78F0
 * Size:	000098
 */
void createSimpleChiru(Vector3f& pos, long type)
{
	P2ASSERTLINE(701, pkEffectMgr);
	switch (type) {
	case Game::Blue:
	case Game::Red:
	case Game::Yellow:
		pkEffectMgr->createS_Chiru(pos);
		break;
	case Game::Purple:
	case Game::White:
		pkEffectMgr->createS_ChiruRed(pos);
		break;
	}
}

/*
 * --INFO--
 * Address:	803B7988
 * Size:	00005C
 */
void createSimpleInattack(Vector3f& pos)
{
	P2ASSERTLINE(717, pkEffectMgr);
	pkEffectMgr->createS_Inattack(pos);
}

/*
 * --INFO--
 * Address:	803B79E4
 * Size:	000080
 */
void createSimpleInstick(Vector3f& pos)
{
	Arg arg(pos);
	TPkInstick efx;
	efx.create(&arg);
}

/*
 * --INFO--
 * Address:	803B7A64
 * Size:	00008C
 */
void createSimpleGate2Attack(Vector3f& pos)
{
	Arg arg(pos);
	TGate2Attack efx;
	efx.create(&arg);
}

/*
 * --INFO--
 * Address:	803B7AF0
 * Size:	000080
 */
void createSimpleBridgeAttack(Vector3f& pos)
{
	Arg arg(pos);
	TBridgeAttack efx;
	efx.create(&arg);
}

/*
 * --INFO--
 * Address:	803B7B70
 * Size:	00005C
 */
void createSimpleWalksmoke(Vector3f& pos)
{
	P2ASSERTLINE(744, pkEffectMgr);
	pkEffectMgr->createS_Walksmoke(pos);
}

/*
 * --INFO--
 * Address:	803B7BCC
 * Size:	00008C
 */
void createSimpleGlow2(Vector3f& pos)
{
	TPkGlow2 efx;
	Arg arg(pos);
	efx.create(&arg);
}

/*
 * --INFO--
 * Address:	803B7C58
 * Size:	000080
 */
void createSimpleStoneAttack(Vector3f& pos)
{
	TStoneAttack efx;
	Arg arg(pos);
	efx.create(&arg);
}

/*
 * --INFO--
 * Address:	803B7CD8
 * Size:	00005C
 */
void createSimpleDig(Vector3f& pos)
{
	P2ASSERTLINE(764, pkEffectMgr);
	pkEffectMgr->createS_Dig(pos);
}

/*
 * --INFO--
 * Address:	803B7D34
 * Size:	00005C
 */
void createSimpleGate3Attack(Vector3f& pos)
{
	P2ASSERTLINE(770, pkEffectMgr);
	pkEffectMgr->createS_Gate3Attack(pos);
}

/*
 * --INFO--
 * Address:	803B7D90
 * Size:	00005C
 */
void createSimpleWalkwater(Vector3f& pos)
{
	P2ASSERTLINE(776, pkEffectMgr);
	pkEffectMgr->createS_Walkwater(pos);
}

/*
 * --INFO--
 * Address:	803B7DEC
 * Size:	000038
 */
void TNaviEffect::init(Vector3f* pos, Mtx mtx, Vector3f* naviPos, enumNaviType naviType)
{
	mPos       = pos;
	mBeaconMtx = (Matrixf*)mtx;
	mNaviPos   = naviPos;
	mHeight    = nullptr;
	setNaviType(naviType);
}

/*
 * --INFO--
 * Address:	803B7E24
 * Size:	0000D8
 */
void TNaviEffect::setNaviType(enumNaviType type)
{
	switch (type) {
	case NAVITYPE_Olimar:
		mCursor.mContextNum           = WHISTLE_CONTEXT_NUM;
		mCursor.mAngleSpeed           = TCursor::kAngleSpeed;
		mCursor.mOneEmitter.mEffectID = PID_Cursor_Olimar;
		mLight.mNaviType              = 0;
		mLightAct.mNaviType           = 0;
		break;
	case NAVITYPE_Louie:
		mCursor.mContextNum           = WHISTLE_CONTEXT_NUM;
		mCursor.mAngleSpeed           = TCursor::kAngleSpeed;
		mCursor.mOneEmitter.mEffectID = PID_Cursor_Louie;
		mLight.mNaviType              = 1;
		mLightAct.mNaviType           = 1;
		break;
	case NAVITYPE_President:
		mCursor.mContextNum           = WHISTLE_CONTEXT_NUM;
		mCursor.mAngleSpeed           = TCursor::kAngleSpeed;
		mCursor.mOneEmitter.mEffectID = PID_Cursor_President;
		mLight.mNaviType              = 0;
		mLightAct.mNaviType           = 0;
		break;
	case 3:
		mCursor.mContextNum           = WHISTLE_CONTEXT_NUM;
		mCursor.mAngleSpeed           = TCursor::kAngleSpeed;
		mCursor.mOneEmitter.mEffectID = PID_Cursor_Louie;
		mLight.mNaviType              = 1;
		mLightAct.mNaviType           = 1;
		break;
	}
	/*
	cmpwi    r4, 2
	beq      lbl_803B7EA4
	bge      lbl_803B7E40
	cmpwi    r4, 0
	beq      lbl_803B7E4C
	bge      lbl_803B7E78
	blr

lbl_803B7E40:
	cmpwi    r4, 4
	bgelr
	b        lbl_803B7ED0

lbl_803B7E4C:
	li       r0, 0x10
	cmpwi    r0, 0
	stw      r0, 0xe4(r3)
	li       r4, 0x19
	li       r0, 0
	lfs      f0, kAngleSpeed__Q23efx7TCursor@sda21(r13)
	stfs     f0, 0x338(r3)
	sth      r4, 0xbc(r3)
	stw      r0, 0x368(r3)
	stw      r0, 0x398(r3)
	blr

lbl_803B7E78:
	li       r0, 0x10
	cmpwi    r0, 0
	stw      r0, 0xe4(r3)
	li       r4, 0x19
	li       r0, 1
	lfs      f0, kAngleSpeed__Q23efx7TCursor@sda21(r13)
	stfs     f0, 0x338(r3)
	sth      r4, 0xbc(r3)
	stw      r0, 0x368(r3)
	stw      r0, 0x398(r3)
	blr

lbl_803B7EA4:
	li       r0, 0x10
	cmpwi    r0, 0
	stw      r0, 0xe4(r3)
	li       r4, 0x1b
	li       r0, 0
	lfs      f0, kAngleSpeed__Q23efx7TCursor@sda21(r13)
	stfs     f0, 0x338(r3)
	sth      r4, 0xbc(r3)
	stw      r0, 0x368(r3)
	stw      r0, 0x398(r3)
	blr

lbl_803B7ED0:
	li       r0, 0x10
	cmpwi    r0, 0
	stw      r0, 0xe4(r3)
	li       r4, 0x1a
	li       r0, 1
	lfs      f0, kAngleSpeed__Q23efx7TCursor@sda21(r13)
	stfs     f0, 0x338(r3)
	sth      r4, 0xbc(r3)
	stw      r0, 0x368(r3)
	stw      r0, 0x398(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B7EFC
 * Size:	000020
 */
void TNaviEffect::update() { updateHamon_(); }

/*
 * --INFO--
 * Address:	803B7F1C
 * Size:	0000D8
 */
void TNaviEffect::updateHamon_()
{
	if (mHeight && mPos && isFlag(NAVIFX_InWater)) {
		mHamonPosition.x = mPos->x;
		mHamonPosition.y = *mHeight;
		mHamonPosition.z = mPos->z;
	} else {
		return;
	}

	f32 diff = *mHeight - mPos->y;
	if (diff < 12.0f) {
		createHamonA_(&mHamonPosition);
	} else {
		killHamonA_();
	}

	if (diff < 22.0f) {
		createHamonB_(&mHamonPosition);
	} else {
		killHamonB_();
	}
}

/*
 * --INFO--
 * Address:	803B7FF4
 * Size:	000060
 */
void TNaviEffect::createHamonA_(Vector3f* pos)
{
	P2ASSERTLINE(863, pos);
	mHamonA->create(pos);
}

/*
 * --INFO--
 * Address:	803B8054
 * Size:	000024
 */
void TNaviEffect::killHamonA_() { mHamonA->kill(); }

/*
 * --INFO--
 * Address:	803B8078
 * Size:	000060
 */
void TNaviEffect::createHamonB_(Vector3f* pos)
{
	P2ASSERTLINE(874, pos);
	mHamonB->create(pos);
}

/*
 * --INFO--
 * Address:	803B80D8
 * Size:	000024
 */
void TNaviEffect::killHamonB_() { mHamonB->kill(); }

/*
 * --INFO--
 * Address:	803B80FC
 * Size:	000078
 */
void TNaviEffect::createLight_(Mtx mtx)
{
	P2ASSERTLINE(886, mtx);
	mLight.setMtxptr(mtx);
	mLight.create(nullptr);
}

/*
 * --INFO--
 * Address:	803B8174
 * Size:	00002C
 */
void TNaviEffect::killLight_() { mLight.fade(); }

/*
 * --INFO--
 * Address:	803B81A0
 * Size:	000078
 */
void TNaviEffect::createLightAct_(Mtx mtx)
{
	P2ASSERTLINE(899, mtx);
	mLightAct.setMtxptr(mtx);
	mLightAct.create(nullptr);
}

/*
 * --INFO--
 * Address:	803B8218
 * Size:	00002C
 */
void TNaviEffect::killLightAct_() { mLightAct.fade(); }

/*
 * --INFO--
 * Address:	803B8244
 * Size:	000064
 */
void TNaviEffect::createCursor_(Vector3f pos, f32 scale)
{
	ArgCursor arg(pos, scale);
	mCursor.create(&arg);
}

/*
 * --INFO--
 * Address:	803B82A8
 * Size:	00002C
 */
void TNaviEffect::killCursor_() { mCursor.fade(); }

/*
 * --INFO--
 * Address:	803B82D4
 * Size:	000284
 */
void TNaviEffect::updateCursor_(Vector3f pos, f32 scale)
{
	ArgCursor arg(pos, scale);
	mCursor.update(&arg);
}

/*
 * --INFO--
 * Address:	803B8558
 * Size:	0000B4
 */
void TNaviEffect::createFueact_(Mtx mtx, Vector3f* pos)
{
	P2ASSERTLINE(930, mtx);
	P2ASSERTLINE(931, pos);

	mFueact.mCircle.mMtx = (Matrixf*)mtx;
	mFueact.mCircle.mPos = pos;
	mFueact.mBiri1.mMtx  = (Matrixf*)mtx;
	mFueact.mBiri1.mPos  = (JGeometry::TVec3f*)pos;
	mFueact.mBiri2.mMtx  = (Matrixf*)mtx;
	mFueact.mBiri2.mPos  = (JGeometry::TVec3f*)pos;
	mFueact.create(nullptr);
}

/*
 * --INFO--
 * Address:	803B860C
 * Size:	00002C
 */
void TNaviEffect::killFueact_() { mFueact.fade(); }

/*
 * --INFO--
 * Address:	803B8638
 * Size:	000078
 */
void TNaviEffect::createOrimadamage_(Mtx mtx)
{
	P2ASSERTLINE(945, mtx);
	mDamage.setMtxptr(mtx);
	mDamage.create(nullptr);
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void TNaviEffect::killOrimadamage_()
{
	mDamage.fade();
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B86B0
 * Size:	00003C
 */
void TPkEffect::init()
{
	mPikiColor     = -1;
	_0C            = nullptr;
	mHamonPosPtr   = nullptr;
	_14            = nullptr;
	_18            = nullptr;
	_1C            = nullptr;
	mHeight        = nullptr;
	mMoeSmokeTimer = 0;
	mFlags.clear();
}

/*
 * --INFO--
 * Address:	803B86EC
 * Size:	000034
 */
void TPkEffect::update()
{
	updateMoeSmoke_();
	updateHamon_();
}

/*
 * --INFO--
 * Address:	803B8720
 * Size:	000038
 */
void TPkEffect::updateMoeSmoke_()
{
	if (!mMoeSmokeTimer) {
		killMoeSmoke_();
	} else {
		mMoeSmokeTimer--;
	}
}

/*
 * --INFO--
 * Address:	803B8758
 * Size:	0000D0
 */
void TPkEffect::updateHamon_()
{
	if (mHeight && mHamonPosPtr && isFlag(NAVIFX_Unk6)) {
		mHamonPosition = Vector3f(mHamonPosPtr->x, *mHeight, mHamonPosPtr->z);
	} else {
		return;
	}

	f32 diff = *mHeight - mHamonPosPtr->y;
	if (diff < 12.0f) {
		createHamonA_(&mHamonPosition);
	} else {
		killHamonA_();
	}

	if (diff < 22.0f) {
		createHamonB_(&mHamonPosition);
	} else {
		killHamonB_();
	}
}

/*
 * --INFO--
 * Address:	803B8828
 * Size:	000064
 */
void TPkEffect::createKourin_(Vector3f* pos)
{
	P2ASSERTLINE(1019, pos);
	mOeKourin.create(pos, mPikiColor);
}

/*
 * --INFO--
 * Address:	803B888C
 * Size:	000024
 */
void TPkEffect::killKourin_() { mOeKourin.kill(); }

/*
 * --INFO--
 * Address:	803B88B0
 * Size:	000060
 */
void TPkEffect::createDoping_(Vector3f* pos)
{
	P2ASSERTLINE(1033, pos);
	mOeDoping.create(pos);
}

/*
 * --INFO--
 * Address:	803B8910
 * Size:	000024
 */
void TPkEffect::killDoping_() { mOeDoping.kill(); }

/*
 * --INFO--
 * Address:	803B8934
 * Size:	0000F8
 */
void TPkEffect::createNage_(Vector3f* pos, Mtx mtx)
{
	P2ASSERTLINE(1046, pos);
	mOeNagekira.create(pos);
	P2ASSERTLINE(1049, mtx);
	ArgType arg(mPikiColor);
	arg.mPosition  = Vector3f::zero;
	mNageBlur.mMtx = (Matrixf*)mtx;
	mNageBlur.create(&arg);
}

/*
 * --INFO--
 * Address:	803B8A2C
 * Size:	000044
 */
void TPkEffect::killNage_()
{
	mOeNagekira.kill();
	mNageBlur.fade();
}

/*
 * --INFO--
 * Address:	803B8A70
 * Size:	00007C
 */
void TPkEffect::createMoe_(Vector3f* pos)
{
	P2ASSERTLINE(1066, pos);
	mOeMoeBC.create(pos);
	mMoeA.mPosition = pos;
	mMoeA.create(nullptr);
}

/*
 * --INFO--
 * Address:	803B8AEC
 * Size:	000044
 */
void TPkEffect::killMoe_()
{
	mOeMoeBC.kill();
	mMoeA.fade();
}

/*
 * --INFO--
 * Address:	803B8B30
 * Size:	000060
 */
void TPkEffect::createChudoku_(Vector3f* pos)
{
	P2ASSERTLINE(1083, pos);
	mOeChudoku.create(pos);
}

/*
 * --INFO--
 * Address:	803B8B90
 * Size:	000024
 */
void TPkEffect::killChudoku_() { mOeChudoku.kill(); }

/*
 * --INFO--
 * Address:	803B8BB4
 * Size:	000060
 */
void TPkEffect::createMoeSmoke_(Vector3f* pos)
{
	P2ASSERTLINE(1097, pos);
	mOeMoeSmoke.create(pos);
}

/*
 * --INFO--
 * Address:	803B8C14
 * Size:	000024
 */
void TPkEffect::killMoeSmoke_() { mOeMoeSmoke.kill(); }

/*
 * --INFO--
 * Address:	803B8C38
 * Size:	000070
 */
void TPkEffect::createBlackDown_(Vector3f* pos)
{
	P2ASSERTLINE(1111, pos);
	mBlackDown.mPosition = pos;
	mBlackDown.create(nullptr);
}

/*
 * --INFO--
 * Address:	803B8CA8
 * Size:	00002C
 */
void TPkEffect::killBlackDown_() { mBlackDown.fade(); }

/*
 * --INFO--
 * Address:	803B8CD4
 * Size:	000060
 */
void TPkEffect::createWater_(Vector3f* pos)
{
	P2ASSERTLINE(1125, pos);
	mOeWater.create(pos);
}

/*
 * --INFO--
 * Address:	803B8D34
 * Size:	000024
 */
void TPkEffect::killWater_() { mOeWater.kill(); }

/*
 * --INFO--
 * Address:	803B8D58
 * Size:	000060
 */
void TPkEffect::createHamonA_(Vector3f* pos)
{
	P2ASSERTLINE(1137, pos);
	mOeHamonA.create(pos);
}

/*
 * --INFO--
 * Address:	803B8DB8
 * Size:	000024
 */
void TPkEffect::killHamonA_() { mOeHamonA.kill(); }

/*
 * --INFO--
 * Address:	803B8DDC
 * Size:	000060
 */
void TPkEffect::createHamonB_(Vector3f* pos)
{
	P2ASSERTLINE(1148, pos);
	mOeHamonB.create(pos);
}

/*
 * --INFO--
 * Address:	803B8E3C
 * Size:	000024
 */
void TPkEffect::killHamonB_() { mOeHamonB.kill(); }

/*
 * --INFO--
 * Address:	803B8E60
 * Size:	000020
 */
void TPkEffectTane::init()
{
	mPikiColor = -1;
	mPos       = nullptr;
	_0C        = nullptr;
	_08        = nullptr;
	_10        = nullptr;
}

/*
 * --INFO--
 * Address:	803B8E80
 * Size:	000060
 */
void TPkEffectTane::createTanekira_(Vector3f* pos)
{
	P2ASSERTLINE(1174, pos);
	mOeKira.create(pos);
}

/*
 * --INFO--
 * Address:	803B8EE0
 * Size:	000024
 */
void TPkEffectTane::killTanekira_() { mOeKira.kill(); }

/*
 * --INFO--
 * Address:	803B8F04
 * Size:	000064
 */
void TPkEffectTane::createKourin_(Vector3f* pos)
{
	P2ASSERTLINE(1189, pos);
	mOeKourin.create(pos, mPikiColor);
}

/*
 * --INFO--
 * Address:	803B8F68
 * Size:	000024
 */
void TPkEffectTane::killKourin_() { mOeKourin.kill(); }

/*
 * --INFO--
 * Address:	803B8F8C
 * Size:	000070
 */
void TPkEffectTane::createGlow1_(Vector3f* pos)
{
	P2ASSERTLINE(1202, pos);
	mGlow.mPosition = pos;
	mGlow.create(nullptr);
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void TPkEffectTane::killGlow1_()
{
	mGlow.fade();
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B8FFC
 * Size:	000004
 */
void TFueactCircle::executeAfter(JPABaseEmitter*) { }

/*
 * --INFO--
 * Address:	803B9000
 * Size:	00002C
 */
// void TCursor::forceKill() { mOneEmitter.forceKill(); }

/*
 * --INFO--
 * Address:	........
 * Size:	000104
 */
TTestYodareGen::~TTestYodareGen()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void TTestYodareGen::forceKill()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void TTestYodareGen::fade()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
TTestYodareHit::~TTestYodareHit()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
TParticleCallBack_Yodare::~TParticleCallBack_Yodare()
{
	// UNUSED FUNCTION
}

} // namespace efx
