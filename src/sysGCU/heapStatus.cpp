#include "System.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80499EE8
    lbl_80499EE8:
        .4byte 0x68656170
        .4byte 0x53746174
        .4byte 0x75732E63
        .4byte 0x70700000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__8HeapInfo
    __vt__8HeapInfo:
        .4byte 0
        .4byte 0
        .4byte update__4NodeFv
        .4byte draw__4NodeFR8Graphics
        .4byte displayInfo__4NodeFi
        .4byte 0
        .4byte 0
        .4byte "@36@__dt__8HeapInfoFv"
        .4byte __dt__8HeapInfoFv
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520598
    lbl_80520598:
        .4byte 0x726F6F74
        .4byte 0x00000000
    .global lbl_805205A0
    lbl_805205A0:
        .4byte 0x45584954
        .4byte 0x0A000000
*/

/**
 * @note Address: 0x8042AFC4
 * @note Size: 0xB0
 */
HeapStatus::HeapStatus()
    : mHeapInfo("root")
{
	mHeapInfo._3C = 0;
	mHeapInfo._40 = -1;
	mHeapInfo._44 = 0;
	mHeapInfo._48 = this;
	_50           = 0;
	mHeapInfo._4C = this;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	addi     r31, r29, 4
	mr       r30, r29
	mr       r3, r31
	bl       initiate__10JSUPtrListFv
	mr       r4, r29
	addi     r3, r31, 0xc
	bl       __ct__10JSUPtrLinkFPv
	addi     r0, r2, lbl_80520598@sda21
	lis      r3, __vt__4Node@ha
	stw      r0, 0(r29)
	addi     r0, r3, __vt__4Node@l
	mr       r3, r30
	stw      r0, 0x20(r30)
	bl       init__4NodeFv
	addi     r3, r29, 0x24
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__8HeapInfo@ha
	li       r4, 0
	addi     r3, r3, __vt__8HeapInfo@l
	li       r0, -1
	stw      r3, 0x20(r29)
	addi     r5, r3, 0x14
	mr       r3, r29
	stw      r5, 0x24(r29)
	stw      r4, 0x3c(r29)
	stw      r0, 0x40(r29)
	stw      r4, 0x44(r29)
	stw      r29, 0x48(r29)
	stb      r4, 0x50(r29)
	stw      r29, 0x4c(r29)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x8C
 */
// Node::~Node()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x7C
 */
// CoreNode::~CoreNode()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
// void JSUTree<CoreNode>::~JSUTree()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
// void JSULink<CoreNode>::~JSULink()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
// void JSUList<CoreNode>::~JSUList()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x114
 */
void HeapStatus::start(char*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
void HeapStatus::end(char*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
void HeapStatus::setCurrentHeapInfoParent()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void HeapStatus::searchHeapInfo(char*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void HeapStatus::searchHeapInfo(HeapInfo*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x36C
 */
void HeapStatus::dump(bool)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
void HeapStatus::dumpNode()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8042B074
 * @note Size: 0x1A0
 */
HeapInfo::~HeapInfo()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	or.      r30, r3, r3
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	beq      lbl_8042B1F0
	lis      r4, __vt__8HeapInfo@ha
	addi     r4, r4, __vt__8HeapInfo@l
	stw      r4, 0x20(r30)
	addi     r0, r4, 0x14
	stw      r0, 0x24(r30)
	lwz      r29, 0x48(r30)
	lwz      r4, 0x4c(r29)
	cmplw    r4, r30
	bne      lbl_8042B110
	lwz      r3, 0x14(r4)
	cmplwi   r3, 0
	beq      lbl_8042B178
	lwz      r0, 0xc(r3)
	mr       r3, r29
	stw      r0, 0x4c(r29)
	lwz      r28, 0x4c(r29)
	mr       r4, r28
	bl       search__8HeapInfoFP8HeapInfo
	stw      r3, 0x4c(r29)
	lwz      r0, 0x4c(r29)
	cmplw    r28, r0
	beq      lbl_8042B178
	lis      r3, lbl_80499EE8@ha
	li       r4, 0x115
	addi     r3, r3, lbl_80499EE8@l
	addi     r5, r2, lbl_805205A0@sda21
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_8042B178

lbl_8042B110:
	bl       search__8HeapInfoFP8HeapInfo
	cmplwi   r3, 0
	beq      lbl_8042B178
	lwz      r3, 0x48(r30)
	stw      r30, 0x4c(r3)
	lwz      r29, 0x48(r30)
	lwz      r3, 0x4c(r29)
	lwz      r3, 0x14(r3)
	cmplwi   r3, 0
	beq      lbl_8042B178
	lwz      r0, 0xc(r3)
	mr       r3, r29
	stw      r0, 0x4c(r29)
	lwz      r28, 0x4c(r29)
	mr       r4, r28
	bl       search__8HeapInfoFP8HeapInfo
	stw      r3, 0x4c(r29)
	lwz      r0, 0x4c(r29)
	cmplw    r28, r0
	beq      lbl_8042B178
	lis      r3, lbl_80499EE8@ha
	li       r4, 0x115
	addi     r3, r3, lbl_80499EE8@l
	addi     r5, r2, lbl_805205A0@sda21
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8042B178:
	addic.   r4, r30, 4
	beq      lbl_8042B184
	addi     r4, r4, 0xc

lbl_8042B184:
	addi     r3, r30, 4
	bl       remove__10JSUPtrListFP10JSUPtrLink
	addi     r3, r30, 0x24
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	cmplwi   r30, 0
	beq      lbl_8042B1E0
	lis      r3, __vt__4Node@ha
	addi     r0, r3, __vt__4Node@l
	stw      r0, 0x20(r30)
	beq      lbl_8042B1E0
	addic.   r0, r30, 4
	beq      lbl_8042B1E0
	addic.   r0, r30, 0x10
	beq      lbl_8042B1CC
	addi     r3, r30, 0x10
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8042B1CC:
	addic.   r0, r30, 4
	beq      lbl_8042B1E0
	addi     r3, r30, 4
	li       r4, 0
	bl       __dt__10JSUPtrListFv

lbl_8042B1E0:
	extsh.   r0, r31
	ble      lbl_8042B1F0
	mr       r3, r30
	bl       __dl__FPv

lbl_8042B1F0:
	lwz      r0, 0x24(r1)
	mr       r3, r30
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
 * @note Address: N/A
 * @note Size: 0x54
 */
void HeapInfo::getTotalUsedSize()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x32C
 */
void HeapInfo::dump(int, bool)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8042B214
 * @note Size: 0x14
 */
// void JSUTree<CoreNode>::getNextChild() const
// {
// 	/*
// 	lwz      r3, 0x18(r3)
// 	cmplwi   r3, 0
// 	beqlr
// 	addi     r3, r3, -12
// 	blr
// 	*/
// }

/**
 * @note Address: 0x8042B228
 * @note Size: 0x18
 */
// void JSUTreeIterator<CoreNode>::operator!=(const JSUTree<CoreNode>*) const
// {
// 	/*
// 	lwz      r0, 0(r3)
// 	subf     r3, r0, r4
// 	subf     r0, r4, r0
// 	or       r0, r3, r0
// 	srwi     r3, r0, 0x1f
// 	blr
// 	*/
// }

/**
 * @note Address: 0x8042B240
 * @note Size: 0x8
 */
// u32 JSUTree<CoreNode>::getEndChild() const { return 0x0; }

/**
 * @note Address: 0x8042B248
 * @note Size: 0x1C
 */
// void JSUTreeIterator<CoreNode>::operator++()
// {
// 	/*
// 	lwz      r4, 0(r3)
// 	lwz      r4, 0x18(r4)
// 	cmplwi   r4, 0
// 	beq      lbl_8042B25C
// 	addi     r4, r4, -12

// lbl_8042B25C:
// 	stw      r4, 0(r3)
// 	blr
// 	*/
// }

/**
 * @note Address: 0x8042B264
 * @note Size: 0xC
 */
// void JSUTreeIterator<CoreNode>::getObject() const
// {
// 	/*
// 	lwz      r3, 0(r3)
// 	lwz      r3, 0xc(r3)
// 	blr
// 	*/
// }

/**
 * @note Address: 0x8042B270
 * @note Size: 0x8
 */
// void JSUTreeIterator<CoreNode>::JSUTreeIterator(JSUTree<CoreNode>* a1)
// {
// 	// Generated from stw r4, 0x0(r3)
// 	_00 = a1;
// }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
// void JSUTree<CoreNode>::getObject() const
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x8042B278
 * @note Size: 0x14
 */
// void JSUTree<CoreNode>::getFirstChild() const
// {
// 	/*
// 	lwz      r3, 0(r3)
// 	cmplwi   r3, 0
// 	beqlr
// 	addi     r3, r3, -12
// 	blr
// 	*/
// }

/**
 * @note Address: N/A
 * @note Size: 0x270
 */
// void HeapInfo::dumpNode(int)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x8042B28C
 * @note Size: 0x1D8
 */
void HeapInfo::search(HeapInfo* info)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	li       r0, 0
	stmw     r24, 0x10(r1)
	mr       r31, r4
	cmplw    r31, r3
	bne      lbl_8042B2B4
	mr       r0, r3
	b        lbl_8042B44C

lbl_8042B2B4:
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	beq      lbl_8042B444
	addi     r30, r30, -12
	b        lbl_8042B444

lbl_8042B2C8:
	lwz      r3, 0xc(r30)
	li       r28, 0
	cmplw    r31, r3
	bne      lbl_8042B2E0
	mr       r28, r3
	b        lbl_8042B428

lbl_8042B2E0:
	lwz      r29, 4(r3)
	cmplwi   r29, 0
	beq      lbl_8042B420
	addi     r29, r29, -12
	b        lbl_8042B420

lbl_8042B2F4:
	lwz      r3, 0xc(r29)
	li       r28, 0
	cmplw    r31, r3
	bne      lbl_8042B30C
	mr       r28, r3
	b        lbl_8042B408

lbl_8042B30C:
	addi     r3, r3, 4
	bl       getFirstLink__10JSUPtrListCFv
	cmplwi   r3, 0
	beq      lbl_8042B320
	addi     r3, r3, -12

lbl_8042B320:
	mr       r27, r3
	b        lbl_8042B400

lbl_8042B328:
	lwz      r3, 0xc(r27)
	li       r28, 0
	cmplw    r31, r3
	bne      lbl_8042B340
	mr       r28, r3
	b        lbl_8042B3E8

lbl_8042B340:
	addi     r25, r3, 4
	mr       r3, r25
	bl       "getFirstChild__18JSUTree<8CoreNode>CFv"
	mr       r26, r3
	b        lbl_8042B3D8

lbl_8042B354:
	lwz      r3, 0xc(r26)
	li       r28, 0
	cmplw    r31, r3
	bne      lbl_8042B36C
	mr       r28, r3
	b        lbl_8042B3C4

lbl_8042B36C:
	addi     r24, r3, 4
	mr       r3, r24
	bl       "getFirstChild__18JSUTree<8CoreNode>CFv"
	mr       r4, r3
	addi     r3, r1, 8
	bl       "__ct__26JSUTreeIterator<8CoreNode>FP18JSUTree<8CoreNode>"
	b        lbl_8042B3A8

lbl_8042B388:
	addi     r3, r1, 8
	bl       "getObject__26JSUTreeIterator<8CoreNode>CFv"
	mr       r4, r31
	bl       search__8HeapInfoFP8HeapInfo
	or.      r28, r3, r3
	bne      lbl_8042B3C4
	addi     r3, r1, 8
	bl       "__pp__26JSUTreeIterator<8CoreNode>Fv"

lbl_8042B3A8:
	mr       r3, r24
	bl       "getEndChild__18JSUTree<8CoreNode>CFv"
	mr       r4, r3
	addi     r3, r1, 8
	bl       "__ne__26JSUTreeIterator<8CoreNode>CFPC18JSUTree<8CoreNode>"
	clrlwi.  r0, r3, 0x18
	bne      lbl_8042B388

lbl_8042B3C4:
	cmplwi   r28, 0
	bne      lbl_8042B3E8
	mr       r3, r26
	bl       "getNextChild__18JSUTree<8CoreNode>CFv"
	mr       r26, r3

lbl_8042B3D8:
	mr       r3, r25
	bl       "getEndChild__18JSUTree<8CoreNode>CFv"
	cmplw    r26, r3
	bne      lbl_8042B354

lbl_8042B3E8:
	cmplwi   r28, 0
	bne      lbl_8042B408
	lwz      r27, 0x18(r27)
	cmplwi   r27, 0
	beq      lbl_8042B400
	addi     r27, r27, -12

lbl_8042B400:
	cmplwi   r27, 0
	bne      lbl_8042B328

lbl_8042B408:
	cmplwi   r28, 0
	bne      lbl_8042B428
	lwz      r29, 0x18(r29)
	cmplwi   r29, 0
	beq      lbl_8042B420
	addi     r29, r29, -12

lbl_8042B420:
	cmplwi   r29, 0
	bne      lbl_8042B2F4

lbl_8042B428:
	cmplwi   r28, 0
	mr       r0, r28
	bne      lbl_8042B44C
	lwz      r30, 0x18(r30)
	cmplwi   r30, 0
	beq      lbl_8042B444
	addi     r30, r30, -12

lbl_8042B444:
	cmplwi   r30, 0
	bne      lbl_8042B2C8

lbl_8042B44C:
	lmw      r24, 0x10(r1)
	mr       r3, r0
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x2A4
 */
void HeapInfo::search(char*, bool)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void HeapInfo::isInvalidUsedSize()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
void HeapInfo::isValidUsedSize()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
// void CoreNode::getName() const
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x70
 */
void HeapInfo::getUsedSize(bool)
{
	// UNUSED FUNCTION
}
