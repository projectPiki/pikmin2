#include "JSystem/JStudio/TControl.h"
#include "JSystem/JStudio/TVariableValue.h"
#include "JSystem/JStudio_JStage.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte "__sinit_object-camera_cpp"

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_8049F728
    lbl_8049F728:
        .4byte 0x00000000
        .4byte 0x00000090
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x0000008C
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000058
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000054
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000048
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000044
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000050
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x0000004C
        .4byte 0x00000000
    .global __vt__Q214JStudio_JStage15TAdaptor_camera
    __vt__Q214JStudio_JStage15TAdaptor_camera:
        .4byte 0
        .4byte 0
        .4byte __dt__Q214JStudio_JStage15TAdaptor_cameraFv
        .4byte
   adaptor_do_prepare__Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio7TObject
        .4byte
   adaptor_do_begin__Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio7TObject
        .4byte
   adaptor_do_end__Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio7TObject
        .4byte
   adaptor_do_update__Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio7TObjectUl
        .4byte
   adaptor_do_data__Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio7TObjectPCvUlPCvUl
        .4byte
   adaptor_do_PARENT__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_PARENT_NODE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_PARENT_ENABLE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_PARENT_FUNCTION__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_TARGET_PARENT__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_TARGET_PARENT_NODE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_TARGET_PARENT_ENABLE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl
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
   "__vt__Q214JStudio_JStage83TVariableValueOutput_object_<Q214JStudio_JStage15TAdaptor_camera,Q26JStage7TCamera>"
    "__vt__Q214JStudio_JStage83TVariableValueOutput_object_<Q214JStudio_JStage15TAdaptor_camera,Q26JStage7TCamera>":
        .4byte 0
        .4byte 0
        .4byte
   "__cl__Q214JStudio_JStage83TVariableValueOutput_object_<Q214JStudio_JStage15TAdaptor_camera,Q26JStage7TCamera>CFfPQ27JStudio8TAdaptor"
        .4byte
   "__dt__Q214JStudio_JStage83TVariableValueOutput_object_<Q214JStudio_JStage15TAdaptor_camera,Q26JStage7TCamera>Fv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global saoVVOutput___Q214JStudio_JStage15TAdaptor_camera
    saoVVOutput___Q214JStudio_JStage15TAdaptor_camera:
        .skip 0xA0
*/

