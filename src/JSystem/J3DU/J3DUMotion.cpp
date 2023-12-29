#include "JSystem/J3D/J3DAnmTransform.h"
#include "JSystem/J3D/J3DAnmLoader.h"
#include "JSystem/J3D/J3DMtxCalc.h"
#include "JSystem/J3D/J3DMtxBuffer.h"

/**
 * @note Address: 0x80015DF0
 * @note Size: 0x590
 */
J3DMtxCalc* J3DUNewMtxCalcAnm(u32 blendType, J3DAnmTransform* anm0, J3DAnmTransform* anm1, J3DAnmTransform* anm2, J3DAnmTransform* anm3,
                              J3DMtxCalcFlag calcFlag)
{
	J3DMtxCalc* calc = nullptr;
	switch (blendType) {
	case MTXBLEND_Basic: {
		switch (calcFlag) {
		case MTXCalc_Blend:
			calc = new J3DMtxCalcBlendAnm<J3DMtxCalcBlendAdaptorDefault<J3DMtxCalcBlend, J3DMtxCalcScaleBlendBasic>,
			                              J3DMtxCalcJ3DSysInitBasic>(anm0, 1.0f);
			break;
		case MTXCalc_BlendSharedMotionT:
			calc = new J3DMtxCalcBlendAnm<J3DMtxCalcBlendAdaptorDefault<J3DMtxCalcBlendSharedMotionT, J3DMtxCalcScaleBlendBasic>,
			                              J3DMtxCalcJ3DSysInitBasic>(anm0, 1.0f);
			break;
		}

		calc->setAnmTransform(1, anm1);
		calc->setAnmTransform(2, anm2);
		calc->setAnmTransform(3, anm3);

		calc->setWeight(0, 1.0f);
		calc->setWeight(1, 0.0f);
		calc->setWeight(2, 0.0f);
		calc->setWeight(3, 0.0f);
	} break;

	case MTXBLEND_Softimage: {
		switch (calcFlag) {
		case MTXCalc_Blend:
			calc = new J3DMtxCalcBlendAnm<J3DMtxCalcBlendAdaptorDefault<J3DMtxCalcBlend, J3DMtxCalcScaleBlendSoftimage>,
			                              J3DMtxCalcJ3DSysInitSoftimage>(anm0, 1.0f);
			break;
		case MTXCalc_BlendSharedMotionT:
			calc = new J3DMtxCalcBlendAnm<J3DMtxCalcBlendAdaptorDefault<J3DMtxCalcBlendSharedMotionT, J3DMtxCalcScaleBlendSoftimage>,
			                              J3DMtxCalcJ3DSysInitSoftimage>(anm0, 1.0f);
			break;
		}

		calc->setAnmTransform(1, anm1);
		calc->setAnmTransform(2, anm2);
		calc->setAnmTransform(3, anm3);

		calc->setWeight(0, 1.0f);
		calc->setWeight(1, 0.0f);
		calc->setWeight(2, 0.0f);
		calc->setWeight(3, 0.0f);
	} break;

	case MTXBLEND_Maya: {
		switch (calcFlag) {
		case MTXCalc_Blend:
			calc = new J3DMtxCalcBlendAnm<J3DMtxCalcBlendAdaptorDefault<J3DMtxCalcBlend, J3DMtxCalcScaleBlendMaya>,
			                              J3DMtxCalcJ3DSysInitMaya>(anm0, 1.0f);
			break;
		case MTXCalc_BlendSharedMotionT:
			calc = new J3DMtxCalcBlendAnm<J3DMtxCalcBlendAdaptorDefault<J3DMtxCalcBlendSharedMotionT, J3DMtxCalcScaleBlendMaya>,
			                              J3DMtxCalcJ3DSysInitMaya>(anm0, 1.0f);
			break;
		}

		calc->setAnmTransform(1, anm1);
		calc->setAnmTransform(2, anm2);
		calc->setAnmTransform(3, anm3);

		calc->setWeight(0, 1.0f);
		calc->setWeight(1, 0.0f);
		calc->setWeight(2, 0.0f);
		calc->setWeight(3, 0.0f);
	} break;
	}

	return calc;
}

/**
 * @note Address: 0x8001642C
 * @note Size: 0x348
 */
