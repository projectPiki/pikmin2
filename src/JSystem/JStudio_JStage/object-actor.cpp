#include "Dolphin/mtx.h"
#include "JSystem/JStage/TActor.h"
#include "JSystem/JStudio/TAdaptor.h"
#include "JSystem/JStudio/TControl.h"
#include "JSystem/JStudio/TObject.h"
#include "JSystem/JStudio/data.h"
#include "JSystem/JStudio/math.h"
#include "JSystem/JStudio_JStage.h"
#include "types.h"

namespace JStudio_JStage {

const TAdaptor_actor::TVVOutputObject TAdaptor_actor::saoVVOutput_[2]
    = { TVVOutputObject(4, &JStage::TActor::JSGSetAnimationTransition, &JStage::TActor::JSGGetAnimationTransition),
	    TVVOutputObject(5, nullptr, nullptr) };

const TAdaptor_actor::TVVOutput_ANIMATION_FRAME_ TAdaptor_actor::saoVVOutput_ANIMATION_FRAME_[3]
    = { TVVOutput_ANIMATION_FRAME_(4, &JStage::TActor::JSGSetAnimationFrame, &JStage::TActor::JSGGetAnimationFrame,
	                               &JStage::TActor::JSGGetAnimationFrameMax),
	    TVVOutput_ANIMATION_FRAME_(5, &JStage::TActor::JSGSetTextureAnimationFrame, &JStage::TActor::JSGGetTextureAnimationFrame,
	                               &JStage::TActor::JSGGetTextureAnimationFrameMax),
	    TVVOutput_ANIMATION_FRAME_(5, nullptr, nullptr, nullptr) };

/**
 * @note Address: 0x80012198
 * @note Size: 0xC8
 */
TAdaptor_actor::TAdaptor_actor(const JStage::TSystem* system, JStage::TActor* actor)
    : JStudio::TAdaptor_actor()
    , mSystem(system)
    , mObject(actor)
    , _12C(0)
    , _130(0)
    , _134(0)
    , _138(nullptr)
    , _13C(0xFFFFFFFF)
    , _140(0)
    , _144(nullptr)
    , _148(0xFFFFFFFF)
{
}

/**
 * @note Address: 0x80012260
 * @note Size: 0x78
 * __dt__Q214JStudio_JStage14TAdaptor_actorFv
 */
TAdaptor_actor::~TAdaptor_actor() { adaptor_do_end(nullptr); }

/**
 * @note Address: 0x800122D8
 * @note Size: 0x8C
 */
void TAdaptor_actor::adaptor_do_prepare(const JStudio::TObject*)
{
	for (const TVVOutputObject* output = saoVVOutput_; output->mValueIndex != -1; output++) {
		mVariableValues[output->mValueIndex].setOutput(output);
	}
	for (const TVVOutput_ANIMATION_FRAME_* output = saoVVOutput_ANIMATION_FRAME_; output->mValueIndex != -1; output++) {
		mVariableValues[output->mValueIndex].setOutput(output);
	}
}

/**
 * @note Address: 0x80012364
 * @note Size: 0x130
 */
void TAdaptor_actor::adaptor_do_begin(const JStudio::TObject* object)
{
	mObject->setFlagOn(1);
	getJSG_SRT_((const JStudio::TControl*)object->mControl);
	for (const TVVOutputObject* output = saoVVOutput_; output->mValueIndex != -1; output++) {
		mVariableValues[output->mValueIndex].setValueImmediate((mObject->*(output->mGetter))());
	}
	for (const TVVOutput_ANIMATION_FRAME_* output = saoVVOutput_ANIMATION_FRAME_; output->mValueIndex != -1; output++) {
		mVariableValues[output->mValueIndex].setValueImmediate((mObject->*(output->mGetter))());
	}
}

/**
 * @note Address: 0x80012494
 * @note Size: 0x54
 */
void TAdaptor_actor::adaptor_do_end(const JStudio::TObject*) { mObject->setFlagOff(1); }

/**
 * @note Address: 0x800124E8
 * @note Size: 0x44
 */
void TAdaptor_actor::adaptor_do_update(const JStudio::TObject* object, u32 p2)
{
	setJSG_SRT_(static_cast<JStudio::TControl*>(object->mControl));
	mObject->JSGUpdate();
}

/**
 * @note Address: 0x8001252C
 * @note Size: 0x34
 */
void TAdaptor_actor::adaptor_do_data(const JStudio::TObject* object, const void* p2, u32 p3, const void* p4, u32 p5)
{
	TAdaptor_object_::adaptor_data_(mObject, p2, p3, p4, p5);
}

/**
 * @note Address: 0x80012560
 * @note Size: 0x54
 */
void TAdaptor_actor::adaptor_do_SHAPE(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	setJSG_ID_(&JStage::TActor::JSGSetShape, operation, p2, p3);
}

/**
 * @note Address: 0x800125B4
 * @note Size: 0x54
 */
void TAdaptor_actor::adaptor_do_ANIMATION(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	setJSG_ID_(&JStage::TActor::JSGSetAnimation, operation, p2, p3);
}

/**
 * @note Address: 0x80012608
 * @note Size: 0x14
 */
void TAdaptor_actor::adaptor_do_ANIMATION_MODE(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	if (operation != JStudio::data::TEOD_Unknown_02) {
		return;
	}
	_12C = *(u32*)p2;
}

/**
 * @note Address: 0x8001261C
 * @note Size: 0x54
 */
void TAdaptor_actor::adaptor_do_TEXTURE_ANIMATION(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	setJSG_ID_(&JStage::TActor::JSGSetTextureAnimation, operation, p2, p3);
}

/**
 * @note Address: 0x80012670
 * @note Size: 0x14
 */
void TAdaptor_actor::adaptor_do_TEXTURE_ANIMATION_MODE(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	if (operation != JStudio::data::TEOD_Unknown_02) {
		return;
	}
	_130 = *(u32*)p2;
}

/**
 * @note Address: 0x80012684
 * @note Size: 0x44
 */
void TAdaptor_actor::adaptor_do_PARENT(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_18:
		_138 = TAdaptor_object_::adaptor_findJSGObject_(mSystem, (const char*)p2);
		break;
	}
}

