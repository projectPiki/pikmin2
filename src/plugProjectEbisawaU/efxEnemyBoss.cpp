#include "efx/TDango.h"
#include "efx/TKage.h"
#include "efx/TOoota.h"
#include "efx/TKch.h"
#include "efx/THdama.h"
#include "efx/TOdama.h"
#include "JSystem/JParticle/JPAMath.h"
#include "Game/MapMgr.h"

namespace efx {

/**
 * @note Address: 0x803EB360
 * @note Size: 0x1A8
 */
bool TDangoCrash::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgDir", arg->getName()) == 0;
	P2ASSERTLINE(16, nameCheck);

	ArgDir* argd = static_cast<ArgDir*>(arg);
	Vector3f ang = argd->mAngle;

	if (TSimple2::create(arg)) {
		_normalise2(ang);

		Matrixf mtx;
		Vector3f vecDir(0.0f, 1.0f, 0.0f);
		mtx.setTransformationMtx(vecDir, ang, Vector3f::zero);
		for (int i = 0; i < 2; i++) {
			mEmitters[i]->setGlobalRMatrix(mtx.mMatrix.mtxView);
		}
		return true;
	} else {
		return false;
	}
}

/**
 * @note Address: 0x803EB508
 * @note Size: 0x11C
 */
bool TDangoTurn::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgRotY", arg->getName()) == 0;
	P2ASSERTLINE(47, nameCheck);

	ArgRotY* argy = static_cast<ArgRotY*>(arg);

	f32 x = arg->mPosition.x;
	f32 y = arg->mPosition.y;
	f32 z = arg->mPosition.z;
	Matrixf mtx;
	PSMTXRotRad(mtx.mMatrix.mtxView, 'y', argy->mFaceDir);

	Vector3f vec(x, y, z);
	mtx.setTranslation(vec);

	if (TSimple2::create(arg)) {
		for (int i = 0; i < 2; i++) {
			mEmitters[i]->setGlobalRTMatrix(mtx.mMatrix.mtxView);
		}
		return true;
	} else {
		return false;
	}
}

/**
 * @note Address: 0x803EB624
 * @note Size: 0x30
 */
void TKageMove::setGlobalPrmColor(Color4& color)
{
	if (mEmitter == nullptr)
		return;

	mEmitter->setPrmColor(color);
}

/**
 * @note Address: 0x803EB654
 * @note Size: 0x30
 */
void TKageRun::setGlobalPrmColor(Color4& color)
{
	if (mEmitter == nullptr)
		return;

	mEmitter->setPrmColor(color);
}

/**
 * @note Address: 0x803EB684
 * @note Size: 0x30
 */
void TKageDead1::setGlobalPrmColor(Color4& color)
{
	if (mEmitter == nullptr)
		return;

	mEmitter->setPrmColor(color);
}

/**
 * @note Address: 0x803EB6B4
 * @note Size: 0xCC
 */
bool TKageDead2::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgPrmColor", arg->getName()) == 0;
	P2ASSERTLINE(103, nameCheck);

	ArgPrmColor* argp = static_cast<ArgPrmColor*>(arg);

	if (TSimple1::create(arg)) {
		mEmitters[0]->setPrmColorRGB(argp->mColor.r, argp->mColor.g, argp->mColor.b);
		mEmitters[0]->mGlobalPrmClr.a = argp->mColor.a;
		return true;
	}
	return false;
}

/**
 * @note Address: N/A
 * @note Size: 0x18
 */
void TOootaParticle::setGlobalDynamicsScale(f32 scale)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803EB780
 * @note Size: 0x174
 */
