#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q26JStage7TCamera
    __vt__Q26JStage7TCamera:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte JSGFGetType__Q26JStage7TCameraCFv
        .4byte JSGGetName__Q26JStage7TObjectCFv
        .4byte JSGUpdate__Q26JStage7TObjectFv
        .4byte JSGGetFlag__Q26JStage7TObjectCFv
        .4byte JSGSetFlag__Q26JStage7TObjectFUl
        .4byte JSGGetData__Q26JStage7TObjectCFUlPvUl
        .4byte JSGSetData__Q26JStage7TObjectFUlPCvUl
        .4byte JSGGetParent__Q26JStage7TObjectCFPPQ26JStage7TObjectPUl
        .4byte JSGSetParent__Q26JStage7TObjectFPQ26JStage7TObjectUl
        .4byte JSGSetRelation__Q26JStage7TObjectFbPQ26JStage7TObjectUl
        .4byte JSGFindNodeID__Q26JStage7TObjectCFPCc
        .4byte JSGGetNodeTransformation__Q26JStage7TObjectCFUlPA4_f
        .4byte JSGGetProjectionType__Q26JStage7TCameraCFv
        .4byte
   JSGSetProjectionType__Q26JStage7TCameraFQ26JStage18TECameraProjection .4byte
   JSGGetProjectionNear__Q26JStage7TCameraCFv .4byte
   JSGSetProjectionNear__Q26JStage7TCameraFf .4byte
   JSGGetProjectionFar__Q26JStage7TCameraCFv .4byte
   JSGSetProjectionFar__Q26JStage7TCameraFf .4byte
   JSGGetProjectionFovy__Q26JStage7TCameraCFv .4byte
   JSGSetProjectionFovy__Q26JStage7TCameraFf .4byte
   JSGGetProjectionAspect__Q26JStage7TCameraCFv .4byte
   JSGSetProjectionAspect__Q26JStage7TCameraFf .4byte
   JSGGetProjectionField__Q26JStage7TCameraCFPf .4byte
   JSGSetProjectionField__Q26JStage7TCameraFPCf .4byte
   JSGGetViewType__Q26JStage7TCameraCFv .4byte
   JSGSetViewType__Q26JStage7TCameraFQ26JStage12TECameraView .4byte
   JSGGetViewPosition__Q26JStage7TCameraCFP3Vec .4byte
   JSGSetViewPosition__Q26JStage7TCameraFRC3Vec .4byte
   JSGGetViewUpVector__Q26JStage7TCameraCFP3Vec .4byte
   JSGSetViewUpVector__Q26JStage7TCameraFRC3Vec .4byte
   JSGGetViewTargetPosition__Q26JStage7TCameraCFP3Vec .4byte
   JSGSetViewTargetPosition__Q26JStage7TCameraFRC3Vec .4byte
   JSGGetViewRoll__Q26JStage7TCameraCFv .4byte
   JSGSetViewRoll__Q26JStage7TCameraFf .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516C70
    lbl_80516C70:
        .4byte 0x00000000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	800987F4
 * Size:	000060
 */
JStage::TCamera::~TCamera(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80098838
	lis      r5, __vt__Q26JStage7TCamera@ha
	li       r4, 0
	addi     r0, r5, __vt__Q26JStage7TCamera@l
	stw      r0, 0(r30)
	bl       __dt__Q26JStage7TObjectFv
	extsh.   r0, r31
	ble      lbl_80098838
	mr       r3, r30
	bl       __dl__FPv

lbl_80098838:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80098854
 * Size:	000008
 */
u32 JStage::TCamera::JSGFGetType() const { return 0x3; }

/*
 * --INFO--
 * Address:	8009885C
 * Size:	000008
 */
u32 JStage::TCamera::JSGGetProjectionType() const { return 0x1; }

/*
 * --INFO--
 * Address:	80098864
 * Size:	000004
 */
void JStage::TCamera::JSGSetProjectionType(JStage::TECameraProjection) { }

/*
 * --INFO--
 * Address:	80098868
 * Size:	000008
 */
void JStage::TCamera::JSGGetProjectionNear() const
{
	/*
	lfs      f1, lbl_80516C70@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80098870
 * Size:	000004
 */
void JStage::TCamera::JSGSetProjectionNear(float) { }

/*
 * --INFO--
 * Address:	80098874
 * Size:	00000C
 */
void JStage::TCamera::JSGGetProjectionFar() const
{
	/*
	lis      r3, __float_max@ha
	lfs      f1, __float_max@l(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80098880
 * Size:	000004
 */
void JStage::TCamera::JSGSetProjectionFar(float) { }

/*
 * --INFO--
 * Address:	80098884
 * Size:	000008
 */
void JStage::TCamera::JSGGetProjectionFovy() const
{
	/*
	lfs      f1, lbl_80516C70@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009888C
 * Size:	000004
 */
void JStage::TCamera::JSGSetProjectionFovy(float) { }

/*
 * --INFO--
 * Address:	80098890
 * Size:	000008
 */
void JStage::TCamera::JSGGetProjectionAspect() const
{
	/*
	lfs      f1, lbl_80516C70@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80098898
 * Size:	000004
 */
void JStage::TCamera::JSGSetProjectionAspect(float) { }

/*
 * --INFO--
 * Address:	8009889C
 * Size:	000004
 */
void JStage::TCamera::JSGGetProjectionField(const(float*)) { }

/*
 * --INFO--
 * Address:	800988A0
 * Size:	000004
 */
void JStage::TCamera::JSGSetProjectionField(float const*) { }

/*
 * --INFO--
 * Address:	800988A4
 * Size:	000008
 */
u32 JStage::TCamera::JSGGetViewType() const { return 0x1; }

/*
 * --INFO--
 * Address:	800988AC
 * Size:	000004
 */
void JStage::TCamera::JSGSetViewType(JStage::TECameraView) { }

/*
 * --INFO--
 * Address:	800988B0
 * Size:	000004
 */
void JStage::TCamera::JSGGetViewPosition(const(Vec*)) { }

/*
 * --INFO--
 * Address:	800988B4
 * Size:	000004
 */
void JStage::TCamera::JSGSetViewPosition(Vec const&) { }

/*
 * --INFO--
 * Address:	800988B8
 * Size:	000004
 */
void JStage::TCamera::JSGGetViewUpVector(const(Vec*)) { }

/*
 * --INFO--
 * Address:	800988BC
 * Size:	000004
 */
void JStage::TCamera::JSGSetViewUpVector(Vec const&) { }

/*
 * --INFO--
 * Address:	800988C0
 * Size:	000004
 */
void JStage::TCamera::JSGGetViewTargetPosition(const(Vec*)) { }

/*
 * --INFO--
 * Address:	800988C4
 * Size:	000004
 */
void JStage::TCamera::JSGSetViewTargetPosition(Vec const&) { }

/*
 * --INFO--
 * Address:	800988C8
 * Size:	000008
 */
void JStage::TCamera::JSGGetViewRoll() const
{
	/*
	lfs      f1, lbl_80516C70@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800988D0
 * Size:	000004
 */
void JStage::TCamera::JSGSetViewRoll(float) { }
