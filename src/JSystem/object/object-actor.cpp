#include "Dolphin/mtx.h"
#include "JStage/TActor.h"
#include "JStudio/TAdaptor.h"
#include "JStudio/TControl.h"
#include "JStudio/TObject.h"
#include "JStudio/data.h"
#include "JStudio/math.h"
#include "JSystem/JStudio_JStage.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte "__sinit_object-actor_cpp"

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_8049F5B0
    lbl_8049F5B0:
        .4byte 0x00000000
        .4byte 0x00000058
        .4byte 0x00000000
    .global lbl_8049F5BC
    lbl_8049F5BC:
        .4byte 0x00000000
        .4byte 0x00000060
        .4byte 0x00000000
    .global lbl_8049F5C8
    lbl_8049F5C8:
        .4byte 0x00000000
        .4byte 0x0000007C
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000074
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000070
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000068
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000064
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x0000006C
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000084
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000080
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000088
        .4byte 0x00000000
    .global __vt__Q314JStudio_JStage14TAdaptor_actor26TVVOutput_ANIMATION_FRAME_
    __vt__Q314JStudio_JStage14TAdaptor_actor26TVVOutput_ANIMATION_FRAME_:
        .4byte 0
        .4byte 0
        .4byte
   __cl__Q314JStudio_JStage14TAdaptor_actor26TVVOutput_ANIMATION_FRAME_CFfPQ27JStudio8TAdaptor
        .4byte
   __dt__Q314JStudio_JStage14TAdaptor_actor26TVVOutput_ANIMATION_FRAME_Fv
    .global __vt__Q214JStudio_JStage14TAdaptor_actor
    __vt__Q214JStudio_JStage14TAdaptor_actor:
        .4byte 0
        .4byte 0
        .4byte __dt__Q214JStudio_JStage14TAdaptor_actorFv
        .4byte
   adaptor_do_prepare__Q214JStudio_JStage14TAdaptor_actorFPCQ27JStudio7TObject
        .4byte
   adaptor_do_begin__Q214JStudio_JStage14TAdaptor_actorFPCQ27JStudio7TObject
        .4byte
   adaptor_do_end__Q214JStudio_JStage14TAdaptor_actorFPCQ27JStudio7TObject
        .4byte
   adaptor_do_update__Q214JStudio_JStage14TAdaptor_actorFPCQ27JStudio7TObjectUl
        .4byte
   adaptor_do_data__Q214JStudio_JStage14TAdaptor_actorFPCQ27JStudio7TObjectPCvUlPCvUl
        .4byte
   adaptor_do_PARENT__Q214JStudio_JStage14TAdaptor_actorFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_PARENT_NODE__Q214JStudio_JStage14TAdaptor_actorFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_PARENT_ENABLE__Q214JStudio_JStage14TAdaptor_actorFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_PARENT_FUNCTION__Q214JStudio_JStage14TAdaptor_actorFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_RELATION__Q214JStudio_JStage14TAdaptor_actorFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_RELATION_NODE__Q214JStudio_JStage14TAdaptor_actorFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_RELATION_ENABLE__Q214JStudio_JStage14TAdaptor_actorFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_SHAPE__Q214JStudio_JStage14TAdaptor_actorFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_ANIMATION__Q214JStudio_JStage14TAdaptor_actorFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_ANIMATION_MODE__Q214JStudio_JStage14TAdaptor_actorFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_TEXTURE_ANIMATION__Q214JStudio_JStage14TAdaptor_actorFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_TEXTURE_ANIMATION_MODE__Q214JStudio_JStage14TAdaptor_actorFQ37JStudio4data15TEOperationDataPCvUl
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
    .global
   "__vt__Q214JStudio_JStage81TVariableValueOutput_object_<Q214JStudio_JStage14TAdaptor_actor,Q26JStage6TActor>"
    "__vt__Q214JStudio_JStage81TVariableValueOutput_object_<Q214JStudio_JStage14TAdaptor_actor,Q26JStage6TActor>":
        .4byte 0
        .4byte 0
        .4byte
   "__cl__Q214JStudio_JStage81TVariableValueOutput_object_<Q214JStudio_JStage14TAdaptor_actor,Q26JStage6TActor>CFfPQ27JStudio8TAdaptor"
        .4byte
   "__dt__Q214JStudio_JStage81TVariableValueOutput_object_<Q214JStudio_JStage14TAdaptor_actor,Q26JStage6TActor>Fv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global saoVVOutput___Q214JStudio_JStage14TAdaptor_actor
    saoVVOutput___Q214JStudio_JStage14TAdaptor_actor:
        .skip 0xD0
    .global saoVVOutput_ANIMATION_FRAME___Q214JStudio_JStage14TAdaptor_actor
    saoVVOutput_ANIMATION_FRAME___Q214JStudio_JStage14TAdaptor_actor:
        .skip 0x90

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805164A8
    lbl_805164A8:
        .4byte 0x00000000
        .4byte 0x00000000
*/

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

/*
 * --INFO--
 * Address:	80012198
 * Size:	0000C8
 */