namespace JStudio_JStage {

const TAdaptor_camera::TVVOutput TAdaptor_camera::saoVVOutput_[5] = {
	TVVOutput(4, nullptr, nullptr), TVVOutput(5, nullptr, nullptr),  TVVOutput(4, nullptr, nullptr),
	TVVOutput(5, nullptr, nullptr), TVVOutput(-1, nullptr, nullptr),
};

/**
 * @note Address: 0x80013428
 * @note Size: 0xC4
 */
JStudio_JStage::TAdaptor_camera::TAdaptor_camera(const JStage::TSystem* system, JStage::TCamera* camera)
    : mSystem(system)
    , mObject(camera)
    , _104(0)
    , _108(nullptr)
    , _10C(0xFFFFFFFF)
    , _110(0)
    , _114(nullptr)
    , _118(0xFFFFFFFF)
    , _11C(0)
{
}

/**
 * @note Address: 0x800134EC
 * @note Size: 0x78
 * __dt
 */
JStudio_JStage::TAdaptor_camera::~TAdaptor_camera() { adaptor_do_end(nullptr); }

/**
 * @note Address: 0x80013564
 * @note Size: 0x48
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_prepare(const JStudio::TObject*)
{
	for (const TVVOutput* output = saoVVOutput_; output->mValueIndex != -1; output++) {
		_04[output->mValueIndex].setOutput(output);
	}
}

/**
 * @note Address: 0x800135AC
 * @note Size: 0xE8
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_begin(const JStudio::TObject*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r30, 0x100(r3)
	lwz      r12, 0(r30)
	mr       r3, r30
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r30)
	ori      r4, r3, 1
	mr       r3, r30
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r30, 0x14(r29)
	mr       r3, r28
	mr       r4, r30
	bl
getJSG_position___Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio8TControl mr
r3, r28 mr       r4, r30 bl
getJSG_targetPosition___Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio8TControl
	lis      r4, saoVVOutput___Q214JStudio_JStage15TAdaptor_camera@ha
	lis      r3,
update_immediate___Q27JStudio14TVariableValueFPQ27JStudio14TVariableValued@ha
	addi     r0, r4, saoVVOutput___Q214JStudio_JStage15TAdaptor_camera@l
	li       r31, 0
	mr       r29, r0
	addi     r30, r3,
update_immediate___Q27JStudio14TVariableValueFPQ27JStudio14TVariableValued@l b
lbl_80013668

lbl_80013638:
	lwz      r3, 0x100(r28)
	addi     r12, r29, 0x14
	bl       __ptmf_scall
	nop
	lwz      r0, 4(r29)
	addi     r29, r29, 0x20
	lwz      r3, 4(r28)
	mulli    r0, r0, 0x14
	add      r3, r3, r0
	stw      r30, 8(r3)
	stw      r31, 4(r3)
	stfs     f1, 0xc(r3)

lbl_80013668:
	lwz      r0, 4(r29)
	cmpwi    r0, -1
	bne      lbl_80013638
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x80013694
 * @note Size: 0x54
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_end(const JStudio::TObject*) { mObject->setFlagOff(1); }

/**
 * @note Address: 0x800136E8
 * @note Size: 0x5C
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_update(const JStudio::TObject* object, u32 p2)
{
	const JStudio::TControl* control = static_cast<JStudio::TControl*>(object->pControl);
	setJSG_position_(control);
	setJSG_targetPosition_(control);
	mObject->JSGUpdate();
}

/**
 * @note Address: 0x80013744
 * @note Size: 0x34
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_data(const JStudio::TObject* object, const void* p2, u32 p3, const void* p4, u32 p5)
{
	TAdaptor_object_::adaptor_data_(mObject, p2, p3, p4, p5);
}

/**
 * @note Address: 0x80013778
 * @note Size: 0x44
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_PARENT(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_18:
		_108 = TAdaptor_object_::adaptor_findJSGObject_(mSystem, (const char*)p2);
		break;
	}
}

/**
 * @note Address: 0x800137BC
 * @note Size: 0x5C
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_PARENT_NODE(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_18:
		_10C = TAdaptor_object_::adaptor_findJSGObjectNode_(_108, (const char*)p2);
		break;
	case JStudio::data::TEOD_Unknown_19:
		_10C = *(u32*)p2;
		break;
	}
}

/**
 * @note Address: 0x80013818
 * @note Size: 0x80
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_PARENT_ENABLE(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0x2
	  stw       r0, 0x14(r1)
	  beq-      .loc_0x18
	  b         .loc_0x70

	.loc_0x18:
	  lwz       r4, 0x0(r5)
	  neg       r0, r4
	  or        r0, r0, r4
	  rlwinm    r0,r0,1,31,31
	  stb       r0, 0x110(r3)
	  lwz       r0, 0x104(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x40
	  bge-      .loc_0x70
	  b         .loc_0x70

	.loc_0x40:
	  lbz       r0, 0x110(r3)
	  li        r4, 0
	  li        r5, -0x1
	  cmplwi    r0, 0
	  beq-      .loc_0x5C
	  lwz       r4, 0x108(r3)
	  lwz       r5, 0x10C(r3)

	.loc_0x5C:
	  lwz       r3, 0x100(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x70:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/**
 * @note Address: 0x80013898
 * @note Size: 0x14
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_PARENT_FUNCTION(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	if (operation != JStudio::data::TEOD_Unknown_02) {
		return;
	}
	_104 = *(u32*)p2;
}

/**
 * @note Address: 0x800138AC
 * @note Size: 0x44
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_TARGET_PARENT(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_18:
		_114 = TAdaptor_object_::adaptor_findJSGObject_(mSystem, (const char*)p2);
		break;
	}
}

/**
 * @note Address: 0x800138F0
 * @note Size: 0x5C
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_TARGET_PARENT_NODE(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_18:
		_118 = TAdaptor_object_::adaptor_findJSGObjectNode_(_114, (const char*)p2);
		break;
	case JStudio::data::TEOD_Unknown_19:
		_118 = *(u32*)p2;
		break;
	}
}

/**
 * @note Address: 0x8001394C
 * @note Size: 0x20
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_TARGET_PARENT_ENABLE(JStudio::data::TEOperationData operation, const void* data, u32)
{
	if (operation != JStudio::data::TEOD_Unknown_02) {
		return;
	}
	_11C = ((int*)data)[0] != 0;
}

/**
 * @note Address: 0x8001396C
 * @note Size: 0xFC
 */
void JStudio_JStage::TAdaptor_camera::setJSG_position_(const JStudio::TControl*)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r5, sauVariableValue_3_POSITION_XYZ__Q27JStudio15TAdaptor_camera@ha
	stw      r0, 0x64(r1)
	addi     r5, r5,
sauVariableValue_3_POSITION_XYZ__Q27JStudio15TAdaptor_camera@l stw      r31,
0x5c(r1) mr       r31, r4 addi     r4, r1, 0x14 stw      r30, 0x58(r1) mr r30,
r3 bl       adaptor_getVariableValue_Vec__Q27JStudio8TAdaptorCFP3VecPCUl lbz r0,
0x110(r30) cmplwi   r0, 0 bne      lbl_800139D4 lbz      r0, 0x74(r31) cmplwi
r0, 0 bne      lbl_800139B8 addi     r0, r1, 0x14 b        lbl_800139CC

lbl_800139B8:
	addi     r3, r31, 0x98
	addi     r4, r1, 0x14
	addi     r5, r1, 8
	bl       PSMTXMultVec
	addi     r0, r1, 8

lbl_800139CC:
	mr       r4, r0
	b        lbl_80013A3C

lbl_800139D4:
	lwz      r0, 0x104(r30)
	addi     r4, r1, 0x14
	cmpwi    r0, 1
	beq      lbl_80013A3C
	bge      lbl_80013A3C
	cmpwi    r0, 0
	bge      lbl_800139F4
	b        lbl_80013A3C

lbl_800139F4:
	lwz      r5, 0x108(r30)
	addi     r3, r1, 0x20
	lwz      r6, 0x10c(r30)
	bl
transform_toGlobalFromLocal__14JStudio_JStageFPA4_fRCQ37JStudio8TControl19TTransform_positionPCQ26JStage7TObjectUl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80013A14
	li       r0, 0
	b        lbl_80013A30

lbl_80013A14:
	lfs      f2, 0x2c(r1)
	li       r0, 1
	lfs      f1, 0x3c(r1)
	lfs      f0, 0x4c(r1)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)