/**
 * @note Address: 0x800126C8
 * @note Size: 0x5C
 */
void TAdaptor_actor::adaptor_do_PARENT_NODE(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_18:
		_13C = TAdaptor_object_::adaptor_findJSGObjectNode_(_138, (const char*)p2);
		break;
	case JStudio::data::TEOD_Unknown_19:
		_13C = *(u32*)p2;
		break;
	}
}

/**
 * @note Address: 0x80012724
 * @note Size: 0x88
 */
void TAdaptor_actor::adaptor_do_PARENT_ENABLE(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_02:
		bool v0 = (*(u32*)p2 != 0);
		if (_140 != v0) {
			_140 = v0;
			switch (_134) {
			case 0:
				break;
			case 1:
				JStage::TObject* object = nullptr;
				u32 v1                  = 0xFFFFFFFF;
				if (v0 != 0) {
					object = _138;
					v1     = _13C;
				}
				mObject->JSGSetParent(object, v1);
				break;
			}
		}
		break;
	}
}

/**
 * @note Address: 0x800127AC
 * @note Size: 0x14
 */
void TAdaptor_actor::adaptor_do_PARENT_FUNCTION(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	if (operation != JStudio::data::TEOD_Unknown_02) {
		return;
	}
	_134 = *(u32*)p2;
}

/**
 * @note Address: 0x800127C0
 * @note Size: 0x44
 */
void TAdaptor_actor::adaptor_do_RELATION(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_18:
		_144 = TAdaptor_object_::adaptor_findJSGObject_(mSystem, (const char*)p2);
		break;
	}
}

