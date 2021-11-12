#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_shadowMgr_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80483FF8
    lbl_80483FF8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x3234362D
        .4byte 0x53686164
        .4byte 0x6F774D67
        .4byte 0x72000000
    .global lbl_80484014
    lbl_80484014:
        .4byte 0x53686164
        .4byte 0x6F774D67
        .4byte 0x72000000
        .4byte 0x53686164
        .4byte 0x6F775061
        .4byte 0x726D7300
        .4byte 0x4C4F4420
        .4byte 0x4E656172
        .4byte 0x81460000
        .4byte 0x4C4F4420
        .4byte 0x46617281
        .4byte 0x46000000
        .4byte 0x2F757365
        .4byte 0x722F4E69
        .4byte 0x7368696D
        .4byte 0x7572612F
        .4byte 0x53686164
        .4byte 0x6F772F73
        .4byte 0x6861646F
        .4byte 0x77506172
        .4byte 0x6D732E74
        .4byte 0x78740000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804C19E8
    lbl_804C19E8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q24Game9ShadowMgr
    __vt__Q24Game9ShadowMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game9ShadowMgrFv
        .4byte getChildCount__5CNodeFv
        .4byte getSize__Q24Game9ShadowMgrFv
        .4byte getMax__Q24Game9ShadowMgrFv
        .4byte getCreature__Q24Game9ShadowMgrFi
        .4byte getFirst__Q24Game9ShadowMgrFv
        .4byte getNext__Q24Game9ShadowMgrFi
        .4byte isDone__Q24Game9ShadowMgrFi
        .4byte write__Q24Game9ShadowMgrFR6Stream
        .4byte read__Q24Game9ShadowMgrFR6Stream
    .global __vt__Q24Game10ShadowNode
    __vt__Q24Game10ShadowNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game10ShadowNodeFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q24Game15JointShadowNode
    __vt__Q24Game15JointShadowNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game15JointShadowNodeFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q24Game19JointShadowRootNode
    __vt__Q24Game19JointShadowRootNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game19JointShadowRootNodeFv
        .4byte getChildCount__5CNodeFv
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515CF8
    lbl_80515CF8:
        .skip 0x4
    .global lbl_80515CFC
    lbl_80515CFC:
        .skip 0x4
    .global shadowMgr__4Game
    shadowMgr__4Game:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A6C0
    lbl_8051A6C0:
        .float 0.1
    .global lbl_8051A6C4
    lbl_8051A6C4:
        .4byte 0x00000000
    .global lbl_8051A6C8
    lbl_8051A6C8:
        .4byte 0x3E4CCCCD
    .global lbl_8051A6CC
    lbl_8051A6CC:
        .4byte 0x3CA3D70A
    .global lbl_8051A6D0
    lbl_8051A6D0:
        .4byte 0x73686164
        .4byte 0x6F770000
*/

