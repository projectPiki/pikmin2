#include "JSystem/JGeometry.h"
#include "JSystem/JParticle/JPABlock.h"
#include "JSystem/JParticle/JPAEmitter.h"
#include "types.h"

/**
 * @note Address: 0x8008EFD0
 * @note Size: 0xDC
 */
void JPAVolumePoint(JPAEmitterWorkData* workData)
{
	workData->mVolumePos.zero();
	workData->mVelOmni.set(workData->mEmitter->getRandZH(), workData->mEmitter->getRandZH(), workData->mEmitter->getRandZH());
	workData->mVelAxis.set(workData->mVelOmni.x, 0.0f, workData->mVelOmni.z);
}

/**
 * @note Address: 0x8008F0AC
 * @note Size: 0x11C
 */
void JPAVolumeLine(JPAEmitterWorkData* workData)
{
	if (workData->mEmitter->checkDynFlag(JPADYN_FixedInterval)) {
		workData->mVolumePos.set(0.0f, 0.0f,
		                         workData->mVolumeSize * ((workData->mVolumeEmitIdx / (workData->mCreateNumber - 1.0f) - 0.5f)));
		workData->mVolumeEmitIdx++;
	} else {
		workData->mVolumePos.set(0.0f, 0.0f, workData->mVolumeSize * workData->mEmitter->getRandZH());
	}

	workData->mVelOmni.set(0.0f, 0.0f, workData->mVolumePos.z * workData->mGlobalScl.z);
	workData->mVelAxis.set(0.0f, 0.0f, workData->mVolumePos.z);
}

/**
 * @note Address: 0x8008F1C8
 * @note Size: 0x1B4
 */
void JPAVolumeCircle(JPAEmitterWorkData* workData)
{
	s16 angleInShort;
	f32 angleInFloat;
	f32 distance;
	f32 circleSizeInXZ;

	if (workData->mEmitter->checkDynFlag(JPADYN_FixedInterval)) {
		angleInFloat = (s16)((workData->mVolumeEmitIdx << 16) / workData->mCreateNumber);
		angleInShort = angleInFloat * workData->mVolumeSweep;
		workData->mVolumeEmitIdx++;
	} else {
		angleInFloat = workData->mVolumeSweep * workData->mEmitter->getRandS16();
		angleInShort = angleInFloat;
	}

	distance = workData->mEmitter->getRandF32();
	if (workData->mEmitter->checkDynFlag(JPADYN_FixedDensity)) {
		distance = 1.0f - (distance * distance);
	}

	circleSizeInXZ = workData->mVolumeSize * (workData->mVolumeMinRad + distance * (1.0f - workData->mVolumeMinRad));
	workData->mVolumePos.set(circleSizeInXZ * JMASSin(angleInShort), 0.0f, circleSizeInXZ * JMASCos(angleInShort));
	workData->mVelOmni.mul(workData->mVolumePos, workData->mGlobalScl);
	workData->mVelAxis.set(workData->mVolumePos.x, 0.0f, workData->mVolumePos.z);
}

/**
 * @note Address: 0x8008F37C
 * @note Size: 0x118
 */
void JPAVolumeCube(JPAEmitterWorkData* workData)
{
	workData->mVolumePos.set(workData->mEmitter->getRandZH() * workData->mVolumeSize,
	                         workData->mEmitter->getRandZH() * workData->mVolumeSize,
	                         workData->mEmitter->getRandZH() * workData->mVolumeSize);
	workData->mVelOmni.mul(workData->mVolumePos, workData->mGlobalScl);
	workData->mVelAxis.set(workData->mVolumePos.x, 0.0f, workData->mVolumePos.z);
}

/**
 * @note Address: 0x8008F494
 * @note Size: 0x28C
 */