/**
 * @note Address: 0x80012804
 * @note Size: 0x5C
 */
void TAdaptor_actor::adaptor_do_RELATION_NODE(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_18:
		_148 = TAdaptor_object_::adaptor_findJSGObjectNode_(_138, (const char*)p2);
		break;
	case JStudio::data::TEOD_Unknown_19:
		_148 = *(u32*)p2;
		break;
	}
}

/**
 * @note Address: 0x80012860
 * @note Size: 0x58
 */
void TAdaptor_actor::adaptor_do_RELATION_ENABLE(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_02:
		mObject->JSGSetRelation(*(u32*)p2, _144, _148);
		break;
	}
}

/**
 * @note Address: 0x800128B8
 * @note Size: 0x3C
 * setJSG_ID___Q214JStudio_JStage14TAdaptor_actorFMQ26JStage6TActorFPCvPvUl_vQ37JStudio4data15TEOperationDataPCvUl
 */
void TAdaptor_actor::setJSG_ID_(IDFunction function, JStudio::data::TEOperationData operation, const void* p3, u32 p4)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_19:
		(mObject->*function)(*(u32*)p3);
		break;
	}
}

/**
 * @note Address: 0x800128F4
 * @note Size: 0x178
 */
void TAdaptor_actor::setJSG_SRT_(const JStudio::TControl* control)
{
	JStudio::TControl::TTransform_translation_rotation_scaling transform;
	JStudio::TControl::TTransform_translation_rotation_scaling multipliedTransform;
	adaptor_getVariableValue_Vec(&transform.getTranslation(), sauVariableValue_3_TRANSLATION_XYZ);
	adaptor_getVariableValue_Vec(&transform.getRotation(), sauVariableValue_3_ROTATION_XYZ);
	adaptor_getVariableValue_Vec(&transform.getScaling(), sauVariableValue_3_SCALING_XYZ);
	JStudio::TControl::TTransform_translation_rotation_scaling* pTransform;
	if (_140 == 0) {
		JStudio::TControl::TTransform_translation_rotation_scaling* tempTransform;

		if (control->mTransformOnSet == 0) {
			tempTransform = &transform;
		} else {
			PSMTXMultVec(*const_cast<Mtx*>(&control->mTransformOnSet_Mtx), transform.getAll(), multipliedTransform.getAll());
			tempTransform                       = &multipliedTransform;
			multipliedTransform.getRotation().x = transform.getRotation().x;
			multipliedTransform.getRotation().y = transform.getRotation().y + control->getOnSetRotY();
			multipliedTransform.getRotation().z = transform.getRotation().z;
		}
		pTransform = tempTransform;
	} else {
		pTransform = &transform;
		switch (_134) {
		case 0: {
			Mtx mtx;
			bool check;
			if (!transform_toGlobalFromLocal(mtx, *pTransform, _138, _13C)) {
				check = false;
			} else {
				JStudio::math::getFromTransformation_SRxyzT(&multipliedTransform.getScaling(), &multipliedTransform.getRotation(),
				                                            &multipliedTransform.getTranslation(), mtx);
				check = true;
			}

			if (!check) {
				return;
			}
			pTransform = &multipliedTransform;
			break;
		}
		case 1:
			break;
		}
	}
	mObject->JSGSetTranslation(pTransform->getTranslation());
	mObject->JSGSetRotation(pTransform->getRotation());
	mObject->JSGSetScaling(pTransform->getScaling());
}

/**
 * @note Address: 0x80012A6C
 * @note Size: 0x17C
 */
