#include "Node.h"
#include "CNode.h"
#include "JSystem/JUT/JUTFont.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804995F0
    lbl_804995F0:
        .asciz "node.cpp"
        .skip 0x3
    .global lbl_804995FC
    lbl_804995FC:
        .asciz "CNode add err count %d\n"
    .global lbl_80499614
    lbl_80499614:
        .asciz "CNode concat Loop Err!\n"
    .global lbl_8049962C
    lbl_8049962C:
        .asciz "%d child (realchild = %d)!\n"

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__5CNode
    __vt__5CNode:
        .4byte 0
        .4byte 0
        .4byte __dt__5CNodeFv
        .4byte getChildCount__5CNodeFv
    .global __vt__4Node
    __vt__4Node:
        .4byte 0
        .4byte 0
        .4byte update__4NodeFv
        .4byte draw__4NodeFR8Graphics
        .4byte displayInfo__4NodeFi
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520250
    lbl_80520250:
        .asciz "    "
        .skip 3
    .global lbl_80520258
    lbl_80520258:
        .asciz "[%s]\n"
        .skip 2
    .global lbl_80520260
    lbl_80520260:
        .asciz "CNode"
        .skip 2
*/

extern const char lbl_804995F0[12]; // node.cpp
extern const char lbl_8049962C[28]; // %d child (realchild = %d)!\n
extern const char lbl_80520260[8];  // CNode

/*
 * --INFO--
 * Address:	80411204
 * Size:	000004
 */
void Node::init() { }

/*
 * --INFO--
 * Address:	80411208
 * Size:	0000B0
 */
// void Node::displayInfo(int)
// {
/*
    stwu     r1, -0x20(r1)
    mflr     r0
    stw      r0, 0x24(r1)
    stw      r31, 0x1c(r1)
    li       r31, 0
    stw      r30, 0x18(r1)
    mr       r30, r4
    stw      r29, 0x14(r1)
    mr       r29, r3
    b        lbl_80411240

lbl_80411230:
    addi     r3, r2, lbl_80520250@sda21
    crclr    6
    bl       OSReport
    addi     r31, r31, 1

lbl_80411240:
    cmpw     r31, r30
    blt      lbl_80411230
    lwz      r4, 0(r29)
    addi     r3, r2, lbl_80520258@sda21
    crclr    6
    bl       OSReport
    lwz      r31, 4(r29)
    cmplwi   r31, 0
    beq      lbl_80411294
    addi     r31, r31, -12
    b        lbl_80411294

lbl_8041126C:
    lwz      r3, 0xc(r31)
    addi     r4, r30, 1
    lwz      r12, 0x20(r3)
    lwz      r12, 0x10(r12)
    mtctr    r12
    bctrl
    lwz      r31, 0x18(r31)
    cmplwi   r31, 0
    beq      lbl_80411294
    addi     r31, r31, -12

lbl_80411294:
    cmplwi   r31, 0
    bne      lbl_8041126C
    lwz      r0, 0x24(r1)
    lwz      r31, 0x1c(r1)
    lwz      r30, 0x18(r1)
    lwz      r29, 0x14(r1)
    mtlr     r0
    addi     r1, r1, 0x20
    blr
*/
// }

/*
 * --INFO--
 * Address:	804112B8
 * Size:	000064
 */
// void Node::update()
// {
/*
    stwu     r1, -0x10(r1)
    mflr     r0
    stw      r0, 0x14(r1)
    stw      r31, 0xc(r1)
    lwz      r31, 4(r3)
    cmplwi   r31, 0
    beq      lbl_80411300
    addi     r31, r31, -12
    b        lbl_80411300

lbl_804112DC:
    lwz      r3, 0xc(r31)
    lwz      r12, 0x20(r3)
    lwz      r12, 8(r12)
    mtctr    r12
    bctrl
    lwz      r31, 0x18(r31)
    cmplwi   r31, 0
    beq      lbl_80411300
    addi     r31, r31, -12

lbl_80411300:
    cmplwi   r31, 0
    bne      lbl_804112DC
    lwz      r0, 0x14(r1)
    lwz      r31, 0xc(r1)
    mtlr     r0
    addi     r1, r1, 0x10
    blr
*/
// }

