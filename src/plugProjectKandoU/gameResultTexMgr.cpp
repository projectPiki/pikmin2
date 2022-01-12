#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804831C8
    lbl_804831C8:
        .4byte 0x72657375
        .4byte 0x6C745465
        .4byte 0x784D6772
        .4byte 0x00000000
        .4byte 0x2F757365
        .4byte 0x722F4D61
        .4byte 0x746F6261
        .4byte 0x2F726573
        .4byte 0x756C7474
        .4byte 0x65782F25
        .4byte 0x732F6172
        .4byte 0x632E737A
        .4byte 0x73000000
    .global lbl_804831FC
    lbl_804831FC:
        .4byte 0x67616D65
        .4byte 0x52657375
        .4byte 0x6C745465
        .4byte 0x784D6772
        .4byte 0x2E637070
        .4byte 0x00000000
        .4byte 0x6661696C
        .4byte 0x65642074
        .4byte 0x6F206F70
        .4byte 0x656E2072
        .4byte 0x6573756C
        .4byte 0x74746578
        .4byte 0x2F617263
        .4byte 0x2E737A73
        .4byte 0x0A25730A
        .4byte 0x00000000
        .4byte 0x74656B69
        .4byte 0x5F636172
        .4byte 0x63617373
        .4byte 0x2F746578
        .4byte 0x74757265
        .4byte 0x2E627469
        .4byte 0x00000000
        .4byte 0x61686972
        .4byte 0x752F7465
        .4byte 0x78747572
        .4byte 0x652E6274
        .4byte 0x69000000
        .4byte 0x25732F74
        .4byte 0x65787475
        .4byte 0x72652E62
        .4byte 0x74690000
    .global lbl_8048327C
    lbl_8048327C:
        .asciz "P2Assert"
        .skip 3
    .global lbl_80483288
    lbl_80483288:
        .4byte 0x696C6C65
        .4byte 0x67616C20
        .4byte 0x696E6465
        .4byte 0x78202564
        .4byte 0x0A000000
        .4byte 0x00000000
    .global lbl_804832A0
    lbl_804832A0:
        .4byte 0x00303130
        .4byte 0x315F3030
        .4byte 0x00303131
        .4byte 0x305F3030
        .4byte 0x00303230
        .4byte 0x305F3030
    .global lbl_804832B8
    lbl_804832B8:
        .4byte 0x444E6F64
        .4byte 0x65206164
        .4byte 0x64206572
        .4byte 0x7220636F
        .4byte 0x756E7420
        .4byte 0x25640A00
        .4byte 0x444E6F64
        .4byte 0x6520636F
        .4byte 0x6E636174
        .4byte 0x204C6F6F
        .4byte 0x70204572
        .4byte 0x72210A00
        .4byte 0x63616E6E
        .4byte 0x6F742072
        .4byte 0x65747269
        .4byte 0x65766520
        .4byte 0x25642D74
        .4byte 0x68206368
        .4byte 0x696C6420
        .4byte 0x28726561
        .4byte 0x6C206368
        .4byte 0x696C6420
        .4byte 0x636F756E
        .4byte 0x74203D20
        .4byte 0x25642921
        .4byte 0x0A000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game5DNode
    __vt__Q24Game5DNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game5DNodeFv
        .4byte getChildCount__Q24Game5DNodeFv
    .global __vt__Q34Game12ResultTexMgr3Mgr
    __vt__Q34Game12ResultTexMgr3Mgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game12ResultTexMgr3MgrFv
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A230
    lbl_8051A230:
        .4byte 0x6A706E00
    .global lbl_8051A234
    lbl_8051A234:
        .4byte 0x75730000
    .global lbl_8051A238
    lbl_8051A238:
        .4byte 0x70616C00
    .global lbl_8051A23C
    lbl_8051A23C:
        .4byte 0x444E6F64
        .4byte 0x65000000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	80227418
 * Size:	000050
 */
ResultTexMgr::Mgr::Mgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q34Game12ResultTexMgr3Mgr@ha
	li       r0, 0
	addi     r4, r3, __vt__Q34Game12ResultTexMgr3Mgr@l
	mr       r3, r31
	stw      r4, 0(r31)
	stw      r0, 0x18(r31)
	stw      r0, 0x1c(r31)
	stw      r0, 0x38(r31)
	stw      r0, 0x3c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80227468
 * Size:	000060
 */
