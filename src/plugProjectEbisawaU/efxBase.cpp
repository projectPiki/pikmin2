#include "JSystem/JGeometry.h"
#include "JSystem/JParticle/JPAMath.h"
#include "ParticleMgr.h"
#include "efx/Arg.h"
#include "efx/Context.h"
#include "efx/TCallBack_StaticClipping.h"
#include "efx/TChaseMtx.h"
#include "efx/TChasePos.h"
#include "efx/TForever.h"
#include "efx/TOneEmitter.h"
#include "efx/TSimpleMtx.h"
#include "efx/TSyncGroup.h"

namespace efx {

TCallBack_StaticClipping TBase::mCallBack_StaticClipping;

/**
 * @note Address: 0x803AE8B0
 * @note Size: 0x3C
 */
void TCallBack_StaticClipping::executeAfter(JPABaseEmitter* emitter)
{
	particleMgr->setGlobalColor(emitter);
	particleMgr->cullByResFlg(emitter);
}

/**
 * @note Address: 0x803AE8EC
 * @note Size: 0x48
 */
void TOneEmitter::add(Context* context)
{
	context->del();
	mContext.add(context);
}

/**
 * @matchedSize
 * @note Address: N/A
 * @note Size: 0x24
 */
void TOneEmitter::del(Context* context)
{
	// UNUSED FUNCTION
	context->del();
}

/**
 * executeAfter__Q23efx11TOneEmitterFP14JPABaseEmitter
 * @note Address: 0x803AE934
 * @note Size: 0xC0
 */
void TOneEmitter::executeAfter(JPABaseEmitter* emitter)
{
	particleMgr->setGlobalColor(emitter);

	FOREACH_NODE(Context, mContext.mChild, context)
	{
		Vector3f contextPos = context->mPosition;
		if (particleMgr->cullByResFlg(contextPos, mEffectID)) {
			continue;
		}

		int createCount = emitter->getCurrentCreateNumber();
		for (int i = 0; i < createCount; i++) {
			JPABaseParticle* particle = emitter->createParticle();
			if (particle) {
				particle->mOffsetPosition.set(contextPos.x, contextPos.y, contextPos.z);
			}
		}
	}
}

/**
 * create__Q23efx11TOneEmitterFPQ23efx3Arg
 * @note Address: 0x803AE9F4
 * @note Size: 0xA8
 */
bool TOneEmitter::create(Arg*)
{
	if (mEmitter) {
		return false;
	}

	mEmitter = particleMgr->create(mEffectID, Vector3f::zero, 0);
	if (mEmitter) {
		mEmitter->setFlag(JPAEMIT_Immortal);
		mEmitter->setFlag(JPAEMIT_StopEmitting);
		mEmitter->mEmitterCallback = this;
	}

	return (mEmitter);
}

/**
 * fade__Q23efx11TOneEmitterFv
 * @note Address: 0x803AEA9C
 * @note Size: 0x58
 */
void TOneEmitter::fade()
{
	mContext.clearRelations();
	if (mEmitter) {
		particleMgr->fade(mEmitter);
		mEmitter = nullptr;
	}
}

/**
 * forceKill__Q23efx11TOneEmitterFv
 * @note Address: 0x803AEAF4
 * @note Size: 0x58
 */
void TOneEmitter::forceKill()
{
	mContext.clearRelations();
	if (mEmitter) {
		particleMgr->forceKill(mEmitter);
		mEmitter = nullptr;
	}
}

/**
 * add__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
 * @note Address: 0x803AEB4C
 * @note Size: 0x48
 */
void TOneEmitterChasePos::add(ContextChasePos* context)
{
	context->del();
	mContext.add(context);
}

/**
 * del__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
 * @note Address: 0x803AEB94
 * @note Size: 0x24
 */
void TOneEmitterChasePos::del(ContextChasePos* context) { context->del(); }

/**
 * create__Q23efx19TOneEmitterChasePosFPQ23efx3Arg
 * @note Address: 0x803AEBB8
 * @note Size: 0xA8
 */
bool TOneEmitterChasePos::create(Arg* arg)
{
	if (mEmitter) {
		return false;
	}
	mEmitter = particleMgr->create(mEffectID, Vector3f::zero, 0);
	if (mEmitter) {
		mEmitter->setFlag(JPAEMIT_Immortal);
		mEmitter->setFlag(JPAEMIT_StopEmitting);
		mEmitter->mEmitterCallback = this;
	}
	return (mEmitter);
}

/**
 * executeAfter__Q23efx19TOneEmitterChasePosFP14JPABaseEmitter
 * @note Address: 0x803AEC60
 * @note Size: 0xAC
 */
void TOneEmitterChasePos::executeAfter(JPABaseEmitter* emitter)
{
	particleMgr->setGlobalColor(emitter);

	FOREACH_NODE(ContextChasePos, mContext.mChild, context)
	{
		Vector3f* contextPos = context->mPosition;
		if (particleMgr->cullByResFlg(*contextPos, mEffectID)) {
			continue;
		}

		int createCount = emitter->getCurrentCreateNumber();
		for (int i = 0; i < createCount; i++) {
			JPABaseParticle* particle = emitter->createParticle();
			if (particle) {
				particle->mOffsetPosition.set(contextPos->x, contextPos->y, contextPos->z);
			}
		}
	}
}

/**
 * fade__Q23efx19TOneEmitterChasePosFv
 * @note Address: 0x803AED0C
 * @note Size: 0x58
 */
void TOneEmitterChasePos::fade()
{
	mContext.clearRelations();
	if (mEmitter) {
		particleMgr->fade(mEmitter);
		mEmitter = nullptr;
	}
}

/**
 * forceKill__Q23efx19TOneEmitterChasePosFv
 * @note Address: 0x803AED64
 * @note Size: 0x58
 */
void TOneEmitterChasePos::forceKill()
{
	mContext.clearRelations();
	if (mEmitter) {
		particleMgr->forceKill(mEmitter);
		mEmitter = nullptr;
	}
}

/**
 * create__Q23efx17TOneEmitterSimpleFPQ23efx3Arg
 * @note Address: 0x803AEDBC
 * @note Size: 0xBC
 */
bool TOneEmitterSimple::create(Arg* arg)
{
	mCurrPosIndex = 0;
	if (mEmitter) {
		return false;
	}
	mEmitter = particleMgr->create(mEffectID, Vector3f::zero, 0);
	if (mEmitter) {
		mEmitter->setFlag(JPAEMIT_Immortal);
		mEmitter->setFlag(JPAEMIT_StopEmitting);
		mEmitter->mMaxFrame        = 0;
		mEmitter->mEmitterCallback = this;
	}
	return (mEmitter);
}

/**
 * executeAfter__Q23efx17TOneEmitterSimpleFP14JPABaseEmitter
 * @note Address: 0x803AEE78
 * @note Size: 0x10C
 */
void TOneEmitterSimple::executeAfter(JPABaseEmitter* emitter)
{
	particleMgr->setGlobalColor(emitter);
	P2ASSERTLINE(447, mCurrPosIndex <= mPositionNum);
	for (int i = 0; i < mCurrPosIndex; i++) {
		Vector3f v1 = mPositionList[i];
		if (particleMgr->cullByResFlg(v1, mEffectID) == false) {
			int createCount = (int)emitter->mRate;
			for (int i = 0; i < createCount; i++) {
				JPABaseParticle* particle = emitter->createParticle();
				if (particle) {
					particle->mOffsetPosition.set(v1.x, v1.y, v1.z);
				}
			}
		}
	}
	mCurrPosIndex = 0;
}

/**
 * create__Q23efx8TSimple1FPQ23efx3Arg
 * @note Address: 0x803AEF84
 * @note Size: 0x90
 */
bool TSimple1::create(Arg* arg)
{
	P2ASSERTLINE(558, arg);
	for (int i = 0; i < 1; i++) {
		mEmitters[i] = particleMgr->create(mEffectIDs[i], arg->mPosition, 0);
		if (mEmitters[i]) {
			mEmitters[i]->mEmitterCallback = &mCallBack_StaticClipping;
		} else {
			return false;
		}
	}
	return true;
}

/**
 * create__Q23efx8TSimple2FPQ23efx3Arg
 * @note Address: 0x803AF014
 * @note Size: 0xA8
 */
bool TSimple2::create(Arg* arg)
{
	P2ASSERTLINE(574, arg);
	for (int i = 0; i < 2; i++) {
		mEmitters[i] = particleMgr->create(mEffectIDs[i], arg->mPosition, 0);
		if (mEmitters[i]) {
			mEmitters[i]->mEmitterCallback = &mCallBack_StaticClipping;
		} else {
			return false;
		}
	}
	return true;
}

/**
 * create__Q23efx8TSimple3FPQ23efx3Arg
 * @note Address: 0x803AF0BC
 * @note Size: 0xA8
 */
bool TSimple3::create(Arg* arg)
{
	P2ASSERTLINE(591, arg);
	for (int i = 0; i < 3; i++) {
		mEmitters[i] = particleMgr->create(mEffectIDs[i], arg->mPosition, 0);
		if (mEmitters[i]) {
			mEmitters[i]->mEmitterCallback = &mCallBack_StaticClipping;
		} else {
			return false;
		}
	}
	return true;
}

/**
 * create__Q23efx8TSimple4FPQ23efx3Arg
 * @note Address: 0x803AF164
 * @note Size: 0xA8
 */
bool TSimple4::create(Arg* arg)
{
	P2ASSERTLINE(608, arg);
	for (int i = 0; i < 4; i++) {
		mEmitters[i] = particleMgr->create(mEffectIDs[i], arg->mPosition, 0);
		if (mEmitters[i]) {
			mEmitters[i]->mEmitterCallback = &mCallBack_StaticClipping;
		} else {
			return false;
		}
	}
	return true;
}

/**
 * create__Q23efx8TSimple5FPQ23efx3Arg
 * @note Address: 0x803AF20C
 * @note Size: 0xA8
 */
bool TSimple5::create(Arg* arg)
{
	P2ASSERTLINE(625, arg);
	for (int i = 0; i < 5; i++) {
		mEmitters[i] = particleMgr->create(mEffectIDs[i], arg->mPosition, 0);
		if (mEmitters[i]) {
			mEmitters[i]->mEmitterCallback = &mCallBack_StaticClipping;
		} else {
			return false;
		}
	}
	return true;
}

/**
 * TODO: This and other TSimpleMtx* creates use a fabricated inlined method.
 *       Said method is incompatible with their respective parent classes' create().
 * create__Q23efx11TSimpleMtx1FPQ23efx3Arg
 * @note Address: 0x803AF2B4
 * @note Size: 0xE4
 */
bool TSimpleMtx1::create(Arg* arg)
{
	if (setEmitterCallbacks()) {
		P2ASSERTLINE(646, mMtx);
		for (int i = 0; i < (int)ARRAY_SIZE(mEmitters); i++) {
			mEmitters[i]->setGlobalRTMatrix(mMtx->mMatrix.mtxView);
		}
		return true;
	}
	return false;
}

/**
 * create__Q23efx11TSimpleMtx2FPQ23efx3Arg
 * @note Address: 0x803AF398
 * @note Size: 0x11C
 */
bool TSimpleMtx2::create(Arg*)
{
	if (setEmitterCallbacks()) {
		P2ASSERTLINE(660, mMtx);
		for (int i = 0; i < (int)ARRAY_SIZE(mEmitters); i++) {
			mEmitters[i]->setGlobalRTMatrix(mMtx->mMatrix.mtxView);
		}
		return true;
	}
	return false;
}

/**
 * create__Q23efx11TSimpleMtx3FPQ23efx3Arg
 * @note Address: 0x803AF4B4
 * @note Size: 0x11C
 */
bool TSimpleMtx3::create(Arg*)
{
	if (setEmitterCallbacks()) {
		P2ASSERTLINE(674, mMtx);
		for (int i = 0; i < (int)ARRAY_SIZE(mEmitters); i++) {
			mEmitters[i]->setGlobalRTMatrix(mMtx->mMatrix.mtxView);
		}
		return true;
	}
	return false;
}

/**
 * create__Q23efx11TSimpleMtx4FPQ23efx3Arg
 * @note Address: 0x803AF5D0
 * @note Size: 0x11C
 */
bool TSimpleMtx4::create(Arg* arg)
{
	if (setEmitterCallbacks()) {
		P2ASSERTLINE(688, mMtx);
		for (int i = 0; i < (int)ARRAY_SIZE(mEmitters); i++) {
			mEmitters[i]->setGlobalRTMatrix(mMtx->mMatrix.mtxView);
		}
		return true;
	}
	return false;
}

/**
 * create__Q23efx5TSyncFPQ23efx3Arg
 * @note Address: 0x803AF6EC
 * @note Size: 0xDC
 */
bool TSync::create(Arg* arg)
{
	if (mEmitter) {
		return false;
	}
	Vector3f position;
	if (arg) {
		position = arg->mPosition;
	} else {
		position = Vector3f::zero;
	}
	mEmitter = particleMgr->create(mEffectID, position, 0);
	if (mEmitter) {
		mEmitter->mEmitterCallback = this;
		mEmitter->setFlag(JPAEMIT_Immortal);
	} else {
		return false;
	}
	mFlags = 0;
	return true;
}

/**
 * execute__Q23efx5TSyncFP14JPABaseEmitter
 * @note Address: 0x803AF7C8
 * @note Size: 0x6C
 */
void TSync::execute(JPABaseEmitter* emitter)
{
	bool check = false;

	if (mEmitter->isFlag(JPAEMIT_EnableDeleteEmitter) && emitter->getParticleNumber() == 0) {
		check = true;
	}

	if (check) {
		fade();
	} else {
		doExecuteEmitterOperation(emitter);
	}
}

/**
 * executeAfter__Q23efx5TSyncFP14JPABaseEmitter
 * @note Address: 0x803AF834
 * @note Size: 0x90
 */
void TSync::executeAfter(JPABaseEmitter* emitter)
{
	particleMgr->setGlobalColor(emitter);
	if (particleMgr->cullByResFlg(emitter) == 0) {
		if (mFlags & 1) {
			emitter->setFlag(JPAEMIT_StopDraw);
		} else {
			emitter->resetFlag(JPAEMIT_StopDraw);
		}
	}
	doExecuteAfter(emitter);
}

/**
 * forceKill__Q23efx5TSyncFv
 * @note Address: 0x803AF8C4
 * @note Size: 0x3C
 */
void TSync::forceKill()
{
	particleMgr->forceKill(mEmitter);
	mEmitter = nullptr;
}

/**
 * fade__Q23efx5TSyncFv
 * @note Address: 0x803AF900
 * @note Size: 0x70
 */
void TSync::fade()
{
	if (mEmitter) {
		if (mFlags & 1) {
			forceKill();
		} else {
			mEmitter->mEmitterCallback = &mCallBack_StaticClipping;
			particleMgr->fade(mEmitter);
			mEmitter = nullptr;
		}
	}
}

/**
 * doExecuteEmitterOperation__Q23efx9TChasePosFP14JPABaseEmitter
 * @note Address: 0x803AF970
 * @note Size: 0x78
 */
void TChasePos::doExecuteEmitterOperation(JPABaseEmitter* emitter)
{
	P2ASSERTLINE(785, mPosition);
	Vector3f* pos         = mPosition;
	emitter->mGlobalTrs.x = pos->x;
	emitter->mGlobalTrs.y = pos->y;
	emitter->mGlobalTrs.z = pos->z;
}

/**
 * doExecuteEmitterOperation__Q23efx13TChasePosYRotFP14JPABaseEmitter
 * @note Address: 0x803AF9E8
 * @note Size: 0xD8
 */
void TChasePosYRot::doExecuteEmitterOperation(JPABaseEmitter* emitter)
{
	P2ASSERTLINE(794, mPosition);
	P2ASSERTLINE(795, mRotation);
	Matrixf mtx;
	PSMTXRotRad(mtx.mMatrix.mtxView, 0x79, *mRotation);
	Vector3f* translation = mPosition;
	PSMTXRotRad(mtx.mMatrix.mtxView, 0x79, *mRotation);
	mtx.setTranslation(*translation);
	emitter->setGlobalRTMatrix(mtx.mMatrix.mtxView);
}

/**
 * doExecuteEmitterOperation__Q23efx9TChaseMtxFP14JPABaseEmitter
 * @note Address: 0x803AFAC0
 * @note Size: 0x6C
 */
void TChaseMtx::doExecuteEmitterOperation(JPABaseEmitter* emitter)
{
	P2ASSERTLINE(809, mMtx);
	emitter->setGlobalRTMatrix(mMtx->mMatrix.mtxView);
}

/**
 * doExecuteEmitterOperation__Q23efx10TChaseMtxTFP14JPABaseEmitter
 * @note Address: 0x803AFB2C
 * @note Size: 0x78
 */
void TChaseMtxT::doExecuteEmitterOperation(JPABaseEmitter* emitter)
{
	P2ASSERTLINE(818, mMtx);
	Vector3f translation;
	mMtx->getTranslation(translation);
	emitter->setGlobalTranslation(translation.x, translation.y, translation.z);
}

/**
 * doExecuteEmitterOperation__Q23efx12TChasePosPosFP14JPABaseEmitter
 * @note Address: 0x803AFBA4
 * @note Size: 0xDC
 */
void TChasePosPos::doExecuteEmitterOperation(JPABaseEmitter* emitter)
{
	P2ASSERTLINE(829, _10);
	P2ASSERTLINE(830, _14);
	Mtx mtxZ;
	Vector3f vec1 = *_10;
	Vector3f vec2 = *_14;
	makeMtxZAxisAlongPosPos(mtxZ, vec1, vec2);
	emitter->setGlobalRTMatrix(mtxZ);
}

/**
 * See Sys::Tube::getAxisVector. Also look at e.g. ec0000f2 ec2100f2 ec4200f2 in general.
 * @note Address: 0x803AFC80
 * @note Size: 0xF8
 */
void makeMtxZAxisAlongPosPos(Mtx mtx, Vector3f& p2, Vector3f& p3)
{
	Vector3f zVec(p3.x - p2.x, p3.y - p2.y, p3.z - p2.z);
	Vector3f midPt(p2.x + p3.x, p2.y + p3.y, p2.z + p3.z);
	midPt *= 0.5f;

	zVec.normalise();

	Vector3f yAxis(0.0f, 1.0f, 0.0f);
	Vector3f xVec = cross(yAxis, zVec);
	Vector3f yVec = cross(zVec, xVec);

	mtx[0][0] = xVec.x;
	mtx[0][1] = yVec.x;
	mtx[0][2] = zVec.x;
	mtx[0][3] = midPt.x;

	mtx[1][0] = xVec.y;
	mtx[1][1] = yVec.y;
	mtx[1][2] = zVec.y;
	mtx[1][3] = midPt.y;

	mtx[2][0] = xVec.z;
	mtx[2][1] = yVec.z;
	mtx[2][2] = zVec.z;
	mtx[2][3] = midPt.z;

	/*
	lfs      f0, 4(r4)
	lfs      f2, 4(r5)
	lfs      f4, 8(r4)
	fsubs    f1, f2, f0
	lfs      f7, 8(r5)
	lfs      f8, 0(r4)
	fadds    f6, f0, f2
	fsubs    f2, f7, f4
	lfs      f9, 0(r5)
	fsubs    f0, f9, f8
	lfs      f5, lbl_8051F610@sda21(r2)
	fadds    f7, f4, f7
	lfs      f3, lbl_8051F614@sda21(r2)
	fmuls    f10, f1, f1
	fmuls    f11, f2, f2
	fadds    f8, f8, f9
	fmadds   f4, f0, f0, f10
	fmuls    f7, f7, f5
	fmuls    f6, f6, f5
	fadds    f4, f11, f4
	fmuls    f11, f8, f5
	fcmpo    cr0, f4, f3
	ble      lbl_803AFCEC
	ble      lbl_803AFCF0
	frsqrte  f3, f4
	fmuls    f4, f3, f4
	b        lbl_803AFCF0

lbl_803AFCEC:
	fmr      f4, f3

lbl_803AFCF0:
	lfs      f3, lbl_8051F614@sda21(r2)
	fcmpo    cr0, f4, f3
	ble      lbl_803AFD10
	lfs      f3, lbl_8051F618@sda21(r2)
	fdivs    f3, f3, f4
	fmuls    f0, f0, f3
	fmuls    f1, f1, f3
	fmuls    f2, f2, f3

lbl_803AFD10:
	lfs      f4, lbl_8051F614@sda21(r2)
	lfs      f5, lbl_8051F618@sda21(r2)
	fmuls    f3, f4, f2
	fmuls    f10, f4, f1
	fmsubs   f9, f4, f0, f3
	fmsubs   f8, f5, f2, f10
	fnmsubs  f10, f5, f0, f10
	fmuls    f5, f2, f9
	fmuls    f3, f1, f8
	stfs     f8, 0(r3)
	fmuls    f4, f0, f10
	fmsubs   f5, f1, f10, f5
	fmsubs   f3, f0, f9, f3
	fmsubs   f4, f2, f8, f4
	stfs     f5, 4(r3)
	stfs     f0, 8(r3)
	stfs     f11, 0xc(r3)
	stfs     f9, 0x10(r3)
	stfs     f4, 0x14(r3)
	stfs     f1, 0x18(r3)
	stfs     f6, 0x1c(r3)
	stfs     f10, 0x20(r3)
	stfs     f3, 0x24(r3)
	stfs     f2, 0x28(r3)
	stfs     f7, 0x2c(r3)
	blr
	*/
}

/**
 * doExecuteEmitterOperation__Q23efx23TChasePosPosLocalZScaleFP14JPABaseEmitter
 * @note Address: 0x803AFD78
 * @note Size: 0x14C
 */
void TChasePosPosLocalZScale::doExecuteEmitterOperation(JPABaseEmitter* emitter)
{
	P2ASSERTLINE(848, mPosPtrA);
	P2ASSERTLINE(849, mPosPtrB);
	Mtx mtxZ;
	Vector3f vec1 = *mPosPtrA;
	Vector3f vec2 = *mPosPtrB;
	makeMtxZAxisAlongPosPos(mtxZ, vec1, vec2);
	f32 dist = Vector3f::distance(vec2, vec1);
	emitter->setGlobalRTMatrix(mtxZ);
	dist /= mZScale;
	emitter->mLocalScl.set(emitter->mLocalScl.x, emitter->mLocalScl.y, dist);
}

/**
 * doExecuteEmitterOperation__Q23efx23TChasePosPosLocalYScaleFP14JPABaseEmitter
 * @note Address: 0x803AFEC4
 * @note Size: 0x14C
 */
void TChasePosPosLocalYScale::doExecuteEmitterOperation(JPABaseEmitter* emitter)
{
	f32 newY;
	P2ASSERTLINE(880, mPosListStart);
	P2ASSERTLINE(881, mPosListEnd);
	Mtx mtxZ;
	Vector3f vec1 = *mPosListStart;
	Vector3f vec2 = *mPosListEnd;
	makeMtxZAxisAlongPosPos(mtxZ, vec1, vec2);
	f32 dist = Vector3f::distance(vec2, vec1);
	emitter->setGlobalRTMatrix(mtxZ);
	dist /= mYScale;
	emitter->mLocalScl.set(emitter->mLocalScl.x, dist, emitter->mLocalScl.z);
}

/**
 * __ct__Q23efx9TForever2FUsUs
 * @note Address: 0x803B0010
 * @note Size: 0x98
 */
TForever2::TForever2(u16 effectID1, u16 effectID2)
{
	mItems[0].mEffectID = effectID1;
	mItems[1].mEffectID = effectID2;
}

/**
 * __ct__Q23efx9TForever3FUsUsUs
 * @note Address: 0x803B0100
 * @note Size: 0xA8
 */
TForever3::TForever3(u16 effectID1, u16 effectID2, u16 effectID3)
{
	mItems[0].mEffectID = effectID1;
	mItems[1].mEffectID = effectID2;
	mItems[2].mEffectID = effectID3;
}

/**
 * __ct__Q23efx9TForever4FUsUsUsUs
 * @note Address: 0x803B01A8
 * @note Size: 0x98
 */
TForever4::TForever4(u16 effectID1, u16 effectID2, u16 effectID3, u16 effectID4)
{
	mItems[0].mEffectID = effectID1;
	mItems[1].mEffectID = effectID2;
	mItems[2].mEffectID = effectID3;
	mItems[3].mEffectID = effectID4;
}

/**
 * __ct__Q23efx10TChasePos2FP10Vector3<f>UsUs
 * @note Address: 0x803B0240
 * @note Size: 0xAC
 */
TChasePos2::TChasePos2(Vector3f* position, u16 effectID1, u16 effectID2)
{
	mItems[0].mPosition = position;
	mItems[0].mEffectID = effectID1;
	mItems[1].mPosition = position;
	mItems[1].mEffectID = effectID2;
}

/**
 * setPosptr__Q23efx10TChasePos2FP10Vector3<f>
 * @note Address: 0x803B0344
 * @note Size: 0xC
 */
void TChasePos2::setPosptr(Vector3f* position)
{
	mItems[0].mPosition = position;
	mItems[1].mPosition = position;
}

/**
 * __ct__Q23efx10TChasePos3FP10Vector3<f>UsUsUs
 * @note Address: 0x803B0350
 * @note Size: 0xA0
 */
TChasePos3::TChasePos3(Vector3f* position, u16 effectID1, u16 effectID2, u16 effectID3)
{
	mItems[0].mPosition = position;
	mItems[0].mEffectID = effectID1;
	mItems[1].mPosition = position;
	mItems[1].mEffectID = effectID2;
	mItems[2].mPosition = position;
	mItems[2].mEffectID = effectID3;
}

/**
 * setPosptr__Q23efx10TChasePos3FP10Vector3<f>
 * @matchedSize
 * @note Address: N/A
 * @note Size: 0x10
 */
void TChasePos3::setPosptr(Vector3f* position)
{
	// UNUSED FUNCTION
	mItems[0].mPosition = position;
	mItems[1].mPosition = position;
	mItems[2].mPosition = position;
}

/**
 * __ct__Q23efx10TChasePos4FP10Vector3<f>UsUsUsUs
 * @note Address: 0x803B03F0
 * @note Size: 0xAC
 */
TChasePos4::TChasePos4(Vector3f* position, u16 effectID1, u16 effectID2, u16 effectID3, u16 effectID4)
{
	mItems[0].mPosition = position;
	mItems[0].mEffectID = effectID1;
	mItems[1].mPosition = position;
	mItems[1].mEffectID = effectID2;
	mItems[2].mPosition = position;
	mItems[2].mEffectID = effectID3;
	mItems[3].mPosition = position;
	mItems[3].mEffectID = effectID4;
}

/**
 * @matchedSize
 * setPosptr__Q23efx10TChasePos4FP10Vector3<f>
 * @note Address: N/A
 * @note Size: 0x14
 */
void TChasePos4::setPosptr(Vector3f* position)
{
	// UNUSED FUNCTION
	mItems[0].mPosition = position;
	mItems[1].mPosition = position;
	mItems[2].mPosition = position;
	mItems[3].mPosition = position;
}

/**
 * __ct__Q23efx10TChaseMtx2FPA4_fUsUs
 * @note Address: 0x803B049C
 * @note Size: 0xAC
 */
TChaseMtx2::TChaseMtx2(Mtx mtx, u16 effectID1, u16 effectID2)
{
	mItems[0].mMtx      = (Matrixf*)mtx;
	mItems[0].mEffectID = effectID1;
	mItems[1].mMtx      = (Matrixf*)mtx;
	mItems[1].mEffectID = effectID2;
}

/**
 * setMtxptr__Q23efx10TChaseMtx2FPA4_f
 * @note Address: 0x803B05A0
 * @note Size: 0xC
 */
void TChaseMtx2::setMtxptr(Mtx mtx)
{
	mItems[0].mMtx = (Matrixf*)mtx;
	mItems[1].mMtx = (Matrixf*)mtx;
}

/**
 * @note Address: 0x803B05AC
 * @note Size: 0xA0
 */
TChaseMtx3::TChaseMtx3(Mtx mtx, u16 effectID1, u16 effectID2, u16 effectID3)
{
	mItems[0].mMtx      = (Matrixf*)mtx;
	mItems[0].mEffectID = effectID1;
	mItems[1].mMtx      = (Matrixf*)mtx;
	mItems[1].mEffectID = effectID2;
	mItems[2].mMtx      = (Matrixf*)mtx;
	mItems[2].mEffectID = effectID3;
}

/**
 * setMtxptr__Q23efx10TChaseMtx3FPA4_f
 * @note Address: 0x803B064C
 * @note Size: 0x10
 */
void TChaseMtx3::setMtxptr(Mtx mtx)
{
	mItems[0].mMtx = (Matrixf*)mtx;
	mItems[1].mMtx = (Matrixf*)mtx;
	mItems[2].mMtx = (Matrixf*)mtx;
}

/**
 * @note Address: 0x803B065C
 * @note Size: 0xAC
 */
TChaseMtx4::TChaseMtx4(Mtx mtx, u16 effectID1, u16 effectID2, u16 effectID3, u16 effectID4)
{
	mItems[0].mMtx      = (Matrixf*)mtx;
	mItems[0].mEffectID = effectID1;
	mItems[1].mMtx      = (Matrixf*)mtx;
	mItems[1].mEffectID = effectID2;
	mItems[2].mMtx      = (Matrixf*)mtx;
	mItems[2].mEffectID = effectID3;
	mItems[3].mMtx      = (Matrixf*)mtx;
	mItems[3].mEffectID = effectID4;
}

/**
 * setMtxptr__Q23efx10TChaseMtx4FPA4_f
 * @note Address: 0x803B0708
 * @note Size: 0x14
 */
void TChaseMtx4::setMtxptr(Mtx mtx)
{
	mItems[0].mMtx = (Matrixf*)mtx;
	mItems[1].mMtx = (Matrixf*)mtx;
	mItems[2].mMtx = (Matrixf*)mtx;
	mItems[3].mMtx = (Matrixf*)mtx;
}

/**
 * @matchedSize
 * __ct__Q23efx10TChaseMtx5FPA4_fUsUsUsUsUs
 * @note Address: N/A
 * @note Size: 0xB8
 */
TChaseMtx5::TChaseMtx5(Mtx mtx, u16 effectID1, u16 effectID2, u16 effectID3, u16 effectID4, u16 effectID5)
{
	// UNUSED FUNCTION
	mItems[0].mMtx      = (Matrixf*)mtx;
	mItems[0].mEffectID = effectID1;
	mItems[1].mMtx      = (Matrixf*)mtx;
	mItems[1].mEffectID = effectID2;
	mItems[2].mMtx      = (Matrixf*)mtx;
	mItems[2].mEffectID = effectID3;
	mItems[3].mMtx      = (Matrixf*)mtx;
	mItems[3].mEffectID = effectID4;
	mItems[4].mMtx      = (Matrixf*)mtx;
	mItems[4].mEffectID = effectID5;
}

/**
 * @matchedSize
 * setMtxptr__Q23efx10TChaseMtx5FPA4_f
 * @note Address: N/A
 * @note Size: 0x18
 */
void TChaseMtx5::setMtxptr(Mtx mtx)
{
	// UNUSED FUNCTION
	mItems[0].mMtx = (Matrixf*)mtx;
	mItems[1].mMtx = (Matrixf*)mtx;
	mItems[2].mMtx = (Matrixf*)mtx;
	mItems[3].mMtx = (Matrixf*)mtx;
	mItems[4].mMtx = (Matrixf*)mtx;
}

/**
 * __ct__Q23efx10TChaseMtx6FPA4_fUsUsUsUsUsUs
 * @note Address: 0x803B071C
 * @note Size: 0xC4
 */
TChaseMtx6::TChaseMtx6(Mtx mtx, u16 effectID1, u16 effectID2, u16 effectID3, u16 effectID4, u16 effectID5, u16 effectID6)
{
	mItems[0].mMtx      = (Matrixf*)mtx;
	mItems[0].mEffectID = effectID1;
	mItems[1].mMtx      = (Matrixf*)mtx;
	mItems[1].mEffectID = effectID2;
	mItems[2].mMtx      = (Matrixf*)mtx;
	mItems[2].mEffectID = effectID3;
	mItems[3].mMtx      = (Matrixf*)mtx;
	mItems[3].mEffectID = effectID4;
	mItems[4].mMtx      = (Matrixf*)mtx;
	mItems[4].mEffectID = effectID5;
	mItems[5].mMtx      = (Matrixf*)mtx;
	mItems[5].mEffectID = effectID6;
}

/**
 * setMtxptr__Q23efx10TChaseMtx6FPA4_f
 * @note Address: 0x803B07E0
 * @note Size: 0x1C
 */
void TChaseMtx6::setMtxptr(Mtx mtx)
{
	mItems[0].mMtx = (Matrixf*)mtx;
	mItems[1].mMtx = (Matrixf*)mtx;
	mItems[2].mMtx = (Matrixf*)mtx;
	mItems[3].mMtx = (Matrixf*)mtx;
	mItems[4].mMtx = (Matrixf*)mtx;
	mItems[5].mMtx = (Matrixf*)mtx;
}

/**
 * __ct__Q23efx11TChaseMtxT2FPA4_fUsUs
 * @note Address: 0x803B07FC
 * @note Size: 0xAC
 */
TChaseMtxT2::TChaseMtxT2(Mtx mtx, u16 effectID1, u16 effectID2)
{
	mItems[0].mMtx      = (Matrixf*)mtx;
	mItems[0].mEffectID = effectID1;
	mItems[1].mMtx      = (Matrixf*)mtx;
	mItems[1].mEffectID = effectID2;
}

/**
 * setMtxptr__Q23efx11TChaseMtxT2FPA4_f
 * @note Address: 0x803B0900
 * @note Size: 0xC
 */
void TChaseMtxT2::setMtxptr(Mtx mtx)
{
	mItems[0].mMtx = (Matrixf*)mtx;
	mItems[1].mMtx = (Matrixf*)mtx;
}

/**
 * @matchedSize
 * __ct__Q23efx11TChaseMtxT3FPA4_fUsUsUs
 * @note Address: N/A
 * @note Size: 0xA0
 */
TChaseMtxT3::TChaseMtxT3(Mtx mtx, u16 effectID1, u16 effectID2, u16 effectID3)
{
	// UNUSED FUNCTION
	mItems[0].mMtx      = (Matrixf*)mtx;
	mItems[0].mEffectID = effectID1;
	mItems[1].mMtx      = (Matrixf*)mtx;
	mItems[1].mEffectID = effectID2;
	mItems[2].mMtx      = (Matrixf*)mtx;
	mItems[2].mEffectID = effectID3;
}

/**
 * @matchedSize
 * setMtxptr__Q23efx11TChaseMtxT3FPA4_f
 * @note Address: N/A
 * @note Size: 0x10
 */
void TChaseMtxT3::setMtxptr(Mtx mtx)
{
	// UNUSED FUNCTION
	mItems[0].mMtx = (Matrixf*)mtx;
	mItems[1].mMtx = (Matrixf*)mtx;
	mItems[2].mMtx = (Matrixf*)mtx;
}

/**
 * __ct__Q23efx11TChaseMtxT4FPA4_fUsUsUsUs
 * @note Address: 0x803B090C
 * @note Size: 0xAC
 */
TChaseMtxT4::TChaseMtxT4(Mtx mtx, u16 effectID1, u16 effectID2, u16 effectID3, u16 effectID4)
{
	mItems[0].mMtx      = (Matrixf*)mtx;
	mItems[0].mEffectID = effectID1;
	mItems[1].mMtx      = (Matrixf*)mtx;
	mItems[1].mEffectID = effectID2;
	mItems[2].mMtx      = (Matrixf*)mtx;
	mItems[2].mEffectID = effectID3;
	mItems[3].mMtx      = (Matrixf*)mtx;
	mItems[3].mEffectID = effectID4;
}

/**
 * setMtxptr__Q23efx11TChaseMtxT4FPA4_f
 * @note Address: 0x803B09B8
 * @note Size: 0x14
 */
void TChaseMtxT4::setMtxptr(Mtx mtx)
{
	mItems[0].mMtx = (Matrixf*)mtx;
	mItems[1].mMtx = (Matrixf*)mtx;
	mItems[2].mMtx = (Matrixf*)mtx;
	mItems[3].mMtx = (Matrixf*)mtx;
}

/**
 * __ct__Q23efx14TChasePosYRot2FP10Vector3<f>PfUsUs
 * @note Address: 0x803B09CC
 * @note Size: 0xA0
 */
TChasePosYRot2::TChasePosYRot2(Vector3f* p1, f32* p2, u16 effectID1, u16 effectID2)
{
	mItems[0].mPosition = p1;
	mItems[0].mRotation = p2;
	mItems[0].mEffectID = effectID1;
	mItems[1].mPosition = p1;
	mItems[1].mRotation = p2;
	mItems[1].mEffectID = effectID2;
}

/**
 * @matchedSize
 * setPosptr__Q23efx14TChasePosYRot2FP10Vector3<f>
 * @note Address: N/A
 * @note Size: 0xC
 */
void TChasePosYRot2::setPosptr(Vector3f* position)
{
	// UNUSED FUNCTION
	mItems[0].mPosition = position;
	mItems[1].mPosition = position;
}

/**
 * @matchedSize
 * setYRot__Q23efx14TChasePosYRot2FPf
 * @note Address: N/A
 * @note Size: 0xC
 */
void TChasePosYRot2::setYRot(f32* rotation)
{
	// UNUSED FUNCTION
	mItems[0].mRotation = rotation;
	mItems[1].mRotation = rotation;
}

/**
 * __ct__Q23efx14TChasePosYRot3FP10Vector3<f>PfUsUsUs
 * @note Address: 0x803B0AC4
 * @note Size: 0xB0
 */
TChasePosYRot3::TChasePosYRot3(Vector3f* p1, f32* p2, u16 effectID1, u16 effectID2, u16 effectID3)
{
	mItems[0].mPosition = p1;
	mItems[0].mRotation = p2;
	mItems[0].mEffectID = effectID1;
	mItems[1].mPosition = p1;
	mItems[1].mRotation = p2;
	mItems[1].mEffectID = effectID2;
	mItems[2].mPosition = p1;
	mItems[2].mRotation = p2;
	mItems[2].mEffectID = effectID3;
}

/**
 * @matchedSize
 * setPosptr__Q23efx14TChasePosYRot3FP10Vector3<f>
 * @note Address: N/A
 * @note Size: 0x10
 */
void TChasePosYRot3::setPosptr(Vector3f* position)
{
	// UNUSED FUNCTION
	mItems[0].mPosition = position;
	mItems[1].mPosition = position;
	mItems[2].mPosition = position;
}

/**
 * @matchedSize
 * setYRot__Q23efx14TChasePosYRot3FPf
 * @note Address: N/A
 * @note Size: 0x10
 */
void TChasePosYRot3::setYRot(f32* rotation)
{
	// UNUSED FUNCTION
	mItems[0].mRotation = rotation;
	mItems[1].mRotation = rotation;
	mItems[2].mRotation = rotation;
}

/**
 * @matchedSize
 * __ct__Q23efx24TChasePosPosLocalYScale2FP10Vector3<f>P10Vector3<f>fUsUs
 * @note Address: N/A
 * @note Size: 0xB4
 */
TChasePosPosLocalYScale2::TChasePosPosLocalYScale2(Vector3f* p1, Vector3f* p2, f32 scale, u16 effectID1, u16 effectID2)
{
	// UNUSED FUNCTION
	mItems[0].mPosListStart = p1;
	mItems[0].mPosListEnd   = p2;
	mItems[0].mYScale       = scale;
	mItems[0].mEffectID     = effectID1;
	mItems[1].mPosListStart = p1;
	mItems[1].mPosListEnd   = p2;
	mItems[1].mYScale       = scale;
	mItems[1].mEffectID     = effectID2;
}

/**
 * @matchedSize
 * setPosptr__Q23efx24TChasePosPosLocalYScale2FP10Vector3<f>P10Vector3<f>
 * @note Address: N/A
 * @note Size: 0x14
 */
void TChasePosPosLocalYScale2::setPosptr(Vector3f* p1, Vector3f* p2)
{
	// UNUSED FUNCTION
	mItems[0].mPosListStart = p1;
	mItems[0].mPosListEnd   = p2;
	mItems[1].mPosListStart = p1;
	mItems[1].mPosListEnd   = p2;
}

/**
 * __ct__Q23efx24TChasePosPosLocalYScale3FP10Vector3<f>P10Vector3<f>fUsUsUs
 * @note Address: 0x803B0BCC
 * @note Size: 0xC8
 */
TChasePosPosLocalYScale3::TChasePosPosLocalYScale3(Vector3f* p1, Vector3f* p2, f32 scale, u16 effectID1, u16 effectID2, u16 effectID3)
{
	mItems[0].mPosListStart = p1;
	mItems[0].mPosListEnd   = p2;
	mItems[0].mYScale       = scale;
	mItems[0].mEffectID     = effectID1;
	mItems[1].mPosListStart = p1;
	mItems[1].mPosListEnd   = p2;
	mItems[1].mYScale       = scale;
	mItems[1].mEffectID     = effectID2;
	mItems[2].mPosListStart = p1;
	mItems[2].mPosListEnd   = p2;
	mItems[2].mYScale       = scale;
	mItems[2].mEffectID     = effectID3;
}

/**
 * setPosptr__Q23efx24TChasePosPosLocalYScale3FP10Vector3<f>P10Vector3<f>
 * @note Address: 0x803B0C94
 * @note Size: 0x1C
 */
void TChasePosPosLocalYScale3::setPosptr(Vector3f* p1, Vector3f* p2)
{
	mItems[0].mPosListStart = p1;
	mItems[0].mPosListEnd   = p2;
	mItems[1].mPosListStart = p1;
	mItems[1].mPosListEnd   = p2;
	mItems[2].mPosListStart = p1;
	mItems[2].mPosListEnd   = p2;
}

/**
 * @matchedSize
 * __ct__Q23efx24TChasePosPosLocalZScale2FP10Vector3<f>P10Vector3<f>fUsUs
 * @note Address: N/A
 * @note Size: 0xB4
 */
TChasePosPosLocalZScale2::TChasePosPosLocalZScale2(Vector3f* p1, Vector3f* p2, f32 scale, u16 effectID1, u16 effectID2)
{
	// UNUSED FUNCTION
	mItems[0].mPosPtrA  = p1;
	mItems[0].mPosPtrB  = p2;
	mItems[0].mZScale   = scale;
	mItems[0].mEffectID = effectID1;
	mItems[1].mPosPtrA  = p1;
	mItems[1].mPosPtrB  = p2;
	mItems[1].mZScale   = scale;
	mItems[1].mEffectID = effectID2;
}

/**
 * @matchedSize
 * setPosptr__Q23efx24TChasePosPosLocalZScale2FP10Vector3<f>P10Vector3<f>
 * @note Address: N/A
 * @note Size: 0x14
 */
void TChasePosPosLocalZScale2::setPosptr(Vector3f* p1, Vector3f* p2)
{
	for (int i = 0; i < 2; i++) {
		mItems[i].mPosPtrA = p1;
		mItems[i].mPosPtrB = p2;
	}
}

/**
 * __ct__Q23efx24TChasePosPosLocalZScale3FP10Vector3<f>P10Vector3<f>fUsUsUs
 * @note Address: 0x803B0D08
 * @note Size: 0xC8
 */
TChasePosPosLocalZScale3::TChasePosPosLocalZScale3(Vector3f* p1, Vector3f* p2, f32 scale, u16 effectID1, u16 effectID2, u16 effectID3)
{
	mItems[0].mPosPtrA  = p1;
	mItems[0].mPosPtrB  = p2;
	mItems[0].mZScale   = scale;
	mItems[0].mEffectID = effectID1;
	mItems[1].mPosPtrA  = p1;
	mItems[1].mPosPtrB  = p2;
	mItems[1].mZScale   = scale;
	mItems[1].mEffectID = effectID2;
	mItems[2].mPosPtrA  = p1;
	mItems[2].mPosPtrB  = p2;
	mItems[2].mZScale   = scale;
	mItems[2].mEffectID = effectID3;
}

/**
 * setPosptr__Q23efx24TChasePosPosLocalZScale3FP10Vector3<f>P10Vector3<f>
 * @note Address: 0x803B0DD0
 * @note Size: 0x1C
 */
void TChasePosPosLocalZScale3::setPosptr(Vector3f* p1, Vector3f* p2)
{
	for (int i = 0; i < 3; i++) {
		mItems[i].mPosPtrA = p1;
		mItems[i].mPosPtrB = p2;
	}
}

///////// TSYNCGROUP DEFINITIONS /////////
// N = 2
template <typename T>
bool TSyncGroup2<T>::create(Arg* arg)
{
	for (u32 i = 0; i < 2; i++) {
		if (!mItems[i].create(arg)) {
			return false;
		}
	}
	return true;
}

template <typename T>
void TSyncGroup2<T>::fade()
{
	for (u32 i = 0; i < 2; i++) {
		mItems[i].fade();
	}
}

template <typename T>
void TSyncGroup2<T>::forceKill()
{
	for (u32 i = 0; i < 2; i++) {
		mItems[i].forceKill();
	}
}

template <typename T>
void TSyncGroup2<T>::startDemoDrawOff()
{
	for (u32 i = 0; i < 2; i++) {
		mItems[i].startDemoDrawOff();
	}
}

template <typename T>
void TSyncGroup2<T>::endDemoDrawOn()
{
	for (u32 i = 0; i < 2; i++) {
		mItems[i].endDemoDrawOn();
	}
}

// N = 3
template <typename T>
bool TSyncGroup3<T>::create(Arg* arg)
{
	for (u32 i = 0; i < 3; i++) {
		if (!mItems[i].create(arg)) {
			return false;
		}
	}
	return true;
}

template <typename T>
void TSyncGroup3<T>::fade()
{
	for (u32 i = 0; i < 3; i++) {
		mItems[i].fade();
	}
}

template <typename T>
void TSyncGroup3<T>::forceKill()
{
	for (u32 i = 0; i < 3; i++) {
		mItems[i].forceKill();
	}
}

template <typename T>
void TSyncGroup3<T>::startDemoDrawOff()
{
	for (u32 i = 0; i < 3; i++) {
		mItems[i].startDemoDrawOff();
	}
}

template <typename T>
void TSyncGroup3<T>::endDemoDrawOn()
{
	for (u32 i = 0; i < 3; i++) {
		mItems[i].endDemoDrawOn();
	}
}

// N = 4
template <typename T>
bool TSyncGroup4<T>::create(Arg* arg)
{
	for (u32 i = 0; i < 4; i++) {
		if (!mItems[i].create(arg)) {
			return false;
		}
	}
	return true;
}

template <typename T>
void TSyncGroup4<T>::fade()
{
	for (u32 i = 0; i < 4; i++) {
		mItems[i].fade();
	}
}

template <typename T>
void TSyncGroup4<T>::forceKill()
{
	for (u32 i = 0; i < 4; i++) {
		mItems[i].forceKill();
	}
}

template <typename T>
void TSyncGroup4<T>::startDemoDrawOff()
{
	for (u32 i = 0; i < 4; i++) {
		mItems[i].startDemoDrawOff();
	}
}

template <typename T>
void TSyncGroup4<T>::endDemoDrawOn()
{
	for (u32 i = 0; i < 4; i++) {
		mItems[i].endDemoDrawOn();
	}
}

// N = 6
template <typename T>
bool TSyncGroup6<T>::create(Arg* arg)
{
	for (u32 i = 0; i < 6; i++) {
		if (!mItems[i].create(arg)) {
			return false;
		}
	}
	return true;
}

template <typename T>
void TSyncGroup6<T>::fade()
{
	for (u32 i = 0; i < 6; i++) {
		mItems[i].fade();
	}
}

template <typename T>
void TSyncGroup6<T>::forceKill()
{
	for (u32 i = 0; i < 6; i++) {
		mItems[i].forceKill();
	}
}

template <typename T>
void TSyncGroup6<T>::startDemoDrawOff()
{
	for (u32 i = 0; i < 6; i++) {
		mItems[i].startDemoDrawOff();
	}
}

template <typename T>
void TSyncGroup6<T>::endDemoDrawOn()
{
	for (u32 i = 0; i < 6; i++) {
		mItems[i].endDemoDrawOn();
	}
}

} // namespace efx