/*
 * --INFO--
 * Address:	8041131C
 * Size:	000074
 */
// void Node::draw(Graphics&)
// {
/*
    stwu     r1, -0x10(r1)
    mflr     r0
    stw      r0, 0x14(r1)
    stw      r31, 0xc(r1)
    stw      r30, 8(r1)
    mr       r30, r4
    lwz      r31, 4(r3)
    cmplwi   r31, 0
    beq      lbl_80411370
    addi     r31, r31, -12
    b        lbl_80411370

lbl_80411348:
    lwz      r3, 0xc(r31)
    mr       r4, r30
    lwz      r12, 0x20(r3)
    lwz      r12, 0xc(r12)
    mtctr    r12
    bctrl
    lwz      r31, 0x18(r31)
    cmplwi   r31, 0
    beq      lbl_80411370
    addi     r31, r31, -12

lbl_80411370:
    cmplwi   r31, 0
    bne      lbl_80411348
    lwz      r0, 0x14(r1)
    lwz      r31, 0xc(r1)
    lwz      r30, 8(r1)
    mtlr     r0
    addi     r1, r1, 0x10
    blr
*/
// }

/*
 * --INFO--
 * Address:	80411390
 * Size:	000030
 */
// CNode::CNode()
// {
/*
    lis      r5, __vt__5CNode@ha
    li       r4, 0
    addi     r5, r5, __vt__5CNode@l
    addi     r0, r2, lbl_80520260@sda21
    stw      r5, 0(r3)
    stw      r4, 0x10(r3)
    stw      r4, 0xc(r3)
    stw      r4, 8(r3)
    stw      r4, 4(r3)
    stw      r0, 0x14(r3)
    stw      r0, 0x14(r3)
    blr
*/
// }

/*
 * --INFO--
 * Address:	804113C0
 * Size:	000048
 */
// void CNode::addHead(CNode*)
// {
/*
    stwu     r1, -0x10(r1)
    mflr     r0
    stw      r0, 0x14(r1)
    lwz      r5, 0x10(r3)
    cmplwi   r5, 0
    beq      lbl_804113F4
    stw      r3, 0xc(r4)
    li       r0, 0
    stw      r4, 0x10(r3)
    stw      r0, 8(r4)
    stw      r5, 4(r4)
    stw      r4, 8(r5)
    b        lbl_804113F8

lbl_804113F4:
    bl       add__5CNodeFP5CNode

lbl_804113F8:
    lwz      r0, 0x14(r1)
    mtlr     r0
    addi     r1, r1, 0x10
    blr
*/
// }

/*
 * --INFO--
 * Address:	80411408
 * Size:	0000B0
 */
// void CNode::add(CNode*)
// {
/*
    stwu     r1, -0x20(r1)
    mflr     r0
    stw      r0, 0x24(r1)
    stmw     r27, 0xc(r1)
    mr       r27, r4
    lwz      r5, 0x10(r3)
    cmplwi   r5, 0
    beq      lbl_80411448
    b        lbl_80411430

lbl_8041142C:
    mr       r5, r0

lbl_80411430:
    lwz      r0, 4(r5)
    cmplwi   r0, 0
    bne      lbl_8041142C
    stw      r27, 4(r5)
    stw      r5, 8(r27)
    b        lbl_8041144C

lbl_80411448:
    stw      r27, 0x10(r3)

lbl_8041144C:
    stw      r3, 0xc(r27)
    lis      r5, lbl_804995F0@ha
    lis      r4, lbl_804995FC@ha
    li       r28, 0
    lwz      r29, 0x10(r3)
    addi     r30, r5, lbl_804995F0@l
    addi     r31, r4, lbl_804995FC@l
    b        lbl_8041149C

lbl_8041146C:
    cmplw    r29, r27
    bne      lbl_80411478
    addi     r28, r28, 1

lbl_80411478:
    cmpwi    r28, 1
    ble      lbl_80411498
    mr       r3, r30
    mr       r5, r31
    mr       r6, r28
    li       r4, 0xf2
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_80411498:
    lwz      r29, 4(r29)

lbl_8041149C:
    cmplwi   r29, 0
    bne      lbl_8041146C
    lmw      r27, 0xc(r1)
    lwz      r0, 0x24(r1)
    mtlr     r0
    addi     r1, r1, 0x20
    blr
*/
// }

