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
	J3DJoint* joint      = J3DMtxCalc::getJoint();
	J3DMtxBuffer* mtxBuf = J3DMtxCalc::getMtxBuffer();

	int num     = 0;
	int maxAnim = 0;
	u16 id      = joint->getJntNo();
	MtxP anmMtx = mtxBuf->getAnmMtx(id);

	f32 totalWeight = 0.0f;
	for (int i = 0; i < 4; i++) {
		if (anims[i] && weights[i] > 0.005f) {

			totalWeight += weights[i];
			maxAnim = i;
			num++;
		}
	}

	switch (num) {
	case 0: // no animations with enough weight, no blend
		PSMTXIdentity(anmMtx);
		scale->x = scale->y = scale->z = 0.0f;
		position->x = position->y = position->z = 0.0f;
		break;

	case 1: // only one animation with enough weight, just calculate matrix and assign scale/position based on that anim's info
		J3DTransformInfo info;
		anims[maxAnim]->getTransform(id, &info);
		*scale    = info.mScale;
		*position = info.mTranslation;

		f32 sinX = JMASinShort(info.mRotation.x);
		f32 cosX = JMASCosShort(info.mRotation.x);
		f32 sinY = JMASinShort(info.mRotation.y);
		f32 cosY = JMASCosShort(info.mRotation.y);
		f32 sinZ = JMASinShort(info.mRotation.z);
		f32 cosZ = JMASCosShort(info.mRotation.z);

		f32 cosYZ    = (cosY * cosZ);
		f32 sinYZ    = (sinY * sinZ);
		f32 cosXZ    = (cosX * cosZ);
		f32 sinXZ    = (sinX * sinZ);
		f32 sincosXZ = (sinX * cosZ);
		f32 cossinXZ = (cosX * sinZ);

		anmMtx[2][0] = -sinY;
		anmMtx[0][0] = cosZ * cosY;
		anmMtx[1][0] = sinZ * cosY;

		anmMtx[2][1] = cosY * sinX;
		anmMtx[2][2] = cosY * cosX;
		anmMtx[0][1] = sincosXZ * sinY - cosX * sinZ;

		anmMtx[1][2] = cossinXZ * sinY - sincosXZ;
		anmMtx[0][2] = cosXZ * sinY + sinXZ;
		anmMtx[1][1] = sinXZ * sinY + cosXZ;
		break;

	default:
		scale->x = scale->y = scale->z = 0.0f;
		position->x = position->y = position->z = 0.0f;
		Quaternion mtxQuat;
		mtxQuat.w = 0.0f;
		mtxQuat.x = mtxQuat.y = mtxQuat.z = 0.0f;

		// progressively blend each animation into scale/position and quat
		for (int i = 0; i <= maxAnim; i++) {
			J3DAnmTransform* anm = anims[i];

			if (anm) {
				f32 proportion;
				if ((proportion = weights[i]) > 0.005f) {
					proportion /= totalWeight;
					J3DTransformInfo info;
					anm->getTransform(id, &info);
					scale->x += info.mScale.x * proportion;
					scale->y += info.mScale.y * proportion;
					scale->z += info.mScale.z * proportion;
					position->x += info.mTranslation.x * proportion;
					position->y += info.mTranslation.y * proportion;
					position->z += info.mTranslation.z * proportion;
					Quaternion rotQuat;
					JMAEulerToQuat(info.mRotation.x, info.mRotation.y, info.mRotation.z, &rotQuat);
					JMAQuatLerp(&mtxQuat, &rotQuat, proportion, &mtxQuat);
				}
			}
		}

		// set matrix from resulting quat
		PSMTXQuat(anmMtx, (PSQuaternion*)&mtxQuat);
		break;
	}
}

/**
 * @note Address: 0x80016774
 * @note Size: 0x390
 */
