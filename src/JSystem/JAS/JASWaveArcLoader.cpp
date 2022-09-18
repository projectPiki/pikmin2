#include "JSystem/JAS/JASHeap.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global sCurrentDir__16JASWaveArcLoader
    sCurrentDir__16JASWaveArcLoader:
        .4byte 0x2F42616E
        .4byte 0x6B732F00
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__10JASWaveArc
    __vt__10JASWaveArc:
        .4byte 0
        .4byte 0
        .4byte onDispose__10JASWaveArcFv
        .4byte onLoadDone__10JASWaveArcFv
        .4byte onEraseDone__10JASWaveArcFv
    .global __vt__11JASDisposer
    __vt__11JASDisposer:
        .4byte 0
        .4byte 0
        .4byte onDispose__11JASDisposerFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global sAramHeap__16JASWaveArcLoader
    sAramHeap__16JASWaveArcLoader:
        .skip 0x8
*/

/*
 * --INFO--
 * Address:	8009BA08
 * Size:	00002C
 */
void JASWaveArcLoader::init(JASHeap*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r3, 0
	stw      r0, 0x14(r1)
	bne      lbl_8009BA20
	bl       getAramHeap__9JASKernelFv

lbl_8009BA20:
	stw      r3, sAramHeap__16JASWaveArcLoader@sda21(r13)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASWaveArcLoader::getRootHeap()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009BA34
 * Size:	000060
 */
void JASWaveArcLoader::setCurrentDir(const char*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, sCurrentDir__16JASWaveArcLoader@ha
	mr       r4, r3
	stw      r0, 0x14(r1)
	addi     r3, r5, sCurrentDir__16JASWaveArcLoader@l
	bl       strcpy
	lis      r3, sCurrentDir__16JASWaveArcLoader@ha
	addi     r3, r3, sCurrentDir__16JASWaveArcLoader@l
	bl       strlen
	lis      r4, sCurrentDir__16JASWaveArcLoader@ha
	addi     r6, r4, sCurrentDir__16JASWaveArcLoader@l
	add      r5, r6, r3
	lbz      r0, -1(r5)
	cmpwi    r0, 0x2f
	beq      lbl_8009BA84
	li       r4, 0x2f
	li       r0, 0
	stbx     r4, r6, r3
	stb      r0, 1(r5)

lbl_8009BA84:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void JASWaveArcLoader::getCurrentDir()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009BA94
 * Size:	00006C
 */
JASWaveArc::JASWaveArc()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, __vt__11JASDisposer@ha
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__11JASDisposer@l
	stw      r31, 0xc(r1)
	mr       r31, r3
	lis      r3, __vt__10JASWaveArc@ha
	stw      r0, 0(r31)
	addi     r0, r3, __vt__10JASWaveArc@l
	mr       r4, r31
	addi     r3, r31, 4
	stw      r0, 0(r31)
	bl       __ct__7JASHeapFP11JASDisposer
	li       r4, 0
	li       r0, -1
	stw      r4, 0x48(r31)
	mr       r3, r31
	stw      r4, 0x4c(r31)
	stw      r0, 0x50(r31)
	stw      r4, 0x54(r31)
	stw      r4, 0x58(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009BB00
 * Size:	000078
 */
JASHeap::~JASHeap()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8009BB5C
	beq      lbl_8009BB4C
	addic.   r0, r30, 0xc
	beq      lbl_8009BB38
	addi     r3, r30, 0xc
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8009BB38:
	cmplwi   r30, 0
	beq      lbl_8009BB4C
	mr       r3, r30
	li       r4, 0
	bl       __dt__10JSUPtrListFv

lbl_8009BB4C:
	extsh.   r0, r31
	ble      lbl_8009BB5C
	mr       r3, r30
	bl       __dl__FPv

lbl_8009BB5C:
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
 * Size:	000084
 */
void JASWaveArc::loadSetup(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void JASWaveArc::eraseSetup()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009BB78
 * Size:	0000C8
 */
void JASWaveArc::loadToAramCallback(void*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r5, 0
	li       r6, 0
	stw      r0, 0x24(r1)
	li       r7, 0
	li       r8, 0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	lwz      r3, 4(r3)
	lwz      r4, 8(r31)
	bl       loadToAram__16JKRDvdAramRipperFlUl15JKRExpandSwitchUlUlPUl
	cmplwi   r3, 0
	beq      lbl_8009BC28
	lwz      r30, 0(r31)
	lwz      r31, 0xc(r31)
	bl       OSDisableInterrupts
	lwz      r0, 0x58(r30)
	stw      r3, 8(r1)
	cmplw    r0, r31
	beq      lbl_8009BBDC
	bl       OSRestoreInterrupts
	li       r0, 0
	b        lbl_8009BC0C

lbl_8009BBDC:
	lwz      r0, 0x4c(r30)
	cmpwi    r0, 1
	beq      lbl_8009BBF4
	bl       OSRestoreInterrupts
	li       r0, 0
	b        lbl_8009BC0C

lbl_8009BBF4:
	li       r4, 1
	li       r0, 2
	stw      r4, 0x48(r30)
	stw      r0, 0x4c(r30)
	bl       OSRestoreInterrupts
	li       r0, 1

lbl_8009BC0C:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8009BC28
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_8009BC28:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void JASWaveArc::sendLoadCmd()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000128
 */
void JASWaveArc::execLoad()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009BC40
 * Size:	000128
 */
void JASWaveArc::load(JASHeap*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	lwz      r0, 0x50(r3)
	cmpwi    r0, 0
	bge      lbl_8009BC70
	li       r3, 0
	b        lbl_8009BD50

lbl_8009BC70:
	bl       OSDisableInterrupts
	lwz      r0, 0x4c(r30)
	stw      r3, 0xc(r1)
	cmpwi    r0, 0
	beq      lbl_8009BC90
	bl       OSRestoreInterrupts
	li       r3, 0
	b        lbl_8009BD50

lbl_8009BC90:
	cmplwi   r31, 0
	bne      lbl_8009BC9C
	lwz      r31, sAramHeap__16JASWaveArcLoader@sda21(r13)

lbl_8009BC9C:
	lwz      r5, 0x54(r30)
	mr       r4, r31
	addi     r3, r30, 4
	bl       alloc__7JASHeapFP7JASHeapUl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8009BCC4
	lwz      r3, 0xc(r1)
	bl       OSRestoreInterrupts
	li       r3, 0
	b        lbl_8009BD50

lbl_8009BCC4:
	bl       OSDisableInterrupts
	li       r4, 0
	li       r0, 1
	stw      r4, 0x48(r30)
	stw      r0, 0x4c(r30)
	stw      r30, 0x10(r1)
	lwz      r0, 0x50(r30)
	stw      r3, 8(r1)
	stw      r0, 0x14(r1)
	lwz      r0, 0x3c(r30)
	stw      r0, 0x18(r1)
	lwz      r3, 0x58(r30)
	addi     r0, r3, 1
	stw      r0, 0x58(r30)
	stw      r0, 0x1c(r1)
	bl       getThreadPointer__6JASDvdFv
	lis      r4, loadToAramCallback__10JASWaveArcFPv@ha
	addi     r5, r1, 0x10
	addi     r4, r4, loadToAramCallback__10JASWaveArcFPv@l
	li       r6, 0x10
	bl       sendCmdMsg__13JASTaskThreadFPFPv_vPCvUl
	cmpwi    r3, 0
	bne      lbl_8009BD38
	addi     r3, r30, 4
	bl       free__7JASHeapFv
	lwz      r3, 8(r1)
	bl       OSRestoreInterrupts
	li       r31, 0
	b        lbl_8009BD44

lbl_8009BD38:
	lwz      r3, 8(r1)
	bl       OSRestoreInterrupts
	li       r31, 1

lbl_8009BD44:
	lwz      r3, 0xc(r1)
	bl       OSRestoreInterrupts
	mr       r3, r31

lbl_8009BD50:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009BD68
 * Size:	000128
 */
void JASWaveArc::loadTail(JASHeap*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	lwz      r0, 0x50(r3)
	cmpwi    r0, 0
	bge      lbl_8009BD98
	li       r3, 0
	b        lbl_8009BE78

lbl_8009BD98:
	bl       OSDisableInterrupts
	lwz      r0, 0x4c(r30)
	stw      r3, 0xc(r1)
	cmpwi    r0, 0
	beq      lbl_8009BDB8
	bl       OSRestoreInterrupts
	li       r3, 0
	b        lbl_8009BE78

lbl_8009BDB8:
	cmplwi   r31, 0
	bne      lbl_8009BDC4
	lwz      r31, sAramHeap__16JASWaveArcLoader@sda21(r13)

lbl_8009BDC4:
	lwz      r5, 0x54(r30)
	mr       r4, r31
	addi     r3, r30, 4
	bl       allocTail__7JASHeapFP7JASHeapUl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8009BDEC
	lwz      r3, 0xc(r1)
	bl       OSRestoreInterrupts
	li       r3, 0
	b        lbl_8009BE78

lbl_8009BDEC:
	bl       OSDisableInterrupts
	li       r4, 0
	li       r0, 1
	stw      r4, 0x48(r30)
	stw      r0, 0x4c(r30)
	stw      r30, 0x10(r1)
	lwz      r0, 0x50(r30)
	stw      r3, 8(r1)
	stw      r0, 0x14(r1)
	lwz      r0, 0x3c(r30)
	stw      r0, 0x18(r1)
	lwz      r3, 0x58(r30)
	addi     r0, r3, 1
	stw      r0, 0x58(r30)
	stw      r0, 0x1c(r1)
	bl       getThreadPointer__6JASDvdFv
	lis      r4, loadToAramCallback__10JASWaveArcFPv@ha
	addi     r5, r1, 0x10
	addi     r4, r4, loadToAramCallback__10JASWaveArcFPv@l
	li       r6, 0x10
	bl       sendCmdMsg__13JASTaskThreadFPFPv_vPCvUl
	cmpwi    r3, 0
	bne      lbl_8009BE60
	addi     r3, r30, 4
	bl       free__7JASHeapFv
	lwz      r3, 8(r1)
	bl       OSRestoreInterrupts
	li       r31, 0
	b        lbl_8009BE6C

lbl_8009BE60:
	lwz      r3, 8(r1)
	bl       OSRestoreInterrupts
	li       r31, 1

lbl_8009BE6C:
	lwz      r3, 0xc(r1)
	bl       OSRestoreInterrupts
	mr       r3, r31

lbl_8009BE78:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00019C
 */
void JASWaveArc::loadBlock(JASHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00019C
 */
void JASWaveArc::loadBlockTail(JASHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009BE90
 * Size:	000024
 */
void JASWaveArc::erase()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 4
	stw      r0, 0x14(r1)
	bl       free__7JASHeapFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009BEB4
 * Size:	000094
 */
void JASWaveArc::onDispose()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	bl       OSDisableInterrupts
	lwz      r0, 0x4c(r31)
	stw      r3, 8(r1)
	cmpwi    r0, 0
	bne      lbl_8009BEE8
	bl       OSRestoreInterrupts
	li       r0, 0
	b        lbl_8009BF18

lbl_8009BEE8:
	cmpwi    r0, 1
	bne      lbl_8009BF04
	li       r0, 0
	stw      r0, 0x4c(r31)
	bl       OSRestoreInterrupts
	li       r0, 0
	b        lbl_8009BF18

lbl_8009BF04:
	li       r0, 0
	stw      r0, 0x48(r31)
	stw      r0, 0x4c(r31)
	bl       OSRestoreInterrupts
	li       r0, 1

lbl_8009BF18:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8009BF34
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8009BF34:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void JASWaveArc::setEntryNum(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009BF48
 * Size:	0000E4
 */
void JASWaveArc::setFileName(const char*)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r5, sCurrentDir__16JASWaveArcLoader@ha
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	stw      r29, 0x54(r1)
	mr       r29, r4
	stw      r28, 0x50(r1)
	mr       r28, r3
	addi     r3, r5, sCurrentDir__16JASWaveArcLoader@l
	bl       strlen
	mr       r31, r3
	mr       r3, r29
	bl       strlen
	add      r31, r31, r3
	bl       getSystemHeap__9JASKernelFv
	mr       r4, r3
	addi     r3, r31, 1
	li       r5, -4
	bl       __nwa__FUlP7JKRHeapi
	lis      r4, sCurrentDir__16JASWaveArcLoader@ha
	mr       r30, r3
	addi     r4, r4, sCurrentDir__16JASWaveArcLoader@l
	bl       strcpy
	mr       r3, r30
	mr       r4, r29
	bl       strcat
	li       r0, 0
	mr       r3, r30
	stbx     r0, r30, r31
	bl       DVDConvertPathToEntrynum
	mr       r0, r3
	mr       r3, r30
	mr       r30, r0
	bl       __dla__FPv
	cmpwi    r30, 0
	blt      lbl_8009C00C
	blt      lbl_8009C00C
	mr       r3, r30
	addi     r4, r1, 8
	bl       DVDFastOpen
	cmpwi    r3, 0
	beq      lbl_8009C00C
	lwz      r0, 0x3c(r1)
	addi     r3, r1, 8
	stw      r0, 0x54(r28)
	bl       DVDClose
	stw      r30, 0x50(r28)

lbl_8009C00C:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	lwz      r28, 0x50(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009C02C
 * Size:	000004
 */
// void JASDisposer::onDispose() { }