TAdaptor_actor::TAdaptor_actor(const JStage::TSystem* system, JStage::TActor* actor)
    : JStudio::TAdaptor_actor()
    , m_system(system)
    , m_object(actor)
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

/*
 * --INFO--
 * Address:	80012260
 * Size:	000078
 * __dt__Q214JStudio_JStage14TAdaptor_actorFv
 */
TAdaptor_actor::~TAdaptor_actor() { adaptor_do_end(nullptr); }

/*
 * --INFO--
 * Address:	800122D8
 * Size:	00008C
 */
void TAdaptor_actor::adaptor_do_prepare(const JStudio::TObject*)
{
	for (const TVVOutputObject* output = saoVVOutput_; output->m_valueIndex != -1; output++) {
		_04[output->m_valueIndex].setOutput(output);
	}
	for (const TVVOutput_ANIMATION_FRAME_* output = saoVVOutput_ANIMATION_FRAME_; output->m_valueIndex != -1; output++) {
		_04[output->m_valueIndex].setOutput(output);
	}
	/*
	lis      r4, saoVVOutput___Q214JStudio_JStage14TAdaptor_actor@ha
	addi     r0, r4, saoVVOutput___Q214JStudio_JStage14TAdaptor_actor@l
	mr       r5, r0
	b        lbl_80012310

lbl_800122E8:
	mulli    r0, r0, 0x14
	lwz      r4, 4(r3)
	cmplwi   r5, 0
	add      r4, r4, r0
	beq      lbl_80012304
	mr       r0, r5
	b        lbl_80012308

lbl_80012304:
	addi     r0, r13, soOutput_none___Q27JStudio14TVariableValue@sda21

lbl_80012308:
	stw      r0, 0x10(r4)
	addi     r5, r5, 0x20

lbl_80012310:
	lwz      r0, 4(r5)
	cmpwi    r0, -1
	bne      lbl_800122E8
	lis      r4,
saoVVOutput_ANIMATION_FRAME___Q214JStudio_JStage14TAdaptor_actor@ha addi     r0,
r4, saoVVOutput_ANIMATION_FRAME___Q214JStudio_JStage14TAdaptor_actor@l mr r5, r0
	b        lbl_80012354

lbl_8001232C:
	mulli    r0, r0, 0x14
	lwz      r4, 4(r3)
	cmplwi   r5, 0
	add      r4, r4, r0
	beq      lbl_80012348
	mr       r0, r5
	b        lbl_8001234C

lbl_80012348:
	addi     r0, r13, soOutput_none___Q27JStudio14TVariableValue@sda21

lbl_8001234C:
	stw      r0, 0x10(r4)
	addi     r5, r5, 0x30

lbl_80012354:
	lwz      r0, 4(r5)
	cmpwi    r0, -1
	bne      lbl_8001232C
	blr
	*/
}

/*
 * --INFO--
 * Address:	80012364
 * Size:	000130
 */
void TAdaptor_actor::adaptor_do_begin(const JStudio::TObject* object)
{
	m_object->setFlagOn(1);
	getJSG_SRT_((const JStudio::TControl*)object->pControl);
	for (const TVVOutputObject* output = saoVVOutput_; output->m_valueIndex != -1; output++) {
		_04[output->m_valueIndex].set(JStudio::TVariableValue::update_immediate_, 0, (m_object->*(output->m_getter))());
	}
	for (const TVVOutput_ANIMATION_FRAME_* output = saoVVOutput_ANIMATION_FRAME_; output->m_valueIndex != -1; output++) {
		_04[output->m_valueIndex].set(JStudio::TVariableValue::update_immediate_, 0, (m_object->*(output->m_getter))());
	}
}

/*
 * --INFO--
 * Address:	80012494
 * Size:	000054
 */
void TAdaptor_actor::adaptor_do_end(const JStudio::TObject*) { m_object->setFlagOff(1); }

/*
 * --INFO--
 * Address:	800124E8
 * Size:	000044
 */
void TAdaptor_actor::adaptor_do_update(const JStudio::TObject* object, unsigned long p2)
{
	setJSG_SRT_(static_cast<JStudio::TControl*>(object->pControl));
	m_object->JSGUpdate();
}

/*
 * --INFO--
 * Address:	8001252C
 * Size:	000034
 */
void TAdaptor_actor::adaptor_do_data(const JStudio::TObject* object, const void* p2, unsigned long p3, const void* p4, unsigned long p5)
{
	TAdaptor_object_::adaptor_data_(m_object, p2, p3, p4, p5);
}

/*
 * --INFO--
 * Address:	80012560
 * Size:	000054
 */
void TAdaptor_actor::adaptor_do_SHAPE(JStudio::data::TEOperationData operation, const void* p2, unsigned long p3)
{
	setJSG_ID_(&JStage::TActor::JSGSetShape, operation, p2, p3);
}

/*
 * --INFO--
 * Address:	800125B4
 * Size:	000054
 */
