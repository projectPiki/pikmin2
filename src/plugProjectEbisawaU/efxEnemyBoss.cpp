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
		ang.normalise();

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
void TParticleCallBack_KchYodare::init(JPABaseEmitter*, JPABaseParticle*)
{
}

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
		Vector3f side;
		side = cross(vecDir, fixedAngle);
		mtx.setTransformationMtx(fixedAngle, side, pos);
		mEmitter->setGlobalRTMatrix(mtx.mMatrix.mtxView);
	}
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
		Vector3f side;
		side = cross(vecDir, angle);
		mtx.setTransformationMtx(angle, side, Vector3f::zero);

		for (int i = 0; i < 3; i++) {
			mEmitters[i]->setGlobalRMatrix(mtx.mMatrix.mtxView);
		}
		THdamaShootA effect;
		effect.create(argd);
		return true;
	}
	return false;
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