/*
 * --INFO--
 * Address:	804114B8
 * Size:	000020
 */
// int CNode::calcNextCount()
// {
/*
    li       r4, 1
    b        lbl_804114C4

lbl_804114C0:
    addi     r4, r4, 1

lbl_804114C4:
    lwz      r3, 4(r3)
    cmplwi   r3, 0
    bne      lbl_804114C0
    mr       r3, r4
    blr
*/
// }

/*
 * --INFO--
 * Address:	804114D8
 * Size:	0000B0
 */
// void CNode::concat(CNode*)
// {
/*
    stwu     r1, -0x20(r1)
    mflr     r0
    stw      r0, 0x24(r1)
    stmw     r27, 0xc(r1)
    mr       r27, r4
    cmplw    r3, r27
    mr       r29, r3
    mr       r28, r3
    bne      lbl_80411518
    lis      r3, lbl_804995F0@ha
    lis      r5, lbl_80499614@ha
    addi     r3, r3, lbl_804995F0@l
    li       r4, 0x10e
    addi     r5, r5, lbl_80499614@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_80411518:
    lis      r4, lbl_804995F0@ha
    lis      r3, lbl_80499614@ha
    addi     r30, r4, lbl_804995F0@l
    addi     r31, r3, lbl_80499614@l
    b        lbl_8041154C

lbl_8041152C:
    cmplw    r28, r27
    bne      lbl_80411548
    mr       r3, r30
    mr       r5, r31
    li       r4, 0x112
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_80411548:
    lwz      r28, 4(r28)

lbl_8041154C:
    lwz      r0, 4(r28)
    cmplwi   r0, 0
    bne      lbl_8041152C
    b        lbl_80411560

lbl_8041155C:
    mr       r29, r0

lbl_80411560:
    lwz      r0, 4(r29)
    cmplwi   r0, 0
    bne      lbl_8041155C
    stw      r27, 4(r29)
    stw      r29, 8(r27)
    lmw      r27, 0xc(r1)
    lwz      r0, 0x24(r1)
    mtlr     r0
    addi     r1, r1, 0x20
    blr
*/
// }

/*
 * --INFO--
 * Address:	80411588
 * Size:	000048
 */
// CNode::~CNode()
// {
/*
    stwu     r1, -0x10(r1)
    mflr     r0
    stw      r0, 0x14(r1)
    stw      r31, 0xc(r1)
    or.      r31, r3, r3
    beq      lbl_804115B8
    lis      r5, __vt__5CNode@ha
    extsh.   r0, r4
    addi     r0, r5, __vt__5CNode@l
    stw      r0, 0(r31)
    ble      lbl_804115B8
    bl       __dl__FPv

lbl_804115B8:
    lwz      r0, 0x14(r1)
    mr       r3, r31
    lwz      r31, 0xc(r1)
    mtlr     r0
    addi     r1, r1, 0x10
    blr
*/
// }

/*
 * --INFO--
 * Address:	804115D0
 * Size:	000098
 */