ResultTexMgr::Mgr::~Mgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802274AC
	lis      r5, __vt__Q34Game12ResultTexMgr3Mgr@ha
	li       r4, 0
	addi     r0, r5, __vt__Q34Game12ResultTexMgr3Mgr@l
	stw      r0, 0(r30)
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_802274AC
	mr       r3, r30
	bl       __dl__FPv

lbl_802274AC:
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
 * Address:	802274C8
 * Size:	000340
 */
void ResultTexMgr::Mgr::create(Game::ResultTexMgr::Arg&)
{
	/*
	stwu     r1, -0x460(r1)
	mflr     r0
	stw      r0, 0x464(r1)
	stmw     r24, 0x440(r1)
	mr       r24, r4
	lis      r4, lbl_804831C8@ha
	mr       r28, r3
	addi     r31, r4, lbl_804831C8@l
	li       r29, 0
	lwz      r0, 0(r24)
	stw      r0, 0x38(r3)
	lwz      r0, 4(r24)
	stw      r0, 0x3c(r3)
	lwz      r0, 8(r24)
	stw      r0, 0x18(r3)
	lwz      r30, sCurrentHeap__7JKRHeap@sda21(r13)
	lwz      r3, 0x18(r3)
	bl       becomeCurrentHeap__7JKRHeapFv
	lbz      r0, 0xc(r24)
	extsb    r0, r0
	cmpwi    r0, -1
	bne      lbl_80227564
	lwz      r3, sys@sda21(r13)
	lwz      r0, 0xd4(r3)
	cmpwi    r0, 5
	beq      lbl_80227534
	b        lbl_8022754C

lbl_80227534:
	addi     r3, r1, 0x238
	addi     r4, r31, 0x10
	addi     r5, r2, lbl_8051A230@sda21
	crclr    6
	bl       sprintf
	b        lbl_802275CC

lbl_8022754C:
	addi     r3, r1, 0x238
	addi     r4, r31, 0x10
	addi     r5, r2, lbl_8051A234@sda21
	crclr    6
	bl       sprintf
	b        lbl_802275CC

lbl_80227564:
	cmpwi    r0, 1
	beq      lbl_802275A0
	bge      lbl_8022757C
	cmpwi    r0, 0
	bge      lbl_80227588
	b        lbl_802275CC

lbl_8022757C:
	cmpwi    r0, 3
	bge      lbl_802275CC
	b        lbl_802275B8

lbl_80227588:
	addi     r3, r1, 0x238
	addi     r4, r31, 0x10
	addi     r5, r2, lbl_8051A230@sda21
	crclr    6
	bl       sprintf
	b        lbl_802275CC

lbl_802275A0:
	addi     r3, r1, 0x238
	addi     r4, r31, 0x10
	addi     r5, r2, lbl_8051A234@sda21
	crclr    6
	bl       sprintf
	b        lbl_802275CC

lbl_802275B8:
	addi     r3, r1, 0x238
	addi     r4, r31, 0x10
	addi     r5, r2, lbl_8051A238@sda21
	crclr    6
	bl       sprintf

lbl_802275CC:
	addi     r3, r1, 8
	addi     r4, r1, 0x238
	bl       __ct__Q212LoadResource3ArgFPCc
	lwz      r0, 0x18(r28)
	addi     r4, r1, 8
	lwz      r3, gLoadResourceMgr@sda21(r13)
	stw      r0, 0x20(r1)
	bl       mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
	stw      r3, 0x1c(r28)
	lwz      r3, 0x1c(r28)
	cmplwi   r3, 0
	beq      lbl_80227604
	lwz      r29, 0x34(r3)
	b        lbl_8022761C

lbl_80227604:
	addi     r3, r31, 0x34
	addi     r5, r31, 0x4c
	addi     r6, r1, 0x238
	li       r4, 0xc6
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8022761C:
	lwz      r6, 0x38(r28)
	addi     r3, r28, 0x20
	lwz      r5, 0x3c(r28)
	li       r4, 1
	lwz      r27, 0x18(r6)
	lwz      r26, 0x18(r5)
	bl       alloc__Q44Game12ResultTexMgr3Mgr8TexturesFi
	mr       r3, r29
	addi     r4, r31, 0x74
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	or.      r25, r3, r3
	bne      lbl_80227674
	mr       r3, r29
	addi     r4, r31, 0x90
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r25, r3

lbl_80227674:
	addi     r3, r28, 0x20
	li       r4, 0
	bl       getTexture__Q44Game12ResultTexMgr3Mgr8TexturesFi
	mr       r4, r25
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	mr       r4, r27
	addi     r3, r28, 0x28
	bl       alloc__Q44Game12ResultTexMgr3Mgr8TexturesFi
	li       r25, 0
	b        lbl_80227734

lbl_802276A0:
	lwz      r3, 0x38(r28)
	mr       r4, r25
	bl       getPelletConfig__Q24Game16PelletConfigListFi
	mr       r4, r3
	addi     r3, r1, 0x138
	lwz      r5, 0x40(r4)
	addi     r4, r31, 0xa4
	crclr    6
	bl       sprintf
	mr       r3, r29
	addi     r4, r1, 0x138
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	or.      r24, r3, r3
	bne      lbl_80227710
	addi     r3, r1, 0x138
	addi     r4, r31, 0x90
	crclr    6
	bl       sprintf
	mr       r3, r29
	addi     r4, r1, 0x138
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r24, r3

lbl_80227710:
	cmplwi   r24, 0
	beq      lbl_80227730
	mr       r4, r25
	addi     r3, r28, 0x28
	bl       getTexture__Q44Game12ResultTexMgr3Mgr8TexturesFi
	mr       r4, r24
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc

lbl_80227730:
	addi     r25, r25, 1

lbl_80227734:
	cmpw     r25, r27
	blt      lbl_802276A0
	mr       r4, r26
	addi     r3, r28, 0x30
	bl       alloc__Q44Game12ResultTexMgr3Mgr8TexturesFi
	li       r24, 0
	b        lbl_802277E4

lbl_80227750:
	lwz      r3, 0x3c(r28)
	mr       r4, r24
	bl       getPelletConfig__Q24Game16PelletConfigListFi
	mr       r4, r3
	addi     r3, r1, 0x38
	lwz      r5, 0x40(r4)
	addi     r4, r31, 0xa4
	crclr    6
	bl       sprintf
	mr       r3, r29
	addi     r4, r1, 0x38
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	or.      r25, r3, r3
	bne      lbl_802277C0
	addi     r3, r1, 0x38
	addi     r4, r31, 0x90
	crclr    6
	bl       sprintf
	mr       r3, r29
	addi     r4, r1, 0x38
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r25, r3

lbl_802277C0:
	cmplwi   r25, 0
	beq      lbl_802277E0
	mr       r4, r24
	addi     r3, r28, 0x30
	bl       getTexture__Q44Game12ResultTexMgr3Mgr8TexturesFi
	mr       r4, r25
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc

lbl_802277E0:
	addi     r24, r24, 1

lbl_802277E4:
	cmpw     r24, r26
	blt      lbl_80227750
	mr       r3, r30
	bl       becomeCurrentHeap__7JKRHeapFv
	lmw      r24, 0x440(r1)
	lwz      r0, 0x464(r1)
	mtlr     r0
	addi     r1, r1, 0x460
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void ResultTexMgr::Mgr::getOtakaraNum(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void ResultTexMgr::Mgr::getItemNum(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80227808
 * Size:	0000B8
 */
void ResultTexMgr::Mgr::getOtakaraItemTexture(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0x38(r3)
	cmplwi   r0, 0
	bne      lbl_8022784C
	lis      r3, lbl_804831FC@ha
	lis      r5, lbl_8048327C@ha
	addi     r3, r3, lbl_804831FC@l
	li       r4, 0x111
	addi     r5, r5, lbl_8048327C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8022784C:
	lwz      r3, 0x38(r30)
	lwz      r0, 0x18(r3)
	cmpw     r31, r0
	blt      lbl_8022789C
	cmplwi   r3, 0
	bne      lbl_80227880
	lis      r3, lbl_804831FC@ha
	lis      r5, lbl_8048327C@ha
	addi     r3, r3, lbl_804831FC@l
	li       r4, 0x111
	addi     r5, r5, lbl_8048327C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80227880:
	lwz      r4, 0x38(r30)
	mr       r3, r30
	lwz      r0, 0x18(r4)
	subf     r31, r0, r31
	mr       r4, r31
	bl       getItemTexture__Q34Game12ResultTexMgr3MgrFi
	b        lbl_802278A8

lbl_8022789C:
	mr       r3, r30
	mr       r4, r31
	bl       getOtakaraTexture__Q34Game12ResultTexMgr3MgrFi

lbl_802278A8:
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
 * Address:	802278C0
 * Size:	000024
 */
void ResultTexMgr::Mgr::getOtakaraTexture(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 0x28
	stw      r0, 0x14(r1)
	bl       getTexture__Q44Game12ResultTexMgr3Mgr8TexturesFi
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802278E4
 * Size:	000024
 */
void ResultTexMgr::Mgr::getItemTexture(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 0x30
	stw      r0, 0x14(r1)
	bl       getTexture__Q44Game12ResultTexMgr3Mgr8TexturesFi
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80227908
 * Size:	000028
 */
void ResultTexMgr::Mgr::getCarcassTexture(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	addi     r3, r3, 0x20
	stw      r0, 0x14(r1)
	bl       getTexture__Q44Game12ResultTexMgr3Mgr8TexturesFi
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80227930
 * Size:	000064
 */
void ResultTexMgr::Mgr::Textures::alloc(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	stw      r4, 4(r3)
	slwi     r3, r4, 6
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__10JUTTextureFv@ha
	lis      r5, __dt__10JUTTextureFv@ha
	addi     r4, r4, __ct__10JUTTextureFv@l
	mr       r7, r31
	addi     r5, r5, __dt__10JUTTextureFv@l
	li       r6, 0x40
	bl       __construct_new_array
	stw      r3, 0(r30)
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
 * Address:	80227994
 * Size:	000074
 */
void ResultTexMgr::Mgr::Textures::getTexture(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bge      lbl_802279D4
	lis      r3, lbl_804831FC@ha
	lis      r4, lbl_80483288@ha
	addi     r5, r4, lbl_80483288@l
	mr       r6, r31
	addi     r3, r3, lbl_804831FC@l
	li       r4, 0x13d
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802279D4:
	lwz      r3, 4(r30)
	cmpw     r31, r3
	blt      lbl_802279E4
	addi     r31, r3, -1

lbl_802279E4:
	lwz      r3, 0(r30)
	slwi     r0, r31, 6
	add      r3, r3, r0
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
 * Address:	80227A08
 * Size:	00005C
 */
Result::TNode::TNode(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q24Game5DNodeFv
	lis      r3, __vt__Q34Game6Result5TNode@ha
	li       r0, 0
	addi     r4, r3, __vt__Q34Game6Result5TNode@l
	mr       r3, r31
	stw      r4, 0(r31)
	stw      r0, 0x2c(r31)
	stw      r0, 0x30(r31)
	stw      r0, 0x34(r31)
	stw      r0, 0x38(r31)
	stw      r0, 0x3c(r31)
	stw      r0, 0x44(r31)
	stw      r0, 0x40(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80227A64
 * Size:	00001C
 */
void Result::TNode::setTNode(unsigned long long, JUTTexture*, int, int, int)
{
	/*
	stw      r6, 0x44(r3)
	stw      r5, 0x40(r3)
	stw      r7, 0x2c(r3)
	stw      r8, 0x30(r3)
	stw      r9, 0x38(r3)
	stw      r10, 0x3c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80227A80
 * Size:	000024
 */
void Result::TNode::setTNode(unsigned long long, JUTTexture*, int, int, int, int)
{
	/*
	.loc_0x0:
	  stw       r6, 0x44(r3)
	  lwz       r0, 0x8(r1)
	  stw       r5, 0x40(r3)
	  stw       r7, 0x2C(r3)
	  stw       r8, 0x30(r3)
	  stw       r9, 0x38(r3)
	  stw       r10, 0x3C(r3)
	  stw       r0, 0x34(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80227AA4
 * Size:	000078
 */
void Result::TNode::convertByMorimun(int)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	lis      r6, 0x305F3030@ha
	lis      r5, 0x00303130@ha
	stw      r0, 0x74(r1)
	lis      r4, lbl_804832A0@ha
	addi     r6, r6, 0x305F3030@l
	addi     r5, r5, 0x00303130@l
	stw      r31, 0x6c(r1)
	mr       r31, r3
	addi     r3, r1, 0x18
	addi     r8, r1, 0x30
	lfdu     f2, lbl_804832A0@l(r4)
	addi     r9, r1, 8
	li       r7, 3
	lfd      f1, 8(r4)
	lfd      f0, 0x10(r4)
	addi     r4, r1, 0x48
	stfd     f2, 0x48(r1)
	stfd     f1, 0x50(r1)
	stfd     f0, 0x58(r1)
	bl       __ct__Q28Morimura13TOffsetMsgSetFPUxUxiPUxPi
	mr       r4, r31
	addi     r3, r1, 0x18
	bl       getMsgID__Q28Morimura13TOffsetMsgSetFi
	lwz      r0, 0x74(r1)
	lwz      r31, 0x6c(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	80227B1C
 * Size:	00005C
 */
DNode::DNode(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q24Game5DNode@ha
	li       r4, 0
	addi     r3, r3, __vt__Q24Game5DNode@l
	addi     r0, r2, lbl_8051A23C@sda21
	stw      r3, 0(r31)
	mr       r3, r31
	stw      r4, 0x24(r31)
	stw      r4, 0x20(r31)
	stw      r4, 0x1c(r31)
	stw      r4, 0x18(r31)
	stw      r0, 0x28(r31)
	stw      r0, 0x28(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void DNode::addHead(Game::DNode*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80227B78
 * Size:	0000B0
 */
void DNode::add(Game::DNode*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r4
	lwz      r5, 0x24(r3)
	cmplwi   r5, 0
	beq      lbl_80227BB8
	b        lbl_80227BA0

lbl_80227B9C:
	mr       r5, r0

lbl_80227BA0:
	lwz      r0, 0x18(r5)
	cmplwi   r0, 0
	bne      lbl_80227B9C
	stw      r27, 0x18(r5)
	stw      r5, 0x1c(r27)
	b        lbl_80227BBC

lbl_80227BB8:
	stw      r27, 0x24(r3)

lbl_80227BBC:
	stw      r3, 0x20(r27)
	lis      r5, lbl_804831FC@ha
	lis      r4, lbl_804832B8@ha
	li       r28, 0
	lwz      r29, 0x24(r3)
	addi     r30, r5, lbl_804831FC@l
	addi     r31, r4, lbl_804832B8@l
	b        lbl_80227C0C

lbl_80227BDC:
	cmplw    r29, r27
	bne      lbl_80227BE8
	addi     r28, r28, 1

lbl_80227BE8:
	cmpwi    r28, 1
	ble      lbl_80227C08
	mr       r3, r30
	mr       r5, r31
	mr       r6, r28
	li       r4, 0x1a8
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80227C08:
	lwz      r29, 0x18(r29)

lbl_80227C0C:
	cmplwi   r29, 0
	bne      lbl_80227BDC
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void DNode::calcNextCount(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void DNode::concat(Game::DNode*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80227C28
 * Size:	000068
 */
DNode::~DNode(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80227C74
	lis      r4, __vt__Q24Game5DNode@ha
	addi     r0, r4, __vt__Q24Game5DNode@l
	stw      r0, 0(r30)
	bl       del__Q24Game5DNodeFv
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_80227C74
	mr       r3, r30
	bl       __dl__FPv

lbl_80227C74:
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
 * Address:	80227C90
 * Size:	000098
 */
void DNode::del(void)
{
	/*
	lwz      r4, 0x20(r3)
	cmplwi   r4, 0
	beqlr
	lwz      r5, 0x24(r4)
	li       r6, 0
	b        lbl_80227D1C

lbl_80227CA8:
	cmplw    r5, r3
	bne      lbl_80227D14
	cmplwi   r6, 0
	beq      lbl_80227CE4
	lwz      r0, 0x18(r5)
	stw      r0, 0x18(r6)
	lwz      r4, 0x18(r5)
	cmplwi   r4, 0
	beq      lbl_80227CD0
	stw      r6, 0x1c(r4)

lbl_80227CD0:
	li       r0, 0
	stw      r0, 0x1c(r3)
	stw      r0, 0x18(r3)
	stw      r0, 0x20(r3)
	blr

lbl_80227CE4:
	lwz      r0, 0x18(r5)
	stw      r0, 0x24(r4)
	lwz      r4, 0x18(r5)
	cmplwi   r4, 0
	beq      lbl_80227D00
	li       r0, 0
	stw      r0, 0x1c(r4)

lbl_80227D00:
	li       r0, 0
	stw      r0, 0x1c(r3)
	stw      r0, 0x18(r3)
	stw      r0, 0x20(r3)
	blr

lbl_80227D14:
	mr       r6, r5
	lwz      r5, 0x18(r5)

lbl_80227D1C:
	cmplwi   r5, 0
	bne      lbl_80227CA8
	blr
	*/
}

/*
 * --INFO--
 * Address:	80227D28
 * Size:	000034
 */
void DNode::getChildCount(void)
{
	/*
	lwz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_80227D54
	mr       r4, r0
	li       r3, 0
	b        lbl_80227D48

lbl_80227D40:
	lwz      r4, 0x18(r4)
	addi     r3, r3, 1

lbl_80227D48:
	cmplwi   r4, 0
	bne      lbl_80227D40
	blr

lbl_80227D54:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void DNode::getChildAt(int)
{
	// UNUSED FUNCTION
}
} // namespace Game
