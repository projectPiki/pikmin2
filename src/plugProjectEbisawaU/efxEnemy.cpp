#include "efx/Arg.h"
#include "efx/TSyncGroup.h"
#include "types.h"
#include "efx/TBaba.h"
#include "efx/TChibi.h"
#include "efx/TChou.h"
#include "efx/TDenki.h"
#include "efx/TDnkms.h"
#include "efx/TGasuHiba.h"
#include "efx/THebi.h"
#include "efx/THibaFire.h"
#include "efx/TImo.h"
#include "efx/TJgm.h"
#include "efx/TKechappy.h"
#include "efx/TKogane.h"
#include "efx/TKurage.h"
#include "efx/TNewkurage.h"
#include "efx/TOta.h"
#include "efx/TPan.h"
#include "efx/TQuri.h"
#include "efx/TTank.h"
#include "efx/TUmi.h"
#include "efx/TUjinko.h"
#include "efx/TYaki.h"
#include "JSystem/JParticle/JPAMath.h"

namespace efx {

static void _Print(char* format, ...)
{
	OSReport(format, __FILE__);
}

/**
 * @note Address: 0x803B2D84
 * @note Size: 0x124
 */
bool TChibiHit::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", static_cast<ArgScale*>(arg)->getName()) == 0;
	P2ASSERTLINE(23, nameCheck);
	f32 scale = static_cast<ArgScale*>(arg)->mScale;
	if (TSimple4::create(arg)) {
		vf32 test[3];
		test[0] = scale;
		mEmitters[0]->setScale(scale);
		test[1] = scale;
		mEmitters[1]->setScale(scale);
		test[2] = scale;
		mEmitters[2]->setScale(scale);
		mEmitters[3]->setScale(scale);
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803B2EA8
 * @note Size: 0xE0
 */
bool TChouDown::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgChou", static_cast<ArgChou*>(arg)->getName()) == 0;
	P2ASSERTLINE(43, nameCheck);
	int type = static_cast<ArgChou*>(arg)->mType;

	switch (type) {
	case 0:
		mEffectID = PID_ChouDown_3;
		break;
	case 1:
		mEffectID = PID_ChouDown_2;
		break;
	case 2:
		mEffectID = PID_ChouDown_1;
		break;
	}
	return (u8)TSync::create(arg);
}

/**
 * @note Address: 0x803B2F88
 * @note Size: 0x44
 */
void TUmiHamon::setGlobalScale(f32 scale)
{
	for (int i = 0; i < 2; i++) {
		if (mItems[i].mEmitter) {
			mItems[i].mEmitter->setScale(scale);
		}
	}
}

/**
 * @note Address: 0x803B2FCC
 * @note Size: 0x100
 */
bool TUmiFlick::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", static_cast<ArgScale*>(arg)->getName()) == 0;
	P2ASSERTLINE(80, nameCheck);
	f32 scale = static_cast<ArgScale*>(arg)->mScale;
	if (TSimple3::create(arg)) {
		for (int i = 0; i < 3; i++) {
			mEmitters[i]->setScale(scale);
		}
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803B30CC
 * @note Size: 0xD0
 */
bool TUmiAttack::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", static_cast<ArgScale*>(arg)->getName()) == 0;
	P2ASSERTLINE(97, nameCheck);
	f32 scale = static_cast<ArgScale*>(arg)->mScale;
	if (TSimpleMtx1::create(arg)) {
		mEmitters[0]->setScale(scale);
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803B319C
 * @note Size: 0x24
 */
void TUmiEat::setGlobalScale(f32 scale)
{
	if (mEmitter) {
		mEmitter->setScale(scale);
	}
}

/**
 * @note Address: 0x803B31C0
 * @note Size: 0x24
 */
void TUmiDeadawa::setGlobalScale(f32 scale)
{
	if (mEmitter) {
		mEmitter->setScale(scale);
	}
}

/**
 * @note Address: 0x803B31E4
 * @note Size: 0xD0
 */
bool TUmiDeadmelt::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", static_cast<ArgScale*>(arg)->getName()) == 0;
	P2ASSERTLINE(134, nameCheck);
	f32 scale = static_cast<ArgScale*>(arg)->mScale;
	if (TSimple1::create(arg)) {
		mEmitters[0]->setScale(scale);
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803B32B4
 * @note Size: 0xE8
 */
bool TJgmAttack::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", static_cast<ArgScale*>(arg)->getName()) == 0;
	P2ASSERTLINE(153, nameCheck);
	f32 scale = static_cast<ArgScale*>(arg)->mScale;
	if (TSyncGroup2<TChasePos>::create(arg)) {
		for (int i = 0; i < 2; i++) {
			mItems[i].mEmitter->setScale(scale);
		}
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803B339C
 * @note Size: 0x100
 */
bool TJgmAttackW::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", static_cast<ArgScale*>(arg)->getName()) == 0;
	P2ASSERTLINE(169, nameCheck);
	f32 scale = static_cast<ArgScale*>(arg)->mScale;
	if (TSyncGroup3<TChasePosYRot>::create(arg)) {
		for (int i = 0; i < 3; i++) {
			mItems[i].mEmitter->setScale(scale);
		}
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803B349C
 * @note Size: 0xD0
 */
bool TJgmBack::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", static_cast<ArgScale*>(arg)->getName()) == 0;
	P2ASSERTLINE(185, nameCheck);
	f32 scale = static_cast<ArgScale*>(arg)->mScale;
	if (TSync::create(arg)) {
		mEmitter->setScale(scale);
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803B356C
 * @note Size: 0xE8
 */
bool TJgmBackW::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", static_cast<ArgScale*>(arg)->getName()) == 0;
	P2ASSERTLINE(199, nameCheck);
	f32 scale = static_cast<ArgScale*>(arg)->mScale;
	if (TSyncGroup2<TChasePosYRot>::create(arg)) {
		for (int i = 0; i < 2; i++) {
			mItems[i].mEmitter->setScale(scale);
		}
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803B3654
 * @note Size: 0xC0
 */
bool TImoEat::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgImoEat", static_cast<ArgImoEat*>(arg)->getName()) == 0;
	P2ASSERTLINE(217, nameCheck);
	ArgImoEat* sarg = static_cast<ArgImoEat*>(arg);

	switch (sarg->mType) {
	case 0:
		mEffectID = PID_ImoEat_2;
		break;
	case 1:
		mEffectID = PID_ImoEat_1;
		break;
	}
	return TSync::create(sarg);
}

/**
 * @note Address: 0x803B3714
 * @note Size: 0x74
 */
bool TUjinkoHd_Imo::create(Arg* arg)
{
	if (TSimpleMtx2::create(arg)) {
		for (int i = 0; i < 2; i++) {
			mEmitters[i]->setScale(1.3f);
		}
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803B3788
 * @note Size: 0x74
 */
bool TUjinkoAp_Imo::create(Arg* arg)
{
	if (TSimpleMtx2::create(arg)) {
		for (int i = 0; i < 2; i++) {
			mEmitters[i]->setScale(1.3f);
		}
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803B37FC
 * @note Size: 0xD0
 */
bool TImoSmoke::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", static_cast<ArgScale*>(arg)->getName()) == 0;
	P2ASSERTLINE(263, nameCheck);
	f32 scale = static_cast<ArgScale*>(arg)->mScale;
	if (TSync::create(arg)) {
		mEmitter->setScale(scale);
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803B38CC
 * @note Size: 0xD0
 */
bool TOtaPartsoff::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", static_cast<ArgScale*>(arg)->getName()) == 0;
	P2ASSERTLINE(279, nameCheck);
	f32 scale = static_cast<ArgScale*>(arg)->mScale;
	if (TSimple1::create(arg)) {
		mEmitters[0]->setScale(scale);
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803B399C
 * @note Size: 0x40
 */
void TNewkurageSui::setGlobalTranslation(Vector3f& pos)
{
	f32 x = pos.x;
	f32 y = pos.y;
	f32 z = pos.z;
	for (int i = 0; i < 2; i++) {
		if (mItems[i].mEmitter)
			mItems[i].mEmitter->setTranslation(x, y, z);
	}
}

/**
 * @note Address: 0x803B39DC
 * @note Size: 0x34
 */
void TNewkurageHire::setLifeTime(s16 time)
{
	for (int i = 0; i < 3; i++) {
		if (mItems[i].mEmitter)
			mItems[i].mEmitter->mLifeTime = time;
	}
}

/**
 * @note Address: 0x803B3A10
 * @note Size: 0x40
 */
void TKurageSui::setGlobalTranslation(Vector3f& pos)
{
	f32 x = pos.x;
	f32 y = pos.y;
	f32 z = pos.z;
	for (int i = 0; i < 2; i++) {
		if (mItems[i].mEmitter)
			mItems[i].mEmitter->setTranslation(x, y, z);
	}
}

/**
 * @note Address: 0x803B3A50
 * @note Size: 0x34
 */
void TKurageHire::setLifeTime(s16 time)
{
	for (int i = 0; i < 3; i++) {
		if (mItems[i].mEmitter)
			mItems[i].mEmitter->mLifeTime = time;
	}
}

/**
 * @note Address: 0x803B3A84
 * @note Size: 0x24
 */
void TQuriGlow::setGlobalScale(f32 scale)
{
	if (mEmitter) {
		mEmitter->setScale(scale);
	}
}

/**
 * @note Address: 0x803B3AA8
 * @note Size: 0xA4
 */
bool THebiAphd_base::create(Arg* arg)
{
	P2ASSERTLINE(358, arg != nullptr);
	if (TSimple4::create(arg)) {
		for (int i = 0; i < 4; i++) {
			mEmitters[i]->mMaxFrame = mMaxDuration;
		}
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803B3B4C
 * @note Size: 0x34
 */
void TKechappyTest::setGlobalAlpha(u8 alpha)
{
	for (int i = 0; i < 3; i++) {
		if (mItems[i].mEmitter) {
			mItems[i].mEmitter->mGlobalPrmClr.a = alpha;
		}
	}
}

/**
 * @note Address: 0x803B3B80
 * @note Size: 0x24
 */
void TKechappyTest::setGlobalParticleScale(f32 scale)
{
	for (int i = 1; i < 3; i++) {
		if (mItems[i].mEmitter) {
			mItems[i].mEmitter->mGlobalPScl.y = scale;
		}
	}
}

/**
 * @note Address: 0x803B3BA4
 * @note Size: 0x24
 */
void TKechappyTest::setAwayFromCenterSpeed(f32 speed)
{
	for (int i = 1; i < 3; i++) {
		if (mItems[i].mEmitter) {
			mItems[i].mEmitter->mAwayFromCenterSpeed = speed;
		}
	}
}

/**
 * @note Address: 0x803B3BC8
 * @note Size: 0x24
 */
void TKechappyTest::setSpread(f32 spread)
{
	for (int i = 1; i < 3; i++) {
		if (mItems[i].mEmitter) {
			mItems[i].mEmitter->mSpread = spread;
		}
	}
}

/**
 * @note Address: 0x803B3BEC
 * @note Size: 0x4C
 */
void TKechappyTest::setGlobalDynamicsScale(Vector3f& scale)
{
	for (int i = 1; i < 3; i++) {
		if (mItems[i].mEmitter) {
			mItems[i].mEmitter->setScaleOnly(scale);
		}
	}
}

/**
 * @note Address: 0x803B3C38
 * @note Size: 0xDC
 */
void TYakiBody::setRateLOD(int id)
{
	f32 lods[4][3] = {
		{ 0.2f, 0.2f, 0.2f },
		{ 1.0f, 1.0f, 1.0f },
		{ 0.082f, 0.05f, 0.0f },
		{ 2.3f, 1.7f, 0.0f },
	};

	for (int i = 0; i < 4; i++) {
		JPABaseEmitter* emitter = mItems[i].getEmitter();
		if (emitter) {
			emitter->setRate(lods[i][id]);
		}
	}
}

/**
 * @note Address: 0x803B3D14
 * @note Size: 0xD0
 */
bool TPanApp::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", static_cast<ArgScale*>(arg)->getName()) == 0;
	P2ASSERTLINE(456, nameCheck);
	f32 scale = static_cast<ArgScale*>(arg)->mScale;
	if (TSimple1::create(arg)) {
		mEmitters[0]->setScale(scale);
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803B3DE4
 * @note Size: 0xD0
 */
bool TPanHide::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", static_cast<ArgScale*>(arg)->getName()) == 0;
	P2ASSERTLINE(473, nameCheck);
	f32 scale = static_cast<ArgScale*>(arg)->mScale;
	if (TSync::create(arg)) {
		mEmitter->setScale(scale);
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803B3EB4
 * @note Size: 0xD0
 */
bool TPanSmoke::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", static_cast<ArgScale*>(arg)->getName()) == 0;
	P2ASSERTLINE(489, nameCheck);
	f32 scale = static_cast<ArgScale*>(arg)->mScale;
	if (TSync::create(arg)) {
		mEmitter->setScale(scale);
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803B3F84
 * @note Size: 0xD0
 */
bool TBabaFly_ver01::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", static_cast<ArgScale*>(arg)->getName()) == 0;
	P2ASSERTLINE(506, nameCheck);
	f32 scale = static_cast<ArgScale*>(arg)->mScale;
	if (TSync::create(arg)) {
		mEmitter->setScale(scale);
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803B4054
 * @note Size: 0x184
 */
bool TBabaHe::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgRotY", static_cast<ArgRotY*>(arg)->getName()) == 0;
	P2ASSERTLINE(521, nameCheck);
	ArgRotY* sarg = static_cast<ArgRotY*>(arg);
	Matrixf mtx;
	Vector3f pos = arg->mPosition;
	PSMTXRotRad(mtx.mMatrix.mtxView, 'y', sarg->mFaceDir);
	mtx.setTranslation(pos);

	if (TSimple2::create(arg)) {
		for (int i = 0; i < 2; i++) {
			mEmitters[i]->setGlobalRTMatrix(mtx.mMatrix.mtxView);
		}

		Vector3f forward;
		mtx.getColumn(2, forward);
		forward *= -35.0f;
		forward = forward + pos;

		mEmitters[1]->setGlobalTranslation((JGeometry::TVec3f&)forward);

		return true;
	}
	return false;
}

/**
 * @note Address: 0x803B41D8
 * @note Size: 0xE8
 */
bool TKoganeHit::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", static_cast<ArgScale*>(arg)->getName()) == 0;
	P2ASSERTLINE(546, nameCheck);
	f32 scale = static_cast<ArgScale*>(arg)->mScale;
	if (TSimple2::create(arg)) {
		for (int i = 0; i < 2; i++) {
			mEmitters[i]->setScale(scale);
		}
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803B42C0
 * @note Size: 0xE8
 */
bool TKoganeDive::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", static_cast<ArgScale*>(arg)->getName()) == 0;
	P2ASSERTLINE(562, nameCheck);
	f32 scale = static_cast<ArgScale*>(arg)->mScale;
	if (TSimple2::create(arg)) {
		for (int i = 0; i < 2; i++) {
			mEmitters[i]->setScale(scale);
		}
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803B43A8
 * @note Size: 0x4
 */
void TParticleCallBack_TankFire::init(JPABaseEmitter*, JPABaseParticle*)
{
}

/**
 * @note Address: 0x803B43AC
 * @note Size: 0x144
 */
void TParticleCallBack_TankFire::execute(JPABaseEmitter* emit, JPABaseParticle* particle)
{
	// shame on whoever for not knowing the funcs get called in right to left order -Drought
	Vector3f tgt = particle->getCalcCurrentPosition(emit);

	if (tgt.distance(emit->mGlobalTrs) > mMaxDistance) {
		particle->mFlags |= 2;

		TTankFireHit* hit = mEfxHit;
		if (hit && hit->mCurrPosIndex < hit->mPositionNum) {
			Vector3f* pos = &hit->mPositionList[hit->mCurrPosIndex];
			pos->set(tgt);
			hit->mCurrPosIndex++;
		}
	}
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r31, r5
	mr       r29, r3
	mr       r30, r4
	mr       r3, r31
	bl       getCalcCurrentPositionZ__15JPABaseParticleCFPC14JPABaseEmitter
	fmr      f30, f1
	mr       r3, r31
	mr       r4, r30
	bl       getCalcCurrentPositionY__15JPABaseParticleCFPC14JPABaseEmitter
	fmr      f31, f1
	mr       r3, r31
	mr       r4, r30
	bl       getCalcCurrentPositionX__15JPABaseParticleCFPC14JPABaseEmitter
	lfs      f0, 0xa4(r30)
	lfs      f2, 0xa8(r30)
	fsubs    f4, f0, f1
	lfs      f3, 0xac(r30)
	fsubs    f2, f2, f31
	lfs      f0, lbl_8051F638@sda21(r2)
	fsubs    f5, f3, f30
	fmuls    f3, f4, f4
	fmuls    f2, f2, f2
	fmuls    f4, f5, f5
	fadds    f2, f3, f2
	fadds    f4, f4, f2
	fcmpo    cr0, f4, f0
	cror     2, 0, 2
	bne      lbl_803B4448
	b        lbl_803B446C

lbl_803B4448:
	frsqrte  f5, f4
	lfs      f3, lbl_8051F63C@sda21(r2)
	lfs      f0, lbl_8051F640@sda21(r2)
	frsp     f5, f5
	fmuls    f2, f5, f5
	fmuls    f3, f3, f5
	fnmsubs  f0, f4, f2, f0
	fmuls    f0, f3, f0
	fmuls    f4, f4, f0

lbl_803B446C:
	lfs      f0, 4(r29)
	fcmpo    cr0, f4, f0
	ble      lbl_803B44C4
	lwz      r0, 0x7c(r31)
	ori      r0, r0, 2
	stw      r0, 0x7c(r31)
	lwz      r4, 8(r29)
	cmplwi   r4, 0
	beq      lbl_803B44C4
	lwz      r3, 0x14(r4)
	lwz      r0, 0x18(r4)
	cmpw     r3, r0
	bge      lbl_803B44C4
	mulli    r0, r3, 0xc
	lwz      r3, 0x10(r4)
	add      r3, r3, r0
	stfs     f1, 0(r3)
	stfs     f31, 4(r3)
	stfs     f30, 8(r3)
	lwz      r3, 0x14(r4)
	addi     r0, r3, 1
	stw      r0, 0x14(r4)

lbl_803B44C4:
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x44(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x803B44F0
 * @note Size: 0x90
 */
bool TTankFireABC::create(Arg* arg)
{
	mParticleCallBack.mEfxHit = &mEfxFireHit;
	mParticleCallBack.mEfxHit->create(nullptr);
	mParticleCallBack.mMaxDistance = 1000.0f;
	if (TSyncGroup3<TChaseMtx>::create(arg)) {
		for (int i = 0; i < 3; i++) {
			mItems[i].mEmitter->mParticleCallback = &mParticleCallBack;
		}
	}
	return true;
}

/**
 * @note Address: 0x803B4580
 * @note Size: 0x44
 */
bool TTankFireIND::create(Arg* arg)
{
	if (TSync::create(arg)) {
		mEmitter->mParticleCallback = &mParticleCallBack;
	}
	return true;
}

/**
 * @note Address: 0x803B45C4
 * @note Size: 0x84
 */
bool TTankFire::create(Arg* arg)
{
	bool ret = false;
	if (mEfxABC.create(arg) && mEfxIND.create(arg)) {
		ret = true;
	}
	return ret;
}

/**
 * @note Address: 0x803B4648
 * @note Size: 0x98
 */
bool TTankWat::create(Arg* arg)
{
	mParticleCallBack.mEfxHit = (TTankFireHit*)&mEfxHit;
	mParticleCallBack.mEfxHit->create(nullptr);
	mParticleCallBack.mMaxDistance = 1000.0f;
	if (TSyncGroup4<TChaseMtx>::create(arg)) {
		for (int i = 0; i < 4; i++) {
			mItems[i].mEmitter->mParticleCallback = &mParticleCallBack;
		}
	}
	return true;
}

/**
 * @note Address: 0x803B46E0
 * @note Size: 0x168
 */
void TDnkmsThunderA::doExecuteEmitterOperation(JPABaseEmitter* emit)
{
	P2ASSERTLINE(644, mPosition);
	P2ASSERTLINE(645, mPartnerPosition);

	Vector3f pos1 = *mPosition;
	Vector3f pos2 = *mPartnerPosition;
	Mtx mtx;
	makeMtxZAxisAlongPosPos(mtx, pos1, pos2);
	emit->setGlobalRTMatrix(mtx);

	f32 z = (*mPosition).distance(*mPartnerPosition);

	Vector3f v;
	v.x = emit->mLocalScl.x;
	v.y = emit->mLocalScl.y;
	v.z = emit->mLocalScl.z;

	v.z = z / 120.0f;

	emit->setScaleMain((JGeometry::TVec3f&)v);
}

/**
 * @note Address: 0x803B4848
 * @note Size: 0x168
 */
void TDnkmsThunderB::doExecuteEmitterOperation(JPABaseEmitter* emit)
{
	P2ASSERTLINE(666, mPosition);
	P2ASSERTLINE(667, mPartnerPosition);

	// This function is a 2-for-1 deal, solve above solve below

	Vector3f pos1 = *mPosition;
	Vector3f pos2 = *mPartnerPosition;
	Mtx mtx;
	makeMtxZAxisAlongPosPos(mtx, pos1, pos2);
	emit->setGlobalRTMatrix(mtx);

	f32 z = (*mPosition).distance(*mPartnerPosition);

	Vector3f v;
	v.x = emit->mLocalScl.x;
	v.y = emit->mLocalScl.y;
	v.z = emit->mLocalScl.z;

	v.y = z / 120.0f;

	emit->setScaleMain((JGeometry::TVec3f&)v);
}

/**
 * @note Address: 0x803B49B0
 * @note Size: 0xDC
 */
void THibaFire::setRateLOD(int id)
{
	f32 lods[4][3] = {
		{ 0.85f, 0.5f, 0.35f },
		{ 0.3f, 0.2f, 0.0f },
		{ 0.25f, 0.25f, 0.2f },
		{ 0.25f, 0.15f, 0.0f },
	};

	for (int i = 0; i < 4; i++) {
		JPABaseEmitter* emitter = mItems[i].getEmitter();
		if (emitter) {
			emitter->setRate(lods[i][id]);
		}
	}
}

/**
 * @note Address: 0x803B4A8C
 * @note Size: 0xC0
 */
bool TGasuHiba::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgGasuHiba", arg->getName()) == 0;
	P2ASSERTLINE(714, nameCheck);
	ArgGasuHiba* gasarg = static_cast<ArgGasuHiba*>(arg);
	if (gasarg->mIsUnderground) {
		mItems[0].mEffectID = PID_GasuHiba_3;
		mItems[1].mEffectID = PID_GasuHiba_4;
	} else {
		mItems[0].mEffectID = PID_GasuHiba_1;
		mItems[1].mEffectID = PID_GasuHiba_2;
	}
	return TSyncGroup2<TForever>::create(gasarg);
}

/**
 * @note Address: 0x803B4B4C
 * @note Size: 0x78
 */
void TGasuHiba::setRateLOD(int id)
{
	f32 lods[2][3] = {
		{ 0.5f, 0.4f, 0.25f },
		{ 0.35f, 0.2f, 0.1f },
	};

	for (int i = 0; i < 2; i++) {
		JPABaseEmitter* emitter = mItems[i].getEmitter();
		if (emitter) {
			emitter->setRate(lods[i][id]);
		}
	}
}

/**
 * @note Address: 0x803B4BC4
 * @note Size: 0x218
 */
bool TDenkiHiba::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgDenkiHiba", arg->getName()) == 0;
	P2ASSERTLINE(751, nameCheck);
	ArgDenkiHiba* denarg = static_cast<ArgDenkiHiba*>(arg);

	Vector3f pos1 = denarg->mOwnerPos;
	Vector3f pos2 = denarg->mTargetPos;

	if (TSyncGroup3<TForever>::create(denarg)) {
		Mtx mtx;
		makeMtxZAxisAlongPosPos(mtx, pos1, pos2);
		for (int i = 0; i < 3; i++) {
			JPABaseEmitter* emit = mItems[i].getEmitter();
			if (emit) {
				emit->setGlobalRTMatrix(mtx);
				if (denarg->mType == ArgDenkiHiba::TYPE_VsRed) {
					emit->setGlobalPrmColor(255, 0, 0);
					emit->setGlobalEnvColor(255, 0, 0);
				} else if (denarg->mType == ArgDenkiHiba::TYPE_VsBlue) {
					emit->setGlobalPrmColor(0, 0, 255);
					emit->setGlobalEnvColor(0, 0, 255);
				}
			}
		}
		f32 dist = pos1.distance(pos2);
		dist /= 120.0f;
		Vector3f scl0(1.0f, 1.0f, dist);
		mItems[0].mEmitter->setScaleMain((JGeometry::TVec3f&)scl0);
		Vector3f scl1(1.0f, dist, 1.0f);
		mItems[1].mEmitter->setScaleMain((JGeometry::TVec3f&)scl1);

		JGeometry::TVec3f scl;
		scl.set(mItems[2].mEmitter->mLocalScl);
		scl.y *= dist;
		mItems[2].mEmitter->setScaleMain(scl);
		return true;
	}
	return false;
}

/**
 * @note Address: N/A
 * @note Size: 0xB4
 */
void TDenkiHiba::setRateLOD(int)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803B4DDC
 * @note Size: 0x128
 */
bool TDenkiHibaMgr::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgDenkiHiba", arg->getName()) == 0;
	P2ASSERTLINE(832, nameCheck);
	ArgDenkiHiba* denarg = static_cast<ArgDenkiHiba*>(arg);

	mOwnerPosition          = denarg->mOwnerPos;
	mTargetCreaturePosition = denarg->mTargetPos;

	Arg arg2(mOwnerPosition);
	Arg arg3(mTargetCreaturePosition);

	mPolesigns[0].create(&arg2);
	mPolesigns[1].create(&arg3);

	return true;
}

/**
 * @note Address: 0x803B4F04
 * @note Size: 0x178
 */
bool TDenkiHibaMgr::createHiba(int type)
{
	ArgDenkiHiba arg(mOwnerPosition, mTargetCreaturePosition);
	arg.mType = type;
	mHiba.create(&arg);

	Arg arg2(mOwnerPosition);
	Arg arg3(mTargetCreaturePosition);

	mPoles[0].create(&arg2);
	mPoles[1].create(&arg3);

	mPolesigns[0].fade();
	mPolesigns[1].fade();
	return true;
}

/**
 * @note Address: N/A
 * @note Size: 0x174
 */
bool TDenkiHibaMgr::createHiba()
{
	// drought here, this is my best guess for what was here

	// arg.mType is actually never set, so if this function
	// was ever used, there'd be a small chance to see
	// a colored elechiba
	ArgDenkiHiba arg(mOwnerPosition, mTargetCreaturePosition);
	mHiba.create(&arg);

	Arg arg2(mOwnerPosition);
	Arg arg3(mTargetCreaturePosition);

	mPoles[0].create(&arg2);
	mPoles[1].create(&arg3);

	mPolesigns[0].fade();
	mPolesigns[1].fade();
	return true;
}

/**
 * @note Address: 0x803B507C
 * @note Size: 0x8C
 */
void TDenkiHibaMgr::forceKill()
{
	mHiba.forceKill();
	mPoles[0].forceKill();
	mPoles[1].forceKill();
	mPolesigns[0].forceKill();
	mPolesigns[1].forceKill();
}

/**
 * @note Address: 0x803B5108
 * @note Size: 0x8C
 */
void TDenkiHibaMgr::fade()
{
	mHiba.fade();
	mPoles[0].fade();
	mPoles[1].fade();
	mPolesigns[0].fade();
	mPolesigns[1].fade();
}

/**
 * @note Address: 0x803B5194
 * @note Size: 0xB4
 */
void TDenkiHibaMgr::setRateLOD(int id)
{
	f32 lods[3][3] = {
		{ 1.0f, 1.0f, 1.0f },
		{ 1.0f, 1.0f, 1.0f },
		{ 0.15f, 0.07f, 0.02f },
	};

	for (int i = 0; i < 3; i++) {
		JPABaseEmitter* emitter = mHiba.mItems[i].getEmitter();
		if (emitter) {
			emitter->setRate(lods[i][id]);
		}
	}
}

} // namespace efx
