#include "JSystem/JStudio_JStage.h"
#include "stl/math.h"

namespace JStudio_JStage {

TAdaptor_light::TVVOutput_direction_ TAdaptor_light::saoVVOutput_direction_[6]
    = { TAdaptor_light::TVVOutput_direction_(10, 1), TAdaptor_light::TVVOutput_direction_(11, 1),
	    TAdaptor_light::TVVOutput_direction_(7, 2),  TAdaptor_light::TVVOutput_direction_(8, 2),
	    TAdaptor_light::TVVOutput_direction_(9, 2),  TAdaptor_light::TVVOutput_direction_(-1, 0) };

/**
 * @note Address: 0x800113C8
 * @note Size: 0xA8
 */
TAdaptor_light::TAdaptor_light(const JStage::TSystem* sys, JStage::TLight* light)
    : mSystem(sys)
    , mObject(light)
    , _118(0)
{
}

/**
 * @note Address: 0x80011470
 * @note Size: 0x78
 */
TAdaptor_light::~TAdaptor_light() { adaptor_do_end(nullptr); }

/**
 * @note Address: 0x800114E8
 * @note Size: 0x48
 */
void TAdaptor_light::adaptor_do_prepare(const JStudio::TObject* obj)
{
	for (const TVVOutput_direction_* output = saoVVOutput_direction_; output->mValueIndex != -1; output++) {
		mVariableValues[output->mValueIndex].setOutput(output);
	}
}

/**
 * @note Address: 0x80011530
 * @note Size: 0x2AC
 */
void TAdaptor_light::adaptor_do_begin(const JStudio::TObject* object)
{
	mObject->setFlagOn(1);
	JStudio::TControl* control = object->getControl(); // r29
	GXColor color              = mObject->JSGGetColor();
	adaptor_setVariableValue_GXColor(sauVariableValue_4_COLOR_RGBA, color);

	JStudio::TControl::TTransform_position_direction posDir;
	JStudio::TControl::TTransform_position_direction* vvVec = &posDir;
	mObject->JSGGetPosition(&posDir.mPosition);
	mObject->JSGGetDirection(&posDir.mDirection);

	// this should probably be an inline
	if (!control->mTransformOnGet) {
		vvVec = &posDir;
	} else {
		JStudio::TControl::TTransform_position_direction transformedPosDir;
		PSMTXMultVec(control->mTransformOnGet_Mtx, &posDir.mPosition, &transformedPosDir.mPosition);
		PSMTXMultVecSR(control->mTransformOnGet_Mtx, &vvVec->mPosition, &transformedPosDir.mDirection);
		vvVec = &transformedPosDir;
	}

	adaptor_setVariableValue_Vec(sauVariableValue_3_POSITION_XYZ, vvVec->mPosition);

	f32 x        = vvVec->mDirection.x;
	f32 y        = vvVec->mDirection.y;
	f32 z        = vvVec->mDirection.z;
	f32 dist     = dolsqrtfull(x * x + z * z);
	f32 atanVal1 = dolatan2f(x, z);
	f32 atanVal2 = dolatan2f(y, dist);

	adaptor_setVariableValue_immediate(10, TODEGREES(atanVal1));
	adaptor_setVariableValue_immediate(11, TODEGREES(atanVal2));

	Vec targetPos;
	PSVECAdd(&vvVec->mPosition, &vvVec->mDirection, &targetPos);
	adaptor_setVariableValue_Vec(sauVariableValue_3_TARGET_POSITION_XYZ, targetPos);
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
	mr       r30, r3
	mr       r29, r4
	lwz      r31, 0x114(r3)
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r31)
	ori      r4, r3, 1
	mr       r3, r31
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x114(r30)
	lwz      r29, 0x14(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	lis      r4, sauVariableValue_4_COLOR_RGBA__Q27JStudio14TAdaptor_light@ha
	stw      r3, 0xc(r1)
	addi     r4, r4, sauVariableValue_4_COLOR_RGBA__Q27JStudio14TAdaptor_light@l
	mr       r3, r30
	addi     r5, r1, 0xc
	bl adaptor_setVariableValue_GXColor__Q27JStudio8TAdaptorFPCUlRC8_GXColor lwz
r3, 0x114(r30) addi     r4, r1, 0x34 lwz      r12, 0(r3) lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x114(r30)
	addi     r31, r1, 0x40
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x75(r29)
	cmplwi   r0, 0
	bne      lbl_80011610
	addi     r31, r1, 0x34
	b        lbl_80011634

lbl_80011610:
	addi     r3, r29, 0xc8
	addi     r4, r1, 0x34
	addi     r5, r1, 0x1c
	bl       PSMTXMultVec
	mr       r4, r31
	addi     r3, r29, 0xc8
	addi     r5, r1, 0x28
	bl       PSMTXMultVecSR
	addi     r31, r1, 0x1c

lbl_80011634:
	lis      r3, sauVariableValue_3_POSITION_XYZ__Q27JStudio14TAdaptor_light@ha
	mr       r5, r31
	addi     r4, r3,
sauVariableValue_3_POSITION_XYZ__Q27JStudio14TAdaptor_light@l mr       r3, r30
	bl       adaptor_setVariableValue_Vec__Q27JStudio8TAdaptorFPCUlRC3Vec
	lfs      f2, 0x14(r31)
	lfs      f1, 0xc(r31)
	fmuls    f3, f2, f2
	lfs      f0, lbl_80516480@sda21(r2)
	lfs      f30, 0x10(r31)
	fmadds   f31, f1, f1, f3
	fcmpo    cr0, f31, f0
	ble      lbl_800116B0
	frsqrte  f3, f31
	lfd      f5, lbl_80516488@sda21(r2)
	lfd      f4, lbl_80516490@sda21(r2)
	fmul     f0, f3, f3
	fmul     f3, f5, f3
	fnmsub   f0, f31, f0, f4
	fmul     f3, f3, f0
	fmul     f0, f3, f3
	fmul     f3, f5, f3
	fnmsub   f0, f31, f0, f4
	fmul     f3, f3, f0
	fmul     f0, f3, f3
	fmul     f3, f5, f3
	fnmsub   f0, f31, f0, f4
	fmul     f0, f3, f0
	fmul     f31, f31, f0
	frsp     f31, f31
	b        lbl_80011734

lbl_800116B0:
	lfd      f0, lbl_80516498@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_800116C8
	lis      r3, __float_nan@ha
	lfs      f31, __float_nan@l(r3)
	b        lbl_80011734

lbl_800116C8:
	stfs     f31, 8(r1)
	lis      r0, 0x7f80
	lwz      r4, 8(r1)
	rlwinm   r3, r4, 0, 1, 8
	cmpw     r3, r0
	beq      lbl_800116F0
	bge      lbl_80011720
	cmpwi    r3, 0
	beq      lbl_80011708
	b        lbl_80011720

lbl_800116F0:
	clrlwi.  r0, r4, 9
	beq      lbl_80011700
	li       r0, 1
	b        lbl_80011724

lbl_80011700:
	li       r0, 2
	b        lbl_80011724

lbl_80011708:
	clrlwi.  r0, r4, 9
	beq      lbl_80011718
	li       r0, 5
	b        lbl_80011724

lbl_80011718:
	li       r0, 3
	b        lbl_80011724

lbl_80011720:
	li       r0, 4

lbl_80011724:
	cmpwi    r0, 1
	bne      lbl_80011734
	lis      r3, __float_nan@ha
	lfs      f31, __float_nan@l(r3)

lbl_80011734:
	bl       atan2
	frsp     f29, f1
	fmr      f1, f30
	fmr      f2, f31
	bl       atan2
	lis      r3,
update_immediate___Q27JStudio14TVariableValueFPQ27JStudio14TVariableValued@ha
	lwz      r6, 4(r30)
	addi     r7, r3,
update_immediate___Q27JStudio14TVariableValueFPQ27JStudio14TVariableValued@l lfs
f2, lbl_805164A0@sda21(r2) stw      r7, 0xd0(r6) li       r0, 0 fmuls    f0, f2,
f29 mr       r3, r31 stw      r0, 0xcc(r6) frsp     f1, f1 addi     r4, r31, 0xc
	addi     r5, r1, 0x10
	stfs     f0, 0xd4(r6)
	fmuls    f0, f2, f1
	lwz      r6, 4(r30)
	stw      r7, 0xe4(r6)
	stw      r0, 0xe0(r6)
	stfs     f0, 0xe8(r6)
	bl       PSVECAdd
	lis      r4,
sauVariableValue_3_TARGET_POSITION_XYZ__Q27JStudio14TAdaptor_light@ha mr r3, r30
	addi     r4, r4,
sauVariableValue_3_TARGET_POSITION_XYZ__Q27JStudio14TAdaptor_light@l addi r5,
r1, 0x10 bl       adaptor_setVariableValue_Vec__Q27JStudio8TAdaptorFPCUlRC3Vec
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
 * @note Address: 0x800117DC
 * @note Size: 0x54
 */
void TAdaptor_light::adaptor_do_end(const JStudio::TObject*) { mObject->setFlagOff(1); }

/**
 * @note Address: 0x80011830
 * @note Size: 0x1C8
 */
void TAdaptor_light::adaptor_do_update(const JStudio::TObject* object, u32 p2)
{
	JStudio::TControl* control = object->getControl();
	GXColor color;
	adaptor_getVariableValue_GXColor(&color, sauVariableValue_4_COLOR_RGBA);
	get_pJSG_()->JSGSetColor(color);

	JStudio::TControl::TTransform_position_direction posDir1;
	adaptor_getVariableValue_Vec(&posDir1.mPosition, sauVariableValue_3_POSITION_XYZ);

	switch (_118) {
	case 1:
		f32 val10 = adaptor_getVariableValue(10)->getValue();
		f32 val11 = adaptor_getVariableValue(11)->getValue();
		f32 cosX  = dolcosf(DEG2RAD * val11);
		f32 sinX  = dolsinf(DEG2RAD * val11);

		posDir1.mDirection.x = cosX * dolsinf(DEG2RAD * val10);
		posDir1.mDirection.y = sinX;
		posDir1.mDirection.z = cosX * dolcosf(DEG2RAD * val10);

		break;
	case 2:
		Vec target;
		adaptor_getVariableValue_Vec(&target, sauVariableValue_3_TARGET_POSITION_XYZ);
		PSVECSubtract(&target, &posDir1.mPosition, &posDir1.mDirection);
		break;
	}

	JStudio::TControl::TTransform_position_direction* posDir;
	if (!control->mTransformOnSet) {
		posDir = &posDir1;
	} else {
		JStudio::TControl::TTransform_position_direction posDir2;
		PSMTXMultVec(control->mTransformOnSet_Mtx, &posDir1.mPosition, &posDir2.mPosition);
		PSMTXMultVecSR(control->mTransformOnSet_Mtx, &posDir1.mDirection, &posDir2.mDirection);
		posDir = &posDir2;
	}

	get_pJSG_()->JSGSetPosition(posDir->mPosition);
	get_pJSG_()->JSGSetDirection(posDir->mDirection);
	get_pJSG_()->JSGUpdate();
}

/**
 * @note Address: 0x800119F8
 * @note Size: 0x34
 */
void TAdaptor_light::adaptor_do_data(const JStudio::TObject* object, const void* p2, u32 p3, const void* p4, u32 p5)
{
	TAdaptor_object_::adaptor_data_(mObject, p2, p3, p4, p5);
}

/**
 * @note Address: 0x80011A2C
 * @note Size: 0x78
 */
void TAdaptor_light::adaptor_do_FACULTY(JStudio::data::TEOperationData op, const void* data, u32 flag)
{
	switch (op) {
	case JStudio::data::TEOD_Unknown_02:
		JStage::TELight lightType;
		switch (((int*)data)[0]) {
		case 0x301:
			lightType = JStage::TELIGHT_Unk1;
			break;
		case 0x302:
			lightType = JStage::TELIGHT_Unk2;
			break;
		case 0x303:
			lightType = JStage::TELIGHT_Unk3;
			break;
		default:
			goto end; // good luck trying to kill the goto -EpochFlame
			break;
		}

		get_pJSG_()->JSGSetLightType(lightType);
	end:
		break;
	}
}

/**
 * @note Address: 0x80011AA4
 * @note Size: 0x24
 */
void TAdaptor_light::adaptor_do_ENABLE(JStudio::data::TEOperationData op, const void* data, u32 flag)
{
	TAdaptor_object_::adaptor_ENABLE_(mObject, op, data, flag);
}

/**
 * @note Address: 0x80011AC8
 * @note Size: 0xC
 */
void TAdaptor_light::TVVOutput_direction_::operator()(f32, JStudio::TAdaptor* adaptor) const { ((TAdaptor_light*)adaptor)->_118 = _08; }

} // namespace JStudio_JStage