void TAdaptor_actor::getJSG_SRT_(const JStudio::TControl* control)
{
	JStudio::TControl::TTransform_translation_rotation_scaling transform;
	JStudio::TControl::TTransform_translation_rotation_scaling trs;
	Mtx mtx;
	get_pJSG()->JSGGetTranslation(&transform.getTranslation());
	get_pJSG()->JSGGetRotation(&transform.getRotation());
	get_pJSG()->JSGGetScaling(&transform.getScaling());

	JStudio::TControl::TTransform_translation_rotation_scaling* outTransform;
	if (!_140) {
		JStudio::TControl::TTransform_translation_rotation_scaling* tempTransform;
		if (!control->mTransformOnGet) {
			tempTransform = &transform;
		} else {
			PSMTXMultVec(control->mTransformOnGet_Mtx, &transform.getTranslation(), &trs.getTranslation());
			tempTransform       = &trs;
			trs.getRotation().x = transform.getRotation().x;
			trs.getRotation().y = transform.getRotation().y + control->getOnGetRotY();
			trs.getRotation().z = transform.getRotation().z;
		}
		outTransform = tempTransform;

	} else {
		outTransform = &transform;
		switch (_134) {
		case 1:
			break;
		case 0:
			bool check;
			if (!transform_toLocalFromGlobal(mtx, *outTransform, _138, _13C)) {
				check = false;
			} else {
				JStudio::math::getFromTransformation_SRxyzT(&trs.getScaling(), &trs.getRotation(), &trs.getTranslation(), mtx);
				check = true;
			}

			if (!check) {
				return;
			}
			outTransform = &trs;
			break;
		}
	}

	adaptor_setVariableValue_Vec(sauVariableValue_3_TRANSLATION_XYZ, outTransform->getTranslation());
	adaptor_setVariableValue_Vec(sauVariableValue_3_ROTATION_XYZ, outTransform->getRotation());
	adaptor_setVariableValue_Vec(sauVariableValue_3_SCALING_XYZ, outTransform->getScaling());
}

/**
 * @note Address: 0x80012BE8
 * @note Size: 0xE4
 */
void TAdaptor_actor::TVVOutput_ANIMATION_FRAME_::operator()(f32 p1, JStudio::TAdaptor* adaptor) const
{
	JStage::TActor* actor = static_cast<TAdaptor_actor*>(adaptor)->get_pJSG();
	// not sure what this bit is
	u8 idx     = adaptor->mVariableValues[_08]._04;
	f32 maxVal = (actor->*mMaxGetter)();
	switch (idx & 0x2) { // not sure what this is either
	case 1:
		p1 = maxVal - p1;
		break;
	case 0:
		break;
	}

	if (maxVal > 0.0f) {
		p1 = (f32)(*JStudio::TFunctionValue::toFunction_outside(idx))(p1, maxVal);
	}
	(actor->*mSetter)(p1);
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stfd      f30, 0x20(r1)
	  psq_st    f30,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r31, 0x128(r4)
	  lwz       r0, 0x8(r3)
	  fmr       f30, f1
	  mr        r3, r31
	  addi      r12, r28, 0x24
	  add       r4, r4, r0
	  lwz       r30, -0x1(r4)
	  rlwinm    r29,r30,0,24,31
	  bl        0xAEEEC
	  nop
	  rlwinm    r0,r30,24,24,31
	  fmr       f31, f1
	  cmpwi     r0, 0x1
	  beq-      .loc_0x70
	  bge-      .loc_0x74
	  b         .loc_0x74

	.loc_0x70:
	  fsubs     f30, f31, f30

	.loc_0x74:
	  lfs       f0, -0x7EB8(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0xA0
	  mr        r3, r29
	  bl        -0xA180
	  fmr       f1, f30
	  mr        r12, r3
	  fmr       f2, f31
	  mtctr     r12
	  bctrl
	  frsp      f30, f1

	.loc_0xA0:
	  fmr       f1, f30
	  mr        r3, r31
	  addi      r12, r28, 0xC
	  bl        0xAEE90
	  nop
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  psq_l     f30,0x28(r1),0,0
	  lfd       f30, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x44(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

} // namespace JStudio_JStage