void TAdaptor_actor::adaptor_do_ANIMATION(JStudio::data::TEOperationData operation, const void* p2, unsigned long p3)
{
	setJSG_ID_(&JStage::TActor::JSGSetAnimation, operation, p2, p3);
}

/*
 * --INFO--
 * Address:	80012608
 * Size:	000014
 */
void TAdaptor_actor::adaptor_do_ANIMATION_MODE(JStudio::data::TEOperationData operation, const void* p2, unsigned long p3)
{
	if (operation != JStudio::data::TEOD_Unknown_02) {
		return;
	}
	_12C = *(u32*)p2;
}

/*
 * --INFO--
 * Address:	8001261C
 * Size:	000054
 */
void TAdaptor_actor::adaptor_do_TEXTURE_ANIMATION(JStudio::data::TEOperationData operation, const void* p2, unsigned long p3)
{
	setJSG_ID_(&JStage::TActor::JSGSetTextureAnimation, operation, p2, p3);
}

/*
 * --INFO--
 * Address:	80012670
 * Size:	000014
 */
void TAdaptor_actor::adaptor_do_TEXTURE_ANIMATION_MODE(JStudio::data::TEOperationData operation, const void* p2, unsigned long p3)
{
	if (operation != JStudio::data::TEOD_Unknown_02) {
		return;
	}
	_130 = *(u32*)p2;
}

/*
 * --INFO--
 * Address:	80012684
 * Size:	000044
 */
void TAdaptor_actor::adaptor_do_PARENT(JStudio::data::TEOperationData operation, const void* p2, unsigned long p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_18:
		_138 = TAdaptor_object_::adaptor_findJSGObject_(m_system, (const char*)p2);
		break;
	}
}

/*
 * --INFO--
 * Address:	800126C8
 * Size:	00005C
 */
void TAdaptor_actor::adaptor_do_PARENT_NODE(JStudio::data::TEOperationData operation, const void* p2, unsigned long p3)
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

/*
 * --INFO--
 * Address:	80012724
 * Size:	000088
 */
void TAdaptor_actor::adaptor_do_PARENT_ENABLE(JStudio::data::TEOperationData operation, const void* p2, unsigned long p3)
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
				m_object->JSGSetParent(object, v1);
				break;
			}
		}
		break;
	}
}

/*
 * --INFO--
 * Address:	800127AC
 * Size:	000014
 */
void TAdaptor_actor::adaptor_do_PARENT_FUNCTION(JStudio::data::TEOperationData operation, const void* p2, unsigned long p3)
{
	if (operation != JStudio::data::TEOD_Unknown_02) {
		return;
	}
	_134 = *(u32*)p2;
}

/*
 * --INFO--
 * Address:	800127C0
 * Size:	000044
 */
void TAdaptor_actor::adaptor_do_RELATION(JStudio::data::TEOperationData operation, const void* p2, unsigned long p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_18:
		_144 = TAdaptor_object_::adaptor_findJSGObject_(m_system, (const char*)p2);
		break;
	}
}

/*
 * --INFO--
 * Address:	80012804
 * Size:	00005C
 */
void TAdaptor_actor::adaptor_do_RELATION_NODE(JStudio::data::TEOperationData operation, const void* p2, unsigned long p3)
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

/*
 * --INFO--
 * Address:	80012860
 * Size:	000058
 */
void TAdaptor_actor::adaptor_do_RELATION_ENABLE(JStudio::data::TEOperationData operation, const void* p2, unsigned long p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_02:
		m_object->JSGSetRelation(*(u32*)p2, _144, _148);
		break;
	}
}

/*
 * --INFO--
 * Address:	800128B8
 * Size:	00003C
 * setJSG_ID___Q214JStudio_JStage14TAdaptor_actorFMQ26JStage6TActorFPCvPvUl_vQ37JStudio4data15TEOperationDataPCvUl
 */
void TAdaptor_actor::setJSG_ID_(IDFunction function, JStudio::data::TEOperationData operation, const void* p3, unsigned long p4)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_19:
		(m_object->*function)(*(u32*)p3);
		break;
	}
}