void J3DMtxCalcBlendSharedMotionT::calcBlend(Vec* scale, Vec* position, J3DAnmTransform** anims, f32* weights)
{
	J3DJoint* jnt        = J3DMtxCalc::getJoint();
	J3DMtxBuffer* mtxBuf = J3DMtxCalc::getMtxBuffer();

	u16 id          = jnt->getJntNo();
	MtxP anmMtx     = mtxBuf->getAnmMtx(id);
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
	case 0: // no animations with enough weight, no blend
		PSMTXIdentity(anmMtx);
		scale->x = scale->y = scale->z = 0.0f;
		position->x = position->y = position->z = 0.0f;
		break;

	case 1: // only one animation with enough weight, just calculate matrix and assign scale/position based on that anim's info
		J3DTransformInfo info;
		anims[maxAnim]->getTransform(id, &info);
		info.mTranslation.x *= jnt->getTransformInfo().mTranslation.x;
		info.mTranslation.y *= jnt->getTransformInfo().mTranslation.y;
		info.mTranslation.z *= jnt->getTransformInfo().mTranslation.z;
		*scale    = info.mScale;
		*position = info.mTranslation;

		f32 sinX = JMASinShort(info.mRotation.x);
		f32 cosX = JMASCosShort(info.mRotation.x);
		f32 sinY = JMASinShort(info.mRotation.y);
		f32 cosY = JMASCosShort(info.mRotation.y);
		f32 sinZ = JMASinShort(info.mRotation.z);
		f32 cosZ = JMASCosShort(info.mRotation.z);

		f32 cosYZ    = (cosY * cosZ);
		f32 sinYZ    = (sinY * sinZ);
		f32 cosXZ    = (cosX * cosZ);
		f32 sinXZ    = (sinX * sinZ);
		f32 sincosXZ = (sinX * cosZ);
		f32 cossinXZ = (cosX * sinZ);

		anmMtx[2][0] = -sinY;
		anmMtx[0][0] = cosZ * cosY;
		anmMtx[1][0] = sinZ * cosY;

		anmMtx[2][1] = cosY * sinX;
		anmMtx[2][2] = cosY * cosX;
		anmMtx[0][1] = sincosXZ * sinY - cosX * sinZ;

		anmMtx[1][2] = cossinXZ * sinY - sincosXZ;
		anmMtx[0][2] = cosXZ * sinY + sinXZ;
		anmMtx[1][1] = sinXZ * sinY + cosXZ;

		break;

	default:
		scale->x = scale->y = scale->z = 0.0f;
		position->x = position->y = position->z = 0.0f;
		Quaternion mtxQuat;
		mtxQuat.w = 0.0f;
		mtxQuat.x = mtxQuat.y = mtxQuat.z = 0.0f;

		// progressively blend each animation into scale/position and quat
		for (int i = 0; i <= maxAnim; i++) {
			J3DAnmTransform* anm = anims[i];
			if (anm) {
				f32 proportion;
				if ((proportion = weights[i]) > 0.005f) {
					proportion /= totalWeight;
					J3DTransformInfo info;
					anm->getTransform(id, &info);
					scale->x += info.mScale.x * proportion;
					scale->y += info.mScale.y * proportion;
					scale->z += info.mScale.z * proportion;
					position->x += (info.mTranslation.x * jnt->getTransformInfo().mTranslation.x) * proportion;
					position->y += (info.mTranslation.y * jnt->getTransformInfo().mTranslation.y) * proportion;
					position->z += (info.mTranslation.z * jnt->getTransformInfo().mTranslation.z) * proportion;

					Quaternion rotQuat;
					JMAEulerToQuat(info.mRotation.x, info.mRotation.y, info.mRotation.z, &rotQuat);
					JMAQuatLerp(&mtxQuat, &rotQuat, proportion, &mtxQuat);
				}
			}
		}

		// set matrix from resulting quat
		PSMTXQuat(anmMtx, (PSQuaternion*)&mtxQuat);
		break;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x124
 */
void J3DMtxCalcScaleBlendBasic::calcScaleBlend(const Vec& scale, const Vec& position)
{
	J3DJoint* joint      = J3DMtxCalc::getJoint();
	J3DMtxBuffer* mtxBuf = J3DMtxCalc::getMtxBuffer();
	u16 jntNo            = joint->getJntNo();
	MtxP anmMtx          = mtxBuf->getAnmMtx(jntNo);
	f32 x                = J3DSys::mCurrentS.x * scale.x;
	f32 y                = J3DSys::mCurrentS.y * scale.y;
	f32 z                = J3DSys::mCurrentS.z * scale.z;
	J3DSys::mCurrentS.x  = x;
	J3DSys::mCurrentS.y  = y;
	J3DSys::mCurrentS.z  = z;

	BOOL isDefScale;
	if (x == 1.0f && y == 1.0f && z == 1.0f) {
		isDefScale = TRUE;
	} else {
		isDefScale = FALSE;
	}

	if (isDefScale == FALSE) {
		mtxBuf->setScaleFlag(jntNo, 0);
		JMAMTXApplyScale(anmMtx, anmMtx, scale.x, scale.y, scale.z);
	} else {
		mtxBuf->setScaleFlag(jntNo, 1);
	}

	MTXSetPosition(anmMtx, &position);
	PSMTXConcat(J3DSys::mCurrentMtx, anmMtx, J3DSys::mCurrentMtx);
	PSMTXCopy(J3DSys::mCurrentMtx, anmMtx);
}

/**
 * @note Address: N/A
 * @note Size: 0x174
 */
void J3DMtxCalcScaleBlendSoftimage::calcScaleBlend(const Vec& scale, const Vec& position)
{
	J3DJoint* joint      = J3DMtxCalc::getJoint();
	J3DMtxBuffer* mtxBuf = J3DMtxCalc::getMtxBuffer();
	u16 jntNo            = joint->mJointIdx;
	MtxP anmMtx          = mtxBuf->getAnmMtx(jntNo);
	anmMtx[0][3]         = position.x * scale.x;
	anmMtx[1][3]         = position.y * scale.y;
	anmMtx[2][3]         = position.z * scale.z;
	J3DSys::mCurrentS.x  = J3DSys::mCurrentS.x * scale.x;
	J3DSys::mCurrentS.y  = J3DSys::mCurrentS.y * scale.y;
	J3DSys::mCurrentS.z  = J3DSys::mCurrentS.z * scale.z;

	PSMTXConcat(J3DSys::mCurrentMtx, anmMtx, J3DSys::mCurrentMtx);
	BOOL isDefScale;
	if (J3DSys::mCurrentS.x == 1.0f && J3DSys::mCurrentS.y == 1.0f && J3DSys::mCurrentS.z == 1.0f) {
		isDefScale = TRUE;
	} else {
		isDefScale = FALSE;
	}

	if (isDefScale == FALSE) {
		mtxBuf->setScaleFlag(jntNo, 0);
		JMAMTXApplyScale(J3DSys::mCurrentMtx, anmMtx, J3DSys::mCurrentS.x, J3DSys::mCurrentS.y, J3DSys::mCurrentS.z);

		anmMtx[0][3] = J3DSys::mCurrentMtx[0][3];
		anmMtx[1][3] = J3DSys::mCurrentMtx[1][3];
		anmMtx[2][3] = J3DSys::mCurrentMtx[2][3];
	} else {
		mtxBuf->setScaleFlag(jntNo, 1);
		PSMTXCopy(J3DSys::mCurrentMtx, anmMtx);
	}
}

/**
 * @note Address: 0x80016B04
 * @note Size: 0x198
 */
void J3DMtxCalcScaleBlendMaya::calcScaleBlend(const Vec& scale, const Vec& position)
{
	J3DJoint* joint      = J3DMtxCalc::getJoint();
	J3DMtxBuffer* mtxBuf = J3DMtxCalc::getMtxBuffer();

	u16 jntNo   = joint->mJointIdx;
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
}