// void CNode::del()
// {
/*
    lwz      r4, 0xc(r3)
    cmplwi   r4, 0
    beqlr
    lwz      r5, 0x10(r4)
    li       r6, 0
    b        lbl_8041165C

lbl_804115E8:
    cmplw    r5, r3
    bne      lbl_80411654
    cmplwi   r6, 0
    beq      lbl_80411624
    lwz      r0, 4(r5)
    stw      r0, 4(r6)
    lwz      r4, 4(r5)
    cmplwi   r4, 0
    beq      lbl_80411610
    stw      r6, 8(r4)

lbl_80411610:
    li       r0, 0
    stw      r0, 8(r3)
    stw      r0, 4(r3)
    stw      r0, 0xc(r3)
    blr

lbl_80411624:
    lwz      r0, 4(r5)
    stw      r0, 0x10(r4)
    lwz      r4, 4(r5)
    cmplwi   r4, 0
    beq      lbl_80411640
    li       r0, 0
    stw      r0, 8(r4)

lbl_80411640:
    li       r0, 0
    stw      r0, 8(r3)
    stw      r0, 4(r3)
    stw      r0, 0xc(r3)
    blr

lbl_80411654:
    mr       r6, r5
    lwz      r5, 4(r5)

lbl_8041165C:
    cmplwi   r5, 0
    bne      lbl_804115E8
    blr
*/
// }

/*
 * --INFO--
 * Address:	80411668
 * Size:	000034
 */
// int CNode::getChildCount()
// {
/*
    lwz      r0, 0x10(r3)
    cmplwi   r0, 0
    beq      lbl_80411694
    mr       r4, r0
    li       r3, 0
    b        lbl_80411688

lbl_80411680:
    lwz      r4, 4(r4)
    addi     r3, r3, 1

lbl_80411688:
    cmplwi   r4, 0
    bne      lbl_80411680
    blr

lbl_80411694:
    li       r3, 0
    blr
*/
// }

/*
 * --INFO--
 * Address:	8041169C
 * Size:	000094
 */
// CNode* CNode::getChildAt(int desiredIndex)
//{
//    const char* msg = lbl_8049962C;
//    const char* _FILE_ = lbl_804995F0;
//    int currentIndex = 0;
//    CNode* pNode = _10;
//
//    // for (; ; pNode = pNode->_04, currentIndex++) {
//    while (true) {
//        if (desiredIndex <= currentIndex) {
//            return pNode;
//        }
//        if (pNode == NULL) {
//            JUTException::panic_f(lbl_804995F0,0x15f,msg,desiredIndex,
//            this->getChildCount());
//        }
//        pNode = pNode->_04;
//        currentIndex++;
//    }

// JUTException::panic_f(lbl_804995F0,0x15f,msg,desiredIndex,
// this->getChildCount()); while( pNode != NULL ) {
//     if (desiredIndex <= currentIndex) {
//         return pNode;
//     }
//     pNode = pNode->_04;
//     currentIndex += 1;
// }
// childCount = this->getChildCount();
// JUTException::panic_f(lbl_804995F0,0x15f,lbl_8049962C,desiredIndex,childCount);
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x804A
  stw       r0, 0x24(r1)
  stmw      r26, 0x8(r1)
  mr        r26, r3
  lis       r3, 0x804A
  mr        r27, r4
  subi      r30, r5, 0x6A10
  li        r28, 0
  subi      r31, r3, 0x69D4
  lwz       r29, 0x10(r26)
  b         .loc_0x74

.loc_0x34:
  cmplwi    r29, 0
  bne-      .loc_0x6C
  mr        r3, r26
  lwz       r12, 0x0(r26)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl
  mr        r7, r3
  mr        r3, r30
  mr        r5, r31
  mr        r6, r27
  li        r4, 0x15F
  crclr     6, 0x6
  bl        -0x3E70C4

.loc_0x6C:
  lwz       r29, 0x4(r29)
  addi      r28, r28, 0x1

.loc_0x74:
  cmpw      r28, r27
  blt+      .loc_0x34
  mr        r3, r29
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
//}