/*
 * --INFO--
 * Address:	800128F4
 * Size:	000178
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
		if (control->_74 == 0) {
			pTransform = &transform;
		} else {
			PSMTXMultVec(*const_cast<Mtx*>(&control->_98), transform.getAll(), multipliedTransform.getAll());
			pTransform                          = &multipliedTransform;
			multipliedTransform.getRotation().y = transform.getRotation().y + control->_90;
			multipliedTransform.getRotation().x = transform.getRotation().x;
			multipliedTransform.getRotation().z = transform.getRotation().z;
		}
	} else {
		pTransform = &transform;
		switch (_134) {
		case 0: {
			Mtx mtx;
			if (transform_toGlobalFromLocal(mtx, *pTransform, _138, _13C) == false) {
				return;
			}
			JStudio::math::getFromTransformation_SRxyzT(&multipliedTransform.getScaling(), &multipliedTransform.getRotation(),
			                                            &multipliedTransform.getTranslation(), mtx);
			pTransform = &multipliedTransform;
			break;
		}
		case 1:
			break;
		}
	}
	m_object->JSGSetTranslation(pTransform->getTranslation());
	m_object->JSGSetRotation(pTransform->getRotation());
	m_object->JSGSetScaling(pTransform->getScaling());
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	lis      r5,
sauVariableValue_3_TRANSLATION_XYZ__Q27JStudio14TAdaptor_actor@ha stw      r0,
0x94(r1) addi     r5, r5,
sauVariableValue_3_TRANSLATION_XYZ__Q27JStudio14TAdaptor_actor@l stw      r31,
0x8c(r1) mr       r31, r4 addi     r4, r1, 0x5c stw      r30, 0x88(r1) mr r30,
r3 bl       adaptor_getVariableValue_Vec__Q27JStudio8TAdaptorCFP3VecPCUl lis r3,
sauVariableValue_3_ROTATION_XYZ__Q27JStudio14TAdaptor_actor@ha addi     r4, r1,
0x68 addi     r5, r3,
sauVariableValue_3_ROTATION_XYZ__Q27JStudio14TAdaptor_actor@l mr       r3, r30
	bl       adaptor_getVariableValue_Vec__Q27JStudio8TAdaptorCFP3VecPCUl
	lis      r4, sauVariableValue_3_SCALING_XYZ__Q27JStudio14TAdaptor_actor@ha
	mr       r3, r30
	addi     r5, r4,
sauVariableValue_3_SCALING_XYZ__Q27JStudio14TAdaptor_actor@l addi     r4, r1,
0x74 bl       adaptor_getVariableValue_Vec__Q27JStudio8TAdaptorCFP3VecPCUl lbz
r0, 0x140(r30) cmplwi   r0, 0 bne      lbl_800129A4 lbz      r0, 0x74(r31)
	cmplwi   r0, 0
	bne      lbl_80012968
	addi     r0, r1, 0x5c
	b        lbl_8001299C

lbl_80012968:
	addi     r3, r31, 0x98
	addi     r4, r1, 0x5c
	addi     r5, r1, 0x38
	bl       PSMTXMultVec
	lfs      f1, 0x6c(r1)
	addi     r0, r1, 0x38
	lfs      f0, 0x90(r31)
	lfs      f2, 0x68(r1)
	fadds    f1, f1, f0
	lfs      f0, 0x70(r1)
	stfs     f2, 0x44(r1)
	stfs     f1, 0x48(r1)
	stfs     f0, 0x4c(r1)

lbl_8001299C:
	mr       r31, r0
	b        lbl_80012A0C

lbl_800129A4:
	lwz      r0, 0x134(r30)
	addi     r31, r1, 0x5c
	cmpwi    r0, 1
	beq      lbl_80012A0C
	bge      lbl_80012A0C
	cmpwi    r0, 0
	bge      lbl_800129C4
	b        lbl_80012A0C

lbl_800129C4:
	lwz      r5, 0x138(r30)
	mr       r4, r31
	lwz      r6, 0x13c(r30)
	addi     r3, r1, 8
	bl
transform_toGlobalFromLocal__14JStudio_JStageFPA4_fRCQ37JStudio8TControl39TTransform_translation_rotation_scalingPCQ26JStage7TObjectUl
	clrlwi.  r0, r3, 0x18
	bne      lbl_800129E8
	li       r0, 0
	b        lbl_80012A00

lbl_800129E8:
	addi     r3, r1, 0x50
	addi     r4, r1, 0x44
	addi     r5, r1, 0x38
	addi     r6, r1, 8
	bl       getFromTransformation_SRxyzT__Q27JStudio4mathFP3VecP3VecP3VecPA4_Cf
	li       r0, 1

lbl_80012A00:
	clrlwi.  r0, r0, 0x18
	beq      lbl_80012A54
	addi     r31, r1, 0x38

lbl_80012A0C:
	lwz      r3, 0x128(r30)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x128(r30)
	addi     r4, r31, 0xc
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x128(r30)
	addi     r4, r31, 0x18
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl

lbl_80012A54:
	lwz      r0, 0x94(r1)
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	80012A6C
 * Size:	00017C
 */