bool TOootaBombLeg::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgPosPos", arg->getName()) == 0;
	P2ASSERTLINE(132, nameCheck);

	ArgPosPos* argp = static_cast<ArgPosPos*>(arg);
	Vector3f pos1, pos2;
	pos1 = argp->mPos1;
	pos2 = argp->mPos2;

	if (TSimple1::create(arg)) {
		Matrixf mtx;
		makeMtxZAxisAlongPosPos(mtx.mMatrix.mtxView, pos1, pos2);
		f32 dist = Vector3f::distance(pos2, pos1);
		dist /= 100.0f;
		for (int i = 0; i < 1; i++) {
			mEmitters[i]->setGlobalRTMatrix(mtx.mMatrix.mtxView);
			JGeometry::TVec3f localScl;
			localScl.set(mEmitters[i]->mLocalScl);
			localScl.y *= dist;
			mEmitters[i]->setScaleMain(localScl);
		}
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803EB8F4
 * @note Size: 0x150
 */
bool TOootaFire::create(Arg* arg)
{
	P2ASSERTLINE(161, arg);
	bool nameCheck = strcmp("ArgScale", arg->getName()) == 0;
	P2ASSERTLINE(162, nameCheck);

	ArgScale* sarg = static_cast<ArgScale*>(arg);

	if (TSyncGroup6::create(sarg)) {
		f32 scale = sarg->mScale;
		for (int i = 0; i < 6; i++) {
			mItems[i].mEmitter->setScale(scale);
		}
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803EBA44
 * @note Size: 0x154
 */
bool TKchFlickSand::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgRotYScale", arg->getName()) == 0;
	P2ASSERTLINE(181, nameCheck);

	ArgRotYScale* argp = static_cast<ArgRotYScale*>(arg);

	f32 x, y, z, scale;
	scale = argp->mScale;
	x     = argp->mPosition.x;
	y     = argp->mPosition.y;
	z     = argp->mPosition.z;
	Matrixf mtx;
	PSMTXRotRad(mtx.mMatrix.mtxView, 'y', argp->mFaceDir);

	Vector3f vec(x, y, z);
	mtx.setTranslation(vec);

	if (TSimple2::create(arg)) {
		for (int i = 0; i < 2; i++) {
			mEmitters[i]->setGlobalRTMatrix(mtx.mMatrix.mtxView);
			mEmitters[i]->setScale(scale);
		}
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803EBB98
 * @note Size: 0x154
 */
bool TKchApSand::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgRotYScale", arg->getName()) == 0;
	P2ASSERTLINE(204, nameCheck);

	ArgRotYScale* argp = static_cast<ArgRotYScale*>(arg);

	f32 x, y, z, scale;
	scale = argp->mScale;
	x     = argp->mPosition.x;
	y     = argp->mPosition.y;
	z     = argp->mPosition.z;
	Matrixf mtx;
	PSMTXRotRad(mtx.mMatrix.mtxView, 'y', argp->mFaceDir);

	Vector3f vec(x, y, z);
	mtx.setTranslation(vec);

	if (TSimple3::create(arg)) {
		for (int i = 0; i < 3; i++) {
			mEmitters[i]->setGlobalRTMatrix(mtx.mMatrix.mtxView);
			mEmitters[i]->setScale(scale);
		}
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803EBCEC
 * @note Size: 0x154
 */
bool TKchApWat::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgRotYScale", arg->getName()) == 0;
	P2ASSERTLINE(227, nameCheck);

	ArgRotYScale* argp = static_cast<ArgRotYScale*>(arg);

	f32 x, y, z, scale;
	scale = argp->mScale;
	x     = argp->mPosition.x;
	y     = argp->mPosition.y;
	z     = argp->mPosition.z;
	Matrixf mtx;
	PSMTXRotRad(mtx.mMatrix.mtxView, 'y', argp->mFaceDir);

	Vector3f vec(x, y, z);
	mtx.setTranslation(vec);

	if (TSimple5::create(arg)) {
		for (int i = 0; i < 5; i++) {
			mEmitters[i]->setGlobalRTMatrix(mtx.mMatrix.mtxView);
			mEmitters[i]->setScale(scale);
		}
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803EBE40
 * @note Size: 0x40
 */
void TKchDiveSand::setGlobalScale(f32 scale)
{
	for (int i = 0; i < 3; i++) {
		if (mItems[i].mEmitter) {
			mItems[i].mEmitter->setGlobalScale(scale);
		}
	}
}

/**
 * @note Address: 0x803EBE80
 * @note Size: 0x40
 */
void TKchDiveWat::setGlobalScale(f32 scale)
{
	for (int i = 0; i < 3; i++) {
		if (mItems[i].mEmitter) {
			mItems[i].mEmitter->setGlobalScale(scale);
		}
	}
}

/**
 * @note Address: 0x803EBEC0
 * @note Size: 0x2C
 */
void TKchCryAB::setGlobalScale(f32 scale)
{
	for (int i = 0; i < 2; i++) {
		if (mItems[i].mEmitter) {
			mItems[i].mEmitter->setGlobalScale(scale);
		}
	}
}

/**
 * @note Address: 0x803EBEEC
 * @note Size: 0x18
 */
void TKchCryInd::setGlobalScale(f32 scale)
{
	if (mEmitter) {
		mEmitter->setGlobalScale(scale);
	}
}

/**
 * @note Address: 0x803EBF04
 * @note Size: 0x118
 */
bool TKchDamage::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", arg->getName()) == 0;
	P2ASSERTLINE(296, nameCheck);

	ArgScale* argp = static_cast<ArgScale*>(arg);

	f32 scale = argp->mScale;

	if (TSimpleMtx4::create(arg)) {
		for (int i = 0; i < 4; i++) {
			mEmitters[i]->setScale(scale);
		}
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803EC01C
 * @note Size: 0x18
 */
void TKchSmokeHana::setGlobalScale(f32 scale)
{
	if (mEmitter) {
		mEmitter->setGlobalScale(scale);
	}
}

/**
 * @note Address: 0x803EC034
 * @note Size: 0xD0
 */
bool TKchDownsmoke::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", arg->getName()) == 0;
	P2ASSERTLINE(323, nameCheck);

	ArgScale* argp = static_cast<ArgScale*>(arg);

	f32 scale = argp->mScale;

	if (TSimple1::create(arg)) {
		mEmitters[0]->setScale(scale);
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803EC104
 * @note Size: 0x2C
 */
void TKchDeadHana::setGlobalScale(f32 scale)
{
	for (int i = 0; i < 2; i++) {
		if (mItems[i].mEmitter) {
			mItems[i].mEmitter->setGlobalScale(scale);
		}
	}
}

/**
 * @note Address: 0x803EC130
 * @note Size: 0x4
 */
void TParticleCallBack_KchYodare::init(JPABaseEmitter*, JPABaseParticle*) { }

/**
 * @note Address: 0x803EC134
 * @note Size: 0x17C
 */
void TParticleCallBack_KchYodare::execute(JPABaseEmitter* emit, JPABaseParticle* ptcl)
{
	f32 z = ptcl->getCalcCurrentPositionZ(emit);
	f32 y = ptcl->getCalcCurrentPositionY(emit);
	f32 x = ptcl->getCalcCurrentPositionX(emit);
	Vector3f position(x, y, z);
	f32 groundY;
	if (Game::mapMgr) {
		groundY = Game::mapMgr->getMinY(position);
	} else {
		groundY = 0.0f;
	}

	if (position.y < groundY) {
		ptcl->mFlags |= 2;
		position.y = groundY;
		if (mHitGround.mCurrPosIndex < mHitGround.mPositionNum) {
			Vector3f* pos = &mHitGround.mPositionList[mHitGround.mCurrPosIndex];
			*pos          = position;
			mHitGround.mCurrPosIndex++;
		}
	}

	if (position.y < mGroundYPos) {
		ptcl->mFlags |= 2;
		position.y = mGroundYPos;
		if (mHitWater.mCurrPosIndex < mHitWater.mPositionNum) {
			Vector3f* pos = &mHitWater.mPositionList[mHitWater.mCurrPosIndex];
			*pos          = position;
			mHitWater.mCurrPosIndex++;
		}
	}
}

/**
 * @note Address: 0x803EC2B0
 * @note Size: 0x108
 */
bool TKchYodareBaseChaseMtx::create(Arg* arg)
{
	P2ASSERTLINE(388, arg);
	bool nameCheck = strcmp("ArgKchYodare", arg->getName()) == 0;
	P2ASSERTLINE(389, nameCheck);

	ArgKchYodare* argp = static_cast<ArgKchYodare*>(arg);
	f32 y              = argp->mGroundYPos;
	mParticleCallBack.mHitGround.create(nullptr);
	mParticleCallBack.mHitWater.create(nullptr);
	mParticleCallBack.mGroundYPos = y;

	if (TSync::create(arg)) {
		mEmitter->mParticleCallback = &mParticleCallBack;
	}
	return true;
}

/**
 * @note Address: 0x803EC3B8
 * @note Size: 0x18
 */
void TKchYodareBaseChaseMtx::setGlobalScale(f32 scale)
{
	if (mEmitter) {
		mEmitter->setGlobalScale(scale);
	}
}

/**
 * @note Address: 0x803EC3D0
 * @note Size: 0x108
 */
void efx::THdamaSight::setPosNrm(Vector3f& pos, Vector3f& angle)
{
	if (mEmitter) {
		Matrixf mtx;
		Vector3f fixedAngle = angle;
		fixedAngle.normalise();
		Vector3f vecDir(1.0f, 0.0f, 0.0f);
		mtx.setTransformationMtx2(fixedAngle, pos);
		mEmitter->setGlobalRTMatrix(mtx.mMatrix.mtxView);
	}
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	lwz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_803EC4C8
	lfs      f5, 4(r5)
	lfs      f6, 8(r5)
	fmuls    f1, f5, f5
	lfs      f4, 0(r5)
	fmuls    f2, f6, f6
	lfs      f0, lbl_8051FE40@sda21(r2)
	fmadds   f1, f4, f4, f1
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_803EC420
	ble      lbl_803EC424
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_803EC424

lbl_803EC420:
	fmr      f1, f0

lbl_803EC424:
	lfs      f0, lbl_8051FE40@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_803EC444
	lfs      f0, lbl_8051FE44@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f4, f4, f0
	fmuls    f5, f5, f0
	fmuls    f6, f6, f0

lbl_803EC444:
	lfs      f1, lbl_8051FE40@sda21(r2)
	lfs      f2, lbl_8051FE44@sda21(r2)
	fmuls    f3, f1, f4
	stfs     f4, 0xc(r1)
	fmuls    f0, f1, f5
	fnmsubs  f8, f2, f6, f3
	fmsubs   f7, f1, f6, f0
	fmsubs   f3, f2, f5, f3
	fmuls    f2, f6, f8
	fmuls    f0, f5, f7
	stfs     f7, 0x10(r1)
	fmuls    f1, f4, f3
	fmsubs   f2, f5, f3, f2
	fmsubs   f0, f4, f8, f0
	fmsubs   f1, f6, f7, f1
	stfs     f2, 8(r1)
	lfs      f2, 0(r4)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f5, 0x1c(r1)
	stfs     f8, 0x20(r1)
	lfs      f1, 4(r4)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	stfs     f6, 0x2c(r1)
	stfs     f3, 0x30(r1)
	lfs      f0, 8(r4)
	stfs     f0, 0x34(r1)
	lwz      r5, 8(r3)
	addi     r3, r1, 8
	addi     r4, r5, 0x68
	addi     r5, r5, 0xa4
	bl       "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"

lbl_803EC4C8:
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x803EC4D8
 * @note Size: 0xD0
 */
bool THdamaShell::create(efx::Arg* arg)
{
	bool nameCheck = strcmp("ArgDir", arg->getName()) == 0;
	P2ASSERTLINE(440, nameCheck);

	efx::ArgDir* argp = static_cast<efx::ArgDir*>(arg);

	JGeometry::TVec3f vec;
	vec.x                     = argp->mAngle.x;
	vec.y                     = argp->mAngle.y;
	vec.z                     = argp->mAngle.z;
	JGeometry::TVec3f* vecPtr = &vec;

	if (TSync::create(arg)) {
		mEmitter->setAngle(vecPtr);
		return true;
	} else {
		return false;
	}
}

/**
 * @note Address: 0x803EC5A8
 * @note Size: 0x1BC
 */
bool THdamaHit2W::create(efx::Arg* arg)
{
	bool nameCheck = strcmp("ArgDir", arg->getName()) == 0;
	P2ASSERTLINE(453, nameCheck);

	efx::ArgDir* argd = static_cast<efx::ArgDir*>(arg);
	Vector3f angle    = argd->mAngle;

	if (TSimple3::create(argd)) {

		Matrixf mtx;
		Vector3f vecDir(1.0f, 0.0f, 0.0f);
		mtx.setTransformationMtx2(angle, Vector3f::zero);

		for (int i = 0; i < 3; i++) {
			mEmitters[i]->setGlobalRMatrix(mtx.mMatrix.mtxView);
		}
		THdamaShootA effect;
		effect.create(argd);
		return true;
	}
	return false;

	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stfd     f29, 0x60(r1)
	psq_st   f29, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	stw      r29, 0x54(r1)
	mr       r29, r4
	mr       r31, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r2, lbl_8051FE38@sda21
	bl       strcmp
	cntlzw   r0, r3
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	bne      lbl_803EC628
	lis      r3, lbl_80497910@ha
	lis      r5, lbl_80497924@ha
	addi     r3, r3, lbl_80497910@l
	li       r4, 0x1c5
	addi     r5, r5, lbl_80497924@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803EC628:
	lfs      f31, 0x10(r29)
	mr       r30, r29
	lfs      f30, 0x14(r29)
	mr       r3, r31
	lfs      f29, 0x18(r29)
	mr       r4, r29
	bl       create__Q23efx8TSimple3FPQ23efx3Arg
	clrlwi.  r0, r3, 0x18
	beq      lbl_803EC72C
	lfs      f4, lbl_8051FE40@sda21(r2)
	lis      r3, "zero__10Vector3<f>"@ha
	lfsu     f1, "zero__10Vector3<f>"@l(r3)
	li       r29, 0
	fmuls    f3, f4, f30
	lfs      f5, lbl_8051FE44@sda21(r2)
	fmuls    f8, f4, f31
	lfs      f2, 4(r3)
	lfs      f0, 8(r3)
	fmsubs   f7, f4, f29, f3
	fmsubs   f6, f5, f30, f8
	stfs     f1, 0x20(r1)
	fnmsubs  f5, f5, f29, f8
	fmuls    f1, f30, f7
	stfs     f31, 0x18(r1)
	fmuls    f3, f31, f6
	fmuls    f4, f29, f5
	stfs     f7, 0x1c(r1)
	fmsubs   f1, f31, f5, f1
	fmsubs   f3, f29, f7, f3
	stfs     f30, 0x28(r1)
	fmsubs   f4, f30, f6, f4
	stfs     f5, 0x2c(r1)
	stfs     f3, 0x24(r1)
	stfs     f4, 0x14(r1)
	stfs     f2, 0x30(r1)
	stfs     f1, 0x34(r1)
	stfs     f29, 0x38(r1)
	stfs     f6, 0x3c(r1)
	stfs     f0, 0x40(r1)

lbl_803EC6C4:
	lwz      r4, 0xc(r31)
	addi     r3, r1, 0x14
	addi     r4, r4, 0x68
	bl       JPASetRMtxfromMtx__FPA4_CfPA4_f
	addi     r29, r29, 1
	addi     r31, r31, 4
	cmpwi    r29, 3
	blt      lbl_803EC6C4
	lis      r3, __vt__Q23efx5TBase@ha
	lis      r4, __vt__Q23efx8TSimple1@ha
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx12THdamaShootA@ha
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q23efx8TSimple1@l
	li       r6, 0x9c
	li       r5, 0
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q23efx12THdamaShootA@l
	mr       r4, r30
	addi     r3, r1, 8
	sth      r6, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx8TSimple1FPQ23efx3Arg
	li       r3, 1
	b        lbl_803EC730

lbl_803EC72C:
	li       r3, 0

lbl_803EC730:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r0, 0x94(r1)
	lwz      r29, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/**
 * @note Address: 0x803EC764
 * @note Size: 0x174
 */
bool THdamaDeadHahen1::create(efx::Arg* arg)
{
	bool nameCheck = strcmp("ArgPosPos", arg->getName()) == 0;
	P2ASSERTLINE(484, nameCheck);

	efx::ArgPosPos* argd = static_cast<efx::ArgPosPos*>(arg);
	Vector3f pos1, pos2;
	pos1 = argd->mPos1;
	pos2 = argd->mPos2;

	if (TSimple1::create(arg)) {
		Matrixf mtx;
		makeMtxZAxisAlongPosPos(mtx.mMatrix.mtxView, pos1, pos2);
		f32 dist = Vector3f::distance(pos2, pos1);
		dist /= 100.0f;
		mEmitters[0]->setGlobalRTMatrix(mtx.mMatrix.mtxView);
		JGeometry::TVec3f localScl;
		localScl.set(mEmitters[0]->mLocalScl);
		localScl.y *= dist;
		mEmitters[0]->setScaleMain(localScl);
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803EC8D8
 * @note Size: 0x18C
 */
bool THdamaDeadHahen2::create(efx::Arg* arg)
{
	bool nameCheck = strcmp("ArgPosPos", arg->getName()) == 0;
	P2ASSERTLINE(512, nameCheck);

	efx::ArgPosPos* argd = static_cast<efx::ArgPosPos*>(arg);
	Vector3f pos1, pos2;
	pos1 = argd->mPos1;
	pos2 = argd->mPos2;

	if (TSimple2::create(arg)) {
		Matrixf mtx;
		makeMtxZAxisAlongPosPos(mtx.mMatrix.mtxView, pos1, pos2);
		f32 dist = Vector3f::distance(pos2, pos1);
		dist /= 100.0f;
		for (int i = 0; i < 2; i++) {
			mEmitters[i]->setGlobalRTMatrix(mtx.mMatrix.mtxView);
			JGeometry::TVec3f localScl;
			localScl.set(mEmitters[i]->mLocalScl);
			localScl.y *= dist;
			mEmitters[i]->setScaleMain(localScl);
		}
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803ECA64
 * @note Size: 0x18
 */
void TOdamaFur1::setGlobalScale(f32 scale)
{
	if (mEmitter) {
		mEmitter->setGlobalScale(scale);
	}
}

/**
 * @note Address: 0x803ECA7C
 * @note Size: 0x18
 */
void TOdamaFur2::setGlobalScale(f32 scale)
{
	if (mEmitter) {
		mEmitter->setGlobalScale(scale);
	}
}

} // namespace efx
