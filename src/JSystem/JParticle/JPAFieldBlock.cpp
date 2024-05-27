#include "float.h"
#include "math.h"
#include "Dolphin/mtx.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JParticle/JPABlock.h"
#include "JSystem/JParticle/JPAEmitter.h"
#include "JSystem/JParticle/JPAField.h"
#include "types.h"

/**
 * @note Address: N/A
 * @note Size: 0x15C
 */
void JPAFieldBase::calcAffect(JPAFieldBlock* block, JPABaseParticle* particle)
{
	JGeometry::TVec3f vec = _04;
	if (!particle->checkStatus(0x4) && block->checkStatus(0x8 | 0x30 | 0x40)) {
		vec.scale(calcFadeAffect(block, particle->mTime));
	}

	switch (block->getAddType()) {
	case 0:
		particle->mVelType0.add(vec);
		break;
	case 1:
		particle->mVelType1.add(vec);
		break;
	case 2:
		particle->mVelType2.add(vec);
		break;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x9C
 */
f32 JPAFieldBase::calcFadeAffect(JPAFieldBlock* block, f32 time) const
{
	f32 fadeAffect = 1.0f;
	if ((block->checkStatus(0x8) && time < block->getEnTime()) || (block->checkStatus(0x10) && time >= block->getDisTime())) {
		fadeAffect = 0.0f;

	} else if (block->checkStatus(0x40) && time >= block->getFadeOutTime()) {
		fadeAffect = (block->getDisTime() - time) * block->getFadeOutRate();

	} else if (block->checkStatus(0x20) && time < block->getFadeInTime()) {
		fadeAffect = (time - block->getEnTime()) * block->getFadeInRate();
	}

	return fadeAffect;
}

/**
 * @note Address: 0x800915A0
 * @note Size: 0xA8
 */
void JPAFieldGravity::prepare(JPAEmitterWorkData* workData, JPAFieldBlock* block)
{
	if (block->checkStatus(2)) {
		_04.scale(block->getMag(), block->getDir());
	} else {
		PSMTXMultVecSR(workData->mRotationMtx, (Vec*)&block->getDir(), (Vec*)&_04);
		_04.scale(block->getMag());
	}
}

/**
 * @note Address: 0x80091648
 * @note Size: 0x1BC
 */
void JPAFieldGravity::calc(JPAEmitterWorkData* workData, JPAFieldBlock* block, JPABaseParticle* particle) { calcAffect(block, particle); }

/**
 * @note Address: 0x80091804
 * @note Size: 0x150
 */
void JPAFieldAir::prepare(JPAEmitterWorkData* workData, JPAFieldBlock* block)
{
	JGeometry::TVec3f normVec;
	normVec.normalize(block->getDir());
	if (block->checkStatus(2)) {
		_04.scale(block->getMag(), normVec);
	} else {
		PSMTXMultVecSR(workData->mRotationMtx, (Vec*)&normVec, (Vec*)&_04);
		_04.scale(block->getMag());
	}
}

/**
 * @note Address: 0x80091954
 * @note Size: 0x25C
 */
void JPAFieldAir::calc(JPAEmitterWorkData* workData, JPAFieldBlock* block, JPABaseParticle* particle)
{
	calcAffect(block, particle);
	if (block->checkStatus(4)) {
		f32 len = particle->mVelType1.length();
		if (len > block->getMagRndm()) {
			particle->mVelType1.scale(block->getMagRndm() / len);
		}
	}
}

/**
 * @note Address: 0x80091BB0
 * @note Size: 0x60
 */
void JPAFieldMagnet::prepare(JPAEmitterWorkData* data, JPAFieldBlock* block)
{
	_10.sub(block->getPos(), data->mEmitterPos);
	PSMTXMultVecSR(data->mRotationMtx, (Vec*)&_10, (Vec*)&_10);
}

/**
 * @note Address: 0x80091C10
 * @note Size: 0x288
 */
void JPAFieldMagnet::calc(JPAEmitterWorkData* workData, JPAFieldBlock* block, JPABaseParticle* particle)
{
	_04.sub(_10, particle->mLocalPosition);
	_04.setLength(block->getMag());
	calcAffect(block, particle);
}

/**
 * @note Address: 0x80091E98
 * @note Size: 0x84
 */
void JPAFieldNewton::prepare(JPAEmitterWorkData* data, JPAFieldBlock* block)
{
	_10.sub(block->getPos(), data->mEmitterPos);
	PSMTXMultVecSR(data->mRotationMtx, (Vec*)&_10, (Vec*)&_10);
	_1C = block->getVal1() * block->getVal1();
}

/**
 * @note Address: 0x80091F1C
 * @note Size: 0x32C
 */
void JPAFieldNewton::calc(JPAEmitterWorkData* workData, JPAFieldBlock* block, JPABaseParticle* particle)
{
	_04.sub(_10, particle->mLocalPosition);
	f32 sq = _04.squared();
	if (sq > _1C) {
		_04.setLength((_1C * (10.0f * block->getMag())) / sq);
	} else {
		_04.setLength(10.0f * block->getMag());
	}

	calcAffect(block, particle);
}

/**
 * @note Address: 0x80092248
 * @note Size: 0xF4
 */
void JPAFieldVortex::prepare(JPAEmitterWorkData* workData, JPAFieldBlock* block)
{
	PSMTXMultVecSR(workData->mGlobalRot, (Vec*)&block->getDir(), (Vec*)&_10);
	_10.normalize();
	_1C = block->getPos().z * block->getPos().z;
	_20 = 1.0f / _1C;
}

/**
 * @note Address: 0x8009233C
 * @note Size: 0x2F0
 */
void JPAFieldVortex::calc(JPAEmitterWorkData* workData, JPAFieldBlock* block, JPABaseParticle* particle)
{
	JGeometry::TVec3f vec;
	vec.scale(_10.dot(particle->mLocalPosition), _10);
	vec.sub(particle->mLocalPosition, vec);

	f32 sq = vec.squared();
	if (sq > _1C)
		sq = block->getMagRndm();
	else
		sq = (1.0f - sq * _20) * block->getMag() + sq * _20 * block->getMagRndm();

	vec.normalize();
	_04.cross(vec, _10);
	_04.scale(sq);

	calcAffect(block, particle);
}

/**
 * @note Address: 0x8009262C
 * @note Size: 0x28C
 */
void JPAFieldConvection::prepare(JPAEmitterWorkData* workData, JPAFieldBlock* block)
{
	JGeometry::TVec3f vec1; // 0x14
	JGeometry::TVec3f vec2; // 0x8

	vec2.cross(block->getPos(), block->getDir());
	vec1.cross(block->getDir(), vec2);
	PSMTXMultVecSR(workData->mGlobalRot, (Vec*)&vec1, (Vec*)&_10);
	PSMTXMultVecSR(workData->mGlobalRot, (Vec*)&block->getDir(), (Vec*)&_1C);
	PSMTXMultVecSR(workData->mGlobalRot, (Vec*)&vec2, (Vec*)&_28);
	_10.normalize();
	_1C.normalize();
	_28.normalize();
}

/**
 * @note Address: 0x800928B8
 * @note Size: 0x39C
 */
void JPAFieldConvection::calc(JPAEmitterWorkData* workData, JPAFieldBlock* block, JPABaseParticle* particle)
{
	JGeometry::TVec3f vec1; // 0x20
	JGeometry::TVec3f vec2; // 0x14
	JGeometry::TVec3f vec3; // 0x8

	vec1.scale(_10.dot(particle->mLocalPosition), _10);
	vec3.scale(_28.dot(particle->mLocalPosition), _28);
	vec1.add(vec3);
	vec1.setLength(vec1, block->getVal1());
	vec2.sub(particle->mLocalPosition, vec1);
	vec3.cross(_1C, vec1);
	_04.cross(vec3, vec2);
	_04.setLength(block->getMag());

	calcAffect(block, particle);
}

/**
 * @note Address: 0x80092C54
 * @note Size: 0x2B0
 */
void JPAFieldRandom::calc(JPAEmitterWorkData* workData, JPAFieldBlock* block, JPABaseParticle* particle)
{
	if (!particle->mAge || (block->getCycle() && particle->mAge % block->getCycle() == 0)) {
		JPABaseEmitter* emitter = workData->mEmitter;
		_04.set(emitter->getRandZH(), emitter->getRandZH(), emitter->getRandZH());
		_04.scale(block->getMag());
		calcAffect(block, particle);
	}
}

/**
 * @note Address: 0x80092F04
 * @note Size: 0xD8
 */
void JPAFieldDrag::calc(JPAEmitterWorkData* workData, JPAFieldBlock* block, JPABaseParticle* particle)
{
	if (!particle->checkStatus(4)) {
		f32 fadeAffect = calcFadeAffect(block, particle->mTime);
		particle->mDrag *= 1.0f - fadeAffect * (1.0f - block->getMag());
	} else {
		particle->mDrag *= block->getMag();
	}
}

/**
 * @note Address: 0x80092FDC
 * @note Size: 0x130
 */
void JPAFieldSpin::prepare(JPAEmitterWorkData* workData, JPAFieldBlock* block)
{
	JGeometry::TVec3f vec;
	PSMTXMultVecSR(workData->mGlobalRot, (Vec*)&block->getDir(), (Vec*)&vec);
	vec.normalize();
	Mtx mtx;
	PSMTXRotAxisRad(mtx, (Vec*)&vec, block->getMag());
	_10.set(mtx[0][0], mtx[1][0], mtx[2][0]);
	_1C.set(mtx[0][1], mtx[1][1], mtx[2][1]);
	_28.set(mtx[0][2], mtx[1][2], mtx[2][2]);
}

/**
 * @note Address: 0x8009310C
 * @note Size: 0x288
 */
void JPAFieldSpin::calc(JPAEmitterWorkData* workData, JPAFieldBlock* block, JPABaseParticle* particle)
{
	Mtx mtx;
	mtx[0][0] = _10.x;
	mtx[1][0] = _10.y;
	mtx[2][0] = _10.z;
	mtx[0][1] = _1C.x;
	mtx[1][1] = _1C.y;
	mtx[2][1] = _1C.z;
	mtx[0][2] = _28.x;
	mtx[1][2] = _28.y;
	mtx[2][2] = _28.z;
	mtx[0][3] = mtx[1][3] = mtx[2][3] = 0.0f;
	Vec outVec;
	PSMTXMultVecSR(mtx, (Vec*)&particle->mLocalPosition, &outVec);
	_04.set(outVec.x - particle->mLocalPosition.x, outVec.y - particle->mLocalPosition.y, outVec.z - particle->mLocalPosition.z);
	calcAffect(block, particle);
}

/**
 * @note Address: 0x80093394
 * @note Size: 0x38
 */
JPAFieldBlock::JPAFieldBlock(const u8* data, JKRHeap* heap)
{
	mData = reinterpret_cast<const Data*>(data);
	init(heap);
}

/**
 * @note Address: N/A
 * @note Size: 0x114
 */
void JPAFieldBlock::init_jpa(const u8*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800933CC
 * @note Size: 0x2EC
 */
void JPAFieldBlock::init(JKRHeap* heap)
{
	mFadeInRate = getFadeInTime() - getEnTime();
	if (mFadeInRate == 0.0f) {
		mFadeInRate = 1.0f;
	} else {
		mFadeInRate = 1.0f / mFadeInRate;
	}

	mFadeOutRate = getDisTime() - getFadeOutTime();
	if (mFadeOutRate == 0.0f) {
		mFadeOutRate = 1.0f;
	} else {
		mFadeOutRate = 1.0f / mFadeOutRate;
	}

	getPosOrig(&mOffset);
	getDirOrig(&mVelocity);
	mSpeed = getMagOrig();

	switch (getType()) {
	case JPAFIELD_Gravity:
		mField = new (heap, 0) JPAFieldGravity;
		break;
	case JPAFIELD_Air:
		mField = new (heap, 0) JPAFieldAir;
		break;
	case JPAFIELD_Magnet:
		mField = new (heap, 0) JPAFieldMagnet;
		break;
	case JPAFIELD_Newton:
		mField = new (heap, 0) JPAFieldNewton;
		break;
	case JPAFIELD_Vortex:
		mField = new (heap, 0) JPAFieldVortex;
		break;
	case JPAFIELD_Random:
		mField = new (heap, 0) JPAFieldRandom;
		break;
	case JPAFIELD_Drag:
		mField = new (heap, 0) JPAFieldDrag;
		break;
	case JPAFIELD_Convection:
		mField = new (heap, 0) JPAFieldConvection;
		break;
	case JPAFIELD_Spin:
		mField = new (heap, 0) JPAFieldSpin;
		break;
	default:
		mField = nullptr;
		break;
	}
}