void TAdaptor_actor::getJSG_SRT_(const JStudio::TControl*)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stw      r31, 0x8c(r1)
	mr       r31, r4
	addi     r4, r1, 0x5c
	stw      r30, 0x88(r1)
	mr       r30, r3
	lwz      r3, 0x128(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x128(r30)
	addi     r4, r1, 0x68
	lwz      r12, 0(r3)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x128(r30)
	addi     r4, r1, 0x74
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x140(r30)
	cmplwi   r0, 0
	bne      lbl_80012B2C
	lbz      r0, 0x75(r31)
	cmplwi   r0, 0
	bne      lbl_80012AF0
	addi     r0, r1, 0x5c
	b        lbl_80012B24

lbl_80012AF0:
	addi     r3, r31, 0xc8
	addi     r4, r1, 0x5c
	addi     r5, r1, 0x38
	bl       PSMTXMultVec
	lfs      f1, 0x6c(r1)
	addi     r0, r1, 0x38
	lfs      f0, 0x94(r31)
	lfs      f2, 0x68(r1)
	fadds    f1, f1, f0
	lfs      f0, 0x70(r1)
	stfs     f2, 0x44(r1)
	stfs     f1, 0x48(r1)
	stfs     f0, 0x4c(r1)

lbl_80012B24:
	mr       r31, r0
	b        lbl_80012B94

lbl_80012B2C:
	lwz      r0, 0x134(r30)
	addi     r31, r1, 0x5c
	cmpwi    r0, 1
	beq      lbl_80012B94
	bge      lbl_80012B94
	cmpwi    r0, 0
	bge      lbl_80012B4C
	b        lbl_80012B94

lbl_80012B4C:
	lwz      r5, 0x138(r30)
	mr       r4, r31
	lwz      r6, 0x13c(r30)
	addi     r3, r1, 8
	bl
transform_toLocalFromGlobal__14JStudio_JStageFPA4_fRCQ37JStudio8TControl39TTransform_translation_rotation_scalingPCQ26JStage7TObjectUl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80012B70
	li       r0, 0
	b        lbl_80012B88

lbl_80012B70:
	addi     r3, r1, 0x50
	addi     r4, r1, 0x44
	addi     r5, r1, 0x38
	addi     r6, r1, 8
	bl       getFromTransformation_SRxyzT__Q27JStudio4mathFP3VecP3VecP3VecPA4_Cf
	li       r0, 1

lbl_80012B88:
	clrlwi.  r0, r0, 0x18
	beq      lbl_80012BD0
	addi     r31, r1, 0x38

lbl_80012B94:
	lis      r4,
sauVariableValue_3_TRANSLATION_XYZ__Q27JStudio14TAdaptor_actor@ha mr       r3,
r30 addi     r4, r4,
sauVariableValue_3_TRANSLATION_XYZ__Q27JStudio14TAdaptor_actor@l mr       r5,
r31 bl       adaptor_setVariableValue_Vec__Q27JStudio8TAdaptorFPCUlRC3Vec lis
r4, sauVariableValue_3_ROTATION_XYZ__Q27JStudio14TAdaptor_actor@ha mr       r3,
r30 addi     r4, r4,
sauVariableValue_3_ROTATION_XYZ__Q27JStudio14TAdaptor_actor@l addi     r5, r31,
0xc bl       adaptor_setVariableValue_Vec__Q27JStudio8TAdaptorFPCUlRC3Vec lis
r4, sauVariableValue_3_SCALING_XYZ__Q27JStudio14TAdaptor_actor@ha mr       r3,
r30 addi     r4, r4,
sauVariableValue_3_SCALING_XYZ__Q27JStudio14TAdaptor_actor@l addi     r5, r31,
0x18 bl       adaptor_setVariableValue_Vec__Q27JStudio8TAdaptorFPCUlRC3Vec

lbl_80012BD0:
	lwz      r0, 0x94(r1)
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	80012BE8
 * Size:	0000E4
 */
void TAdaptor_actor::TVVOutput_ANIMATION_FRAME_::operator()(float, JStudio::TAdaptor*) const
{
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

/*
 * --INFO--
 * Address:	80012CCC
 * Size:	000060
 */
// TAdaptor_actor::TVVOutput_ANIMATION_FRAME_::~TVVOutput_ANIMATION_FRAME_()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  stw       r31, 0xC(r1)
// 	  mr        r31, r4
// 	  stw       r30, 0x8(r1)
// 	  mr.       r30, r3
// 	  beq-      .loc_0x44
// 	  lis       r5, 0x804A
// 	  li        r4, 0
// 	  subi      r0, r5, 0x9CC
// 	  stw       r0, 0x0(r30)
// 	  bl        -0x5C94
// 	  extsh.    r0, r31
// 	  ble-      .loc_0x44
// 	  mr        r3, r30
// 	  bl        0x113A8

// 	.loc_0x44:
// 	  lwz       r0, 0x14(r1)
// 	  mr        r3, r30
// 	  lwz       r31, 0xC(r1)
// 	  lwz       r30, 0x8(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80012D2C
 * Size:	0003D0
 */
// void __sinit_object - actor_cpp(void)
// {
// 	/*
// 	stwu     r1, -0x110(r1)
// 	mflr     r0
// 	lis      r3, lbl_8049F5B0@ha
// 	lis      r4, __vt__Q37JStudio14TVariableValue7TOutput@ha
// 	stw      r0, 0x114(r1)
// 	lis      r5,
// 	"__vt__Q214JStudio_JStage81TVariableValueOutput_object_<Q214JStudio_JStage14TAdaptor_actor,Q26JStage6TActor>"@ha
// 	lis      r12, lbl_804EFDE8@ha
// 	li       r11, 1
// 	stmw     r25, 0xf4(r1)
// 	addi     r31, r3, lbl_8049F5B0@l
// 	addi     r25, r4, __vt__Q37JStudio14TVariableValue7TOutput@l
// 	lis      r3, saoVVOutput___Q214JStudio_JStage14TAdaptor_actor@ha
// 	addi     r30, r12, lbl_804EFDE8@l
// 	addi     r12, r5,
// 	"__vt__Q214JStudio_JStage81TVariableValueOutput_object_<Q214JStudio_JStage14TAdaptor_actor,Q26JStage6TActor>"@l
// 	lis      r4,
// 	"__dt__Q214JStudio_JStage81TVariableValueOutput_object_<Q214JStudio_JStage14TAdaptor_actor,Q26JStage6TActor>Fv"@ha
// 	addi     r4, r4,
// 	"__dt__Q214JStudio_JStage81TVariableValueOutput_object_<Q214JStudio_JStage14TAdaptor_actor,Q26JStage6TActor>Fv"@l
// 	addi     r5, r30, 0
// 	stwu     r25, saoVVOutput___Q214JStudio_JStage14TAdaptor_actor@l(r3)
// 	lwz      r10, 0x24(r31)
// 	lwz      r9, 0x28(r31)
// 	lwz      r8, 0x2c(r31)
// 	lwz      r7, 0x30(r31)
// 	lwz      r6, 0x34(r31)
// 	lwz      r0, 0x38(r31)
// 	stw      r25, 0x34(r1)
// 	stw      r12, 0x34(r1)
// 	stw      r11, 0x38(r1)
// 	stw      r10, 0x3c(r1)
// 	stw      r9, 0x40(r1)
// 	stw      r8, 0x44(r1)
// 	stw      r7, 0x48(r1)
// 	stw      r6, 0x4c(r1)
// 	stw      r0, 0x50(r1)
// 	stw      r12, 0(r3)
// 	stw      r11, 4(r3)
// 	stw      r10, 8(r3)
// 	stw      r9, 0xc(r3)
// 	stw      r8, 0x10(r3)
// 	stw      r7, 0x14(r3)
// 	stw      r6, 0x18(r3)
// 	stw      r0, 0x1c(r3)
// 	bl       __register_global_object
// 	lis      r4,
// 	"__vt__Q214JStudio_JStage81TVariableValueOutput_object_<Q214JStudio_JStage14TAdaptor_actor,Q26JStage6TActor>"@ha
// 	addi     r3, r1, 0x34
// 	addi     r0, r4,
// 	"__vt__Q214JStudio_JStage81TVariableValueOutput_object_<Q214JStudio_JStage14TAdaptor_actor,Q26JStage6TActor>"@l
// 	li       r4, 0
// 	stw      r0, 0x34(r1)
// 	bl       __dt__Q37JStudio14TVariableValue7TOutputFv
// 	lis      r4, __vt__Q37JStudio14TVariableValue7TOutput@ha
// 	lis      r3,
// 	"__vt__Q214JStudio_JStage81TVariableValueOutput_object_<Q214JStudio_JStage14TAdaptor_actor,Q26JStage6TActor>"@ha
// 	addi     r11, r4, __vt__Q37JStudio14TVariableValue7TOutput@l
// 	li       r9, -1
// 	stw      r11, 0x14(r1)
// 	addi     r10, r3,
// 	"__vt__Q214JStudio_JStage81TVariableValueOutput_object_<Q214JStudio_JStage14TAdaptor_actor,Q26JStage6TActor>"@l
// 	lis      r4, __ptmf_null@ha
// 	lis      r3, saoVVOutput___Q214JStudio_JStage14TAdaptor_actor@ha
// 	stw      r10, 0x14(r1)
// 	addi     r8, r4, __ptmf_null@l
// 	lis      r4,
// 	"__dt__Q214JStudio_JStage81TVariableValueOutput_object_<Q214JStudio_JStage14TAdaptor_actor,Q26JStage6TActor>Fv"@ha
// 	lwz      r7, 0(r8)
// 	stw      r9, 0x18(r1)
// 	addi     r3, r3, saoVVOutput___Q214JStudio_JStage14TAdaptor_actor@l
// 	addi     r4, r4,
// 	"__dt__Q214JStudio_JStage81TVariableValueOutput_object_<Q214JStudio_JStage14TAdaptor_actor,Q26JStage6TActor>Fv"@l
// 	addi     r5, r30, 0xc
// 	lwz      r6, 4(r8)
// 	stw      r7, 0x1c(r1)
// 	stw      r6, 0x20(r1)
// 	lwz      r0, 8(r8)
// 	stwu     r11, 0x20(r3)
// 	stw      r0, 0x24(r1)
// 	stw      r7, 0x28(r1)
// 	stw      r6, 0x2c(r1)
// 	stw      r0, 0x30(r1)
// 	stw      r10, 0(r3)
// 	stw      r9, 4(r3)
// 	stw      r7, 8(r3)
// 	stw      r6, 0xc(r3)
// 	stw      r0, 0x10(r3)
// 	stw      r7, 0x14(r3)
// 	stw      r6, 0x18(r3)
// 	stw      r0, 0x1c(r3)
// 	bl       __register_global_object
// 	lis      r4,
// 	"__vt__Q214JStudio_JStage81TVariableValueOutput_object_<Q214JStudio_JStage14TAdaptor_actor,Q26JStage6TActor>"@ha
// 	addi     r3, r1, 0x14
// 	addi     r0, r4,
// 	"__vt__Q214JStudio_JStage81TVariableValueOutput_object_<Q214JStudio_JStage14TAdaptor_actor,Q26JStage6TActor>"@l
// 	li       r4, 0
// 	stw      r0, 0x14(r1)
// 	bl       __dt__Q37JStudio14TVariableValue7TOutputFv
// 	lis      r4, __vt__Q37JStudio14TVariableValue7TOutput@ha
// 	lwz      r25, 0x3c(r31)
// 	addi     r29, r4, __vt__Q37JStudio14TVariableValue7TOutput@l
// 	lis      r3,
// 	saoVVOutput_ANIMATION_FRAME___Q214JStudio_JStage14TAdaptor_actor@ha lwz r12,
// 	0x40(r31) li       r27, 0 stwu     r29,
// 	saoVVOutput_ANIMATION_FRAME___Q214JStudio_JStage14TAdaptor_actor@l(r3) li
// 	r26, 0x12d lwz      r11, 0x44(r31) addi     r28, r31, 0x84 lwz      r10,
// 	0x48(r31) lis      r4,
// 	__dt__Q314JStudio_JStage14TAdaptor_actor26TVVOutput_ANIMATION_FRAME_Fv@ha
// 	lwz      r9, 0x4c(r31)
// 	addi     r4, r4,
// 	__dt__Q314JStudio_JStage14TAdaptor_actor26TVVOutput_ANIMATION_FRAME_Fv@l lwz
// 	r8, 0x50(r31) addi     r5, r30, 0x18 lwz      r7, 0x54(r31) lwz      r6,
// 	0x58(r31) lwz      r0, 0x5c(r31) stw      r29, 0xb4(r1) stw      r28,
// 	0xb4(r1) stw      r27, 0xb8(r1) stw      r26, 0xbc(r1) stw      r25,
// 	0xc0(r1) stw      r12, 0xc4(r1) stw      r11, 0xc8(r1) stw      r10,
// 	0xcc(r1) stw      r9, 0xd0(r1) stw      r8, 0xd4(r1) stw      r7, 0xd8(r1)
// 	stw      r6, 0xdc(r1)
// 	stw      r0, 0xe0(r1)
// 	stw      r28, 0(r3)
// 	stw      r27, 4(r3)
// 	stw      r26, 8(r3)
// 	stw      r25, 0xc(r3)
// 	stw      r12, 0x10(r3)
// 	stw      r11, 0x14(r3)
// 	stw      r10, 0x18(r3)
// 	stw      r9, 0x1c(r3)
// 	stw      r8, 0x20(r3)
// 	stw      r7, 0x24(r3)
// 	stw      r6, 0x28(r3)
// 	stw      r0, 0x2c(r3)
// 	bl       __register_global_object
// 	mr       r0, r28
// 	addi     r3, r1, 0xb4
// 	stw      r0, 0xb4(r1)
// 	li       r4, 0
// 	bl       __dt__Q37JStudio14TVariableValue7TOutputFv
// 	lis      r4, __vt__Q37JStudio14TVariableValue7TOutput@ha
// 	lis      r3,
// 	saoVVOutput_ANIMATION_FRAME___Q214JStudio_JStage14TAdaptor_actor@ha addi
// 	r25, r4, __vt__Q37JStudio14TVariableValue7TOutput@l lwz      r29, 0x60(r31)
// 	addi     r3, r3,
// 	saoVVOutput_ANIMATION_FRAME___Q214JStudio_JStage14TAdaptor_actor@l lwz r12,
// 	0x64(r31) stwu     r25, 0x30(r3) li       r27, 2 lwz      r11, 0x68(r31) li
// 	r28, 0x131 lwz      r10, 0x6c(r31) addi     r26, r31, 0x84 lwz      r9,
// 	0x70(r31) lis      r4,
// 	__dt__Q314JStudio_JStage14TAdaptor_actor26TVVOutput_ANIMATION_FRAME_Fv@ha
// 	lwz      r8, 0x74(r31)
// 	addi     r4, r4,
// 	__dt__Q314JStudio_JStage14TAdaptor_actor26TVVOutput_ANIMATION_FRAME_Fv@l lwz
// 	r7, 0x78(r31) addi     r5, r30, 0x24 lwz      r6, 0x7c(r31) lwz      r0,
// 	0x80(r31) stw      r25, 0x84(r1) stw      r26, 0x84(r1) stw      r27,
// 	0x88(r1) stw      r28, 0x8c(r1) stw      r29, 0x90(r1) stw      r12,
// 	0x94(r1) stw      r11, 0x98(r1) stw      r10, 0x9c(r1) stw      r9, 0xa0(r1)
// 	stw      r8, 0xa4(r1)
// 	stw      r7, 0xa8(r1)
// 	stw      r6, 0xac(r1)
// 	stw      r0, 0xb0(r1)
// 	stw      r26, 0(r3)
// 	stw      r27, 4(r3)
// 	stw      r28, 8(r3)
// 	stw      r29, 0xc(r3)
// 	stw      r12, 0x10(r3)
// 	stw      r11, 0x14(r3)
// 	stw      r10, 0x18(r3)
// 	stw      r9, 0x1c(r3)
// 	stw      r8, 0x20(r3)
// 	stw      r7, 0x24(r3)
// 	stw      r6, 0x28(r3)
// 	stw      r0, 0x2c(r3)
// 	bl       __register_global_object
// 	mr       r0, r26
// 	addi     r3, r1, 0x84
// 	stw      r0, 0x84(r1)
// 	li       r4, 0
// 	bl       __dt__Q37JStudio14TVariableValue7TOutputFv
// 	lis      r3, __vt__Q37JStudio14TVariableValue7TOutput@ha
// 	li       r10, -1
// 	addi     r12, r3, __vt__Q37JStudio14TVariableValue7TOutput@l
// 	li       r9, 0
// 	stw      r12, 0x54(r1)
// 	mr       r11, r26
// 	lis      r4, __ptmf_null@ha
// 	lis      r3,
// 	saoVVOutput_ANIMATION_FRAME___Q214JStudio_JStage14TAdaptor_actor@ha stw r11,
// 	0x54(r1) addi     r8, r4, __ptmf_null@l lwz      r7, 0(r8) lis      r4,
// 	__dt__Q314JStudio_JStage14TAdaptor_actor26TVVOutput_ANIMATION_FRAME_Fv@ha
// 	stw      r10, 0x58(r1)
// 	addi     r3, r3,
// 	saoVVOutput_ANIMATION_FRAME___Q214JStudio_JStage14TAdaptor_actor@l addi r5,
// 	r30, 0x30 addi     r4, r4,
// 	__dt__Q314JStudio_JStage14TAdaptor_actor26TVVOutput_ANIMATION_FRAME_Fv@l stw
// 	r9, 0x5c(r1) lwz      r6, 4(r8) stw      r7, 8(r1) stw      r7, 0x60(r1) stw
// 	r6, 0x64(r1) lwz      r0, 8(r8) stw      r6, 0xc(r1) stwu     r12, 0x60(r3)
// 	stw      r0, 0x68(r1)
// 	stw      r0, 0x10(r1)
// 	stw      r7, 0x6c(r1)
// 	stw      r6, 0x70(r1)
// 	stw      r0, 0x74(r1)
// 	stw      r7, 0x78(r1)
// 	stw      r6, 0x7c(r1)
// 	stw      r0, 0x80(r1)
// 	stw      r11, 0(r3)
// 	stw      r10, 4(r3)
// 	stw      r9, 8(r3)
// 	stw      r7, 0xc(r3)
// 	stw      r6, 0x10(r3)
// 	stw      r0, 0x14(r3)
// 	stw      r7, 0x18(r3)
// 	stw      r6, 0x1c(r3)
// 	stw      r0, 0x20(r3)
// 	stw      r7, 0x24(r3)
// 	stw      r6, 0x28(r3)
// 	stw      r0, 0x2c(r3)
// 	bl       __register_global_object
// 	mr       r0, r26
// 	addi     r3, r1, 0x54
// 	stw      r0, 0x54(r1)
// 	li       r4, 0
// 	bl       __dt__Q37JStudio14TVariableValue7TOutputFv
// 	lmw      r25, 0xf4(r1)
// 	lwz      r0, 0x114(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x110
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	800130FC
 * Size:	000060
 */
// void TVariableValueOutput_object_<TAdaptor_actor, JStage::TActor>::~TVariableValueOutput_object_()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  stw       r31, 0xC(r1)
// 	  mr        r31, r4
// 	  stw       r30, 0x8(r1)
// 	  mr.       r30, r3
// 	  beq-      .loc_0x44
// 	  lis       r5, 0x804A
// 	  li        r4, 0
// 	  subi      r0, r5, 0x91C
// 	  stw       r0, 0x0(r30)
// 	  bl        -0x60C4
// 	  extsh.    r0, r31
// 	  ble-      .loc_0x44
// 	  mr        r3, r30
// 	  bl        0x10F78

// 	.loc_0x44:
// 	  lwz       r0, 0x14(r1)
// 	  mr        r3, r30
// 	  lwz       r31, 0xC(r1)
// 	  lwz       r30, 0x8(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8001315C
 * Size:	000030
 */
// void TVariableValueOutput_object_<TAdaptor_actor, JStage::TActor>::operator()(float,
//                                                                                                               JStudio::TAdaptor*) const
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  mr        r5, r3
// 	  stw       r0, 0x14(r1)
// 	  addi      r12, r5, 0x8
// 	  lwz       r3, 0x128(r4)
// 	  bl        0xAE9B0
// 	  nop
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

} // namespace JStudio_JStage