lbl_80013A30:
	clrlwi.  r0, r0, 0x18
	beq      lbl_80013A50
	addi     r4, r1, 8

lbl_80013A3C:
	lwz      r3, 0x100(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x78(r12)
	mtctr    r12
	bctrl

lbl_80013A50:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/**
 * @note Address: 0x80013A68
 * @note Size: 0x108
 */
void JStudio_JStage::TAdaptor_camera::getJSG_position_(const JStudio::TControl*)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	mr       r31, r4
	addi     r4, r1, 0x14
	stw      r30, 0x58(r1)
	mr       r30, r3
	lwz      r3, 0x100(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x74(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x110(r30)
	cmplwi   r0, 0
	bne      lbl_80013AD8
	lbz      r0, 0x75(r31)
	cmplwi   r0, 0
	bne      lbl_80013ABC
	addi     r0, r1, 0x14
	b        lbl_80013AD0

lbl_80013ABC:
	addi     r3, r31, 0xc8
	addi     r4, r1, 0x14
	addi     r5, r1, 8
	bl       PSMTXMultVec
	addi     r0, r1, 8

lbl_80013AD0:
	mr       r4, r0
	b        lbl_80013B40

lbl_80013AD8:
	lwz      r0, 0x104(r30)
	addi     r4, r1, 0x14
	cmpwi    r0, 1
	beq      lbl_80013B40
	bge      lbl_80013B40
	cmpwi    r0, 0
	bge      lbl_80013AF8
	b        lbl_80013B40

lbl_80013AF8:
	lwz      r5, 0x108(r30)
	addi     r3, r1, 0x20
	lwz      r6, 0x10c(r30)
	bl
transform_toLocalFromGlobal__14JStudio_JStageFPA4_fRCQ37JStudio8TControl19TTransform_positionPCQ26JStage7TObjectUl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80013B18
	li       r0, 0
	b        lbl_80013B34

lbl_80013B18:
	lfs      f2, 0x2c(r1)
	li       r0, 1
	lfs      f1, 0x3c(r1)
	lfs      f0, 0x4c(r1)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)

lbl_80013B34:
	clrlwi.  r0, r0, 0x18
	beq      lbl_80013B58
	addi     r4, r1, 8

lbl_80013B40:
	lis      r5, sauVariableValue_3_POSITION_XYZ__Q27JStudio15TAdaptor_camera@ha
	mr       r3, r30
	addi     r0, r5,
sauVariableValue_3_POSITION_XYZ__Q27JStudio15TAdaptor_camera@l mr       r5, r4
	mr       r4, r0
	bl       adaptor_setVariableValue_Vec__Q27JStudio8TAdaptorFPCUlRC3Vec

lbl_80013B58:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/**
 * @note Address: 0x80013B70
 * @note Size: 0xE0
 */
void JStudio_JStage::TAdaptor_camera::setJSG_targetPosition_(const JStudio::TControl*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  lis       r5, 0x8047
	  stw       r0, 0x64(r1)
	  addi      r5, r5, 0x339C
	  stw       r31, 0x5C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x14
	  stw       r30, 0x58(r1)
	  mr        r30, r3
	  bl        -0x686C
	  lbz       r0, 0x11C(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x68
	  lbz       r0, 0x74(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x4C
	  addi      r0, r1, 0x14
	  b         .loc_0x60

	.loc_0x4C:
	  addi      r3, r31, 0x98
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x8
	  bl        0xD7010
	  addi      r0, r1, 0x8

	.loc_0x60:
	  mr        r4, r0
	  b         .loc_0xB4

	.loc_0x68:
	  lwz       r5, 0x114(r30)
	  addi      r3, r1, 0x20
	  lwz       r6, 0x118(r30)
	  addi      r4, r1, 0x14
	  bl        -0x1D84
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x8C
	  li        r0, 0
	  b         .loc_0xA8

	.loc_0x8C:
	  lfs       f2, 0x2C(r1)
	  li        r0, 0x1
	  lfs       f1, 0x3C(r1)
	  lfs       f0, 0x4C(r1)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)

	.loc_0xA8:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0xC8
	  addi      r4, r1, 0x8

	.loc_0xB4:
	  lwz       r3, 0x100(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC8:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/**
 * @note Address: 0x80013C50
 * @note Size: 0xE4
 */
void JStudio_JStage::TAdaptor_camera::getJSG_targetPosition_(const JStudio::TControl*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x14
	  stw       r30, 0x58(r1)
	  mr        r30, r3
	  lwz       r3, 0x100(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x84(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x11C(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x70
	  lbz       r0, 0x75(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x54
	  addi      r0, r1, 0x14
	  b         .loc_0x68

	.loc_0x54:
	  addi      r3, r31, 0xC8
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x8
	  bl        0xD6F28
	  addi      r0, r1, 0x8

	.loc_0x68:
	  mr        r5, r0
	  b         .loc_0xBC

	.loc_0x70:
	  lwz       r5, 0x114(r30)
	  addi      r3, r1, 0x20
	  lwz       r6, 0x118(r30)
	  addi      r4, r1, 0x14
	  bl        -0x1D30
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x94
	  li        r0, 0
	  b         .loc_0xB0

	.loc_0x94:
	  lfs       f2, 0x2C(r1)
	  li        r0, 0x1
	  lfs       f1, 0x3C(r1)
	  lfs       f0, 0x4C(r1)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)

	.loc_0xB0:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0xCC
	  addi      r5, r1, 0x8

	.loc_0xBC:
	  lis       r4, 0x8047
	  mr        r3, r30
	  addi      r4, r4, 0x339C
	  bl        -0x6A5C

	.loc_0xCC:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

} // namespace JStudio_JStage