void J3DMtxCalcBlend::calcBlend(Vec* scale, Vec* position, J3DAnmTransform** anims, f32* weights)
{
	u16 id          = J3DMtxCalc::getJoint()->getJntNo();
	MtxP anmMtx     = J3DMtxCalc::getMtxBuffer()->getAnmMtx(id);
	f32 totalWeight = 0.0f;
	int num         = 0;
	int maxAnim     = 0;
	f32 minWeight   = 0.005f;

	for (int i = 0; i < 4; i++) {
		if (anims[i] && weights[i] > minWeight) {
			totalWeight += weights[i];
			maxAnim = i;
			num++;
		}
	}

	switch (num) {
	case 0:
		PSMTXIdentity(anmMtx);
		scale->z    = 0.0f;
		scale->y    = 0.0f;
		scale->x    = 0.0f;
		position->z = 0.0f;
		position->y = 0.0f;
		position->x = 0.0f;
		break;
	case 1:
		J3DTransformInfo info;
		anims[maxAnim]->getTransform(id, &info);
		scale->x    = info.mScale.x;
		scale->y    = info.mScale.y;
		scale->z    = info.mScale.z;
		position->x = info.mTranslation.x;
		position->y = info.mTranslation.y;
		position->z = info.mTranslation.z;

		f32 cosx = JMASCosShort(info.mRotation.x);
		f32 cosy = JMASCosShort(info.mRotation.y);
		f32 cosz = JMASCosShort(info.mRotation.z);
		f32 sinx = JMASinShort(info.mRotation.x);
		f32 siny = JMASinShort(info.mRotation.x);
		f32 sinz = JMASinShort(info.mRotation.x);

		// this is all definitely wrong
		anmMtx[2][0] = -cosx;
		anmMtx[0][0] = cosz * cosy;
		anmMtx[1][0] = sinx * cosy;

		anmMtx[2][1] = cosy * siny;
		anmMtx[2][2] = cosy * sinz;
		anmMtx[2][3] = siny * cosz * cosx - sinz * sinx;

		anmMtx[2][3] = sinz * sinx * cosx - siny * cosz;
		anmMtx[2][3] = sinz * cosz * cosx + siny * sinx;
		anmMtx[2][3] = siny * sinx * cosx + sinz * cosz;

		break;
	default:
		scale->z    = 0.0f;
		scale->y    = 0.0f;
		scale->x    = 0.0f;
		position->z = 0.0f;
		position->y = 0.0f;
		position->x = 0.0f;
		Quaternion quat;
		quat.w = 0.0f;
		quat.z = 0.0f;
		quat.y = 0.0f;
		quat.x = 0.0f;

		for (int i = 0; i <= maxAnim; i++) {
			J3DAnmTransform* anm = anims[i];
			if (anm && weights[i] > 0.005f) {
				f32 calc = weights[i] / totalWeight;
				J3DTransformInfo info;
				anm->getTransform(id, &info);
				scale->x += info.mScale.x * calc;
				scale->y += info.mScale.y * calc;
				scale->z += info.mScale.z * calc;
				position->x += info.mTranslation.x * calc;
				position->y += info.mTranslation.y * calc;
				position->z += info.mTranslation.z * calc;
				Quaternion quat2;
				JMAEulerToQuat(info.mRotation.x, info.mRotation.y, info.mRotation.z, &quat2);
				JMAQuatLerp(&quat, &quat, calc, &quat2);
			}
		}
		PSMTXQuat(anmMtx, (PSQuaternion*)&quat);
		break;
	}
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stfd     f31, 0xa0(r1)
	psq_st   f31, 168(r1), 0, qr0
	stfd     f30, 0x90(r1)
	psq_st   f30, 152(r1), 0, qr0
	stmw     r24, 0x70(r1)
	lwz      r8, mJoint__10J3DMtxCalc@sda21(r13)
	mr       r30, r3
	lwz      r0, 0(r5)
	mr       r31, r4
	lhz      r29, 0x14(r8)
	li       r25, 0
	lwz      r7, mMtxBuffer__10J3DMtxCalc@sda21(r13)
	cmplwi   r0, 0
	mulli    r3, r29, 0x30
	lfs      f31, lbl_805164B8@sda21(r2)
	lwz      r4, 0xc(r7)
	li       r7, 0
	lfs      f0, lbl_805164C0@sda21(r2)
	add      r28, r4, r3
	beq      lbl_800164A0
	lfs      f1, 0(r6)
	fcmpo    cr0, f1, f0
	ble      lbl_800164A0
	fadds    f31, f31, f1
	li       r25, 0
	li       r7, 1

lbl_800164A0:
	lwz      r0, 4(r5)
	cmplwi   r0, 0
	beq      lbl_800164C4
	lfs      f1, 4(r6)
	fcmpo    cr0, f1, f0
	ble      lbl_800164C4
	fadds    f31, f31, f1
	li       r25, 1
	addi     r7, r7, 1

lbl_800164C4:
	lwz      r0, 8(r5)
	cmplwi   r0, 0
	beq      lbl_800164E8
	lfs      f1, 8(r6)
	fcmpo    cr0, f1, f0
	ble      lbl_800164E8
	fadds    f31, f31, f1
	li       r25, 2
	addi     r7, r7, 1

lbl_800164E8:
	lwz      r0, 0xc(r5)
	cmplwi   r0, 0
	beq      lbl_8001650C
	lfs      f1, 0xc(r6)
	fcmpo    cr0, f1, f0
	ble      lbl_8001650C
	fadds    f31, f31, f1
	li       r25, 3
	addi     r7, r7, 1

lbl_8001650C:
	cmpwi    r7, 1
	beq      lbl_8001654C
	bge      lbl_80016634
	cmpwi    r7, 0
	bge      lbl_80016524
	b        lbl_80016634

lbl_80016524:
	mr       r3, r28
	bl       PSMTXIdentity
	lfs      f0, lbl_805164B8@sda21(r2)
	stfs     f0, 8(r30)
	stfs     f0, 4(r30)
	stfs     f0, 0(r30)
	stfs     f0, 8(r31)
	stfs     f0, 4(r31)
	stfs     f0, 0(r31)
	b        lbl_80016750

lbl_8001654C:
	slwi     r0, r25, 2
	mr       r4, r29
	lwzx     r3, r5, r0
	addi     r5, r1, 0x48
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x48(r1)
	lis      r3, sincosTable___5JMath@ha
	addi     r4, r3, sincosTable___5JMath@l
	stfs     f0, 0(r30)
	addi     r6, r4, 4
	lfs      f0, 0x4c(r1)
	stfs     f0, 4(r30)
	lfs      f0, 0x50(r1)
	stfs     f0, 8(r30)
	lfs      f0, 0x5c(r1)
	stfs     f0, 0(r31)
	lfs      f0, 0x60(r1)
	stfs     f0, 4(r31)
	lfs      f0, 0x64(r1)
	stfs     f0, 8(r31)
	lha      r3, 0x56(r1)
	lha      r0, 0x58(r1)
	rlwinm   r3, r3, 0x1e, 0x12, 0x1c
	lha      r5, 0x54(r1)
	lfsx     f5, r4, r3
	rlwinm   r7, r0, 0x1e, 0x12, 0x1c
	rlwinm   r0, r5, 0x1e, 0x12, 0x1c
	lfsx     f6, r6, r3
	lfsx     f8, r6, r7
	fneg     f0, f5
	lfsx     f7, r4, r7
	lfsx     f3, r4, r0
	fmuls    f2, f8, f6
	lfsx     f4, r6, r0
	fmuls    f1, f7, f6
	fmuls    f9, f3, f8
	stfs     f0, 0x20(r28)
	fmuls    f0, f6, f3
	fmuls    f3, f3, f7
	stfs     f2, 0(r28)
	fmuls    f2, f4, f7
	stfs     f1, 0x10(r28)
	fmuls    f1, f6, f4
	fmuls    f4, f4, f8
	stfs     f0, 0x24(r28)
	fmsubs   f0, f9, f5, f2
	fmsubs   f2, f2, f5, f9
	stfs     f1, 0x28(r28)
	fmadds   f1, f4, f5, f3
	stfs     f0, 4(r28)
	fmadds   f0, f3, f5, f4
	stfs     f2, 0x18(r28)
	stfs     f1, 8(r28)
	stfs     f0, 0x14(r28)
	b        lbl_80016750

lbl_80016634:
	lfs      f0, lbl_805164B8@sda21(r2)
	mr       r27, r5
	mr       r26, r6
	li       r24, 0
	stfs     f0, 8(r30)
	stfs     f0, 4(r30)
	stfs     f0, 0(r30)
	stfs     f0, 8(r31)
	stfs     f0, 4(r31)
	stfs     f0, 0(r31)
	stfs     f0, 0x24(r1)
	stfs     f0, 0x20(r1)
	stfs     f0, 0x1c(r1)
	stfs     f0, 0x18(r1)
	b        lbl_8001673C

lbl_80016670:
	lwz      r3, 0(r27)
	cmplwi   r3, 0
	beq      lbl_80016730
	lfs      f30, 0(r26)
	lfs      f0, lbl_805164C0@sda21(r2)
	fcmpo    cr0, f30, f0
	ble      lbl_80016730
	fdivs    f30, f30, f31
	lwz      r12, 0(r3)
	mr       r4, r29
	addi     r5, r1, 0x28
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x28(r1)
	addi     r6, r1, 8
	lfs      f0, 0(r30)
	fmadds   f0, f1, f30, f0
	stfs     f0, 0(r30)
	lfs      f1, 0x2c(r1)
	lfs      f0, 4(r30)
	fmadds   f0, f1, f30, f0
	stfs     f0, 4(r30)
	lfs      f1, 0x30(r1)
	lfs      f0, 8(r30)
	fmadds   f0, f1, f30, f0
	stfs     f0, 8(r30)
	lfs      f1, 0x3c(r1)
	lfs      f0, 0(r31)
	fmadds   f0, f1, f30, f0
	stfs     f0, 0(r31)
	lfs      f1, 0x40(r1)
	lfs      f0, 4(r31)
	fmadds   f0, f1, f30, f0
	stfs     f0, 4(r31)
	lfs      f1, 0x44(r1)
	lfs      f0, 8(r31)
	fmadds   f0, f1, f30, f0
	stfs     f0, 8(r31)
	lha      r3, 0x34(r1)
	lha      r4, 0x36(r1)
	lha      r5, 0x38(r1)
	bl       JMAEulerToQuat__FsssP10Quaternion
	fmr      f1, f30
	addi     r3, r1, 0x18
	mr       r5, r3
	addi     r4, r1, 8
	bl       JMAQuatLerp__FPC10QuaternionPC10QuaternionfP10Quaternion

lbl_80016730:
	addi     r27, r27, 4
	addi     r26, r26, 4
	addi     r24, r24, 1

lbl_8001673C:
	cmpw     r24, r25
	ble      lbl_80016670
	mr       r3, r28
	addi     r4, r1, 0x18
	bl       PSMTXQuat

lbl_80016750:
	psq_l    f31, 168(r1), 0, qr0
	lfd      f31, 0xa0(r1)
	psq_l    f30, 152(r1), 0, qr0
	lfd      f30, 0x90(r1)
	lmw      r24, 0x70(r1)
	lwz      r0, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/**
 * @note Address: 0x80016774
 * @note Size: 0x390
 */
void J3DMtxCalcBlendSharedMotionT::calcBlend(Vec* scale, Vec* position, J3DAnmTransform** anims, f32* weights)
{
	J3DJoint* jnt   = J3DMtxCalc::getJoint();
	u16 id          = J3DMtxCalc::getJoint()->mJointIdx;
	MtxP anmMtx     = J3DMtxCalc::getMtxBuffer()->getAnmMtx(id);
	f32 totalWeight = 0.0f;
	int num         = 0;
	int maxAnim     = 0;
	f32 minWeight   = 0.005f;

	for (int i = 0; i < 4; i++) {
		if (anims[i] && weights[i] > minWeight) {
			totalWeight += weights[i];
			maxAnim = i;
			num++;
		}
	}

	switch (num) {
	case 0:
		PSMTXIdentity(anmMtx);
		scale->z    = 0.0f;
		scale->y    = 0.0f;
		scale->x    = 0.0f;
		position->z = 0.0f;
		position->y = 0.0f;
		position->x = 0.0f;
		break;
	case 1:
		J3DTransformInfo info;
		anims[maxAnim]->getTransform(id, &info);
		scale->x    = info.mScale.x;
		scale->y    = info.mScale.y;
		scale->z    = info.mScale.z;
		position->x = info.mTranslation.x * jnt->getTransformInfo().mTranslation.x;
		position->y = info.mTranslation.y * jnt->getTransformInfo().mTranslation.y;
		position->z = info.mTranslation.z * jnt->getTransformInfo().mTranslation.z;

		f32 cosx = JMASCosShort(info.mRotation.x);
		f32 cosy = JMASCosShort(info.mRotation.y);
		f32 cosz = JMASCosShort(info.mRotation.z);
		f32 sinx = JMASinShort(info.mRotation.x);
		f32 siny = JMASinShort(info.mRotation.x);
		f32 sinz = JMASinShort(info.mRotation.x);

		// this is all definitely wrong
		anmMtx[2][0] = -cosx;
		anmMtx[0][0] = cosz * cosy;
		anmMtx[1][0] = sinx * cosy;

		anmMtx[2][1] = cosy * siny;
		anmMtx[2][2] = cosy * sinz;
		anmMtx[2][3] = siny * cosz * cosx - sinz * sinx;

		anmMtx[2][3] = sinz * sinx * cosx - siny * cosz;
		anmMtx[2][3] = sinz * cosz * cosx + siny * sinx;
		anmMtx[2][3] = siny * sinx * cosx + sinz * cosz;

		break;
	default:
		scale->z    = 0.0f;
		scale->y    = 0.0f;
		scale->x    = 0.0f;
		position->z = 0.0f;
		position->y = 0.0f;
		position->x = 0.0f;
		Quaternion quat;
		quat.w = 0.0f;
		quat.z = 0.0f;
		quat.y = 0.0f;
		quat.x = 0.0f;

		for (int i = 0; i <= maxAnim; i++) {
			J3DAnmTransform* anm = anims[i];
			if (anm && weights[i] > 0.005f) {
				f32 calc = weights[i] / totalWeight;
				J3DTransformInfo info;
				anm->getTransform(id, &info);
				scale->x += info.mScale.x * calc;
				scale->y += info.mScale.y * calc;
				scale->z += info.mScale.z * calc;
				position->x += (info.mTranslation.x * jnt->getTransformInfo().mTranslation.x) * calc;
				position->y += (info.mTranslation.y * jnt->getTransformInfo().mTranslation.y) * calc;
				position->z += (info.mTranslation.z * jnt->getTransformInfo().mTranslation.z) * calc;
				Quaternion quat2;
				JMAEulerToQuat(info.mRotation.x, info.mRotation.y, info.mRotation.z, &quat2);
				JMAQuatLerp(&quat, &quat, calc, &quat2);
			}
		}
		PSMTXQuat(anmMtx, (PSQuaternion*)&quat);
		break;
	}
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  stfd      f31, 0xA0(r1)
	  psq_st    f31,0xA8(r1),0,0
	  stfd      f30, 0x90(r1)
	  psq_st    f30,0x98(r1),0,0
	  stmw      r23, 0x6C(r1)
	  lwz       r25, -0x7674(r13)
	  mr        r30, r3
	  lwz       r0, 0x0(r5)
	  mr        r31, r4
	  lhz       r29, 0x14(r25)
	  li        r24, 0
	  lwz       r7, -0x7678(r13)
	  cmplwi    r0, 0
	  mulli     r3, r29, 0x30
	  lfs       f31, -0x7EA8(r2)
	  lwz       r4, 0xC(r7)
	  li        r7, 0
	  lfs       f0, -0x7EA0(r2)
	  add       r28, r4, r3
	  beq-      .loc_0x74
	  lfs       f1, 0x0(r6)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x74
	  fadds     f31, f31, f1
	  li        r24, 0
	  li        r7, 0x1

	.loc_0x74:
	  lwz       r0, 0x4(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x98
	  lfs       f1, 0x4(r6)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x98
	  fadds     f31, f31, f1
	  li        r24, 0x1
	  addi      r7, r7, 0x1

	.loc_0x98:
	  lwz       r0, 0x8(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0xBC
	  lfs       f1, 0x8(r6)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xBC
	  fadds     f31, f31, f1
	  li        r24, 0x2
	  addi      r7, r7, 0x1

	.loc_0xBC:
	  lwz       r0, 0xC(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0xE0
	  lfs       f1, 0xC(r6)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xE0
	  fadds     f31, f31, f1
	  li        r24, 0x3
	  addi      r7, r7, 0x1

	.loc_0xE0:
	  cmpwi     r7, 0x1
	  beq-      .loc_0x120
	  bge-      .loc_0x238
	  cmpwi     r7, 0
	  bge-      .loc_0xF8
	  b         .loc_0x238

	.loc_0xF8:
	  mr        r3, r28
	  bl        0xD3A30
	  lfs       f0, -0x7EA8(r2)
	  stfs      f0, 0x8(r30)
	  stfs      f0, 0x4(r30)
	  stfs      f0, 0x0(r30)
	  stfs      f0, 0x8(r31)
	  stfs      f0, 0x4(r31)
	  stfs      f0, 0x0(r31)
	  b         .loc_0x36C

	.loc_0x120:
	  rlwinm    r0,r24,2,0,29
	  mr        r4, r29
	  lwzx      r3, r5, r0
	  addi      r5, r1, 0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x5C(r1)
	  lis       r3, 0x8050
	  lfs       f0, 0x2C(r25)
	  addi      r4, r3, 0x71A0
	  lfs       f3, 0x60(r1)
	  addi      r6, r4, 0x4
	  fmuls     f1, f1, f0
	  lfs       f2, 0x64(r1)
	  lfs       f0, 0x48(r1)
	  stfs      f1, 0x5C(r1)
	  lfs       f1, 0x30(r25)
	  fmuls     f1, f3, f1
	  stfs      f1, 0x60(r1)
	  lfs       f1, 0x34(r25)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x64(r1)
	  stfs      f0, 0x0(r30)
	  lfs       f0, 0x4C(r1)
	  stfs      f0, 0x4(r30)
	  lfs       f0, 0x50(r1)
	  stfs      f0, 0x8(r30)
	  lfs       f0, 0x5C(r1)
	  stfs      f0, 0x0(r31)
	  lfs       f0, 0x60(r1)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x64(r1)
	  stfs      f0, 0x8(r31)
	  lha       r3, 0x56(r1)
	  lha       r0, 0x58(r1)
	  rlwinm    r5,r3,30,18,28
	  lha       r3, 0x54(r1)
	  rlwinm    r7,r0,30,18,28
	  lfsx      f5, r4, r5
	  rlwinm    r0,r3,30,18,28
	  lfsx      f6, r6, r5
	  lfsx      f8, r6, r7
	  fneg      f0, f5
	  lfsx      f7, r4, r7
	  lfsx      f3, r4, r0
	  fmuls     f2, f8, f6
	  lfsx      f4, r6, r0
	  fmuls     f1, f7, f6
	  fmuls     f9, f3, f8
	  stfs      f0, 0x20(r28)
	  fmuls     f0, f6, f3
	  fmuls     f3, f3, f7
	  stfs      f2, 0x0(r28)
	  fmuls     f2, f4, f7
	  stfs      f1, 0x10(r28)
	  fmuls     f1, f6, f4
	  fmuls     f4, f4, f8
	  stfs      f0, 0x24(r28)
	  fmsubs    f0, f9, f5, f2
	  fmsubs    f2, f2, f5, f9
	  stfs      f1, 0x28(r28)
	  fmadds    f1, f4, f5, f3
	  stfs      f0, 0x4(r28)
	  fmadds    f0, f3, f5, f4
	  stfs      f2, 0x18(r28)
	  stfs      f1, 0x8(r28)
	  stfs      f0, 0x14(r28)
	  b         .loc_0x36C

	.loc_0x238:
	  lfs       f0, -0x7EA8(r2)
	  mr        r27, r5
	  mr        r26, r6
	  li        r23, 0
	  stfs      f0, 0x8(r30)
	  stfs      f0, 0x4(r30)
	  stfs      f0, 0x0(r30)
	  stfs      f0, 0x8(r31)
	  stfs      f0, 0x4(r31)
	  stfs      f0, 0x0(r31)
	  stfs      f0, 0x24(r1)
	  stfs      f0, 0x20(r1)
	  stfs      f0, 0x1C(r1)
	  stfs      f0, 0x18(r1)
	  b         .loc_0x358

	.loc_0x274:
	  lwz       r3, 0x0(r27)
	  cmplwi    r3, 0
	  beq-      .loc_0x34C
	  lfs       f30, 0x0(r26)
	  lfs       f0, -0x7EA0(r2)
	  fcmpo     cr0, f30, f0
	  ble-      .loc_0x34C
	  fdivs     f30, f30, f31
	  lwz       r12, 0x0(r3)
	  mr        r4, r29
	  addi      r5, r1, 0x28
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x28(r1)
	  addi      r6, r1, 0x8
	  lfs       f0, 0x0(r30)
	  fmadds    f0, f1, f30, f0
	  stfs      f0, 0x0(r30)
	  lfs       f1, 0x2C(r1)
	  lfs       f0, 0x4(r30)
	  fmadds    f0, f1, f30, f0
	  stfs      f0, 0x4(r30)
	  lfs       f1, 0x30(r1)
	  lfs       f0, 0x8(r30)
	  fmadds    f0, f1, f30, f0
	  stfs      f0, 0x8(r30)
	  lfs       f2, 0x3C(r1)
	  lfs       f1, 0x2C(r25)
	  lfs       f0, 0x0(r31)
	  fmuls     f1, f2, f1
	  fmadds    f0, f30, f1, f0
	  stfs      f0, 0x0(r31)
	  lfs       f2, 0x40(r1)
	  lfs       f1, 0x30(r25)
	  lfs       f0, 0x4(r31)
	  fmuls     f1, f2, f1
	  fmadds    f0, f30, f1, f0
	  stfs      f0, 0x4(r31)
	  lfs       f2, 0x44(r1)
	  lfs       f1, 0x34(r25)
	  lfs       f0, 0x8(r31)
	  fmuls     f1, f2, f1
	  fmadds    f0, f30, f1, f0
	  stfs      f0, 0x8(r31)
	  lha       r3, 0x34(r1)
	  lha       r4, 0x36(r1)
	  lha       r5, 0x38(r1)
	  bl        0x1E460
	  fmr       f1, f30
	  addi      r3, r1, 0x18
	  mr        r5, r3
	  addi      r4, r1, 0x8
	  bl        0x1E508

	.loc_0x34C:
	  addi      r27, r27, 0x4
	  addi      r26, r26, 0x4
	  addi      r23, r23, 0x1

	.loc_0x358:
	  cmpw      r23, r24
	  ble+      .loc_0x274
	  mr        r3, r28
	  addi      r4, r1, 0x18
	  bl        0xD3D78

	.loc_0x36C:
	  psq_l     f31,0xA8(r1),0,0
	  lfd       f31, 0xA0(r1)
	  psq_l     f30,0x98(r1),0,0
	  lfd       f30, 0x90(r1)
	  lmw       r23, 0x6C(r1)
	  lwz       r0, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x124
 */
void J3DMtxCalcScaleBlendBasic::calcScaleBlend(const Vec& scale, const Vec& position)
{
	// TODO
}

/**
 * @note Address: N/A
 * @note Size: 0x174
 */
void J3DMtxCalcScaleBlendSoftimage::calcScaleBlend(const Vec& scale, const Vec& position)
{
	// TODO
}

/**
 * @note Address: 0x80016B04
 * @note Size: 0x198
 */
void J3DMtxCalcScaleBlendMaya::calcScaleBlend(const Vec& scale, const Vec& position)
{
	J3DJoint* joint      = J3DMtxCalc::getJoint();
	J3DMtxBuffer* mtxBuf = J3DMtxCalc::getMtxBuffer();

	u16 jntNo   = joint->getJntNo();
	MtxP anmMtx = mtxBuf->getAnmMtx(jntNo);
	MTXSetPosition(anmMtx, &position);

	if (scale.x == 1.0f && scale.y == 1.0f && scale.z == 1.0f) {
		mtxBuf->setScaleFlag(jntNo, 1);
	} else {
		mtxBuf->setScaleFlag(jntNo, 0);
		JMAMTXApplyScale(anmMtx, anmMtx, scale.x, scale.y, scale.z);
	}

	if (joint->getScaleCompensate() == 1) {
		f32 invX = JMath::fastReciprocal(J3DSys::mParentS.x);
		f32 invY = JMath::fastReciprocal(J3DSys::mParentS.y);
		f32 invZ = JMath::fastReciprocal(J3DSys::mParentS.z);

		anmMtx[0][0] *= invX;
		anmMtx[0][1] *= invX;
		anmMtx[0][2] *= invX;
		anmMtx[1][0] *= invY;
		anmMtx[1][1] *= invY;
		anmMtx[1][2] *= invY;
		anmMtx[2][0] *= invZ;
		anmMtx[2][1] *= invZ;
		anmMtx[2][2] *= invZ;
	}

	PSMTXConcat(J3DSys::mCurrentMtx, anmMtx, J3DSys::mCurrentMtx);
	PSMTXCopy(J3DSys::mCurrentMtx, anmMtx);

	J3DSys::mParentS.x = scale.x;
	J3DSys::mParentS.y = scale.y;
	J3DSys::mParentS.z = scale.z;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f2, 0(r4)
	stw      r0, 0x24(r1)
	lfs      f3, 4(r4)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lfs      f1, lbl_805164BC@sda21(r2)
	stw      r30, 0x18(r1)
	lfs      f0, 0(r31)
	stw      r29, 0x14(r1)
	fcmpu    cr0, f1, f0
	lwz      r29, mJoint__10J3DMtxCalc@sda21(r13)
	lwz      r5, mMtxBuffer__10J3DMtxCalc@sda21(r13)
	lhz      r6, 0x14(r29)
	lwz      r3, 0xc(r5)
	mulli    r0, r6, 0x30
	add      r30, r3, r0
	stfs     f2, 0xc(r30)
	lfs      f2, 8(r4)
	stfs     f3, 0x1c(r30)
	stfs     f2, 0x2c(r30)
	bne      lbl_80016B88
	lfs      f0, 4(r31)
	fcmpu    cr0, f1, f0
	bne      lbl_80016B88
	lfs      f0, 8(r31)
	fcmpu    cr0, f1, f0
	bne      lbl_80016B88
	lwz      r3, 4(r5)
	li       r0, 1
	stbx     r0, r3, r6
	b        lbl_80016BAC

lbl_80016B88:
	lwz      r4, 4(r5)
	li       r0, 0
	lfs      f1, 0(r31)
	mr       r3, r30
	stbx     r0, r4, r6
	mr       r4, r30
	lfs      f2, 4(r31)
	lfs      f3, 8(r31)
	bl       JMAMTXApplyScale__FPA4_CfPA4_ffff

lbl_80016BAC:
	lbz      r0, 0x17(r29)
	cmplwi   r0, 1
	bne      lbl_80016C40
	lis      r3, mParentS__6J3DSys@ha
	lfsu     f1, mParentS__6J3DSys@l(r3)
	lfs      f0, 0(r30)
	fres     f3, f1
	lfs      f2, 4(r3)
	lfs      f1, 8(r3)
	fmuls    f0, f0, f3
	fres     f2, f2
	stfs     f0, 0(r30)
	lfs      f0, 4(r30)
	fmuls    f0, f0, f3
	fres     f1, f1
	stfs     f0, 4(r30)
	lfs      f0, 8(r30)
	fmuls    f0, f0, f3
	stfs     f0, 8(r30)
	lfs      f0, 0x10(r30)
	fmuls    f0, f0, f2
	stfs     f0, 0x10(r30)
	lfs      f0, 0x14(r30)
	fmuls    f0, f0, f2
	stfs     f0, 0x14(r30)
	lfs      f0, 0x18(r30)
	fmuls    f0, f0, f2
	stfs     f0, 0x18(r30)
	lfs      f0, 0x20(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x20(r30)
	lfs      f0, 0x24(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x24(r30)
	lfs      f0, 0x28(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x28(r30)

lbl_80016C40:
	lis      r3, mCurrentMtx__6J3DSys@ha
	mr       r4, r30
	addi     r3, r3, mCurrentMtx__6J3DSys@l
	mr       r5, r3
	bl       PSMTXConcat
	lis      r3, mCurrentMtx__6J3DSys@ha
	mr       r4, r30
	addi     r3, r3, mCurrentMtx__6J3DSys@l
	bl       PSMTXCopy
	lfs      f2, 0(r31)
	lis      r3, mParentS__6J3DSys@ha
	lfs      f1, 4(r31)
	stfsu    f2, mParentS__6J3DSys@l(r3)
	lfs      f0, 8(r31)
	stfs     f1, 4(r3)
	stfs     f0, 8(r3)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x24(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}
