#include "Dolphin/os.h"
#include "JSystem/JAS/JASGenericMemPool.h"
#include "JSystem/JAS/JASHeap.h"
#include "JSystem/JAS/JASKernel.h"
#include "JSystem/JAS/JASMutexLock.h"
#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_JASHeapCtrl_cpp

    .section .sbss # 0x80514D80 - 0x80516360
    .global JASDram
    JASDram:
        .skip 0x4
    .global sAramBase__9JASKernel
    sAramBase__9JASKernel:
        .skip 0x4
    .global sSystemHeap__9JASKernel
    sSystemHeap__9JASKernel:
        .skip 0x4
    .global sCommandHeap__9JASKernel
    sCommandHeap__9JASKernel:
        .skip 0x4
*/

/*
 * --INFO--
 * Address:	800A6A9C
 * Size:	000074
 */
JASHeap::JASHeap(JASDisposer* disposer)
    : m_tree(this)
    , m_disposer(disposer)
    , _38(nullptr)
    , _3C(0)
    , _40(0)
{
	OSInitMutex(&m_mutexObject);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
// void JSUTree<JASHeap>::~JSUTree()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
// void JSULink<JASHeap>::~JSULink()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
// void JSUList<JASHeap>::~JSUList()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void JASHeap::adjustSize()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void JASHeap::initRootHeap(void*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A6B10
 * Size:	0001D0
 */
void* JASHeap::alloc(JASHeap*, unsigned long)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r28, r3
	addi     r3, r28, 0x1c
	mr       r29, r4
	stw      r3, 8(r1)
	mr       r30, r5
	bl       OSLockMutex
	lwz      r0, 0x38(r28)
	cmplwi   r0, 0
	beq      lbl_800A6B54
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	li       r3, 0
	b        lbl_800A6CCC

lbl_800A6B54:
	lwz      r0, 0x38(r29)
	cmplwi   r0, 0
	bne      lbl_800A6B70
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	li       r3, 0
	b        lbl_800A6CCC

lbl_800A6B70:
	addi     r0, r30, 0x1f
	mr       r3, r29
	rlwinm   r30, r0, 0, 0, 0x1a
	bl       getCurOffset__7JASHeapFv
	mr       r27, r3
	mr       r3, r29
	bl       getTailOffset__7JASHeapFv
	add      r0, r27, r30
	cmplw    r0, r3
	bgt      lbl_800A6BD0
	mr       r3, r29
	bl       getTailHeap__7JASHeapFv
	lwz      r0, 0x38(r29)
	mr       r5, r3
	mr       r3, r29
	mr       r4, r28
	mr       r7, r30
	add      r6, r0, r27
	li       r8, 0
	bl       insertChild__7JASHeapFP7JASHeapP7JASHeapPvUlb
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	li       r3, 1
	b        lbl_800A6CCC

lbl_800A6BD0:
	lwz      r7, 0(r29)
	li       r10, -1
	lwz      r8, 0x38(r29)
	li       r11, 0
	cmplwi   r7, 0
	li       r5, 0
	mr       r4, r8
	beq      lbl_800A6BF4
	addi     r7, r7, -12

lbl_800A6BF4:
	add      r6, r8, r3
	b        lbl_800A6C4C

lbl_800A6BFC:
	cmplw    r4, r6
	bge      lbl_800A6C54
	lwz      r9, 0xc(r7)
	lwz      r0, 0x38(r9)
	subf     r0, r4, r0
	cmplw    r0, r30
	blt      lbl_800A6C30
	cmplw    r0, r10
	bge      lbl_800A6C30
	mr       r5, r9
	mr       r31, r4
	mr       r10, r0
	li       r11, 1

lbl_800A6C30:
	lwz      r7, 0x18(r7)
	lwz      r4, 0x38(r9)
	lwz      r0, 0x3c(r9)
	cmplwi   r7, 0
	add      r4, r4, r0
	beq      lbl_800A6C4C
	addi     r7, r7, -12

lbl_800A6C4C:
	cmplwi   r7, 0
	bne      lbl_800A6BFC

lbl_800A6C54:
	cmplw    r4, r8
	beq      lbl_800A6C90
	add      r0, r8, r3
	cmplw    r4, r0
	bge      lbl_800A6C90
	lwz      r0, 0x3c(r29)
	add      r0, r8, r0
	subf     r0, r4, r0
	cmplw    r0, r30
	blt      lbl_800A6C90
	cmplw    r0, r10
	bge      lbl_800A6C90
	mr       r31, r4
	li       r5, 0
	li       r11, 1

lbl_800A6C90:
	clrlwi.  r0, r11, 0x18
	bne      lbl_800A6CA8
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	li       r3, 0
	b        lbl_800A6CCC

lbl_800A6CA8:
	mr       r3, r29
	mr       r4, r28
	mr       r6, r31
	mr       r7, r30
	li       r8, 0
	bl       insertChild__7JASHeapFP7JASHeapP7JASHeapPvUlb
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	li       r3, 1

lbl_800A6CCC:
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A6CE0
 * Size:	0000E8
 */
void* JASHeap::allocTail(JASHeap*, unsigned long)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r27, r3
	addi     r3, r27, 0x1c
	mr       r28, r4
	stw      r3, 8(r1)
	mr       r29, r5
	bl       OSLockMutex
	lwz      r0, 0x38(r27)
	cmplwi   r0, 0
	beq      lbl_800A6D24
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	li       r3, 0
	b        lbl_800A6DB4

lbl_800A6D24:
	lwz      r0, 0x38(r28)
	cmplwi   r0, 0
	bne      lbl_800A6D40
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	li       r3, 0
	b        lbl_800A6DB4

lbl_800A6D40:
	addi     r0, r29, 0x1f
	mr       r3, r28
	rlwinm   r29, r0, 0, 0, 0x1a
	bl       getCurOffset__7JASHeapFv
	mr       r30, r3
	mr       r3, r28
	bl       getTailOffset__7JASHeapFv
	mr       r31, r3
	add      r0, r30, r29
	cmplw    r0, r31
	ble      lbl_800A6D7C
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	li       r3, 0
	b        lbl_800A6DB4

lbl_800A6D7C:
	mr       r3, r28
	bl       getTailHeap__7JASHeapFv
	lwz      r0, 0x38(r28)
	mr       r5, r3
	mr       r3, r28
	mr       r4, r27
	add      r0, r0, r31
	mr       r7, r29
	li       r8, 1
	subf     r6, r29, r0
	bl       insertChild__7JASHeapFP7JASHeapP7JASHeapPvUlb
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	li       r3, 1

lbl_800A6DB4:
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000EC
 */
void* JASHeap::allocAll(JASHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A6DC8
 * Size:	000124
 */
void JASHeap::free()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	addi     r3, r30, 0x1c
	stw      r3, 8(r1)
	bl       OSLockMutex
	lwz      r0, 0x38(r30)
	cmplwi   r0, 0
	bne      lbl_800A6E08
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	li       r3, 0
	b        lbl_800A6ED4

lbl_800A6E08:
	lwz      r3, 0(r30)
	cmplwi   r3, 0
	beq      lbl_800A6E38
	addi     r3, r3, -12
	b        lbl_800A6E38

lbl_800A6E1C:
	lwz      r31, 0x18(r3)
	cmplwi   r31, 0
	beq      lbl_800A6E2C
	addi     r31, r31, -12

lbl_800A6E2C:
	lwz      r3, 0xc(r3)
	bl       free__7JASHeapFv
	mr       r3, r31

lbl_800A6E38:
	cmplwi   r3, 0
	bne      lbl_800A6E1C
	lwz      r3, 0x10(r30)
	cmplwi   r3, 0
	beq      lbl_800A6E9C
	lwz      r4, 0xc(r3)
	lwz      r0, 0x40(r4)
	cmplw    r0, r30
	bne      lbl_800A6E88
	lwz      r5, 0x14(r30)
	cmplwi   r5, 0
	beq      lbl_800A6E6C
	addi     r5, r5, -12

lbl_800A6E6C:
	cmplwi   r5, 0
	beq      lbl_800A6E80
	lwz      r0, 0xc(r5)
	stw      r0, 0x40(r4)
	b        lbl_800A6E88

lbl_800A6E80:
	li       r0, 0
	stw      r0, 0x40(r4)

lbl_800A6E88:
	cmplwi   r30, 0
	mr       r4, r30
	beq      lbl_800A6E98
	addi     r4, r30, 0xc

lbl_800A6E98:
	bl       remove__10JSUPtrListFP10JSUPtrLink

lbl_800A6E9C:
	li       r0, 0
	stw      r0, 0x38(r30)
	stw      r0, 0x40(r30)
	stw      r0, 0x3c(r30)
	lwz      r3, 0x34(r30)
	cmplwi   r3, 0
	beq      lbl_800A6EC8
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_800A6EC8:
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	li       r3, 1

lbl_800A6ED4:
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
 * Size:	0000D4
 */
void JASHeap::freeTail()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void JASHeap::freeAll()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
int JASHeap::getTotalFreeSize() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
int JASHeap::getFreeSize() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JASHeap::dump()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00018C
 */
void JASHeap::dump(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
// void JSUTree<JASHeap>::getNextChild() const
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
// void JSUTreeIterator<JASHeap>::operator!=(const JSUTree<JASHeap>*) const
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// void JSUTree<JASHeap>::getEndChild() const
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
// void JSUTreeIterator<JASHeap>::operator++()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// void JSUTreeIterator<JASHeap>::JSUTreeIterator(JSUTree<JASHeap>*)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// void JSUTree<JASHeap>::getParent() const
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
JASMutexLock::JASMutexLock(OSMutex*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
// void JSUTreeIterator<JASHeap>::operator->() const
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
// void JSUTree<JASHeap>::getFirstChild() const
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// void JSUTree<JASHeap>::getObject() const
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	800A6EEC
 * Size:	0000E0
 */
void JASHeap::insertChild(JASHeap*, JASHeap*, void*, unsigned long, bool)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r26, 0x18(r1)
	mr       r31, r3
	addi     r3, r31, 0x1c
	mr       r26, r4
	stw      r3, 8(r1)
	mr       r27, r5
	mr       r28, r6
	mr       r29, r7
	mr       r30, r8
	bl       OSLockMutex
	clrlwi.  r0, r30, 0x18
	bne      lbl_800A6F78
	cmplwi   r27, 0
	bne      lbl_800A6F44
	lwz      r4, 4(r31)
	cmplwi   r4, 0
	beq      lbl_800A6F54
	addi     r4, r4, -12
	b        lbl_800A6F54

lbl_800A6F44:
	lwz      r4, 0x14(r27)
	cmplwi   r4, 0
	beq      lbl_800A6F54
	addi     r4, r4, -12

lbl_800A6F54:
	cmplwi   r4, 0
	lwz      r3, 0x40(r31)
	beq      lbl_800A6F68
	lwz      r0, 0xc(r4)
	b        lbl_800A6F6C

lbl_800A6F68:
	li       r0, 0

lbl_800A6F6C:
	cmplw    r3, r0
	bne      lbl_800A6F78
	stw      r26, 0x40(r31)

lbl_800A6F78:
	stw      r28, 0x38(r26)
	cmplwi   r26, 0
	li       r0, 0
	mr       r5, r26
	stw      r29, 0x3c(r26)
	stw      r0, 0x40(r26)
	beq      lbl_800A6F98
	addi     r5, r26, 0xc

lbl_800A6F98:
	cmplwi   r27, 0
	mr       r4, r27
	beq      lbl_800A6FA8
	addi     r4, r27, 0xc

lbl_800A6FA8:
	mr       r3, r31
	bl       insert__10JSUPtrListFP10JSUPtrLinkP10JSUPtrLink
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	lmw      r26, 0x18(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A6FCC
 * Size:	00008C
 */
void JASHeap::getTailHeap()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	addi     r3, r31, 0x1c
	stw      r3, 8(r1)
	bl       OSLockMutex
	lwz      r3, 0x40(r31)
	cmplwi   r3, 0
	bne      lbl_800A700C
	lwz      r3, 0(r31)
	cmplwi   r3, 0
	beq      lbl_800A701C
	addi     r3, r3, -12
	b        lbl_800A701C

lbl_800A700C:
	lwz      r3, 0x18(r3)
	cmplwi   r3, 0
	beq      lbl_800A701C
	addi     r3, r3, -12

lbl_800A701C:
	cmplwi   r3, 0
	bne      lbl_800A7034
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	li       r3, 0
	b        lbl_800A7044

lbl_800A7034:
	lwz      r31, 0xc(r3)
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	mr       r3, r31

lbl_800A7044:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A7058
 * Size:	0000C4
 */
int JASHeap::getTailOffset()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	addi     r3, r30, 0x1c
	stw      r3, 0xc(r1)
	bl       OSLockMutex
	addi     r3, r30, 0x1c
	stw      r3, 8(r1)
	bl       OSLockMutex
	lwz      r3, 0x40(r30)
	cmplwi   r3, 0
	bne      lbl_800A70A8
	lwz      r3, 0(r30)
	cmplwi   r3, 0
	beq      lbl_800A70B8
	addi     r3, r3, -12
	b        lbl_800A70B8

lbl_800A70A8:
	lwz      r3, 0x18(r3)
	cmplwi   r3, 0
	beq      lbl_800A70B8
	addi     r3, r3, -12

lbl_800A70B8:
	cmplwi   r3, 0
	bne      lbl_800A70D0
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	li       r31, 0
	b        lbl_800A70DC

lbl_800A70D0:
	lwz      r31, 0xc(r3)
	lwz      r3, 8(r1)
	bl       OSUnlockMutex

lbl_800A70DC:
	cmplwi   r31, 0
	bne      lbl_800A70EC
	lwz      r31, 0x3c(r30)
	b        lbl_800A70F8

lbl_800A70EC:
	lwz      r3, 0x38(r30)
	lwz      r0, 0x38(r31)
	subf     r31, r3, r0

lbl_800A70F8:
	lwz      r3, 0xc(r1)
	bl       OSUnlockMutex
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A711C
 * Size:	000068
 */
int JASHeap::getCurOffset()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	addi     r3, r31, 0x1c
	stw      r3, 8(r1)
	bl       OSLockMutex
	lwz      r4, 0x40(r31)
	cmplwi   r4, 0
	bne      lbl_800A7150
	li       r31, 0
	b        lbl_800A7164

lbl_800A7150:
	lwz      r3, 0x38(r4)
	lwz      r0, 0x3c(r4)
	lwz      r4, 0x38(r31)
	add      r0, r3, r0
	subf     r31, r4, r0

lbl_800A7164:
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
// JASSolidHeap::JASSolidHeap()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
// JASSolidHeap::JASSolidHeap(unsigned char*, unsigned long)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JASSolidHeap::init(unsigned char*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void* JASSolidHeap::alloc(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JASSolidHeap::freeLast()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void JASSolidHeap::freeAll()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void JASSolidHeap::getRemain()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A7184
 * Size:	000014
 */
JASGenericMemPool::JASGenericMemPool()
{
	/*
	li       r0, 0
	stw      r0, 0(r3)
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
JASGenericMemPool::~JASGenericMemPool()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A7198
 * Size:	000094
 */
void JASGenericMemPool::newMemPool(unsigned long, int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r5
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_800A71F8

lbl_800A71C8:
	lwz      r4, JASDram@sda21(r13)
	mr       r3, r31
	li       r5, 0
	bl       __nwa__FUlP7JKRHeapi
	lwz      r0, 0(r28)
	stw      r0, 0(r3)
	stw      r3, 0(r28)
	lwz      r0, 4(r28)
	cmplwi   r0, 0
	bne      lbl_800A71F4
	stw      r3, 4(r28)

lbl_800A71F4:
	addi     r30, r30, 1

lbl_800A71F8:
	cmpw     r30, r29
	blt      lbl_800A71C8
	lwz      r0, 8(r28)
	add      r0, r0, r29
	stw      r0, 8(r28)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A722C
 * Size:	000044
 */
void* JASGenericMemPool::alloc(unsigned long)
{
	/*
	lwz      r5, 0(r3)
	cmplwi   r5, 0
	bne      lbl_800A7240
	li       r3, 0
	blr

lbl_800A7240:
	lwz      r0, 0(r5)
	stw      r0, 0(r3)
	lwz      r4, 8(r3)
	addi     r0, r4, -1
	stw      r0, 8(r3)
	lwz      r0, 0(r3)
	cmplwi   r0, 0
	bne      lbl_800A7268
	li       r0, 0
	stw      r0, 4(r3)

lbl_800A7268:
	mr       r3, r5
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A7270
 * Size:	000034
 */
void JASGenericMemPool::free(void*, unsigned long)
{
	/*
	li       r0, 0
	stw      r0, 0(r4)
	lwz      r5, 4(r3)
	cmplwi   r5, 0
	beq      lbl_800A728C
	stw      r4, 0(r5)
	b        lbl_800A7290

lbl_800A728C:
	stw      r4, 0(r3)

lbl_800A7290:
	stw      r4, 4(r3)
	lwz      r4, 8(r3)
	addi     r0, r4, 1
	stw      r0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A72A4
 * Size:	000118
 */
void JASKernel::setupRootHeap(JKRSolidHeap*, unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r3, r4
	mr       r4, r29
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	stw      r3, sSystemHeap__9JASKernel@sda21(r13)
	mr       r4, r29
	li       r3, 0x1c
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r31, r3, r3
	beq      lbl_800A7398
	li       r0, 0
	addi     r3, r31, 4
	stw      r0, 0(r31)
	bl       OSInitMutex
	lwz      r30, 0(r31)
	cmplwi   r30, 0
	beq      lbl_800A7320
	lwz      r0, 8(r30)
	cmplwi   r0, 0
	bne      lbl_800A7320
	li       r0, 0
	stw      r0, 4(r30)
	b        lbl_800A7398

lbl_800A7320:
	bl       getSystemHeap__9JASKernelFv
	mr       r4, r3
	li       r3, 0x40c
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	cmplwi   r3, 0
	beq      lbl_800A734C
	stw      r30, 0(r3)
	li       r0, 0
	stw      r0, 4(r3)
	stw      r0, 8(r3)

lbl_800A734C:
	stw      r3, 0(r31)
	lwz      r0, 0(r31)
	cmplwi   r0, 0
	bne      lbl_800A7398
	lwz      r4, sSystemHeap__7JKRHeap@sda21(r13)
	li       r3, 0x40c
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	cmplwi   r3, 0
	beq      lbl_800A7384
	stw      r30, 0(r3)
	li       r0, 0
	stw      r0, 4(r3)
	stw      r0, 8(r3)

lbl_800A7384:
	stw      r3, 0(r31)
	lwz      r0, 0(r31)
	cmplwi   r0, 0
	bne      lbl_800A7398
	stw      r30, 0(r31)

lbl_800A7398:
	stw      r31, sCommandHeap__9JASKernel@sda21(r13)
	stw      r29, JASDram@sda21(r13)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x24(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASKernel::getRootHeap()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A73BC
 * Size:	000008
 */
JKRExpHeap* JASKernel::getSystemHeap()
{
	return sSystemHeap;
	/*
	lwz      r3, sSystemHeap__9JASKernel@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A73C4
 * Size:	000008
 */
JASHeap* JASKernel::getCommandHeap()
{
	return sCommandHeap;
	/*
	lwz      r3, sCommandHeap__9JASKernel@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A73CC
 * Size:	00007C
 */
void JASKernel::setupAramHeap(unsigned long, unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, audioAramHeap__9JASKernel@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	addi     r3, r5, audioAramHeap__9JASKernel@l
	addi     r3, r3, 0x1c
	stw      r30, sAramBase__9JASKernel@sda21(r13)
	stw      r3, 8(r1)
	bl       OSLockMutex
	addi     r0, r30, 0x1f
	lis      r3, audioAramHeap__9JASKernel@ha
	rlwinm   r6, r0, 0, 0, 0x1a
	li       r4, 0
	subf     r0, r30, r6
	addi     r5, r3, audioAramHeap__9JASKernel@l
	subf     r0, r0, r31
	stw      r6, 0x38(r5)
	lwz      r3, 8(r1)
	stw      r4, 0x40(r5)
	stw      r0, 0x3c(r5)
	bl       OSUnlockMutex
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
 * Address:	800A7448
 * Size:	00000C
 */
JASHeap* JASKernel::getAramHeap()
{
	return audioAramHeap;
	/*
	lis      r3, audioAramHeap__9JASKernel@ha
	addi     r3, r3, audioAramHeap__9JASKernel@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
int JASKernel::getAramFreeSize()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
int JASKernel::getAramSize()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A7454
 * Size:	000080
 */
void __sinit_JASHeapCtrl_cpp(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, audioAramHeap__9JASKernel@ha
	stw      r0, 0x14(r1)
	addi     r3, r3, audioAramHeap__9JASKernel@l
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	mr       r30, r3
	bl       initiate__10JSUPtrListFv
	mr       r4, r30
	addi     r3, r31, 0xc
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0
	addi     r3, r30, 0x1c
	stw      r0, 0x34(r30)
	stw      r0, 0x38(r30)
	stw      r0, 0x3c(r30)
	stw      r0, 0x40(r30)
	bl       OSInitMutex
	lis      r3, __dt__7JASHeapFv@ha
	lis      r5, lbl_804F0700@ha
	addi     r4, r3, __dt__7JASHeapFv@l
	mr       r3, r30
	addi     r5, r5, lbl_804F0700@l
	bl       __register_global_object
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