void JPAVolumeSphere(JPAEmitterWorkData* workData)
{
	/*
	stwu     r1, -0x20(r1)
	lwz      r7, 0(r3)
	lwz      r4, 0xe8(r7)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lwz      r0, 8(r4)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8008F59C
	lwz      r6, 0x1ec(r3)
	lis      r0, 0x4330
	lwz      r4, 0x1f0(r3)
	slwi     r5, r6, 0x10
	lwz      r8, 0x1f4(r3)
	addi     r4, r4, -1
	lwz      r7, 0x1f8(r3)
	divw     r4, r5, r4
	slwi     r8, r8, 0xf
	addi     r5, r7, -1
	stw      r0, 0x10(r1)
	lfd      f3, lbl_80516B98@sda21(r2)
	addi     r0, r6, 1
	divw     r5, r8, r5
	clrlwi   r4, r4, 0x10
	stw      r4, 0x14(r1)
	lfs      f1, 0x3c(r3)
	lfd      f2, 0x10(r1)
	lfs      f0, lbl_80516B90@sda21(r2)
	stw      r0, 0x1ec(r3)
	fsubs    f2, f2, f3
	addi     r0, r5, 0x4000
	clrlwi   r0, r0, 0x10
	lwz      r5, 0x1ec(r3)
	fmadds   f0, f2, f1, f0
	lwz      r4, 0x1f0(r3)
	extsh    r0, r0
	cmpw     r5, r4
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r4, 0x1c(r1)
	bne      lbl_8008F618
	li       r5, 0
	stw      r5, 0x1ec(r3)
	lwz      r5, 0x1f4(r3)
	addi     r5, r5, 1
	stw      r5, 0x1f4(r3)
	lwz      r6, 0x1f4(r3)
	lwz      r5, 0x1f8(r3)
	slwi     r6, r6, 1
	cmpw     r6, r5
	bge      lbl_8008F57C
	lwz      r5, 0x1f0(r3)
	cmpwi    r5, 1
	beq      lbl_8008F570
	addi     r5, r5, 4
	b        lbl_8008F574

lbl_8008F570:
	addi     r5, r5, 3

lbl_8008F574:
	stw      r5, 0x1f0(r3)
	b        lbl_8008F618

lbl_8008F57C:
	lwz      r5, 0x1f0(r3)
	cmpwi    r5, 4
	beq      lbl_8008F590
	addi     r5, r5, -4
	b        lbl_8008F594

lbl_8008F590:
	li       r5, 1

lbl_8008F594:
	stw      r5, 0x1f0(r3)
	b        lbl_8008F618

lbl_8008F59C:
	lis      r4, 0x0019660D@ha
	lwz      r6, 0xc4(r7)
	addi     r5, r4, 0x0019660D@l
	lis      r0, 0x4330
	mullw    r4, r6, r5
	stw      r0, 0x18(r1)
	lfd      f1, lbl_80516B88@sda21(r2)
	addis    r4, r4, 0x3c6f
	addi     r0, r4, -3233
	stw      r0, 0xc4(r7)
	srwi     r0, r0, 0x10
	extsh    r0, r0
	lwz      r6, 0(r3)
	srawi    r0, r0, 1
	extsh    r0, r0
	lwz      r4, 0xc4(r6)
	mullw    r4, r4, r5
	addis    r4, r4, 0x3c6f
	addi     r5, r4, -3233
	srwi     r4, r5, 0x10
	stw      r5, 0xc4(r6)
	extsh    r4, r4
	xoris    r4, r4, 0x8000
	lfs      f2, 0x3c(r3)
	stw      r4, 0x1c(r1)
	lfd      f0, 0x18(r1)
	fsubs    f0, f0, f1
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r4, 0x14(r1)

lbl_8008F618:
	lwz      r7, 0(r3)
	lis      r5, 0x0019660D@ha
	addi     r5, r5, 0x0019660D@l
	lfs      f1, lbl_80516B7C@sda21(r2)
	lwz      r6, 0xc4(r7)
	mullw    r5, r6, r5
	addis    r5, r5, 0x3c6f
	addi     r5, r5, -3233
	stw      r5, 0xc4(r7)
	srwi     r5, r5, 9
	oris     r6, r5, 0x3f80
	lwz      r5, 0(r3)
	stw      r6, 8(r1)
	lwz      r5, 0xe8(r5)
	lfs      f0, 8(r1)
	lwz      r5, 0x2c(r5)
	fsubs    f2, f0, f1
	lwz      r5, 0(r5)
	lwz      r5, 8(r5)
	clrlwi.  r5, r5, 0x1f
	beq      lbl_8008F674
	fmuls    f0, f2, f2
	fnmsubs  f2, f2, f0, f1

lbl_8008F674:
	lfs      f1, 0x38(r3)
	lis      r5, sincosTable___5JMath@ha
	lfs      f0, lbl_80516B7C@sda21(r2)
	addi     r5, r5, sincosTable___5JMath@l
	rlwinm   r6, r4, 0x1e, 0x12, 0x1c
	lfs      f5, 0x34(r3)
	fsubs    f0, f0, f1
	addi     r4, r5, 4
	rlwinm   r0, r0, 0x1e, 0x12, 0x1c
	lfsx     f4, r4, r6
	lfsx     f3, r4, r0
	fmadds   f0, f2, f0, f1
	lfsx     f1, r5, r6
	lfsx     f2, r5, r0
	fmuls    f6, f5, f0
	lfs      f0, lbl_80516B78@sda21(r2)
	fmuls    f5, f6, f3
	fneg     f3, f6
	fmuls    f1, f5, f1
	fmuls    f2, f3, f2
	fmuls    f3, f5, f4
	stfs     f1, 0x10(r3)
	stfs     f2, 0x14(r3)
	stfs     f3, 0x18(r3)
	lfs      f2, 0x10(r3)
	lfs      f1, 0x114(r3)
	fmuls    f1, f2, f1
	stfs     f1, 0x1c(r3)
	lfs      f2, 0x14(r3)
	lfs      f1, 0x118(r3)
	fmuls    f1, f2, f1
	stfs     f1, 0x20(r3)
	lfs      f2, 0x18(r3)
	lfs      f1, 0x11c(r3)
	fmuls    f1, f2, f1
	stfs     f1, 0x24(r3)
	lfs      f2, 0x18(r3)
	lfs      f1, 0x10(r3)
	stfs     f1, 0x28(r3)
	stfs     f0, 0x2c(r3)
	stfs     f2, 0x30(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x8008F720
 * @note Size: 0x184
 */
void JPAVolumeCylinder(JPAEmitterWorkData* workData)
{
	/*
	stwu     r1, -0x20(r1)
	lis      r4, 0x0019660D@ha
	lis      r0, 0x4330
	lfd      f2, lbl_80516B88@sda21(r2)
	lwz      r7, 0(r3)
	addi     r5, r4, 0x0019660D@l
	stw      r0, 0x10(r1)
	lwz      r6, 0xc4(r7)
	lfs      f0, lbl_80516B7C@sda21(r2)
	mullw    r4, r6, r5
	addis    r4, r4, 0x3c6f
	addi     r0, r4, -3233
	stw      r0, 0xc4(r7)
	srwi     r0, r0, 0x10
	extsh    r0, r0
	lwz      r6, 0(r3)
	xoris    r0, r0, 0x8000
	stw      r0, 0x14(r1)
	lwz      r0, 0xc4(r6)
	lfd      f1, 0x10(r1)
	mullw    r4, r0, r5
	lfs      f3, 0x3c(r3)
	fsubs    f1, f1, f2
	fmuls    f1, f3, f1
	addis    r4, r4, 0x3c6f
	addi     r0, r4, -3233
	stw      r0, 0xc4(r6)
	srwi     r0, r0, 9
	oris     r0, r0, 0x3f80
	fctiwz   f2, f1
	lwz      r7, 0(r3)
	stw      r0, 0xc(r1)
	lwz      r4, 0xe8(r7)
	lfs      f1, 0xc(r1)
	lwz      r4, 0x2c(r4)
	stfd     f2, 0x18(r1)
	fsubs    f1, f1, f0
	lwz      r4, 0(r4)
	lwz      r8, 0x1c(r1)
	lwz      r0, 8(r4)
	fmr      f2, f1
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8008F7D0
	fnmsubs  f2, f1, f1, f0

lbl_8008F7D0:
	lis      r4, 0x0019660D@ha
	lwz      r5, 0xc4(r7)
	addi     r0, r4, 0x0019660D@l
	lis      r6, sincosTable___5JMath@ha
	mullw    r4, r5, r0
	lfs      f1, 0x38(r3)
	lfs      f5, lbl_80516B7C@sda21(r2)
	addi     r6, r6, sincosTable___5JMath@l
	rlwinm   r8, r8, 0x1e, 0x12, 0x1c
	lfs      f3, 0x34(r3)
	addis    r4, r4, 0x3c6f
	fsubs    f0, f5, f1
	addi     r4, r4, -3233
	add      r5, r6, r8
	srwi     r0, r4, 9
	lfs      f4, 4(r5)
	oris     r0, r0, 0x3f80
	stw      r0, 8(r1)
	fmadds   f2, f2, f0, f1
	lfs      f0, lbl_80516B78@sda21(r2)
	lfs      f1, 8(r1)
	fmuls    f7, f3, f2
	stw      r4, 0xc4(r7)
	fsubs    f6, f1, f5
	lfsx     f1, r6, r8
	lfs      f3, 0x34(r3)
	fmuls    f4, f7, f4
	fadds    f2, f6, f6
	fmuls    f1, f7, f1
	fsubs    f2, f2, f5
	stfs     f1, 0x10(r3)
	fmuls    f1, f3, f2
	stfs     f1, 0x14(r3)
	stfs     f4, 0x18(r3)
	lfs      f2, 0x10(r3)
	lfs      f1, 0x114(r3)
	fmuls    f1, f2, f1
	stfs     f1, 0x1c(r3)
	lfs      f2, 0x14(r3)
	lfs      f1, 0x118(r3)
	fmuls    f1, f2, f1
	stfs     f1, 0x20(r3)
	lfs      f2, 0x18(r3)
	lfs      f1, 0x11c(r3)
	fmuls    f1, f2, f1
	stfs     f1, 0x24(r3)
	lfs      f2, 0x18(r3)
	lfs      f1, 0x10(r3)
	stfs     f1, 0x28(r3)
	stfs     f0, 0x2c(r3)
	stfs     f2, 0x30(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x8008F8A4
 * @note Size: 0x128
 */
void JPAVolumeTorus(JPAEmitterWorkData* workData)
{
	/*
	stwu     r1, -0x20(r1)
	lis      r5, 0x0019660D@ha
	lis      r0, 0x4330
	lis      r4, sincosTable___5JMath@ha
	lwz      r8, 0(r3)
	addi     r4, r4, sincosTable___5JMath@l
	addi     r6, r5, 0x0019660D@l
	stw      r0, 8(r1)
	lwz      r7, 0xc4(r8)
	addi     r9, r4, 4
	lfd      f1, lbl_80516B88@sda21(r2)
	mullw    r5, r7, r6
	addis    r5, r5, 0x3c6f
	addi     r5, r5, -3233
	srwi     r0, r5, 0x10
	stw      r5, 0xc4(r8)
	extsh    r0, r0
	xoris    r0, r0, 0x8000
	lwz      r7, 0(r3)
	stw      r0, 0xc(r1)
	lwz      r0, 0xc4(r7)
	lfd      f0, 8(r1)
	mullw    r5, r0, r6
	lfs      f2, 0x3c(r3)
	fsubs    f0, f0, f1
	fmuls    f0, f2, f0
	addis    r5, r5, 0x3c6f
	addi     r0, r5, -3233
	fctiwz   f0, f0
	stw      r0, 0xc4(r7)
	rlwinm   r0, r0, 0xe, 0x12, 0x1c
	lfs      f1, 0x34(r3)
	stfd     f0, 0x10(r1)
	lfs      f0, 0x38(r3)
	lwz      r5, 0x14(r1)
	fmuls    f5, f1, f0
	lfsx     f1, r4, r0
	rlwinm   r5, r5, 0x1e, 0x12, 0x1c
	lfsx     f4, r9, r0
	lfsx     f0, r4, r5
	lfsx     f2, r9, r5
	fmuls    f0, f5, f0
	fmuls    f3, f5, f1
	fmuls    f1, f5, f2
	fmuls    f0, f0, f4
	fmuls    f1, f1, f4
	stfs     f0, 0x28(r3)
	stfs     f3, 0x2c(r3)
	stfs     f1, 0x30(r3)
	lfs      f4, 0x34(r3)
	lfsx     f1, r4, r5
	lfs      f0, 0x28(r3)
	lfsx     f3, r9, r5
	fmadds   f0, f4, f1, f0
	lfs      f2, 0x30(r3)
	lfs      f1, 0x2c(r3)
	fmadds   f2, f4, f3, f2
	stfs     f0, 0x10(r3)
	stfs     f1, 0x14(r3)
	stfs     f2, 0x18(r3)
	lfs      f1, 0x10(r3)
	lfs      f0, 0x114(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x1c(r3)
	lfs      f1, 0x14(r3)
	lfs      f0, 0x118(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x20(r3)
	lfs      f1, 0x18(r3)
	lfs      f0, 0x11c(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x24(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x8008F9CC
 * @note Size: 0x34
 */
JPADynamicsBlock::JPADynamicsBlock(const u8* data)
{
	mData = (const JPADynamicsBlockData*)data;
	init();
}

/**
 * @note Address: N/A
 * @note Size: 0x1E0
 */
void JPADynamicsBlock::init_jpa(const u8*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8008FA00
 * @note Size: 0x9C
 */
void JPADynamicsBlock::init()
{
	switch (getVolumeType()) {
	case JPAVOL_Cube:
		mVolumeFunction = &JPAVolumeCube;
		break;
	case JPAVOL_Sphere:
		mVolumeFunction = &JPAVolumeSphere;
		break;
	case JPAVOL_Cylinder:
		mVolumeFunction = &JPAVolumeCylinder;
		break;
	case JPAVOL_Torus:
		mVolumeFunction = &JPAVolumeTorus;
		break;
	case JPAVOL_Point:
		mVolumeFunction = &JPAVolumePoint;
		break;
	case JPAVOL_Circle:
		mVolumeFunction = &JPAVolumeCircle;
		break;
	case JPAVOL_Line:
		mVolumeFunction = &JPAVolumeLine;
		break;
	}
}

/**
 * @note Address: 0x8008FA9C
 * @note Size: 0x200
 */
void JPADynamicsBlock::create(JPAEmitterWorkData* work)
{
	if (work->mEmitter->isFlag(JPAEMIT_RateStepEmit)) {
		s32 emitCount;
		s32 createCount;

		// Probably an inlined function.
		if (work->mEmitter->checkDynFlag(JPADYN_FixedInterval)) {
			s32 count;
			if (getVolumeType() == JPAVOL_Sphere) {
				count = 4 * getDivNumber() * getDivNumber() + 2;
			} else {
				count = getDivNumber();
			}
			emitCount = count;

			work->mVolumeEmitIdx = 0;
		} else {
			f32 newPtclCount           = work->mEmitter->mRate * (getRateRndm() * work->mEmitter->getRandZP() + 1.0f);
			f32 newEmitCount           = work->mEmitter->mEmitCount + newPtclCount;
			work->mEmitter->mEmitCount = newEmitCount;
			emitCount                  = (s32)newEmitCount;
			work->mEmitter->mEmitCount -= emitCount;

			if (work->mEmitter->isFlag(JPAEMIT_FirstEmit) && 0.0f < newPtclCount && newPtclCount < 1.0f)
				emitCount = 1;
		}

		work->mCreateNumber = emitCount;
		if (work->mEmitter->isFlag(JPAEMIT_StopEmit)) {
			emitCount = 0;
		}

		// Probably an inlined function.
		createCount = emitCount;
		while (createCount > 0) {
			JPABaseParticle* ptcl = work->mEmitter->createParticle();
			if (ptcl == NULL)
				break;
			createCount--;
		}
	}

	if (++work->mEmitter->mRateStepTimer >= (work->mEmitter->mRateStep + 1)) {
		work->mEmitter->mRateStepTimer -= (work->mEmitter->mRateStep + 1);
		work->mEmitter->setFlag(JPAEMIT_RateStepEmit);
	} else {
		work->mEmitter->resetFlag(JPAEMIT_RateStepEmit);
	}

	work->mEmitter->resetFlag(JPAEMIT_FirstEmit);
}