namespace Game {

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
JointShadowRootNode::JointShadowRootNode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8024127C
 * Size:	000060
 */
JointShadowRootNode::JointShadowRootNode(Game::Creature*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q24Game19JointShadowRootNode@ha
	li       r0, 0
	addi     r3, r3, __vt__Q24Game19JointShadowRootNode@l
	mr       r4, r30
	stw      r3, 0(r30)
	stw      r31, 0x18(r30)
	stb      r0, 0x1c(r30)
	lwz      r3, shadowMgr__4Game@sda21(r13)
	bl setJointShadowRootNode__Q24Game9ShadowMgrFPQ24Game19JointShadowRootNode
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
 * Address:	........
 * Size:	000058
 */
void JointShadowRootNode::init(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
JointShadowNode::JointShadowNode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802412DC
 * Size:	000074
 */
JointShadowNode::JointShadowNode(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q24Game15JointShadowNode@ha
	li       r0, 0
	addi     r4, r3, __vt__Q24Game15JointShadowNode@l
	li       r3, 0x30
	stw      r4, 0(r30)
	stw      r0, 0x18(r30)
	bl       __nw__FUl
	stw      r3, 0x1c(r30)
	mulli    r3, r31, 0x30
	bl       __nwa__FUl
	stw      r3, 0x20(r30)
	mr       r3, r30
	mr       r4, r31
	bl       init__Q24Game15JointShadowNodeFi
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
 * Address:	80241350
 * Size:	000074
 */
void JointShadowNode::init(int)
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
	lwz      r3, 0x1c(r3)
	bl       PSMTXIdentity
	li       r30, 0
	li       r31, 0
	b        lbl_8024139C

lbl_80241388:
	lwz      r0, 0x20(r28)
	add      r3, r0, r31
	bl       PSMTXIdentity
	addi     r31, r31, 0x30
	addi     r30, r30, 1

lbl_8024139C:
	cmpw     r30, r29
	blt      lbl_80241388
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

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
ShadowNode::ShadowNode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
ShadowNode::ShadowNode(Game::Creature*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void ShadowNode::init(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802413C4
 * Size:	000080
 */
ShadowMgr::ShadowMgr(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q24Game9ShadowMgr@ha
	li       r0, 0
	addi     r4, r3, __vt__Q24Game9ShadowMgr@l
	mr       r3, r30
	stw      r4, 0(r30)
	stw      r31, 0x18(r30)
	stw      r0, 0x1c(r30)
	bl       loadResource__Q24Game9ShadowMgrFv
	li       r5, 1
	lis      r3, lbl_80484014@ha
	stb      r5, 0x3c(r30)
	li       r4, 0
	addi     r0, r3, lbl_80484014@l
	mr       r3, r30
	stb      r5, 0x3d(r30)
	stw      r4, 0x40(r30)
	stw      r4, 0x44(r30)
	stw      r0, 0x14(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80241444
 * Size:	000210
 */
void ShadowMgr::loadResource(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_80483FF8@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r4, lbl_80483FF8@l
	stw      r30, 0x18(r1)
	mr       r30, r3
	li       r3, 0x60
	stw      r29, 0x14(r1)
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_80241508
	addi     r0, r29, 0x5c
	lis      r5, 0x6C6F646E@ha
	stw      r0, 0(r29)
	li       r3, 0
	addi     r0, r31, 0x28
	mr       r4, r29
	stw      r3, 4(r29)
	addi     r3, r29, 0xc
	addi     r5, r5, 0x6C6F646E@l
	addi     r6, r31, 0x34
	stw      r0, 8(r29)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x6C6F6466@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A6C0@sda21(r2)
	stw      r0, 0xc(r29)
	mr       r4, r29
	lfs      f1, lbl_8051A6C4@sda21(r2)
	addi     r3, r29, 0x34
	stfs     f0, 0x24(r29)
	addi     r5, r5, 0x6C6F6466@l
	lfs      f0, lbl_8051A6C8@sda21(r2)
	addi     r6, r31, 0x40
	stfs     f1, 0x2c(r29)
	stfs     f0, 0x30(r29)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lfs      f2, lbl_8051A6CC@sda21(r2)
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_8051A6C4@sda21(r2)
	stw      r0, 0x34(r29)
	lfs      f0, lbl_8051A6C8@sda21(r2)
	stfs     f2, 0x4c(r29)
	stfs     f1, 0x54(r29)
	stfs     f0, 0x58(r29)

lbl_80241508:
	stw      r29, 0x4c(r30)
	li       r3, 0x24
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_8024153C
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q24Game10ShadowNode@ha
	li       r0, 0
	addi     r3, r3, __vt__Q24Game10ShadowNode@l
	stw      r3, 0(r29)
	stw      r0, 0x18(r29)
	stw      r0, 0x1c(r29)
	stw      r0, 0x20(r29)

lbl_8024153C:
	stw      r29, 0x20(r30)
	li       r3, 0x24
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_80241570
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q24Game10ShadowNode@ha
	li       r0, 0
	addi     r3, r3, __vt__Q24Game10ShadowNode@l
	stw      r3, 0(r29)
	stw      r0, 0x18(r29)
	stw      r0, 0x1c(r29)
	stw      r0, 0x20(r29)

lbl_80241570:
	stw      r29, 0x24(r30)
	li       r3, 0x64
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80241594
	lwz      r4, 0x4c(r30)
	addi     r5, r30, 0x48
	bl       __ct__Q24Game15ShadowCylinder2FPQ24Game11ShadowParmsP6Color4
	mr       r0, r3

lbl_80241594:
	stw      r0, 0x28(r30)
	li       r3, 0x58
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_802415B8
	lwz      r4, 0x4c(r30)
	addi     r5, r30, 0x48
	bl       __ct__Q24Game15ShadowCylinder3FPQ24Game11ShadowParmsP6Color4
	mr       r0, r3

lbl_802415B8:
	stw      r0, 0x2c(r30)
	lwz      r0, 0x18(r30)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x30(r30)
	li       r3, 0x20
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_802415F8
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q24Game19JointShadowRootNode@ha
	li       r0, 0
	addi     r3, r3, __vt__Q24Game19JointShadowRootNode@l
	stw      r3, 0(r29)
	stw      r0, 0x18(r29)
	stb      r0, 0x1c(r29)

lbl_802415F8:
	stw      r29, 0x34(r30)
	li       r3, 0x20
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_80241628
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q24Game19JointShadowRootNode@ha
	li       r0, 0
	addi     r3, r3, __vt__Q24Game19JointShadowRootNode@l
	stw      r3, 0(r29)
	stw      r0, 0x18(r29)
	stb      r0, 0x1c(r29)

lbl_80241628:
	stw      r29, 0x38(r30)
	mr       r3, r30
	addi     r4, r31, 0x4c
	bl       readShadowParms__Q24Game9ShadowMgrFPc
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80241654
 * Size:	000004
 */
void ShadowMgr::init(void) { }

/*
 * --INFO--
 * Address:	80241658
 * Size:	000010
 */
void ShadowMgr::setViewport(Viewport*, int)
{
	/*
	lwz      r3, 0x30(r3)
	slwi     r0, r5, 2
	stwx     r4, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80241668
 * Size:	000048
 */
void ShadowMgr::setShadowColor(Color4*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x28(r3)
	bl       setColor__Q24Game12CylinderBaseFP6Color4
	lwz      r3, 0x2c(r30)
	mr       r4, r31
	bl       setColor__Q24Game12CylinderBaseFP6Color4
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void ShadowMgr::resetShadowColor(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void ShadowMgr::drawShadowOn(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void ShadowMgr::drawShadowOff(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802416B0
 * Size:	000260
 */
void ShadowMgr::update(void)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stmw     r24, 0x60(r1)
	mr       r27, r3
	lbz      r0, 0x3c(r3)
	cmplwi   r0, 0
	beq      lbl_802418FC
	li       r28, 0
	li       r26, 0
	b        lbl_80241708

lbl_802416DC:
	lwz      r0, 0x40(r27)
	mr       r5, r28
	lwz      r3, 0x30(r27)
	slwi     r6, r0, 2
	lwzx     r4, r3, r26
	addi     r0, r6, 0x28
	lwzx     r3, r27, r0
	lwz      r4, 0x44(r4)
	bl       setCameraParms__Q24Game12CylinderBaseFP6Camerai
	addi     r26, r26, 4
	addi     r28, r28, 1

lbl_80241708:
	lwz      r0, 0x18(r27)
	cmpw     r28, r0
	blt      lbl_802416DC
	lwz      r3, 0x20(r27)
	lwz      r29, 0x10(r3)
	b        lbl_80241838

lbl_80241720:
	lwz      r3, 0x18(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x138(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80241834
	lwz      r3, 0x18(r29)
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 0x134(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x20(r29)
	addi     r4, r1, 0x28
	addi     r5, r1, 8
	rlwinm   r0, r0, 0, 0, 3
	stw      r0, 0x20(r29)
	lwz      r0, 0x40(r27)
	slwi     r3, r0, 2
	addi     r0, r3, 0x28
	lwzx     r3, r27, r0
	bl       makeSRT__Q24Game12CylinderBaseFR7MatrixfRQ24Game11ShadowParam
	li       r31, 0
	li       r28, 0
	mr       r30, r31
	b        lbl_80241828

lbl_8024178C:
	lwz      r3, 0x30(r27)
	lwzx     r3, r3, r31
	bl       viewable__8ViewportFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8024181C
	lwz      r3, 0x30(r27)
	li       r4, 0
	lwz      r0, 0x1c(r29)
	lwzx     r3, r3, r31
	add      r26, r0, r30
	lwz      r3, 0x44(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	mr       r5, r26
	addi     r4, r1, 0x28
	bl       PSMTXConcat
	lbz      r0, 0x3d(r27)
	li       r4, 0
	cmplwi   r0, 0
	beq      lbl_80241804
	lwz      r0, 0x40(r27)
	mr       r5, r28
	addi     r4, r1, 8
	slwi     r3, r0, 2
	addi     r0, r3, 0x28
	lwzx     r3, r27, r0
	bl       getCylinderType__Q24Game12CylinderBaseFRQ24Game11ShadowParami
	mr       r4, r3

lbl_80241804:
	mr       r3, r27
	mr       r5, r28
	bl       getShadowMaskType__Q24Game9ShadowMgrFii
	lwz      r0, 0x20(r29)
	or       r0, r0, r3
	stw      r0, 0x20(r29)

lbl_8024181C:
	addi     r31, r31, 4
	addi     r30, r30, 0x30
	addi     r28, r28, 1

lbl_80241828:
	lwz      r0, 0x18(r27)
	cmpw     r28, r0
	blt      lbl_8024178C

lbl_80241834:
	lwz      r29, 4(r29)

lbl_80241838:
	cmplwi   r29, 0
	bne      lbl_80241720
	lwz      r3, 0x34(r27)
	lwz      r31, 0x10(r3)
	b        lbl_802418F4

lbl_8024184C:
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x138(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802418F0
	lwz      r25, 0x10(r31)
	b        lbl_802418E8

lbl_80241870:
	li       r29, 0
	li       r24, 0
	mr       r30, r29
	b        lbl_802418D8

lbl_80241880:
	lwz      r3, 0x30(r27)
	lwzx     r3, r3, r29
	bl       viewable__8ViewportFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802418CC
	lwz      r3, 0x30(r27)
	li       r4, 0
	lwz      r0, 0x20(r25)
	lwzx     r3, r3, r29
	add      r28, r0, r30
	lwz      r26, 0x1c(r25)
	lwz      r3, 0x44(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	mr       r4, r26
	mr       r5, r28
	bl       PSMTXConcat

lbl_802418CC:
	addi     r29, r29, 4
	addi     r30, r30, 0x30
	addi     r24, r24, 1

lbl_802418D8:
	lwz      r0, 0x18(r27)
	cmpw     r24, r0
	blt      lbl_80241880
	lwz      r25, 4(r25)

lbl_802418E8:
	cmplwi   r25, 0
	bne      lbl_80241870

lbl_802418F0:
	lwz      r31, 4(r31)

lbl_802418F4:
	cmplwi   r31, 0
	bne      lbl_8024184C

lbl_802418FC:
	lmw      r24, 0x60(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000250
 */
void ShadowMgr::draw(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80241910
 * Size:	000210
 */
void ShadowMgr::draw(Graphics&, int)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	addi     r4, r2, lbl_8051A6D0@sda21
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r30, r5
	mr       r29, r3
	li       r5, 1
	lwz      r6, sys@sda21(r13)
	lwz      r3, 0x28(r6)
	bl       _start__9SysTimersFPcb
	lbz      r0, 0x3c(r29)
	cmplwi   r0, 0
	beq      lbl_80241AFC
	lwz      r3, 0x30(r29)
	slwi     r31, r30, 2
	lwzx     r3, r3, r31
	bl       viewable__8ViewportFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80241AFC
	lwz      r3, 0x30(r29)
	addi     r4, r1, 8
	lwzx     r3, r3, r31
	lfs      f0, 0x2c(r3)
	stfs     f0, 8(r1)
	lfs      f0, 0x30(r3)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x34(r3)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x38(r3)
	stfs     f0, 0x14(r1)
	lwz      r0, 0x40(r29)
	slwi     r0, r0, 2
	add      r3, r29, r0
	lwz      r3, 0x28(r3)
	bl       "setShadowRect__Q24Game12CylinderBaseFR7Rect<f>"
	lwz      r0, 0x40(r29)
	mr       r4, r30
	slwi     r0, r0, 2
	add      r3, r29, r0
	lwz      r3, 0x28(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x40(r29)
	slwi     r0, r0, 2
	add      r3, r29, r0
	lwz      r3, 0x28(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x30(r29)
	lwzx     r3, r3, r31
	bl       setProjection__8ViewportFv
	lwz      r3, 0x30(r29)
	lwzx     r3, r3, r31
	bl       setViewport__8ViewportFv
	lwz      r3, 0x20(r29)
	mulli    r31, r30, 0x30
	lwz      r28, 0x10(r3)
	b        lbl_80241A64

lbl_80241A0C:
	mr       r3, r29
	mr       r4, r28
	mr       r5, r30
	bl       isDrawNormalShadow__Q24Game9ShadowMgrFPQ24Game10ShadowNodei
	clrlwi.  r0, r3, 0x18
	beq      lbl_80241A60
	lwz      r4, 0x20(r28)
	mr       r3, r29
	mr       r5, r30
	bl       getShadowType__Q24Game9ShadowMgrFii
	lwz      r4, 0x40(r29)
	mr       r5, r3
	lwz      r0, 0x1c(r28)
	slwi     r4, r4, 2
	addi     r4, r4, 0x28
	lwzx     r3, r29, r4
	add      r4, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_80241A60:
	lwz      r28, 4(r28)

lbl_80241A64:
	cmplwi   r28, 0
	bne      lbl_80241A0C
	lwz      r3, 0x34(r29)
	lwz      r28, 0x10(r3)
	b        lbl_80241AD4

lbl_80241A78:
	mr       r3, r29
	mr       r4, r28
	mr       r5, r30
	bl       isDrawJointShadow__Q24Game9ShadowMgrFPQ24Game19JointShadowRootNodei
	clrlwi.  r0, r3, 0x18
	beq      lbl_80241AD0
	lwz      r27, 0x10(r28)
	b        lbl_80241AC8

lbl_80241A98:
	lwz      r3, 0x40(r29)
	lwz      r0, 0x20(r27)
	slwi     r3, r3, 2
	lwz      r5, 0x18(r27)
	addi     r3, r3, 0x28
	add      r4, r0, r31
	lwzx     r3, r29, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r27, 4(r27)

lbl_80241AC8:
	cmplwi   r27, 0
	bne      lbl_80241A98

lbl_80241AD0:
	lwz      r28, 4(r28)

lbl_80241AD4:
	cmplwi   r28, 0
	bne      lbl_80241A78
	lwz      r0, 0x40(r29)
	slwi     r0, r0, 2
	add      r3, r29, r0
	lwz      r3, 0x28(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_80241AFC:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_8051A6D0@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80241B20
 * Size:	0000F0
 */
void ShadowMgr::createShadow(Game::Creature*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r31, r3
	mr       r28, r4
	lwz      r3, 0x24(r3)
	lwz      r3, 0x10(r3)
	b        lbl_80241B54

lbl_80241B44:
	lwz      r0, 0x18(r3)
	cmplw    r28, r0
	beq      lbl_80241BFC
	lwz      r3, 4(r3)

lbl_80241B54:
	cmplwi   r3, 0
	bne      lbl_80241B44
	lwz      r3, 0x20(r31)
	lwz      r3, 0x10(r3)
	b        lbl_80241B78

lbl_80241B68:
	lwz      r0, 0x18(r3)
	cmplw    r28, r0
	beq      lbl_80241BFC
	lwz      r3, 4(r3)

lbl_80241B78:
	cmplwi   r3, 0
	bne      lbl_80241B68
	li       r3, 0x24
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80241BE8
	lwz      r30, 0x18(r31)
	mr       r27, r4
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q24Game10ShadowNode@ha
	addi     r0, r3, __vt__Q24Game10ShadowNode@l
	stw      r0, 0(r27)
	mulli    r3, r30, 0x30
	stw      r28, 0x18(r27)
	bl       __nwa__FUl
	stw      r3, 0x1c(r27)
	li       r29, 0
	mr       r28, r29
	stw      r29, 0x20(r27)
	b        lbl_80241BDC

lbl_80241BC8:
	lwz      r0, 0x1c(r27)
	add      r3, r0, r28
	bl       PSMTXIdentity
	addi     r28, r28, 0x30
	addi     r29, r29, 1

lbl_80241BDC:
	cmpw     r29, r30
	blt      lbl_80241BC8
	mr       r4, r27

lbl_80241BE8:
	lwz      r3, 0x24(r31)
	bl       add__5CNodeFP5CNode
	lwz      r3, 0x1c(r31)
	addi     r0, r3, 1
	stw      r0, 0x1c(r31)

lbl_80241BFC:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80241C10
 * Size:	000058
 */
void ShadowMgr::killAll(void)
{
	/*
	lwz      r4, 0x34(r3)
	li       r0, 0
	stw      r0, 0x10(r4)
	stw      r0, 0xc(r4)
	stw      r0, 8(r4)
	stw      r0, 4(r4)
	lwz      r4, 0x38(r3)
	stw      r0, 0x10(r4)
	stw      r0, 0xc(r4)
	stw      r0, 8(r4)
	stw      r0, 4(r4)
	lwz      r4, 0x20(r3)
	stw      r0, 0x10(r4)
	stw      r0, 0xc(r4)
	stw      r0, 8(r4)
	stw      r0, 4(r4)
	lwz      r3, 0x24(r3)
	stw      r0, 0x10(r3)
	stw      r0, 0xc(r3)
	stw      r0, 8(r3)
	stw      r0, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80241C68
 * Size:	000044
 */
void ShadowMgr::killShadow(Game::Creature*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       killJointShadow__Q24Game9ShadowMgrFPQ24Game8Creature
	mr       r3, r30
	mr       r4, r31
	bl       killNormalShadow__Q24Game9ShadowMgrFPQ24Game8Creature
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80241CAC
 * Size:	000044
 */
void ShadowMgr::addShadow(Game::Creature*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       addJointShadow__Q24Game9ShadowMgrFPQ24Game8Creature
	mr       r3, r30
	mr       r4, r31
	bl       addNormalShadow__Q24Game9ShadowMgrFPQ24Game8Creature
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void ShadowMgr::addHeadShadow(Game::Creature*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80241CF0
 * Size:	000044
 */
void ShadowMgr::delShadow(Game::Creature*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       delJointShadow__Q24Game9ShadowMgrFPQ24Game8Creature
	mr       r3, r30
	mr       r4, r31
	bl       delNormalShadow__Q24Game9ShadowMgrFPQ24Game8Creature
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80241D34
 * Size:	0000AC
 */
void ShadowMgr::addNormalShadow(Game::Creature*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	stw      r28, 0x10(r1)
	lwz      r3, 0x24(r3)
	lwz      r28, 0x10(r3)
	b        lbl_80241DB8

lbl_80241D60:
	lwz      r0, 0x18(r28)
	cmplw    r4, r0
	bne      lbl_80241DB4
	mr       r3, r28
	bl       del__5CNodeFv
	lwz      r3, 0x20(r29)
	mr       r4, r28
	bl       add__5CNodeFP5CNode
	lwz      r30, 0x18(r29)
	li       r31, 0
	mr       r29, r31
	stw      r31, 0x20(r28)
	b        lbl_80241DA8

lbl_80241D94:
	lwz      r0, 0x1c(r28)
	add      r3, r0, r29
	bl       PSMTXIdentity
	addi     r29, r29, 0x30
	addi     r31, r31, 1

lbl_80241DA8:
	cmpw     r31, r30
	blt      lbl_80241D94
	b        lbl_80241DC0

lbl_80241DB4:
	lwz      r28, 4(r28)

lbl_80241DB8:
	cmplwi   r28, 0
	bne      lbl_80241D60

lbl_80241DC0:
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

/*
 * --INFO--
 * Address:	80241DE0
 * Size:	0000B8
 */
void ShadowMgr::addJointShadow(Game::Creature*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r25, r3
	mr       r26, r4
	lwz      r3, 0x38(r3)
	lwz      r28, 0x10(r3)
	b        lbl_80241E7C

lbl_80241E04:
	lwz      r0, 0x18(r28)
	lwz      r27, 4(r28)
	cmplw    r26, r0
	bne      lbl_80241E78
	mr       r3, r28
	bl       del__5CNodeFv
	lwz      r3, 0x34(r25)
	mr       r4, r28
	bl       add__5CNodeFP5CNode
	lwz      r30, 0x18(r25)
	li       r0, 0
	stb      r0, 0x1c(r28)
	lwz      r31, 0x10(r28)
	b        lbl_80241E70

lbl_80241E3C:
	lwz      r3, 0x1c(r31)
	bl       PSMTXIdentity
	li       r29, 0
	mr       r28, r29
	b        lbl_80241E64

lbl_80241E50:
	lwz      r0, 0x20(r31)
	add      r3, r0, r28
	bl       PSMTXIdentity
	addi     r28, r28, 0x30
	addi     r29, r29, 1

lbl_80241E64:
	cmpw     r29, r30
	blt      lbl_80241E50
	lwz      r31, 4(r31)

lbl_80241E70:
	cmplwi   r31, 0
	bne      lbl_80241E3C

lbl_80241E78:
	mr       r28, r27

lbl_80241E7C:
	cmplwi   r28, 0
	bne      lbl_80241E04
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
void ShadowMgr::addHeadNormalShadow(Game::Creature*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B8
 */
void ShadowMgr::addHeadJointShadow(Game::Creature*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80241E98
 * Size:	00006C
 */
void ShadowMgr::delNormalShadow(Game::Creature*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x20(r3)
	lwz      r31, 0x10(r3)
	b        lbl_80241EE4

lbl_80241EBC:
	lwz      r0, 0x18(r31)
	cmplw    r4, r0
	bne      lbl_80241EE0
	mr       r3, r31
	bl       del__5CNodeFv
	lwz      r3, 0x24(r30)
	mr       r4, r31
	bl       add__5CNodeFP5CNode
	b        lbl_80241EEC

lbl_80241EE0:
	lwz      r31, 4(r31)

lbl_80241EE4:
	cmplwi   r31, 0
	bne      lbl_80241EBC

lbl_80241EEC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80241F04
 * Size:	000080
 */
void ShadowMgr::delJointShadow(Game::Creature*)
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
	lwz      r3, 0x34(r3)
	lwz      r30, 0x10(r3)
	b        lbl_80241F5C

lbl_80241F34:
	lwz      r0, 0x18(r30)
	lwz      r31, 4(r30)
	cmplw    r29, r0
	bne      lbl_80241F58
	mr       r3, r30
	bl       del__5CNodeFv
	lwz      r3, 0x38(r28)
	mr       r4, r30
	bl       add__5CNodeFP5CNode

lbl_80241F58:
	mr       r30, r31

lbl_80241F5C:
	cmplwi   r30, 0
	bne      lbl_80241F34
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

/*
 * --INFO--
 * Address:	80241F84
 * Size:	0000AC
 */
void ShadowMgr::killNormalShadow(Game::Creature*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r3, 0x20(r3)
	lwz      r30, 0x10(r3)
	b        lbl_80241FD4

lbl_80241FB8:
	lwz      r0, 0x18(r30)
	cmplw    r29, r0
	bne      lbl_80241FD0
	stw      r31, 0x18(r30)
	mr       r3, r30
	bl       del__5CNodeFv

lbl_80241FD0:
	lwz      r30, 4(r30)

lbl_80241FD4:
	cmplwi   r30, 0
	bne      lbl_80241FB8
	lwz      r3, 0x24(r28)
	li       r31, 0
	lwz      r30, 0x10(r3)
	b        lbl_80242008

lbl_80241FEC:
	lwz      r0, 0x18(r30)
	cmplw    r29, r0
	bne      lbl_80242004
	stw      r31, 0x18(r30)
	mr       r3, r30
	bl       del__5CNodeFv

lbl_80242004:
	lwz      r30, 4(r30)

lbl_80242008:
	cmplwi   r30, 0
	bne      lbl_80241FEC
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

/*
 * --INFO--
 * Address:	80242030
 * Size:	0000AC
 */
void ShadowMgr::killJointShadow(Game::Creature*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r3, 0x34(r3)
	lwz      r3, 0x10(r3)
	b        lbl_80242080

lbl_80242064:
	lwz      r0, 0x18(r3)
	lwz      r30, 4(r3)
	cmplw    r29, r0
	bne      lbl_8024207C
	stw      r31, 0x18(r3)
	bl       del__5CNodeFv

lbl_8024207C:
	mr       r3, r30

lbl_80242080:
	cmplwi   r3, 0
	bne      lbl_80242064
	lwz      r3, 0x38(r28)
	li       r31, 0
	lwz      r3, 0x10(r3)
	b        lbl_802420B4

lbl_80242098:
	lwz      r0, 0x18(r3)
	lwz      r30, 4(r3)
	cmplw    r29, r0
	bne      lbl_802420B0
	stw      r31, 0x18(r3)
	bl       del__5CNodeFv

lbl_802420B0:
	mr       r3, r30

lbl_802420B4:
	cmplwi   r3, 0
	bne      lbl_80242098
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

/*
 * --INFO--
 * Address:	802420DC
 * Size:	000024
 */
void ShadowMgr::setJointShadowRootNode(Game::JointShadowRootNode*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x38(r3)
	bl       add__5CNodeFP5CNode
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80242100
 * Size:	0000F0
 */
void ShadowMgr::setForceVisible(Game::Creature*, bool)
{
	/*
	lwz      r6, 0x20(r3)
	lwz      r6, 0x10(r6)
	b        lbl_80242144

lbl_8024210C:
	lwz      r0, 0x18(r6)
	cmplw    r4, r0
	bne      lbl_80242140
	clrlwi.  r0, r5, 0x18
	beq      lbl_80242130
	lwz      r0, 0x20(r6)
	oris     r0, r0, 0x1000
	stw      r0, 0x20(r6)
	b        lbl_8024214C

lbl_80242130:
	lwz      r0, 0x20(r6)
	clrlwi   r0, r0, 4
	stw      r0, 0x20(r6)
	b        lbl_8024214C

lbl_80242140:
	lwz      r6, 4(r6)

lbl_80242144:
	cmplwi   r6, 0
	bne      lbl_8024210C

lbl_8024214C:
	lwz      r6, 0x24(r3)
	lwz      r6, 0x10(r6)
	b        lbl_80242190

lbl_80242158:
	lwz      r0, 0x18(r6)
	cmplw    r4, r0
	bne      lbl_8024218C
	clrlwi.  r0, r5, 0x18
	beq      lbl_8024217C
	lwz      r0, 0x20(r6)
	oris     r0, r0, 0x1000
	stw      r0, 0x20(r6)
	b        lbl_80242198

lbl_8024217C:
	lwz      r0, 0x20(r6)
	clrlwi   r0, r0, 4
	stw      r0, 0x20(r6)
	b        lbl_80242198

lbl_8024218C:
	lwz      r6, 4(r6)

lbl_80242190:
	cmplwi   r6, 0
	bne      lbl_80242158

lbl_80242198:
	lwz      r6, 0x34(r3)
	clrlwi   r5, r5, 0x18
	lwz      r6, 0x10(r6)
	b        lbl_802421BC

lbl_802421A8:
	lwz      r0, 0x18(r6)
	cmplw    r4, r0
	bne      lbl_802421B8
	stb      r5, 0x1c(r6)

lbl_802421B8:
	lwz      r6, 4(r6)

lbl_802421BC:
	cmplwi   r6, 0
	bne      lbl_802421A8
	lwz      r3, 0x38(r3)
	lwz      r3, 0x10(r3)
	b        lbl_802421E4

lbl_802421D0:
	lwz      r0, 0x18(r3)
	cmplw    r4, r0
	bne      lbl_802421E0
	stb      r5, 0x1c(r3)

lbl_802421E0:
	lwz      r3, 4(r3)

lbl_802421E4:
	cmplwi   r3, 0
	bne      lbl_802421D0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802421F0
 * Size:	000030
 */
void ShadowMgr::getSize(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x20(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80242220
 * Size:	000008
 */
void ShadowMgr::getMax(void)
{
	/*
	lwz      r3, 0x1c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80242228
 * Size:	000038
 */
void ShadowMgr::getCreature(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x20(r3)
	bl       getChildAt__5CNodeFi
	cmplwi   r3, 0
	beq      lbl_8024224C
	lwz      r3, 0x18(r3)
	b        lbl_80242250

lbl_8024224C:
	li       r3, 0

lbl_80242250:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80242260
 * Size:	000008
 */
u32 ShadowMgr::getFirst(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80242268
 * Size:	000008
 */
void ShadowMgr::getNext(int)
{
	/*
	addi     r3, r4, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	80242270
 * Size:	00004C
 */
void ShadowMgr::isDone(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	srawi    r5, r31, 0x1f
	srwi     r4, r3, 0x1f
	subfc    r0, r3, r31
	lwz      r31, 0xc(r1)
	adde     r0, r5, r4
	clrlwi   r3, r0, 0x18
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802422BC
 * Size:	00004C
 */
void ShadowMgr::getShadowMaskType(int, int)
{
	/*
	cmpwi    r5, 0
	bne      lbl_802422CC
	mr       r3, r4
	blr

lbl_802422CC:
	cmpwi    r5, 1
	bne      lbl_802422DC
	rlwinm   r3, r4, 4, 0x18, 0x1b
	blr

lbl_802422DC:
	cmpwi    r5, 2
	bne      lbl_802422EC
	rlwinm   r3, r4, 8, 0x14, 0x17
	blr

lbl_802422EC:
	addi     r3, r5, -3
	subfic   r0, r5, 3
	nor      r3, r3, r0
	rlwinm   r0, r4, 0xc, 0x10, 0x13
	srawi    r3, r3, 0x1f
	and      r3, r0, r3
	blr
	*/
}

/*
 * --INFO--
 * Address:	80242308
 * Size:	00004C
 */
void ShadowMgr::getShadowType(int, int)
{
	/*
	cmpwi    r5, 0
	bne      lbl_80242318
	clrlwi   r3, r4, 0x1c
	blr

lbl_80242318:
	cmpwi    r5, 1
	bne      lbl_80242328
	rlwinm   r3, r4, 0x1c, 0x1c, 0x1f
	blr

lbl_80242328:
	cmpwi    r5, 2
	bne      lbl_80242338
	rlwinm   r3, r4, 0x18, 0x1c, 0x1f
	blr

lbl_80242338:
	addi     r3, r5, -3
	subfic   r0, r5, 3
	nor      r3, r3, r0
	rlwinm   r0, r4, 0x14, 0x1c, 0x1f
	srawi    r3, r3, 0x1f
	and      r3, r0, r3
	blr
	*/
}

/*
 * --INFO--
 * Address:	80242354
 * Size:	000080
 */
void ShadowMgr::isDrawNormalShadow(Game::ShadowNode*, int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r3, 0x18(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x138(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802423B8
	lwz      r0, 0x20(r30)
	rlwinm.  r0, r0, 0, 0, 3
	bne      lbl_802423B0
	lwz      r3, 0x18(r30)
	li       r0, 0x10
	slw      r0, r0, r31
	lbz      r3, 0xd8(r3)
	and.     r0, r3, r0
	beq      lbl_802423B8

lbl_802423B0:
	li       r3, 1
	b        lbl_802423BC

lbl_802423B8:
	li       r3, 0

lbl_802423BC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802423D4
 * Size:	000080
 */
void ShadowMgr::isDrawJointShadow(Game::JointShadowRootNode*, int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r3, 0x18(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x138(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80242438
	lbz      r0, 0x1c(r30)
	cmplwi   r0, 0
	bne      lbl_80242430
	lwz      r3, 0x18(r30)
	li       r0, 0x10
	slw      r0, r0, r31
	lbz      r3, 0xd8(r3)
	and.     r0, r3, r0
	beq      lbl_80242438

lbl_80242430:
	li       r3, 1
	b        lbl_8024243C

lbl_80242438:
	li       r3, 0

lbl_8024243C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80242454
 * Size:	0000AC
 */
void ShadowMgr::readShadowParms(char*)
{
	/*
	stwu     r1, -0x440(r1)
	mflr     r0
	li       r5, 0
	li       r6, 0
	stw      r0, 0x444(r1)
	li       r0, 0
	li       r7, 0
	li       r8, 2
	stw      r31, 0x43c(r1)
	li       r9, 0
	li       r10, 0
	stw      r30, 0x438(r1)
	mr       r30, r3
	mr       r3, r4
	li       r4, 0
	stw      r0, 8(r1)
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r31, r3, r3
	beq      lbl_802424E8
	mr       r4, r31
	addi     r3, r1, 0x10
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x1c(r1)
	bne      lbl_802424C8
	li       r0, 0
	stw      r0, 0x424(r1)

lbl_802424C8:
	mr       r3, r30
	addi     r4, r1, 0x10
	lwz      r12, 0(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       __dla__FPv

lbl_802424E8:
	lwz      r0, 0x444(r1)
	lwz      r31, 0x43c(r1)
	lwz      r30, 0x438(r1)
	mtlr     r0
	addi     r1, r1, 0x440
	blr
	*/
}

/*
 * --INFO--
 * Address:	80242500
 * Size:	000084
 */
void ShadowMgr::write(Stream&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lbz      r0, 0x3c(r3)
	mr       r3, r31
	extsh    r4, r0
	bl       writeShort__6StreamFs
	lbz      r0, 0x3d(r30)
	mr       r3, r31
	extsh    r4, r0
	bl       writeShort__6StreamFs
	lwz      r4, 0x40(r30)
	mr       r3, r31
	bl       writeInt__6StreamFi
	lwz      r4, 0x44(r30)
	mr       r3, r31
	bl       writeInt__6StreamFi
	mr       r4, r31
	addi     r3, r30, 0x48
	bl       write__6Color4FR6Stream
	lwz      r3, 0x4c(r30)
	mr       r4, r31
	bl       write__10ParametersFR6Stream
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80242584
 * Size:	00007C
 */
void ShadowMgr::read(Stream&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	bl       readShort__6StreamFv
	stb      r3, 0x3c(r30)
	mr       r3, r31
	bl       readShort__6StreamFv
	stb      r3, 0x3d(r30)
	mr       r3, r31
	bl       readInt__6StreamFv
	stw      r3, 0x40(r30)
	mr       r3, r31
	bl       readInt__6StreamFv
	stw      r3, 0x44(r30)
	mr       r4, r31
	addi     r3, r30, 0x48
	bl       read__6Color4FR6Stream
	lwz      r3, 0x4c(r30)
	mr       r4, r31
	bl       read__10ParametersFR6Stream
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80242600
 * Size:	000060
 */
ShadowMgr::~ShadowMgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80242644
	lis      r5, __vt__Q24Game9ShadowMgr@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game9ShadowMgr@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_80242644
	mr       r3, r30
	bl       __dl__FPv

lbl_80242644:
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
 * Address:	80242660
 * Size:	000060
 */
ShadowNode::~ShadowNode(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802426A4
	lis      r5, __vt__Q24Game10ShadowNode@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game10ShadowNode@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_802426A4
	mr       r3, r30
	bl       __dl__FPv

lbl_802426A4:
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
 * Address:	802426C0
 * Size:	000060
 */
JointShadowNode::~JointShadowNode(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80242704
	lis      r5, __vt__Q24Game15JointShadowNode@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game15JointShadowNode@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_80242704
	mr       r3, r30
	bl       __dl__FPv

lbl_80242704:
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
 * Address:	80242720
 * Size:	000060
 */
JointShadowRootNode::~JointShadowRootNode(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80242764
	lis      r5, __vt__Q24Game19JointShadowRootNode@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game19JointShadowRootNode@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_80242764
	mr       r3, r30
	bl       __dl__FPv

lbl_80242764:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80242780
 * Size:	000028
 */
void __sinit_shadowMgr_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804C19E8@ha
	stw      r0, lbl_80515CF8@sda21(r13)
	stfsu    f0, lbl_804C19E8@l(r3)
	stfs     f0, lbl_80515CFC@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
