#include "CNode.h"
#include "CollInfo.h"
#include "JSystem/JUT/JUTException.h"
#include "Sys/OBB.h"
#include "Sys/OBBTree.h"
#include "Sys/GridDivider.h"
#include "Sys/TriIndexList.h"
#include "types.h"
#include "Platform.h"
#include "PlatAttacher.h"
#include "mapCode.h"
#include "Matrixf.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047C5A0
    lbl_8047C5A0:
        .4byte 0x636F6C6C
        .4byte 0x696E666F
        .4byte 0x2E637070
        .4byte 0x00000000
    .global lbl_8047C5B0
    lbl_8047C5B0:
        .4byte 0x706C6174
        .4byte 0x666F726D
        .4byte 0x20257320
        .4byte 0x6E6F7420
        .4byte 0x666F756E
        .4byte 0x6420210A
        .4byte 0x00000000
    .global lbl_8047C5CC
    lbl_8047C5CC:
        .asciz "P2Assert"
        .skip 3
    .global lbl_8047C5D8
    lbl_8047C5D8:
        .4byte 0x636F6C6C
        .4byte 0x70617274
        .4byte 0x20626972
        .4byte 0x74682066
        .4byte 0x61696C65
        .4byte 0x64203A20
        .4byte 0x73696E67
        .4byte 0x6C652073
        .4byte 0x70686572
        .4byte 0x650A0000
    .global lbl_8047C600
    lbl_8047C600:
        .4byte 0x6E756D3D
        .4byte 0x2564203A
        .4byte 0x2072616E
        .4byte 0x646F6D3D
        .4byte 0x25640A00
    .global lbl_8047C614
    lbl_8047C614:
        .4byte 0x636F6C6C
        .4byte 0x70617274
        .4byte 0x20626972
        .4byte 0x74682066
        .4byte 0x61696C65
        .4byte 0x6420210A
        .4byte 0x00000000
    .global lbl_8047C630
    lbl_8047C630:
        .4byte 0x436F6C6C
        .4byte 0x50617274
        .4byte 0x00000000
    .global lbl_8047C63C
    lbl_8047C63C:
        .4byte 0x23202564
        .4byte 0x2F25640D
        .4byte 0x0A000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__11AgeCollPart
    __vt__11AgeCollPart:
        .4byte 0
        .4byte 0
        .4byte __dt__11AgeCollPartFv
        .4byte getChildCount__8CollPartFv
        .4byte isMouth__8CollPartFv
        .4byte draw__11AgeCollPartFR8Graphics
        .4byte constructor__8CollPartFv
        .4byte doAnimation__8CollPartFv
        .4byte doEntry__8CollPartFv
        .4byte doSetView__8CollPartFUl
        .4byte doViewCalc__8CollPartFv
        .4byte doSimulation__8CollPartFf
        .4byte doDirectDraw__8CollPartFR8Graphics
    .global __vt__15CollPartFactory
    __vt__15CollPartFactory:
        .4byte 0
        .4byte 0
        .4byte __dt__15CollPartFactoryFv
        .4byte getChildCount__8CollPartFv
        .4byte isMouth__8CollPartFv
        .4byte draw__8CollPartFR8Graphics
        .4byte constructor__8CollPartFv
        .4byte doAnimation__8CollPartFv
        .4byte doEntry__8CollPartFv
        .4byte doSetView__8CollPartFUl
        .4byte doViewCalc__8CollPartFv
        .4byte doSimulation__8CollPartFf
        .4byte doDirectDraw__8CollPartFR8Graphics
    .global __vt__13MouthCollPart
    __vt__13MouthCollPart:
        .4byte 0
        .4byte 0
        .4byte __dt__13MouthCollPartFv
        .4byte getChildCount__8CollPartFv
        .4byte isMouth__13MouthCollPartFv
        .4byte draw__8CollPartFR8Graphics
        .4byte constructor__8CollPartFv
        .4byte doAnimation__8CollPartFv
        .4byte doEntry__8CollPartFv
        .4byte doSetView__8CollPartFUl
        .4byte doViewCalc__8CollPartFv
        .4byte doSimulation__8CollPartFf
        .4byte doDirectDraw__8CollPartFR8Graphics
    .global __vt__8CollPart
    __vt__8CollPart:
        .4byte 0
        .4byte 0
        .4byte __dt__8CollPartFv
        .4byte getChildCount__8CollPartFv
        .4byte isMouth__8CollPartFv
        .4byte draw__8CollPartFR8Graphics
        .4byte constructor__8CollPartFv
        .4byte doAnimation__8CollPartFv
        .4byte doEntry__8CollPartFv
        .4byte doSetView__8CollPartFUl
        .4byte doViewCalc__8CollPartFv
        .4byte doSimulation__8CollPartFf
        .4byte doDirectDraw__8CollPartFR8Graphics
    .global __vt__Q23Sys3OBB
    __vt__Q23Sys3OBB:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23Sys3OBBFv
        .4byte getChildCount__5CNodeFv
    .global "__vt__12Container<i>"
    "__vt__12Container<i>":
        .4byte 0
        .4byte 0
        .4byte "__dt__12Container<i>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__12Container<i>FPv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "getAt__12Container<i>Fi"
        .4byte "getTo__12Container<i>Fv"
    .global "__vt__17ArrayContainer<i>"
    "__vt__17ArrayContainer<i>":
        .4byte 0
        .4byte 0
        .4byte "__dt__17ArrayContainer<i>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__12Container<i>FPv"
        .4byte "getNext__17ArrayContainer<i>FPv"
        .4byte "getStart__17ArrayContainer<i>Fv"
        .4byte "getEnd__17ArrayContainer<i>Fv"
        .4byte "get__17ArrayContainer<i>FPv"
        .4byte "getAt__17ArrayContainer<i>Fi"
        .4byte "getTo__17ArrayContainer<i>Fv"
        .4byte "writeObject__17ArrayContainer<i>FR6StreamRi"
        .4byte "readObject__17ArrayContainer<i>FR6StreamRi"
        .4byte "write__17ArrayContainer<i>FR6Stream"
        .4byte "read__17ArrayContainer<i>FR6Stream"
        .4byte "alloc__17ArrayContainer<i>Fi"
        .4byte "addOne__17ArrayContainer<i>FRi"
        .4byte "setArray__17ArrayContainer<i>FPii"
    .global __vt__Q23Sys9IndexList
    __vt__Q23Sys9IndexList:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23Sys9IndexListFv
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__12Container<i>FPv"
        .4byte "getNext__17ArrayContainer<i>FPv"
        .4byte "getStart__17ArrayContainer<i>Fv"
        .4byte "getEnd__17ArrayContainer<i>Fv"
        .4byte "get__17ArrayContainer<i>FPv"
        .4byte "getAt__17ArrayContainer<i>Fi"
        .4byte "getTo__17ArrayContainer<i>Fv"
        .4byte writeObject__Q23Sys9IndexListFR6StreamRi
        .4byte readObject__Q23Sys9IndexListFR6StreamRi
        .4byte "write__17ArrayContainer<i>FR6Stream"
        .4byte "read__17ArrayContainer<i>FR6Stream"
        .4byte "alloc__17ArrayContainer<i>Fi"
        .4byte "addOne__17ArrayContainer<i>FRi"
        .4byte "setArray__17ArrayContainer<i>FPii"
    .global __vt__Q23Sys12TriIndexList
    __vt__Q23Sys12TriIndexList:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23Sys12TriIndexListFv
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__12Container<i>FPv"
        .4byte "getNext__17ArrayContainer<i>FPv"
        .4byte "getStart__17ArrayContainer<i>Fv"
        .4byte "getEnd__17ArrayContainer<i>Fv"
        .4byte "get__17ArrayContainer<i>FPv"
        .4byte "getAt__17ArrayContainer<i>Fi"
        .4byte "getTo__17ArrayContainer<i>Fv"
        .4byte writeObject__Q23Sys9IndexListFR6StreamRi
        .4byte readObject__Q23Sys9IndexListFR6StreamRi
        .4byte "write__17ArrayContainer<i>FR6Stream"
        .4byte "read__17ArrayContainer<i>FR6Stream"
        .4byte "alloc__17ArrayContainer<i>Fi"
        .4byte "addOne__17ArrayContainer<i>FRi"
        .4byte "setArray__17ArrayContainer<i>FPii"
    .global "__vt__28ArrayContainer<10Vector3<f>>"
    "__vt__28ArrayContainer<10Vector3<f>>":
        .4byte 0
        .4byte 0
        .4byte "__dt__28ArrayContainer<10Vector3<f>>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__23Container<10Vector3<f>>FPv"
        .4byte "getNext__28ArrayContainer<10Vector3<f>>FPv"
        .4byte "getStart__28ArrayContainer<10Vector3<f>>Fv"
        .4byte "getEnd__28ArrayContainer<10Vector3<f>>Fv"
        .4byte "get__28ArrayContainer<10Vector3<f>>FPv"
        .4byte "getAt__28ArrayContainer<10Vector3<f>>Fi"
        .4byte "getTo__28ArrayContainer<10Vector3<f>>Fv"
        .4byte
   "writeObject__28ArrayContainer<10Vector3<f>>FR6StreamR10Vector3<f>" .4byte
   "readObject__28ArrayContainer<10Vector3<f>>FR6StreamR10Vector3<f>" .4byte
   "write__28ArrayContainer<10Vector3<f>>FR6Stream" .4byte
   "read__28ArrayContainer<10Vector3<f>>FR6Stream" .4byte
   "alloc__28ArrayContainer<10Vector3<f>>Fi" .4byte
   "addOne__28ArrayContainer<10Vector3<f>>FR10Vector3<f>" .4byte
   "setArray__28ArrayContainer<10Vector3<f>>FP10Vector3<f>i" .global
   "__vt__23Container<10Vector3<f>>"
    "__vt__23Container<10Vector3<f>>":
        .4byte 0
        .4byte 0
        .4byte "__dt__23Container<10Vector3<f>>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__23Container<10Vector3<f>>FPv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "getAt__23Container<10Vector3<f>>Fi"
        .4byte "getTo__23Container<10Vector3<f>>Fv"
    .global __vt__8Platform
    __vt__8Platform:
        .4byte 0
        .4byte 0
        .4byte __dt__8PlatformFv
        .4byte getChildCount__5CNodeFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global mDebug__8CollTree
    mDebug__8CollTree:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80518208
    lbl_80518208:
        .4byte 0x47000000
    .global lbl_8051820C
    lbl_8051820C:
        .4byte 0xC7000000
    .global lbl_80518210
    lbl_80518210:
        .4byte 0x00000000
    .global lbl_80518214
    lbl_80518214:
        .4byte 0x47FA0000
    .global lbl_80518218
    lbl_80518218:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80518220
    lbl_80518220:
        .4byte 0x3A83126F
    .global lbl_80518224
    lbl_80518224:
        .float 1.0
    .global lbl_80518228
    lbl_80518228:
        .float 0.3
    .global lbl_8051822C
    lbl_8051822C:
        .float 0.1
    .global lbl_80518230
    lbl_80518230:
        .4byte 0x0D0A0000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	801336A8
 * Size:	000044
 */
Platform::Platform()
    : CNode()
    , m_triDivider(nullptr)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x2DDCD4
	  lis       r3, 0x804B
	  li        r0, 0
	  addi      r4, r3, 0x58
	  mr        r3, r31
	  stw       r4, 0x0(r31)
	  stw       r0, 0x18(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801336EC
 * Size:	000008
 */
Sys::OBBTree* Platform::getTriDivider()
{
	return m_triDivider;
	/*
	.loc_0x0:
	  lwz       r3, 0x18(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801336F4
 * Size:	00003C
 */
void Platform::setMapCodeAll(MapCode::Code& code)
{
	for (int i = 0; i < m_triDivider->m_triangleTable->m_endIndex; i++) {
		m_triDivider->m_triangleTable->m_objects[i].m_code = code;
	}
	/*
	.loc_0x0:
	  lwz       r3, 0x18(r3)
	  li        r8, 0
	  li        r6, 0
	  lwz       r7, 0x1C(r3)
	  b         .loc_0x2C

	.loc_0x14:
	  lbz       r5, 0x0(r4)
	  addi      r0, r6, 0x5C
	  lwz       r3, 0x24(r7)
	  addi      r6, r6, 0x60
	  addi      r8, r8, 0x1
	  stbx      r5, r3, r0

	.loc_0x2C:
	  lwz       r0, 0x1C(r7)
	  cmpw      r8, r0
	  blt+      .loc_0x14
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80133730
 * Size:	000084
 */
void Platform::clone(Matrixf& matrix)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80133778
	bl       __ct__5CNodeFv
	lis      r3, __vt__8Platform@ha
	li       r0, 0
	addi     r3, r3, __vt__8Platform@l
	stw      r3, 0(r31)
	stw      r0, 0x18(r31)

lbl_80133778:
	lwz      r3, 0x18(r29)
	mr       r4, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r31)
	mr       r3, r31
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
 * Address:	801337B4
 * Size:	0000AC
 */
void Platform::load(JKRFileLoader*, char*)
{
	/*
	stwu     r1, -0x430(r1)
	mflr     r0
	stw      r0, 0x434(r1)
	stw      r31, 0x42c(r1)
	mr       r31, r5
	stw      r30, 0x428(r1)
	mr       r30, r3
	mr       r3, r31
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	cmplwi   r3, 0
	bne      lbl_80133804
	lis      r3, lbl_8047C5A0@ha
	lis      r4, lbl_8047C5B0@ha
	addi     r5, r4, lbl_8047C5B0@l
	mr       r6, r31
	addi     r3, r3, lbl_8047C5A0@l
	li       r4, 0xec
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_80133848

lbl_80133804:
	mr       r4, r3
	addi     r3, r1, 8
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r3, 0x130
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8013382C
	bl       __ct__Q23Sys7OBBTreeFv
	mr       r0, r3

lbl_8013382C:
	stw      r0, 0x18(r30)
	addi     r4, r1, 8
	lwz      r3, 0x18(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_80133848:
	lwz      r0, 0x434(r1)
	lwz      r31, 0x42c(r1)
	lwz      r30, 0x428(r1)
	mtlr     r0
	addi     r1, r1, 0x430
	blr
	*/
}

/*
 * --INFO--
 * Address:	80133860
 * Size:	000014
 */
PlatAttacher::PlatAttacher()
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
 * Address:	80133874
 * Size:	000064
 */
void PlatAttacher::setMapCodeAll(MapCode::Code&)
{
	/*
	li       r11, 0
	li       r10, 0
	b        lbl_801338C8

lbl_80133880:
	lwz      r5, 8(r3)
	addi     r0, r10, 0x18
	li       r7, 0
	lwzx     r5, r5, r0
	mr       r9, r7
	lwz      r8, 0x1c(r5)
	b        lbl_801338B4

lbl_8013389C:
	lbz      r6, 0(r4)
	addi     r0, r9, 0x5c
	lwz      r5, 0x24(r8)
	addi     r9, r9, 0x60
	addi     r7, r7, 1
	stbx     r6, r5, r0

lbl_801338B4:
	lwz      r0, 0x1c(r8)
	cmpw     r7, r0
	blt      lbl_8013389C
	addi     r10, r10, 0x1c
	addi     r11, r11, 1

lbl_801338C8:
	lwz      r0, 0(r3)
	cmpw     r11, r0
	blt      lbl_80133880
	blr
	*/
}

/*
 * --INFO--
 * Address:	801338D8
 * Size:	000060
 */
Platform::~Platform()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8013391C
	lis      r5, __vt__8Platform@ha
	li       r4, 0
	addi     r0, r5, __vt__8Platform@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_8013391C
	mr       r3, r30
	bl       __dl__FPv

lbl_8013391C:
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
 * Address:	80133938
 * Size:	000190
 */
void PlatAttacher::read(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	bl       readInt__6StreamFv
	stw      r3, 0(r30)
	lwz      r0, 0(r30)
	slwi     r3, r0, 1
	bl       __nwa__FUl
	stw      r3, 4(r30)
	li       r29, 0
	li       r28, 0
	b        lbl_80133990

lbl_80133978:
	mr       r3, r31
	bl       readShort__6StreamFv
	lwz      r4, 4(r30)
	addi     r29, r29, 1
	sthx     r3, r4, r28
	addi     r28, r28, 2

lbl_80133990:
	lwz      r27, 0(r30)
	cmpw     r29, r27
	blt      lbl_80133978
	mulli    r3, r27, 0x1c
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__8PlatformFv@ha
	lis      r5, __dt__8PlatformFv@ha
	addi     r4, r4, __ct__8PlatformFv@l
	mr       r7, r27
	addi     r5, r5, __dt__8PlatformFv@l
	li       r6, 0x1c
	bl       __construct_new_array
	stw      r3, 8(r30)
	li       r3, 0x50
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_80133A48
	bl       __ct__5CNodeFv
	lis      r4, __vt__16GenericContainer@ha
	lis      r3, "__vt__23Container<10Vector3<f>>"@ha
	addi     r0, r4, __vt__16GenericContainer@l
	lis      r4, "__vt__28ArrayContainer<10Vector3<f>>"@ha
	stw      r0, 0(r29)
	addi     r0, r3, "__vt__23Container<10Vector3<f>>"@l
	lis      r3, __vt__Q23Sys11VertexTable@ha
	li       r6, 0
	stw      r0, 0(r29)
	addi     r5, r4, "__vt__28ArrayContainer<10Vector3<f>>"@l
	li       r4, 1
	addi     r0, r3, __vt__Q23Sys11VertexTable@l
	stb      r6, 0x18(r29)
	lfs      f1, lbl_80518208@sda21(r2)
	stw      r5, 0(r29)
	lfs      f0, lbl_8051820C@sda21(r2)
	stb      r4, 0x18(r29)
	stw      r6, 0x20(r29)
	stw      r6, 0x1c(r29)
	stw      r6, 0x24(r29)
	stw      r0, 0(r29)
	stfs     f1, 0x28(r29)
	stfs     f1, 0x2c(r29)
	stfs     f1, 0x30(r29)
	stfs     f0, 0x34(r29)
	stfs     f0, 0x38(r29)
	stfs     f0, 0x3c(r29)

lbl_80133A48:
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0(r29)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	li       r26, 0
	li       r27, 0
	b        lbl_80133AA8

lbl_80133A6C:
	li       r3, 0x130
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_80133A84
	bl       __ct__Q23Sys7OBBTreeFv
	mr       r28, r3

lbl_80133A84:
	mr       r3, r28
	mr       r4, r31
	mr       r5, r29
	bl       readWithoutVerts__Q23Sys7OBBTreeFR6StreamRQ23Sys11VertexTable
	lwz      r3, 8(r30)
	addi     r0, r27, 0x18
	addi     r27, r27, 0x1c
	addi     r26, r26, 1
	stwx     r28, r3, r0

lbl_80133AA8:
	lwz      r0, 0(r30)
	cmpw     r26, r0
	blt      lbl_80133A6C
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80133AC8
 * Size:	0000B0
 */
template <> void ArrayContainer<Vector3f>::read(Stream&)
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
	mr       r3, r29
	bl       readInt__6StreamFv
	stw      r3, 0x20(r28)
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r4, 0x20(r28)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x20(r28)
	li       r30, 0
	li       r31, 0
	stw      r0, 0x1c(r28)
	b        lbl_80133B4C

lbl_80133B24:
	mr       r3, r28
	lwz      r0, 0x24(r28)
	lwz      r12, 0(r28)
	mr       r4, r29
	add      r5, r0, r31
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, 0xc
	addi     r30, r30, 1

lbl_80133B4C:
	lwz      r0, 0x20(r28)
	cmpw     r30, r0
	blt      lbl_80133B24
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
 * Address:	80133B78
 * Size:	000004
 */
template <> void ArrayContainer<Vector3f>::readObject(Stream&, Vector3f&) { }

/*
 * --INFO--
 * Address:	80133B7C
 * Size:	000068
 */
template <> void ArrayContainer<Vector3f>::alloc(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mulli    r3, r31, 0xc
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, "__ct__10Vector3<f>Fv"@ha
	mr       r7, r31
	addi     r4, r4, "__ct__10Vector3<f>Fv"@l
	li       r5, 0
	li       r6, 0xc
	bl       __construct_new_array
	stw      r3, 0x24(r30)
	li       r0, 0
	stw      r31, 0x20(r30)
	stw      r0, 0x1c(r30)
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
 * Address:	80133BE4
 * Size:	000080
 */
template <> ArrayContainer<Vector3f>::~ArrayContainer()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80133C48
	lis      r4, "__vt__28ArrayContainer<10Vector3<f>>"@ha
	addi     r0, r4, "__vt__28ArrayContainer<10Vector3<f>>"@l
	stw      r0, 0(r30)
	beq      lbl_80133C38
	lis      r4, "__vt__23Container<10Vector3<f>>"@ha
	addi     r0, r4, "__vt__23Container<10Vector3<f>>"@l
	stw      r0, 0(r30)
	beq      lbl_80133C38
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_80133C38:
	extsh.   r0, r31
	ble      lbl_80133C48
	mr       r3, r30
	bl       __dl__FPv

lbl_80133C48:
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
 * Address:	80133C64
 * Size:	000070
 */
template <> Container<Vector3f>::~Container()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80133CB8
	lis      r4, "__vt__23Container<10Vector3<f>>"@ha
	addi     r0, r4, "__vt__23Container<10Vector3<f>>"@l
	stw      r0, 0(r30)
	beq      lbl_80133CA8
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_80133CA8:
	extsh.   r0, r31
	ble      lbl_80133CB8
	mr       r3, r30
	bl       __dl__FPv

lbl_80133CB8:
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
 * Address:	80133CD4
 * Size:	000008
 */
int PlatAttacher::getNumShapes()
{
	return m_numShapes;
	/*
	.loc_0x0:
	  lwz       r3, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80133CDC
 * Size:	00007C
 */
u16 PlatAttacher::getJointIndex(int i)
{
	// #ifdef MATCHING
	// #line 311 // Will be 312 on assert line
	// #endif
	P2ASSERTLINE(312, (-1 < i) && (m_numShapes < i));
	return m_jointIndices[i];
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0
	  blt-      .loc_0x34
	  lwz       r0, 0x0(r30)
	  cmpw      r31, r0
	  bge-      .loc_0x34
	  li        r3, 0x1

	.loc_0x34:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x58
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x3A60
	  li        r4, 0x138
	  subi      r5, r5, 0x3A34
	  crclr     6, 0x6
	  bl        -0x1096F0

	.loc_0x58:
	  lwz       r3, 0x4(r30)
	  rlwinm    r0,r31,1,0,30
	  lhzx      r3, r3, r0
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80133D58
 * Size:	00007C
 */
Platform* PlatAttacher::getPlatform(int i)
{
	// Only 6 lines difference from the previous assert!
	P2ASSERTLINE(318, (-1 < i) && (m_numShapes < i));
	return &m_platforms[i];
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0
	  blt-      .loc_0x34
	  lwz       r0, 0x0(r30)
	  cmpw      r31, r0
	  bge-      .loc_0x34
	  li        r3, 0x1

	.loc_0x34:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x58
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x3A60
	  li        r4, 0x13E
	  subi      r5, r5, 0x3A34
	  crclr     6, 0x6
	  bl        -0x10976C

	.loc_0x58:
	  mulli     r0, r31, 0x1C
	  lwz       r3, 0x8(r30)
	  add       r3, r3, r0
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

namespace Sys {

/*
 * --INFO--
 * Address:	80133DD4
 * Size:	000090
 */
GridDivider::~GridDivider()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80133E48
	lis      r3, __vt__Q23Sys11GridDivider@ha
	addic.   r0, r30, 0x20
	addi     r0, r3, __vt__Q23Sys11GridDivider@l
	stw      r0, 0(r30)
	beq      lbl_80133E18
	lis      r4, __dt__Q23Sys12TriIndexListFv@ha
	lwz      r3, 0x28(r30)
	addi     r4, r4, __dt__Q23Sys12TriIndexListFv@l
	bl       __destroy_new_array

lbl_80133E18:
	cmplwi   r30, 0
	beq      lbl_80133E38
	lis      r4, __vt__Q23Sys10TriDivider@ha
	mr       r3, r30
	addi     r0, r4, __vt__Q23Sys10TriDivider@l
	li       r4, 0
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_80133E38:
	extsh.   r0, r31
	ble      lbl_80133E48
	mr       r3, r30
	bl       __dl__FPv

lbl_80133E48:
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
 * Address:	80133E64
 * Size:	0000A0
 */
TriIndexList::~TriIndexList()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80133EE8
	lis      r4, __vt__Q23Sys12TriIndexList@ha
	addi     r0, r4, __vt__Q23Sys12TriIndexList@l
	stw      r0, 0(r30)
	beq      lbl_80133ED8
	lis      r4, __vt__Q23Sys9IndexList@ha
	addi     r0, r4, __vt__Q23Sys9IndexList@l
	stw      r0, 0(r30)
	beq      lbl_80133ED8
	lis      r4, "__vt__17ArrayContainer<i>"@ha
	addi     r0, r4, "__vt__17ArrayContainer<i>"@l
	stw      r0, 0(r30)
	beq      lbl_80133ED8
	lis      r4, "__vt__12Container<i>"@ha
	addi     r0, r4, "__vt__12Container<i>"@l
	stw      r0, 0(r30)
	beq      lbl_80133ED8
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_80133ED8:
	extsh.   r0, r31
	ble      lbl_80133EE8
	mr       r3, r30
	bl       __dl__FPv

lbl_80133EE8:
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
 * Address:	80133F04
 * Size:	000060
 */
TriDivider::~TriDivider()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80133F48
	lis      r5, __vt__Q23Sys10TriDivider@ha
	li       r4, 0
	addi     r0, r5, __vt__Q23Sys10TriDivider@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_80133F48
	mr       r3, r30
	bl       __dl__FPv

lbl_80133F48:
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
 * Address:	80133F64
 * Size:	0000F8
 */
OBBTree::~OBBTree()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80134040
	lis      r3, __vt__Q23Sys7OBBTree@ha
	addic.   r0, r30, 0x20
	addi     r0, r3, __vt__Q23Sys7OBBTree@l
	stw      r0, 0(r30)
	beq      lbl_80134010
	lis      r4, __vt__Q23Sys3OBB@ha
	addic.   r3, r30, 0xf8
	addi     r0, r4, __vt__Q23Sys3OBB@l
	stw      r0, 0x20(r30)
	beq      lbl_80134004
	lis      r4, __vt__Q23Sys12TriIndexList@ha
	cmplwi   r3, 0
	addi     r0, r4, __vt__Q23Sys12TriIndexList@l
	stw      r0, 0xf8(r30)
	beq      lbl_80134004
	lis      r4, __vt__Q23Sys9IndexList@ha
	addi     r0, r4, __vt__Q23Sys9IndexList@l
	stw      r0, 0xf8(r30)
	beq      lbl_80134004
	lis      r4, "__vt__17ArrayContainer<i>"@ha
	addi     r0, r4, "__vt__17ArrayContainer<i>"@l
	stw      r0, 0xf8(r30)
	beq      lbl_80134004
	lis      r4, "__vt__12Container<i>"@ha
	addi     r0, r4, "__vt__12Container<i>"@l
	stw      r0, 0xf8(r30)
	beq      lbl_80134004
	lis      r4, __vt__16GenericContainer@ha
	addi     r0, r4, __vt__16GenericContainer@l
	stw      r0, 0xf8(r30)
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_80134004:
	addi     r3, r30, 0x20
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_80134010:
	cmplwi   r30, 0
	beq      lbl_80134030
	lis      r4, __vt__Q23Sys10TriDivider@ha
	mr       r3, r30
	addi     r0, r4, __vt__Q23Sys10TriDivider@l
	li       r4, 0
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_80134030:
	extsh.   r0, r31
	ble      lbl_80134040
	mr       r3, r30
	bl       __dl__FPv

lbl_80134040:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Sys

/*
 * --INFO--
 * Address:	8013405C
 * Size:	000010
 */
CollTree::CollTree()
{
	/*
	li       r0, 0
	stw      r0, 0(r3)
	stw      r0, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013406C
 * Size:	000044
 */
void CollTree::createFromFactory(SysShape::MtxObject*, CollPartFactory*,
                                 CollPartMgr*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r6, 0x4(r3)
	  beq-      .loc_0x30
	  mr        r3, r5
	  mr        r5, r6
	  bl        0x49D8
	  stw       r3, 0x0(r31)

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801340B0
 * Size:	000104
 */
void CollTree::createSingleSphere(SysShape::MtxObject*, int, Sys::Sphere&,
                                  CollPartMgr*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  cmplwi    r7, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  mr        r30, r6
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  stw       r28, 0x10(r1)
	  mr        r28, r4
	  stw       r7, 0x4(r3)
	  beq-      .loc_0x70
	  mr        r3, r7
	  bl        0x49A0
	  stw       r3, 0x0(r31)
	  lwz       r0, 0x0(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x90
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x3A60
	  li        r4, 0x1BE
	  subi      r5, r5, 0x3A28
	  crclr     6, 0x6
	  bl        -0x109AD8
	  b         .loc_0x90

	.loc_0x70:
	  li        r3, 0x64
	  bl        -0x110280
	  mr.       r0, r3
	  beq-      .loc_0x8C
	  mr        r4, r28
	  bl        0x2B40
	  mr        r0, r3

	.loc_0x8C:
	  stw       r0, 0x0(r31)

	.loc_0x90:
	  lfs       f1, 0xC(r30)
	  lis       r3, 0x726F
	  lwz       r5, 0x0(r31)
	  li        r0, 0
	  lfs       f0, -0x6150(r2)
	  addi      r4, r3, 0x6F74
	  stfs      f1, 0x1C(r5)
	  lfs       f1, 0xC(r30)
	  lwz       r3, 0x0(r31)
	  stfs      f1, 0x18(r3)
	  lwz       r3, 0x0(r31)
	  stfs      f0, 0x20(r3)
	  stfs      f0, 0x24(r3)
	  stfs      f0, 0x28(r3)
	  lwz       r3, 0x0(r31)
	  stw       r29, 0x2C(r3)
	  lwz       r3, 0x0(r31)
	  sth       r0, 0x48(r3)
	  lwz       r3, 0x0(r31)
	  addi      r3, r3, 0x30
	  bl        0x2DF148
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801341B4
 * Size:	000044
 */
void CollTree::release()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_801341E4
	lwz      r4, 0(r31)
	bl       releaseRec__8CollTreeFP8CollPart
	li       r0, 0
	stw      r0, 4(r31)

lbl_801341E4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801341F8
 * Size:	000348
 */
void CollTree::releaseRec(CollPart*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r23, 0xc(r1)
	mr       r29, r4
	mr       r31, r3
	lwz      r27, 0x10(r4)
	lwz      r30, 4(r4)
	cmplwi   r27, 0
	beq      lbl_8013439C
	lwz      r25, 0x10(r27)
	lwz      r26, 4(r27)
	cmplwi   r25, 0
	beq      lbl_801342DC
	lwz      r23, 0x10(r25)
	lwz      r24, 4(r25)
	cmplwi   r23, 0
	beq      lbl_80134284
	mr       r3, r23
	bl       getNext__8CollPartFv
	mr       r28, r3
	mr       r3, r23
	bl       getChild__8CollPartFv
	or.      r4, r3, r3
	beq      lbl_80134264
	mr       r3, r31
	bl       releaseRec__8CollTreeFP8CollPart

lbl_80134264:
	lwz      r3, 4(r31)
	mr       r4, r23
	bl       "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
	cmplwi   r28, 0
	beq      lbl_80134284
	mr       r3, r31
	mr       r4, r28
	bl       releaseRec__8CollTreeFP8CollPart

lbl_80134284:
	lwz      r3, 4(r31)
	mr       r4, r25
	bl       "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
	cmplwi   r24, 0
	beq      lbl_801342DC
	mr       r3, r24
	bl       getNext__8CollPartFv
	mr       r28, r3
	mr       r3, r24
	bl       getChild__8CollPartFv
	or.      r4, r3, r3
	beq      lbl_801342BC
	mr       r3, r31
	bl       releaseRec__8CollTreeFP8CollPart

lbl_801342BC:
	lwz      r3, 4(r31)
	mr       r4, r24
	bl       "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
	cmplwi   r28, 0
	beq      lbl_801342DC
	mr       r3, r31
	mr       r4, r28
	bl       releaseRec__8CollTreeFP8CollPart

lbl_801342DC:
	lwz      r3, 4(r31)
	mr       r4, r27
	bl       "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
	cmplwi   r26, 0
	beq      lbl_8013439C
	lwz      r24, 0x10(r26)
	lwz      r23, 4(r26)
	cmplwi   r24, 0
	beq      lbl_80134344
	mr       r3, r24
	bl       getNext__8CollPartFv
	mr       r28, r3
	mr       r3, r24
	bl       getChild__8CollPartFv
	or.      r4, r3, r3
	beq      lbl_80134324
	mr       r3, r31
	bl       releaseRec__8CollTreeFP8CollPart

lbl_80134324:
	lwz      r3, 4(r31)
	mr       r4, r24
	bl       "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
	cmplwi   r28, 0
	beq      lbl_80134344
	mr       r3, r31
	mr       r4, r28
	bl       releaseRec__8CollTreeFP8CollPart

lbl_80134344:
	lwz      r3, 4(r31)
	mr       r4, r26
	bl       "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
	cmplwi   r23, 0
	beq      lbl_8013439C
	mr       r3, r23
	bl       getNext__8CollPartFv
	mr       r28, r3
	mr       r3, r23
	bl       getChild__8CollPartFv
	or.      r4, r3, r3
	beq      lbl_8013437C
	mr       r3, r31
	bl       releaseRec__8CollTreeFP8CollPart

lbl_8013437C:
	lwz      r3, 4(r31)
	mr       r4, r23
	bl       "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
	cmplwi   r28, 0
	beq      lbl_8013439C
	mr       r3, r31
	mr       r4, r28
	bl       releaseRec__8CollTreeFP8CollPart

lbl_8013439C:
	lwz      r3, 4(r31)
	mr       r4, r29
	bl       "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
	cmplwi   r30, 0
	beq      lbl_8013452C
	lwz      r24, 0x10(r30)
	lwz      r23, 4(r30)
	cmplwi   r24, 0
	beq      lbl_8013446C
	lwz      r26, 0x10(r24)
	lwz      r25, 4(r24)
	cmplwi   r26, 0
	beq      lbl_80134414
	mr       r3, r26
	bl       getNext__8CollPartFv
	mr       r28, r3
	mr       r3, r26
	bl       getChild__8CollPartFv
	or.      r4, r3, r3
	beq      lbl_801343F4
	mr       r3, r31
	bl       releaseRec__8CollTreeFP8CollPart

lbl_801343F4:
	lwz      r3, 4(r31)
	mr       r4, r26
	bl       "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
	cmplwi   r28, 0
	beq      lbl_80134414
	mr       r3, r31
	mr       r4, r28
	bl       releaseRec__8CollTreeFP8CollPart

lbl_80134414:
	lwz      r3, 4(r31)
	mr       r4, r24
	bl       "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
	cmplwi   r25, 0
	beq      lbl_8013446C
	mr       r3, r25
	bl       getNext__8CollPartFv
	mr       r28, r3
	mr       r3, r25
	bl       getChild__8CollPartFv
	or.      r4, r3, r3
	beq      lbl_8013444C
	mr       r3, r31
	bl       releaseRec__8CollTreeFP8CollPart

lbl_8013444C:
	lwz      r3, 4(r31)
	mr       r4, r25
	bl       "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
	cmplwi   r28, 0
	beq      lbl_8013446C
	mr       r3, r31
	mr       r4, r28
	bl       releaseRec__8CollTreeFP8CollPart

lbl_8013446C:
	lwz      r3, 4(r31)
	mr       r4, r30
	bl       "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
	cmplwi   r23, 0
	beq      lbl_8013452C
	lwz      r25, 0x10(r23)
	lwz      r24, 4(r23)
	cmplwi   r25, 0
	beq      lbl_801344D4
	mr       r3, r25
	bl       getNext__8CollPartFv
	mr       r28, r3
	mr       r3, r25
	bl       getChild__8CollPartFv
	or.      r4, r3, r3
	beq      lbl_801344B4
	mr       r3, r31
	bl       releaseRec__8CollTreeFP8CollPart

lbl_801344B4:
	lwz      r3, 4(r31)
	mr       r4, r25
	bl       "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
	cmplwi   r28, 0
	beq      lbl_801344D4
	mr       r3, r31
	mr       r4, r28
	bl       releaseRec__8CollTreeFP8CollPart

lbl_801344D4:
	lwz      r3, 4(r31)
	mr       r4, r23
	bl       "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
	cmplwi   r24, 0
	beq      lbl_8013452C
	mr       r3, r24
	bl       getNext__8CollPartFv
	mr       r28, r3
	mr       r3, r24
	bl       getChild__8CollPartFv
	or.      r4, r3, r3
	beq      lbl_8013450C
	mr       r3, r31
	bl       releaseRec__8CollTreeFP8CollPart

lbl_8013450C:
	lwz      r3, 4(r31)
	mr       r4, r24
	bl       "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
	cmplwi   r28, 0
	beq      lbl_8013452C
	mr       r3, r31
	mr       r4, r28
	bl       releaseRec__8CollTreeFP8CollPart

lbl_8013452C:
	lmw      r23, 0xc(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80134540
 * Size:	000008
 */
CollPart* CollPart::getChild()
{
	/*
	lwz      r3, 0x10(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80134548
 * Size:	000008
 */
CollPart* CollPart::getNext()
{
	/*
	lwz      r3, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80134550
 * Size:	00003C
 */
void CollTree::checkCollision(CollTree*, CollPart**, CollPart**, Vector3f&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r9, r4
	mr       r8, r7
	stw      r0, 0x14(r1)
	mr       r0, r6
	mr       r6, r5
	lwz      r4, 0(r3)
	mr       r7, r0
	lwz      r5, 0(r9)
	bl
	"checkCollisionRec__8CollTreeFP8CollPartP8CollPartPP8CollPartPP8CollPartR10Vector3<f>"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013458C
 * Size:	000604
 */
void CollTree::checkCollisionRec(CollPart*, CollPart*, CollPart**, CollPart**,
                                 Vector3f&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr.       r25, r4
	  mr        r28, r3
	  mr        r26, r5
	  mr        r31, r6
	  mr        r29, r7
	  mr        r30, r8
	  beq-      .loc_0x34
	  cmplwi    r26, 0
	  bne-      .loc_0x3C

	.loc_0x34:
	  li        r3, 0
	  b         .loc_0x5F0

	.loc_0x3C:
	  mr        r3, r25
	  mr        r4, r26
	  mr        r5, r30
	  bl        0x1318
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x34C
	  lwz       r27, 0x10(r25)
	  li        r3, 0
	  cmplwi    r27, 0
	  beq-      .loc_0x78
	  lbz       r0, 0x58(r25)
	  cmplwi    r0, 0x1
	  beq-      .loc_0x78
	  cmplwi    r0, 0x2
	  bne-      .loc_0x7C

	.loc_0x78:
	  li        r3, 0x1

	.loc_0x7C:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC4
	  lwz       r0, 0x10(r26)
	  li        r3, 0
	  cmplwi    r0, 0
	  beq-      .loc_0xA8
	  lbz       r0, 0x58(r26)
	  cmplwi    r0, 0x1
	  beq-      .loc_0xA8
	  cmplwi    r0, 0x2
	  bne-      .loc_0xAC

	.loc_0xA8:
	  li        r3, 0x1

	.loc_0xAC:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC4
	  stw       r25, 0x0(r31)
	  li        r3, 0x1
	  stw       r26, 0x0(r29)
	  b         .loc_0x5F0

	.loc_0xC4:
	  cmplwi    r27, 0
	  beq-      .loc_0x208
	  beq-      .loc_0xD8
	  cmplwi    r26, 0
	  bne-      .loc_0xE0

	.loc_0xD8:
	  li        r3, 0
	  b         .loc_0x5F0

	.loc_0xE0:
	  mr        r3, r27
	  mr        r4, r26
	  mr        r5, r30
	  bl        0x1274
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x188
	  mr        r3, r27
	  bl        0x518
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x128
	  mr        r3, r26
	  bl        0x508
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x128
	  stw       r27, 0x0(r31)
	  li        r3, 0x1
	  stw       r26, 0x0(r29)
	  b         .loc_0x5F0

	.loc_0x128:
	  mr        r3, r27
	  bl        .loc_0x604
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x160
	  mr        r3, r27
	  bl        -0x188
	  mr        r4, r3
	  mr        r3, r28
	  mr        r5, r26
	  mr        r6, r31
	  mr        r7, r29
	  mr        r8, r30
	  bl        .loc_0x0
	  b         .loc_0x5F0

	.loc_0x160:
	  mr        r3, r26
	  bl        -0x1B0
	  mr        r5, r3
	  mr        r3, r28
	  mr        r4, r27
	  mr        r6, r31
	  mr        r7, r29
	  mr        r8, r30
	  bl        .loc_0x0
	  b         .loc_0x5F0

	.loc_0x188:
	  mr        r3, r27
	  bl        -0x1D0
	  cmplwi    r3, 0
	  beq-      .loc_0x1C0
	  mr        r3, r27
	  bl        -0x1E0
	  mr        r4, r3
	  mr        r3, r28
	  mr        r5, r26
	  mr        r6, r31
	  mr        r7, r29
	  mr        r8, r30
	  bl        .loc_0x0
	  b         .loc_0x5F0

	.loc_0x1C0:
	  mr        r3, r26
	  bl        -0x208
	  cmplwi    r3, 0
	  beq-      .loc_0x1F8
	  mr        r3, r26
	  bl        -0x218
	  mr        r5, r3
	  mr        r3, r28
	  mr        r4, r27
	  mr        r6, r31
	  mr        r7, r29
	  mr        r8, r30
	  bl        .loc_0x0
	  b         .loc_0x5F0

	.loc_0x1F8:
	  li        r3, 0
	  stw       r3, 0x0(r31)
	  stw       r3, 0x0(r29)
	  b         .loc_0x5F0

	.loc_0x208:
	  cmplwi    r25, 0
	  lwz       r26, 0x10(r26)
	  beq-      .loc_0x21C
	  cmplwi    r26, 0
	  bne-      .loc_0x224

	.loc_0x21C:
	  li        r3, 0
	  b         .loc_0x5F0

	.loc_0x224:
	  mr        r3, r25
	  mr        r4, r26
	  mr        r5, r30
	  bl        0x1130
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2CC
	  mr        r3, r25
	  bl        0x3D4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x26C
	  mr        r3, r26
	  bl        0x3C4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x26C
	  stw       r25, 0x0(r31)
	  li        r3, 0x1
	  stw       r26, 0x0(r29)
	  b         .loc_0x5F0

	.loc_0x26C:
	  mr        r3, r25
	  bl        .loc_0x604
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2A4
	  mr        r3, r25
	  bl        -0x2CC
	  mr        r4, r3
	  mr        r3, r28
	  mr        r5, r26
	  mr        r6, r31
	  mr        r7, r29
	  mr        r8, r30
	  bl        .loc_0x0
	  b         .loc_0x5F0

	.loc_0x2A4:
	  mr        r3, r26
	  bl        -0x2F4
	  mr        r5, r3
	  mr        r3, r28
	  mr        r4, r25
	  mr        r6, r31
	  mr        r7, r29
	  mr        r8, r30
	  bl        .loc_0x0
	  b         .loc_0x5F0

	.loc_0x2CC:
	  mr        r3, r25
	  bl        -0x314
	  cmplwi    r3, 0
	  beq-      .loc_0x304
	  mr        r3, r25
	  bl        -0x324
	  mr        r4, r3
	  mr        r3, r28
	  mr        r5, r26
	  mr        r6, r31
	  mr        r7, r29
	  mr        r8, r30
	  bl        .loc_0x0
	  b         .loc_0x5F0

	.loc_0x304:
	  mr        r3, r26
	  bl        -0x34C
	  cmplwi    r3, 0
	  beq-      .loc_0x33C
	  mr        r3, r26
	  bl        -0x35C
	  mr        r5, r3
	  mr        r3, r28
	  mr        r4, r25
	  mr        r6, r31
	  mr        r7, r29
	  mr        r8, r30
	  bl        .loc_0x0
	  b         .loc_0x5F0

	.loc_0x33C:
	  li        r3, 0
	  stw       r3, 0x0(r31)
	  stw       r3, 0x0(r29)
	  b         .loc_0x5F0

	.loc_0x34C:
	  lwz       r27, 0x4(r25)
	  cmplwi    r27, 0
	  beq-      .loc_0x494
	  beq-      .loc_0x364
	  cmplwi    r26, 0
	  bne-      .loc_0x36C

	.loc_0x364:
	  li        r3, 0
	  b         .loc_0x5F0

	.loc_0x36C:
	  mr        r3, r27
	  mr        r4, r26
	  mr        r5, r30
	  bl        0xFE8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x414
	  mr        r3, r27
	  bl        0x28C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3B4
	  mr        r3, r26
	  bl        0x27C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3B4
	  stw       r27, 0x0(r31)
	  li        r3, 0x1
	  stw       r26, 0x0(r29)
	  b         .loc_0x5F0

	.loc_0x3B4:
	  mr        r3, r27
	  bl        .loc_0x604
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3EC
	  mr        r3, r27
	  bl        -0x414
	  mr        r4, r3
	  mr        r3, r28
	  mr        r5, r26
	  mr        r6, r31
	  mr        r7, r29
	  mr        r8, r30
	  bl        .loc_0x0
	  b         .loc_0x5F0

	.loc_0x3EC:
	  mr        r3, r26
	  bl        -0x43C
	  mr        r5, r3
	  mr        r3, r28
	  mr        r4, r27
	  mr        r6, r31
	  mr        r7, r29
	  mr        r8, r30
	  bl        .loc_0x0
	  b         .loc_0x5F0

	.loc_0x414:
	  mr        r3, r27
	  bl        -0x45C
	  cmplwi    r3, 0
	  beq-      .loc_0x44C
	  mr        r3, r27
	  bl        -0x46C
	  mr        r4, r3
	  mr        r3, r28
	  mr        r5, r26
	  mr        r6, r31
	  mr        r7, r29
	  mr        r8, r30
	  bl        .loc_0x0
	  b         .loc_0x5F0

	.loc_0x44C:
	  mr        r3, r26
	  bl        -0x494
	  cmplwi    r3, 0
	  beq-      .loc_0x484
	  mr        r3, r26
	  bl        -0x4A4
	  mr        r5, r3
	  mr        r3, r28
	  mr        r4, r27
	  mr        r6, r31
	  mr        r7, r29
	  mr        r8, r30
	  bl        .loc_0x0
	  b         .loc_0x5F0

	.loc_0x484:
	  li        r3, 0
	  stw       r3, 0x0(r31)
	  stw       r3, 0x0(r29)
	  b         .loc_0x5F0

	.loc_0x494:
	  lwz       r26, 0x4(r26)
	  cmplwi    r26, 0
	  beq-      .loc_0x5E0
	  cmplwi    r25, 0
	  beq-      .loc_0x4B0
	  cmplwi    r26, 0
	  bne-      .loc_0x4B8

	.loc_0x4B0:
	  li        r3, 0
	  b         .loc_0x5F0

	.loc_0x4B8:
	  mr        r3, r25
	  mr        r4, r26
	  mr        r5, r30
	  bl        0xE9C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x560
	  mr        r3, r25
	  bl        0x140
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x500
	  mr        r3, r26
	  bl        0x130
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x500
	  stw       r25, 0x0(r31)
	  li        r3, 0x1
	  stw       r26, 0x0(r29)
	  b         .loc_0x5F0

	.loc_0x500:
	  mr        r3, r25
	  bl        .loc_0x604
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x538
	  mr        r3, r25
	  bl        -0x560
	  mr        r4, r3
	  mr        r3, r28
	  mr        r5, r26
	  mr        r6, r31
	  mr        r7, r29
	  mr        r8, r30
	  bl        .loc_0x0
	  b         .loc_0x5F0

	.loc_0x538:
	  mr        r3, r26
	  bl        -0x588
	  mr        r5, r3
	  mr        r3, r28
	  mr        r4, r25
	  mr        r6, r31
	  mr        r7, r29
	  mr        r8, r30
	  bl        .loc_0x0
	  b         .loc_0x5F0

	.loc_0x560:
	  mr        r3, r25
	  bl        -0x5A8
	  cmplwi    r3, 0
	  beq-      .loc_0x598
	  mr        r3, r25
	  bl        -0x5B8
	  mr        r4, r3
	  mr        r3, r28
	  mr        r5, r26
	  mr        r6, r31
	  mr        r7, r29
	  mr        r8, r30
	  bl        .loc_0x0
	  b         .loc_0x5F0

	.loc_0x598:
	  mr        r3, r26
	  bl        -0x5E0
	  cmplwi    r3, 0
	  beq-      .loc_0x5D0
	  mr        r3, r26
	  bl        -0x5F0
	  mr        r5, r3
	  mr        r3, r28
	  mr        r4, r25
	  mr        r6, r31
	  mr        r7, r29
	  mr        r8, r30
	  bl        .loc_0x0
	  b         .loc_0x5F0

	.loc_0x5D0:
	  li        r3, 0
	  stw       r3, 0x0(r31)
	  stw       r3, 0x0(r29)
	  b         .loc_0x5F0

	.loc_0x5E0:
	  li        r0, 0
	  li        r3, 0
	  stw       r0, 0x0(r31)
	  stw       r0, 0x0(r29)

	.loc_0x5F0:
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x604:
	*/
}

/*
 * --INFO--
 * Address:	80134B90
 * Size:	000010
 */
bool CollPart::isLeaf()
{
	/*
	lwz      r0, 0x10(r3)
	cntlzw   r0, r0
	srwi     r3, r0, 5
	blr
	*/
}

/*
 * --INFO--
 * Address:	80134BA0
 * Size:	000030
 */
bool CollPart::isPrim()
{
	/*
	lwz      r0, 0x10(r3)
	li       r4, 0
	cmplwi   r0, 0
	beq      lbl_80134BC4
	lbz      r0, 0x58(r3)
	cmplwi   r0, 1
	beq      lbl_80134BC4
	cmplwi   r0, 2
	bne      lbl_80134BC8

lbl_80134BC4:
	li       r4, 1

lbl_80134BC8:
	mr       r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	80134BD0
 * Size:	00002C
 */
void CollTree::checkCollision(Sys::Sphere&, IDelegate1<CollPart*>*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_80134BEC
	bl       "checkCollision__8CollPartFRQ23Sys6SphereP22IDelegate1<P8CollPart>"

lbl_80134BEC:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80134BFC
 * Size:	0008B8
 */
void CollPart::checkCollision(Sys::Sphere&, IDelegate1<CollPart*>*)
{
	/*
	stwu     r1, -0x200(r1)
	mflr     r0
	stw      r0, 0x204(r1)
	stfd     f31, 0x1f0(r1)
	psq_st   f31, 504(r1), 0, qr0
	stfd     f30, 0x1e0(r1)
	psq_st   f30, 488(r1), 0, qr0
	stmw     r26, 0x1c8(r1)
	mr       r28, r3
	mr       r29, r4
	lwz      r7, 0x10(r3)
	mr       r30, r5
	li       r3, 0
	cmplwi   r7, 0
	beq      lbl_80134C4C
	lbz      r0, 0x58(r28)
	cmplwi   r0, 1
	beq      lbl_80134C4C
	cmplwi   r0, 2
	bne      lbl_80134C50

lbl_80134C4C:
	li       r3, 1

lbl_80134C50:
	clrlwi.  r0, r3, 0x18
	beq      lbl_80134D38
	lbz      r0, 0x58(r28)
	cmplwi   r0, 0
	bne      lbl_80134CB4
	lfs      f1, 0x1c(r28)
	mr       r4, r29
	lfs      f0, 0x4c(r28)
	addi     r3, r1, 0xd8
	stfs     f0, 0xd8(r1)
	lfs      f0, 0x50(r28)
	stfs     f0, 0xdc(r1)
	lfs      f0, 0x54(r28)
	stfs     f0, 0xe0(r1)
	stfs     f1, 0xe4(r1)
	bl       intersect__Q23Sys6SphereFRQ23Sys6Sphere
	clrlwi.  r0, r3, 0x18
	beq      lbl_80134D38
	mr       r3, r30
	mr       r4, r28
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80134D38

lbl_80134CB4:
	cmplwi   r0, 1
	beq      lbl_80134CC4
	cmplwi   r0, 2
	bne      lbl_80134D38

lbl_80134CC4:
	lfs      f2, 0x1c(r7)
	mr       r4, r29
	lfs      f1, 0x1c(r28)
	addi     r3, r1, 0x1a8
	lfs      f0, 0x4c(r28)
	addi     r5, r1, 0xcc
	addi     r6, r1, 0x20
	stfs     f0, 0x1a8(r1)
	lfs      f0, 0x50(r28)
	stfs     f0, 0x1ac(r1)
	lfs      f0, 0x54(r28)
	stfs     f0, 0x1b0(r1)
	lfs      f0, 0x4c(r7)
	stfs     f0, 0x1b4(r1)
	lfs      f0, 0x50(r7)
	stfs     f0, 0x1b8(r1)
	lfs      f0, 0x54(r7)
	stfs     f0, 0x1bc(r1)
	stfs     f1, 0x1c0(r1)
	stfs     f2, 0x1c4(r1)
	bl       "collide__Q23Sys4TubeFRQ23Sys6SphereR10Vector3<f>Rf"
	clrlwi.  r0, r3, 0x18
	beq      lbl_80134D38
	mr       r3, r30
	mr       r4, r28
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80134D38:
	lwz      r31, 0x10(r28)
	cmplwi   r31, 0
	beq      lbl_801350E4
	mr       r3, r31
	li       r27, 0
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80134D78
	mr       r3, r31
	bl       isTube__8CollPartFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80134D78
	mr       r3, r31
	bl       isTubeTree__8CollPartFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80134D7C

lbl_80134D78:
	li       r27, 1

lbl_80134D7C:
	clrlwi.  r0, r27, 0x18
	beq      lbl_80134E54
	lbz      r0, 0x58(r31)
	cmplwi   r0, 0
	bne      lbl_80134DD4
	lfs      f31, 0x1c(r31)
	addi     r3, r1, 0xb0
	addi     r4, r31, 0x4c
	bl       "__ct__10Vector3<f>FRC10Vector3<f>"
	stfs     f31, 0xbc(r1)
	mr       r4, r29
	addi     r3, r1, 0xb0
	bl       intersect__Q23Sys6SphereFRQ23Sys6Sphere
	clrlwi.  r0, r3, 0x18
	beq      lbl_80134E54
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80134E54

lbl_80134DD4:
	cmplwi   r0, 1
	beq      lbl_80134DE4
	cmplwi   r0, 2
	bne      lbl_80134E54

lbl_80134DE4:
	mr       r3, r31
	bl       getChild__8CollPartFv
	lfs      f30, 0x1c(r3)
	mr       r3, r31
	lfs      f31, 0x1c(r31)
	bl       getChild__8CollPartFv
	addi     r27, r3, 0x4c
	addi     r3, r1, 0x188
	addi     r4, r31, 0x4c
	bl       "__ct__10Vector3<f>FRC10Vector3<f>"
	mr       r4, r27
	addi     r3, r1, 0x194
	bl       "__ct__10Vector3<f>FRC10Vector3<f>"
	stfs     f31, 0x1a0(r1)
	mr       r4, r29
	addi     r3, r1, 0x188
	addi     r5, r1, 0xc0
	stfs     f30, 0x1a4(r1)
	addi     r6, r1, 0x1c
	bl       "collide__Q23Sys4TubeFRQ23Sys6SphereR10Vector3<f>Rf"
	clrlwi.  r0, r3, 0x18
	beq      lbl_80134E54
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80134E54:
	lwz      r0, 0x10(r31)
	cmplwi   r0, 0
	beq      lbl_80134F9C
	mr       r3, r31
	bl       getChild__8CollPartFv
	mr       r26, r3
	bl       isPrim__8CollPartFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80134F54
	mr       r3, r26
	bl       isSphere__8CollPartFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80134EC8
	lfs      f1, 0x1c(r26)
	addi     r3, r1, 0x78
	addi     r4, r26, 0x4c
	bl       "__ct__Q23Sys6SphereFR10Vector3<f>f"
	mr       r4, r29
	addi     r3, r1, 0x78
	bl       intersect__Q23Sys6SphereFRQ23Sys6Sphere
	clrlwi.  r0, r3, 0x18
	beq      lbl_80134F54
	mr       r3, r30
	mr       r4, r26
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80134F54

lbl_80134EC8:
	mr       r3, r26
	bl       isTube__8CollPartFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80134EE8
	mr       r3, r26
	bl       isTubeTree__8CollPartFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80134F54

lbl_80134EE8:
	mr       r3, r26
	bl       getChild__8CollPartFv
	mr       r27, r3
	mr       r3, r26
	bl       getChild__8CollPartFv
	mr       r5, r3
	lfs      f1, 0x1c(r26)
	lfs      f2, 0x1c(r27)
	addi     r3, r1, 0x148
	addi     r4, r26, 0x4c
	addi     r5, r5, 0x4c
	bl       "__ct__Q23Sys4TubeFR10Vector3<f>R10Vector3<f>ff"
	addi     r3, r1, 0x88
	bl       "__ct__10Vector3<f>Fv"
	mr       r4, r29
	addi     r3, r1, 0x148
	addi     r5, r1, 0x88
	addi     r6, r1, 0x14
	bl       "collide__Q23Sys4TubeFRQ23Sys6SphereR10Vector3<f>Rf"
	clrlwi.  r0, r3, 0x18
	beq      lbl_80134F54
	mr       r3, r30
	mr       r4, r26
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80134F54:
	mr       r3, r26
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80134F78
	mr       r3, r26
	bl       getChild__8CollPartFv
	mr       r4, r29
	mr       r5, r30
	bl       "checkCollision__8CollPartFRQ23Sys6SphereP22IDelegate1<P8CollPart>"

lbl_80134F78:
	mr       r3, r26
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80134F9C
	mr       r3, r26
	bl       getNext__8CollPartFv
	mr       r4, r29
	mr       r5, r30
	bl       "checkCollision__8CollPartFRQ23Sys6SphereP22IDelegate1<P8CollPart>"

lbl_80134F9C:
	lwz      r0, 4(r31)
	cmplwi   r0, 0
	beq      lbl_801350E4
	mr       r3, r31
	bl       getNext__8CollPartFv
	mr       r26, r3
	bl       isPrim__8CollPartFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013509C
	mr       r3, r26
	bl       isSphere__8CollPartFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80135010
	lfs      f1, 0x1c(r26)
	addi     r3, r1, 0x5c
	addi     r4, r26, 0x4c
	bl       "__ct__Q23Sys6SphereFR10Vector3<f>f"
	mr       r4, r29
	addi     r3, r1, 0x5c
	bl       intersect__Q23Sys6SphereFRQ23Sys6Sphere
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013509C
	mr       r3, r30
	mr       r4, r26
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_8013509C

lbl_80135010:
	mr       r3, r26
	bl       isTube__8CollPartFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80135030
	mr       r3, r26
	bl       isTubeTree__8CollPartFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013509C

lbl_80135030:
	mr       r3, r26
	bl       getChild__8CollPartFv
	mr       r31, r3
	mr       r3, r26
	bl       getChild__8CollPartFv
	mr       r5, r3
	lfs      f1, 0x1c(r26)
	lfs      f2, 0x1c(r31)
	addi     r3, r1, 0x128
	addi     r4, r26, 0x4c
	addi     r5, r5, 0x4c
	bl       "__ct__Q23Sys4TubeFR10Vector3<f>R10Vector3<f>ff"
	addi     r3, r1, 0x6c
	bl       "__ct__10Vector3<f>Fv"
	mr       r4, r29
	addi     r3, r1, 0x128
	addi     r5, r1, 0x6c
	addi     r6, r1, 0x10
	bl       "collide__Q23Sys4TubeFRQ23Sys6SphereR10Vector3<f>Rf"
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013509C
	mr       r3, r30
	mr       r4, r26
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8013509C:
	mr       r3, r26
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_801350C0
	mr       r3, r26
	bl       getChild__8CollPartFv
	mr       r4, r29
	mr       r5, r30
	bl       "checkCollision__8CollPartFRQ23Sys6SphereP22IDelegate1<P8CollPart>"

lbl_801350C0:
	mr       r3, r26
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_801350E4
	mr       r3, r26
	bl       getNext__8CollPartFv
	mr       r4, r29
	mr       r5, r30
	bl       "checkCollision__8CollPartFRQ23Sys6SphereP22IDelegate1<P8CollPart>"

lbl_801350E4:
	lwz      r31, 4(r28)
	cmplwi   r31, 0
	beq      lbl_80135490
	mr       r3, r31
	li       r28, 0
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80135124
	mr       r3, r31
	bl       isTube__8CollPartFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80135124
	mr       r3, r31
	bl       isTubeTree__8CollPartFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80135128

lbl_80135124:
	li       r28, 1

lbl_80135128:
	clrlwi.  r0, r28, 0x18
	beq      lbl_80135200
	lbz      r0, 0x58(r31)
	cmplwi   r0, 0
	bne      lbl_80135180
	lfs      f30, 0x1c(r31)
	addi     r3, r1, 0x94
	addi     r4, r31, 0x4c
	bl       "__ct__10Vector3<f>FRC10Vector3<f>"
	stfs     f30, 0xa0(r1)
	mr       r4, r29
	addi     r3, r1, 0x94
	bl       intersect__Q23Sys6SphereFRQ23Sys6Sphere
	clrlwi.  r0, r3, 0x18
	beq      lbl_80135200
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80135200

lbl_80135180:
	cmplwi   r0, 1
	beq      lbl_80135190
	cmplwi   r0, 2
	bne      lbl_80135200

lbl_80135190:
	mr       r3, r31
	bl       getChild__8CollPartFv
	lfs      f31, 0x1c(r3)
	mr       r3, r31
	lfs      f30, 0x1c(r31)
	bl       getChild__8CollPartFv
	addi     r26, r3, 0x4c
	addi     r3, r1, 0x168
	addi     r4, r31, 0x4c
	bl       "__ct__10Vector3<f>FRC10Vector3<f>"
	mr       r4, r26
	addi     r3, r1, 0x174
	bl       "__ct__10Vector3<f>FRC10Vector3<f>"
	stfs     f30, 0x180(r1)
	mr       r4, r29
	addi     r3, r1, 0x168
	addi     r5, r1, 0xa4
	stfs     f31, 0x184(r1)
	addi     r6, r1, 0x18
	bl       "collide__Q23Sys4TubeFRQ23Sys6SphereR10Vector3<f>Rf"
	clrlwi.  r0, r3, 0x18
	beq      lbl_80135200
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80135200:
	lwz      r0, 0x10(r31)
	cmplwi   r0, 0
	beq      lbl_80135348
	mr       r3, r31
	bl       getChild__8CollPartFv
	mr       r26, r3
	bl       isPrim__8CollPartFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80135300
	mr       r3, r26
	bl       isSphere__8CollPartFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80135274
	lfs      f1, 0x1c(r26)
	addi     r3, r1, 0x40
	addi     r4, r26, 0x4c
	bl       "__ct__Q23Sys6SphereFR10Vector3<f>f"
	mr       r4, r29
	addi     r3, r1, 0x40
	bl       intersect__Q23Sys6SphereFRQ23Sys6Sphere
	clrlwi.  r0, r3, 0x18
	beq      lbl_80135300
	mr       r3, r30
	mr       r4, r26
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80135300

lbl_80135274:
	mr       r3, r26
	bl       isTube__8CollPartFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80135294
	mr       r3, r26
	bl       isTubeTree__8CollPartFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80135300

lbl_80135294:
	mr       r3, r26
	bl       getChild__8CollPartFv
	mr       r28, r3
	mr       r3, r26
	bl       getChild__8CollPartFv
	mr       r5, r3
	lfs      f1, 0x1c(r26)
	lfs      f2, 0x1c(r28)
	addi     r3, r1, 0x108
	addi     r4, r26, 0x4c
	addi     r5, r5, 0x4c
	bl       "__ct__Q23Sys4TubeFR10Vector3<f>R10Vector3<f>ff"
	addi     r3, r1, 0x50
	bl       "__ct__10Vector3<f>Fv"
	mr       r4, r29
	addi     r3, r1, 0x108
	addi     r5, r1, 0x50
	addi     r6, r1, 0xc
	bl       "collide__Q23Sys4TubeFRQ23Sys6SphereR10Vector3<f>Rf"
	clrlwi.  r0, r3, 0x18
	beq      lbl_80135300
	mr       r3, r30
	mr       r4, r26
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80135300:
	mr       r3, r26
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80135324
	mr       r3, r26
	bl       getChild__8CollPartFv
	mr       r4, r29
	mr       r5, r30
	bl       "checkCollision__8CollPartFRQ23Sys6SphereP22IDelegate1<P8CollPart>"

lbl_80135324:
	mr       r3, r26
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80135348
	mr       r3, r26
	bl       getNext__8CollPartFv
	mr       r4, r29
	mr       r5, r30
	bl       "checkCollision__8CollPartFRQ23Sys6SphereP22IDelegate1<P8CollPart>"

lbl_80135348:
	lwz      r0, 4(r31)
	cmplwi   r0, 0
	beq      lbl_80135490
	mr       r3, r31
	bl       getNext__8CollPartFv
	mr       r26, r3
	bl       isPrim__8CollPartFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80135448
	mr       r3, r26
	bl       isSphere__8CollPartFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801353BC
	lfs      f1, 0x1c(r26)
	addi     r3, r1, 0x24
	addi     r4, r26, 0x4c
	bl       "__ct__Q23Sys6SphereFR10Vector3<f>f"
	mr       r4, r29
	addi     r3, r1, 0x24
	bl       intersect__Q23Sys6SphereFRQ23Sys6Sphere
	clrlwi.  r0, r3, 0x18
	beq      lbl_80135448
	mr       r3, r30
	mr       r4, r26
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80135448

lbl_801353BC:
	mr       r3, r26
	bl       isTube__8CollPartFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_801353DC
	mr       r3, r26
	bl       isTubeTree__8CollPartFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80135448

lbl_801353DC:
	mr       r3, r26
	bl       getChild__8CollPartFv
	mr       r28, r3
	mr       r3, r26
	bl       getChild__8CollPartFv
	mr       r5, r3
	lfs      f1, 0x1c(r26)
	lfs      f2, 0x1c(r28)
	addi     r3, r1, 0xe8
	addi     r4, r26, 0x4c
	addi     r5, r5, 0x4c
	bl       "__ct__Q23Sys4TubeFR10Vector3<f>R10Vector3<f>ff"
	addi     r3, r1, 0x34
	bl       "__ct__10Vector3<f>Fv"
	mr       r4, r29
	addi     r3, r1, 0xe8
	addi     r5, r1, 0x34
	addi     r6, r1, 8
	bl       "collide__Q23Sys4TubeFRQ23Sys6SphereR10Vector3<f>Rf"
	clrlwi.  r0, r3, 0x18
	beq      lbl_80135448
	mr       r3, r30
	mr       r4, r26
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80135448:
	mr       r3, r26
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_8013546C
	mr       r3, r26
	bl       getChild__8CollPartFv
	mr       r4, r29
	mr       r5, r30
	bl       "checkCollision__8CollPartFRQ23Sys6SphereP22IDelegate1<P8CollPart>"

lbl_8013546C:
	mr       r3, r26
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80135490
	mr       r3, r26
	bl       getNext__8CollPartFv
	mr       r4, r29
	mr       r5, r30
	bl       "checkCollision__8CollPartFRQ23Sys6SphereP22IDelegate1<P8CollPart>"

lbl_80135490:
	psq_l    f31, 504(r1), 0, qr0
	lfd      f31, 0x1f0(r1)
	psq_l    f30, 488(r1), 0, qr0
	lfd      f30, 0x1e0(r1)
	lmw      r26, 0x1c8(r1)
	lwz      r0, 0x204(r1)
	mtlr     r0
	addi     r1, r1, 0x200
	blr
	*/
}

namespace Sys {

/*
 * --INFO--
 * Address:	801354B4
 * Size:	00003C
 */
Tube::Tube(Vector3f&, Vector3f&, float, float)
{
	/*
	lfs      f0, 0(r4)
	stfs     f0, 0(r3)
	lfs      f0, 4(r4)
	stfs     f0, 4(r3)
	lfs      f0, 8(r4)
	stfs     f0, 8(r3)
	lfs      f0, 0(r5)
	stfs     f0, 0xc(r3)
	lfs      f0, 4(r5)
	stfs     f0, 0x10(r3)
	lfs      f0, 8(r5)
	stfs     f0, 0x14(r3)
	stfs     f1, 0x18(r3)
	stfs     f2, 0x1c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801354F0
 * Size:	000020
 */
Sphere::Sphere(Vector3f&, float)
{
	/*
	lfs      f0, 0(r4)
	stfs     f0, 0(r3)
	lfs      f0, 4(r4)
	stfs     f0, 4(r3)
	lfs      f0, 8(r4)
	stfs     f0, 8(r3)
	stfs     f1, 0xc(r3)
	blr
	*/
}

} // namespace Sys

/*
 * --INFO--
 * Address:	80135510
 * Size:	000010
 */
bool CollPart::isSphere()
{
	/*
	lbz      r0, 0x58(r3)
	cntlzw   r0, r0
	srwi     r3, r0, 5
	blr
	*/
}

/*
 * --INFO--
 * Address:	80135520
 * Size:	00001C
 */
Vector3f::Vector3(const Vector3f&)
{
	/*
	lfs      f0, 0(r4)
	lfs      f1, 4(r4)
	stfs     f0, 0(r3)
	lfs      f0, 8(r4)
	stfs     f1, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013553C
 * Size:	000014
 */
bool CollPart::isTubeTree()
{
	/*
	lbz      r0, 0x58(r3)
	subfic   r0, r0, 2
	cntlzw   r0, r0
	srwi     r3, r0, 5
	blr
	*/
}

/*
 * --INFO--
 * Address:	80135550
 * Size:	000014
 */
bool CollPart::isTube()
{
	/*
	lbz      r0, 0x58(r3)
	subfic   r0, r0, 1
	cntlzw   r0, r0
	srwi     r3, r0, 5
	blr
	*/
}

/*
 * --INFO--
 * Address:	80135564
 * Size:	000198
 */
void CollTree::checkCollisionMulti(CollTree*,
                                   IDelegate3<CollPart*, CollPart*, Vector3f&>*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  stw       r28, 0x20(r1)
	  mr        r28, r5
	  lwz       r31, 0x0(r4)
	  lwz       r30, 0x0(r3)
	  b         .loc_0x170

	.loc_0x2C:
	  mr        r29, r31
	  b         .loc_0x164

	.loc_0x34:
	  mr        r3, r30
	  mr        r4, r29
	  addi      r5, r1, 0x8
	  bl        0x348
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x160
	  lwz       r3, 0x10(r30)
	  li        r4, 0
	  cmplwi    r3, 0
	  beq-      .loc_0x70
	  lbz       r0, 0x58(r30)
	  cmplwi    r0, 0x1
	  beq-      .loc_0x70
	  cmplwi    r0, 0x2
	  bne-      .loc_0x74

	.loc_0x70:
	  li        r4, 0x1

	.loc_0x74:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x104
	  lwz       r0, 0x10(r29)
	  li        r4, 0
	  cmplwi    r0, 0
	  beq-      .loc_0xA0
	  lbz       r0, 0x58(r29)
	  cmplwi    r0, 0x1
	  beq-      .loc_0xA0
	  cmplwi    r0, 0x2
	  bne-      .loc_0xA4

	.loc_0xA0:
	  li        r4, 0x1

	.loc_0xA4:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x104
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  mr        r5, r29
	  addi      r6, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x10(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0xE8
	  mr        r4, r29
	  mr        r5, r28
	  bl        .loc_0x198
	  b         .loc_0x160

	.loc_0xE8:
	  lwz       r4, 0x10(r29)
	  cmplwi    r4, 0
	  beq-      .loc_0x160
	  mr        r3, r30
	  mr        r5, r28
	  bl        .loc_0x198
	  b         .loc_0x160

	.loc_0x104:
	  cmplwi    r3, 0
	  bne-      .loc_0x120
	  lwz       r4, 0x10(r29)
	  mr        r3, r30
	  mr        r5, r28
	  bl        .loc_0x198
	  b         .loc_0x160

	.loc_0x120:
	  lwz       r4, 0x10(r29)
	  cmplwi    r4, 0
	  bne-      .loc_0x13C
	  mr        r4, r29
	  mr        r5, r28
	  bl        .loc_0x198
	  b         .loc_0x160

	.loc_0x13C:
	  cmplwi    r3, 0
	  beq-      .loc_0x154
	  mr        r4, r29
	  mr        r5, r28
	  bl        .loc_0x198
	  b         .loc_0x160

	.loc_0x154:
	  mr        r3, r30
	  mr        r5, r28
	  bl        .loc_0x198

	.loc_0x160:
	  lwz       r29, 0x4(r29)

	.loc_0x164:
	  cmplwi    r29, 0
	  bne+      .loc_0x34
	  lwz       r30, 0x4(r30)

	.loc_0x170:
	  cmplwi    r30, 0
	  bne+      .loc_0x2C
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x198:
	*/
}

/*
 * --INFO--
 * Address:	801356FC
 * Size:	0001F0
 */
void CollPart::checkCollisionMulti(CollPart*,
                                   IDelegate3<CollPart*, CollPart*, Vector3f&>*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r29, r5
	  stw       r28, 0x20(r1)
	  mr        r28, r4
	  b         .loc_0x1C8

	.loc_0x2C:
	  mr        r30, r28
	  b         .loc_0x1BC

	.loc_0x34:
	  mr        r3, r31
	  mr        r4, r30
	  addi      r5, r1, 0x8
	  bl        .loc_0x1F0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x16C
	  lwz       r4, 0x10(r31)
	  li        r3, 0
	  cmplwi    r4, 0
	  beq-      .loc_0x70
	  lbz       r0, 0x58(r31)
	  cmplwi    r0, 0x1
	  beq-      .loc_0x70
	  cmplwi    r0, 0x2
	  bne-      .loc_0x74

	.loc_0x70:
	  li        r3, 0x1

	.loc_0x74:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x104
	  lwz       r0, 0x10(r30)
	  li        r3, 0
	  cmplwi    r0, 0
	  beq-      .loc_0xA0
	  lbz       r0, 0x58(r30)
	  cmplwi    r0, 0x1
	  beq-      .loc_0xA0
	  cmplwi    r0, 0x2
	  bne-      .loc_0xA4

	.loc_0xA0:
	  li        r3, 0x1

	.loc_0xA4:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x104
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r12, 0x0(r29)
	  mr        r5, r30
	  addi      r6, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x10(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0xE8
	  mr        r3, r31
	  mr        r5, r29
	  bl        .loc_0x0
	  b         .loc_0x1B8

	.loc_0xE8:
	  lwz       r4, 0x10(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x1B8
	  mr        r3, r30
	  mr        r5, r29
	  bl        .loc_0x0
	  b         .loc_0x1B8

	.loc_0x104:
	  cmplwi    r4, 0
	  bne-      .loc_0x120
	  lwz       r4, 0x10(r30)
	  mr        r3, r31
	  mr        r5, r29
	  bl        .loc_0x0
	  b         .loc_0x1B8

	.loc_0x120:
	  lwz       r0, 0x10(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x13C
	  mr        r3, r30
	  mr        r5, r29
	  bl        .loc_0x0
	  b         .loc_0x1B8

	.loc_0x13C:
	  cmplwi    r4, 0
	  beq-      .loc_0x158
	  mr        r3, r4
	  mr        r4, r30
	  mr        r5, r29
	  bl        .loc_0x0
	  b         .loc_0x1B8

	.loc_0x158:
	  mr        r3, r31
	  mr        r4, r0
	  mr        r5, r29
	  bl        .loc_0x0
	  b         .loc_0x1B8

	.loc_0x16C:
	  lbz       r0, 0x58(r31)
	  cmplwi    r0, 0x1
	  beq-      .loc_0x180
	  cmplwi    r0, 0x2
	  bne-      .loc_0x194

	.loc_0x180:
	  lwz       r4, 0x10(r31)
	  mr        r3, r30
	  mr        r5, r29
	  bl        .loc_0x0
	  b         .loc_0x1B8

	.loc_0x194:
	  lbz       r0, 0x58(r30)
	  cmplwi    r0, 0x1
	  beq-      .loc_0x1A8
	  cmplwi    r0, 0x2
	  bne-      .loc_0x1B8

	.loc_0x1A8:
	  lwz       r4, 0x10(r30)
	  mr        r3, r31
	  mr        r5, r29
	  bl        .loc_0x0

	.loc_0x1B8:
	  lwz       r30, 0x4(r30)

	.loc_0x1BC:
	  cmplwi    r30, 0
	  bne+      .loc_0x34
	  lwz       r31, 0x4(r31)

	.loc_0x1C8:
	  cmplwi    r31, 0
	  bne+      .loc_0x2C
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x1F0:
	*/
}

/*
 * --INFO--
 * Address:	801358EC
 * Size:	0001B0
 */
void CollPart::collide(CollPart*, Vector3f&)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	lbz      r6, 0x58(r3)
	cmplwi   r6, 0
	bne      lbl_80135960
	lbz      r0, 0x58(r4)
	cmplwi   r0, 0
	bne      lbl_80135960
	lfs      f1, 0x1c(r3)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x40(r1)
	lfs      f0, 0x50(r3)
	stfs     f0, 0x44(r1)
	lfs      f0, 0x54(r3)
	addi     r3, r1, 0x40
	stfs     f0, 0x48(r1)
	stfs     f1, 0x4c(r1)
	lfs      f1, 0x1c(r4)
	lfs      f0, 0x4c(r4)
	stfs     f0, 0x30(r1)
	lfs      f0, 0x50(r4)
	stfs     f0, 0x34(r1)
	lfs      f0, 0x54(r4)
	addi     r4, r1, 0x30
	stfs     f0, 0x38(r1)
	stfs     f1, 0x3c(r1)
	bl       "intersect__Q23Sys6SphereFRQ23Sys6SphereR10Vector3<f>"
	b        lbl_80135A8C

lbl_80135960:
	cmplwi   r6, 0
	bne      lbl_801359F4
	lbz      r0, 0x58(r4)
	cmplwi   r0, 1
	beq      lbl_8013597C
	cmplwi   r0, 2
	bne      lbl_801359F4

lbl_8013597C:
	lfs      f1, 0x1c(r3)
	addi     r6, r1, 0xc
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x20(r1)
	lfs      f0, 0x50(r3)
	stfs     f0, 0x24(r1)
	lfs      f0, 0x54(r3)
	addi     r3, r1, 0x70
	stfs     f0, 0x28(r1)
	stfs     f1, 0x2c(r1)
	lwz      r7, 0x10(r4)
	lfs      f1, 0x1c(r4)
	lfs      f2, 0x1c(r7)
	lfs      f0, 0x4c(r4)
	stfs     f0, 0x70(r1)
	lfs      f0, 0x50(r4)
	stfs     f0, 0x74(r1)
	lfs      f0, 0x54(r4)
	addi     r4, r1, 0x20
	stfs     f0, 0x78(r1)
	lfs      f0, 0x4c(r7)
	stfs     f0, 0x7c(r1)
	lfs      f0, 0x50(r7)
	stfs     f0, 0x80(r1)
	lfs      f0, 0x54(r7)
	stfs     f0, 0x84(r1)
	stfs     f1, 0x88(r1)
	stfs     f2, 0x8c(r1)
	bl       "collide__Q23Sys4TubeFRQ23Sys6SphereR10Vector3<f>Rf"
	b        lbl_80135A8C

lbl_801359F4:
	cmplwi   r6, 1
	beq      lbl_80135A04
	cmplwi   r6, 2
	bne      lbl_80135A88

lbl_80135A04:
	lbz      r0, 0x58(r4)
	cmplwi   r0, 0
	bne      lbl_80135A88
	lwz      r7, 0x10(r3)
	addi     r6, r1, 8
	lfs      f1, 0x1c(r3)
	lfs      f2, 0x1c(r7)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x50(r1)
	lfs      f0, 0x50(r3)
	stfs     f0, 0x54(r1)
	lfs      f0, 0x54(r3)
	addi     r3, r1, 0x50
	stfs     f0, 0x58(r1)
	lfs      f0, 0x4c(r7)
	stfs     f0, 0x5c(r1)
	lfs      f0, 0x50(r7)
	stfs     f0, 0x60(r1)
	lfs      f0, 0x54(r7)
	stfs     f0, 0x64(r1)
	stfs     f1, 0x68(r1)
	stfs     f2, 0x6c(r1)
	lfs      f1, 0x1c(r4)
	lfs      f0, 0x4c(r4)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x50(r4)
	stfs     f0, 0x14(r1)
	lfs      f0, 0x54(r4)
	addi     r4, r1, 0x10
	stfs     f0, 0x18(r1)
	stfs     f1, 0x1c(r1)
	bl       "collide__Q23Sys4TubeFRQ23Sys6SphereR10Vector3<f>Rf"
	b        lbl_80135A8C

lbl_80135A88:
	li       r3, 0

lbl_80135A8C:
	lwz      r0, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	80135A9C
 * Size:	00002C
 */
void CollTree::update()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_80135AB8
	bl       update__8CollPartFv

lbl_80135AB8:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80135AC8
 * Size:	00002C
 */
void CollTree::attachModel(SysShape::MtxObject*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_80135AE4
	bl       attachModel__8CollPartFPQ28SysShape9MtxObject

lbl_80135AE4:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80135AF4
 * Size:	000350
 */
void CollPart::attachModel(SysShape::MtxObject*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r31, r4
	mr       r30, r3
	stw      r31, 0x5c(r3)
	lwz      r28, 4(r3)
	cmplwi   r28, 0
	beq      lbl_80135CA0
	stw      r31, 0x5c(r28)
	lwz      r27, 4(r28)
	cmplwi   r27, 0
	beq      lbl_80135BE0
	stw      r31, 0x5c(r27)
	lwz      r0, 4(r27)
	cmplwi   r0, 0
	beq      lbl_80135B88
	mr       r3, r27
	bl       getNext__8CollPartFv
	stw      r31, 0x5c(r3)
	mr       r29, r3
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80135B68
	mr       r3, r29
	bl       getNext__8CollPartFv
	mr       r4, r31
	bl       attachModel__8CollPartFPQ28SysShape9MtxObject

lbl_80135B68:
	mr       r3, r29
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80135B88
	mr       r3, r29
	bl       getChild__8CollPartFv
	mr       r4, r31
	bl       attachModel__8CollPartFPQ28SysShape9MtxObject

lbl_80135B88:
	lwz      r0, 0x10(r27)
	cmplwi   r0, 0
	beq      lbl_80135BE0
	mr       r3, r27
	bl       getChild__8CollPartFv
	stw      r31, 0x5c(r3)
	mr       r29, r3
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80135BC0
	mr       r3, r29
	bl       getNext__8CollPartFv
	mr       r4, r31
	bl       attachModel__8CollPartFPQ28SysShape9MtxObject

lbl_80135BC0:
	mr       r3, r29
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80135BE0
	mr       r3, r29
	bl       getChild__8CollPartFv
	mr       r4, r31
	bl       attachModel__8CollPartFPQ28SysShape9MtxObject

lbl_80135BE0:
	lwz      r27, 0x10(r28)
	cmplwi   r27, 0
	beq      lbl_80135CA0
	stw      r31, 0x5c(r27)
	lwz      r0, 4(r27)
	cmplwi   r0, 0
	beq      lbl_80135C48
	mr       r3, r27
	bl       getNext__8CollPartFv
	stw      r31, 0x5c(r3)
	mr       r29, r3
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80135C28
	mr       r3, r29
	bl       getNext__8CollPartFv
	mr       r4, r31
	bl       attachModel__8CollPartFPQ28SysShape9MtxObject

lbl_80135C28:
	mr       r3, r29
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80135C48
	mr       r3, r29
	bl       getChild__8CollPartFv
	mr       r4, r31
	bl       attachModel__8CollPartFPQ28SysShape9MtxObject

lbl_80135C48:
	lwz      r0, 0x10(r27)
	cmplwi   r0, 0
	beq      lbl_80135CA0
	mr       r3, r27
	bl       getChild__8CollPartFv
	stw      r31, 0x5c(r3)
	mr       r29, r3
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80135C80
	mr       r3, r29
	bl       getNext__8CollPartFv
	mr       r4, r31
	bl       attachModel__8CollPartFPQ28SysShape9MtxObject

lbl_80135C80:
	mr       r3, r29
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80135CA0
	mr       r3, r29
	bl       getChild__8CollPartFv
	mr       r4, r31
	bl       attachModel__8CollPartFPQ28SysShape9MtxObject

lbl_80135CA0:
	lwz      r27, 0x10(r30)
	cmplwi   r27, 0
	beq      lbl_80135E30
	stw      r31, 0x5c(r27)
	lwz      r28, 4(r27)
	cmplwi   r28, 0
	beq      lbl_80135D70
	stw      r31, 0x5c(r28)
	lwz      r0, 4(r28)
	cmplwi   r0, 0
	beq      lbl_80135D18
	mr       r3, r28
	bl       getNext__8CollPartFv
	stw      r31, 0x5c(r3)
	mr       r29, r3
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80135CF8
	mr       r3, r29
	bl       getNext__8CollPartFv
	mr       r4, r31
	bl       attachModel__8CollPartFPQ28SysShape9MtxObject

lbl_80135CF8:
	mr       r3, r29
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80135D18
	mr       r3, r29
	bl       getChild__8CollPartFv
	mr       r4, r31
	bl       attachModel__8CollPartFPQ28SysShape9MtxObject

lbl_80135D18:
	lwz      r0, 0x10(r28)
	cmplwi   r0, 0
	beq      lbl_80135D70
	mr       r3, r28
	bl       getChild__8CollPartFv
	stw      r31, 0x5c(r3)
	mr       r29, r3
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80135D50
	mr       r3, r29
	bl       getNext__8CollPartFv
	mr       r4, r31
	bl       attachModel__8CollPartFPQ28SysShape9MtxObject

lbl_80135D50:
	mr       r3, r29
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80135D70
	mr       r3, r29
	bl       getChild__8CollPartFv
	mr       r4, r31
	bl       attachModel__8CollPartFPQ28SysShape9MtxObject

lbl_80135D70:
	lwz      r27, 0x10(r27)
	cmplwi   r27, 0
	beq      lbl_80135E30
	stw      r31, 0x5c(r27)
	lwz      r0, 4(r27)
	cmplwi   r0, 0
	beq      lbl_80135DD8
	mr       r3, r27
	bl       getNext__8CollPartFv
	stw      r31, 0x5c(r3)
	mr       r29, r3
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80135DB8
	mr       r3, r29
	bl       getNext__8CollPartFv
	mr       r4, r31
	bl       attachModel__8CollPartFPQ28SysShape9MtxObject

lbl_80135DB8:
	mr       r3, r29
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80135DD8
	mr       r3, r29
	bl       getChild__8CollPartFv
	mr       r4, r31
	bl       attachModel__8CollPartFPQ28SysShape9MtxObject

lbl_80135DD8:
	lwz      r0, 0x10(r27)
	cmplwi   r0, 0
	beq      lbl_80135E30
	mr       r3, r27
	bl       getChild__8CollPartFv
	stw      r31, 0x5c(r3)
	mr       r29, r3
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80135E10
	mr       r3, r29
	bl       getNext__8CollPartFv
	mr       r4, r31
	bl       attachModel__8CollPartFPQ28SysShape9MtxObject

lbl_80135E10:
	mr       r3, r29
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80135E30
	mr       r3, r29
	bl       getChild__8CollPartFv
	mr       r4, r31
	bl       attachModel__8CollPartFPQ28SysShape9MtxObject

lbl_80135E30:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80135E44
 * Size:	000034
 */
CollPart* CollTree::getCollPart(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_80135E64
	bl       getCollPart__8CollPartFUl
	b        lbl_80135E68

lbl_80135E64:
	li       r3, 0

lbl_80135E68:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80135E78
 * Size:	000640
 */
CollPart* CollPart::getCollPart(unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r29, r3
	mr       r30, r4
	addi     r3, r29, 0x30
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80135EA8
	mr       r3, r29
	b        lbl_801364A4

lbl_80135EA8:
	lwz      r31, 4(r29)
	cmplwi   r31, 0
	beq      lbl_801361A4
	mr       r4, r30
	addi     r3, r31, 0x30
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80135ECC
	b        lbl_80136194

lbl_80135ECC:
	lwz      r27, 4(r31)
	cmplwi   r27, 0
	beq      lbl_80136030
	mr       r4, r30
	addi     r3, r27, 0x30
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80135EF0
	b        lbl_80136020

lbl_80135EF0:
	lwz      r28, 4(r27)
	cmplwi   r28, 0
	beq      lbl_80135F88
	mr       r4, r30
	addi     r3, r28, 0x30
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80135F14
	b        lbl_80135F78

lbl_80135F14:
	mr       r3, r28
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80135F44
	mr       r3, r28
	bl       getNext__8CollPartFv
	mr       r4, r30
	bl       getCollPart__8CollPartFUl
	cmplwi   r3, 0
	beq      lbl_80135F44
	mr       r28, r3
	b        lbl_80135F78

lbl_80135F44:
	mr       r3, r28
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80135F74
	mr       r3, r28
	bl       getChild__8CollPartFv
	mr       r4, r30
	bl       getCollPart__8CollPartFUl
	cmplwi   r3, 0
	beq      lbl_80135F74
	mr       r28, r3
	b        lbl_80135F78

lbl_80135F74:
	li       r28, 0

lbl_80135F78:
	cmplwi   r28, 0
	beq      lbl_80135F88
	mr       r27, r28
	b        lbl_80136020

lbl_80135F88:
	lwz      r27, 0x10(r27)
	cmplwi   r27, 0
	beq      lbl_8013601C
	mr       r4, r30
	addi     r3, r27, 0x30
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80135FAC
	b        lbl_80136010

lbl_80135FAC:
	mr       r3, r27
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80135FDC
	mr       r3, r27
	bl       getNext__8CollPartFv
	mr       r4, r30
	bl       getCollPart__8CollPartFUl
	cmplwi   r3, 0
	beq      lbl_80135FDC
	mr       r27, r3
	b        lbl_80136010

lbl_80135FDC:
	mr       r3, r27
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_8013600C
	mr       r3, r27
	bl       getChild__8CollPartFv
	mr       r4, r30
	bl       getCollPart__8CollPartFUl
	cmplwi   r3, 0
	beq      lbl_8013600C
	mr       r27, r3
	b        lbl_80136010

lbl_8013600C:
	li       r27, 0

lbl_80136010:
	cmplwi   r27, 0
	beq      lbl_8013601C
	b        lbl_80136020

lbl_8013601C:
	li       r27, 0

lbl_80136020:
	cmplwi   r27, 0
	beq      lbl_80136030
	mr       r31, r27
	b        lbl_80136194

lbl_80136030:
	lwz      r31, 0x10(r31)
	cmplwi   r31, 0
	beq      lbl_80136190
	mr       r4, r30
	addi     r3, r31, 0x30
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80136054
	b        lbl_80136184

lbl_80136054:
	lwz      r27, 4(r31)
	cmplwi   r27, 0
	beq      lbl_801360EC
	mr       r4, r30
	addi     r3, r27, 0x30
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80136078
	b        lbl_801360DC

lbl_80136078:
	mr       r3, r27
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_801360A8
	mr       r3, r27
	bl       getNext__8CollPartFv
	mr       r4, r30
	bl       getCollPart__8CollPartFUl
	cmplwi   r3, 0
	beq      lbl_801360A8
	mr       r27, r3
	b        lbl_801360DC

lbl_801360A8:
	mr       r3, r27
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_801360D8
	mr       r3, r27
	bl       getChild__8CollPartFv
	mr       r4, r30
	bl       getCollPart__8CollPartFUl
	cmplwi   r3, 0
	beq      lbl_801360D8
	mr       r27, r3
	b        lbl_801360DC

lbl_801360D8:
	li       r27, 0

lbl_801360DC:
	cmplwi   r27, 0
	beq      lbl_801360EC
	mr       r31, r27
	b        lbl_80136184

lbl_801360EC:
	lwz      r31, 0x10(r31)
	cmplwi   r31, 0
	beq      lbl_80136180
	mr       r4, r30
	addi     r3, r31, 0x30
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80136110
	b        lbl_80136174

lbl_80136110:
	mr       r3, r31
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80136140
	mr       r3, r31
	bl       getNext__8CollPartFv
	mr       r4, r30
	bl       getCollPart__8CollPartFUl
	cmplwi   r3, 0
	beq      lbl_80136140
	mr       r31, r3
	b        lbl_80136174

lbl_80136140:
	mr       r3, r31
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80136170
	mr       r3, r31
	bl       getChild__8CollPartFv
	mr       r4, r30
	bl       getCollPart__8CollPartFUl
	cmplwi   r3, 0
	beq      lbl_80136170
	mr       r31, r3
	b        lbl_80136174

lbl_80136170:
	li       r31, 0

lbl_80136174:
	cmplwi   r31, 0
	beq      lbl_80136180
	b        lbl_80136184

lbl_80136180:
	li       r31, 0

lbl_80136184:
	cmplwi   r31, 0
	beq      lbl_80136190
	b        lbl_80136194

lbl_80136190:
	li       r31, 0

lbl_80136194:
	cmplwi   r31, 0
	beq      lbl_801361A4
	mr       r3, r31
	b        lbl_801364A4

lbl_801361A4:
	lwz      r31, 0x10(r29)
	cmplwi   r31, 0
	beq      lbl_801364A0
	mr       r4, r30
	addi     r3, r31, 0x30
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801361C8
	b        lbl_80136490

lbl_801361C8:
	lwz      r28, 4(r31)
	cmplwi   r28, 0
	beq      lbl_8013632C
	mr       r4, r30
	addi     r3, r28, 0x30
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801361EC
	b        lbl_8013631C

lbl_801361EC:
	lwz      r27, 4(r28)
	cmplwi   r27, 0
	beq      lbl_80136284
	mr       r4, r30
	addi     r3, r27, 0x30
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80136210
	b        lbl_80136274

lbl_80136210:
	mr       r3, r27
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80136240
	mr       r3, r27
	bl       getNext__8CollPartFv
	mr       r4, r30
	bl       getCollPart__8CollPartFUl
	cmplwi   r3, 0
	beq      lbl_80136240
	mr       r27, r3
	b        lbl_80136274

lbl_80136240:
	mr       r3, r27
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80136270
	mr       r3, r27
	bl       getChild__8CollPartFv
	mr       r4, r30
	bl       getCollPart__8CollPartFUl
	cmplwi   r3, 0
	beq      lbl_80136270
	mr       r27, r3
	b        lbl_80136274

lbl_80136270:
	li       r27, 0

lbl_80136274:
	cmplwi   r27, 0
	beq      lbl_80136284
	mr       r28, r27
	b        lbl_8013631C

lbl_80136284:
	lwz      r28, 0x10(r28)
	cmplwi   r28, 0
	beq      lbl_80136318
	mr       r4, r30
	addi     r3, r28, 0x30
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801362A8
	b        lbl_8013630C

lbl_801362A8:
	mr       r3, r28
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_801362D8
	mr       r3, r28
	bl       getNext__8CollPartFv
	mr       r4, r30
	bl       getCollPart__8CollPartFUl
	cmplwi   r3, 0
	beq      lbl_801362D8
	mr       r28, r3
	b        lbl_8013630C

lbl_801362D8:
	mr       r3, r28
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80136308
	mr       r3, r28
	bl       getChild__8CollPartFv
	mr       r4, r30
	bl       getCollPart__8CollPartFUl
	cmplwi   r3, 0
	beq      lbl_80136308
	mr       r28, r3
	b        lbl_8013630C

lbl_80136308:
	li       r28, 0

lbl_8013630C:
	cmplwi   r28, 0
	beq      lbl_80136318
	b        lbl_8013631C

lbl_80136318:
	li       r28, 0

lbl_8013631C:
	cmplwi   r28, 0
	beq      lbl_8013632C
	mr       r31, r28
	b        lbl_80136490

lbl_8013632C:
	lwz      r31, 0x10(r31)
	cmplwi   r31, 0
	beq      lbl_8013648C
	mr       r4, r30
	addi     r3, r31, 0x30
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80136350
	b        lbl_80136480

lbl_80136350:
	lwz      r27, 4(r31)
	cmplwi   r27, 0
	beq      lbl_801363E8
	mr       r4, r30
	addi     r3, r27, 0x30
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80136374
	b        lbl_801363D8

lbl_80136374:
	mr       r3, r27
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_801363A4
	mr       r3, r27
	bl       getNext__8CollPartFv
	mr       r4, r30
	bl       getCollPart__8CollPartFUl
	cmplwi   r3, 0
	beq      lbl_801363A4
	mr       r27, r3
	b        lbl_801363D8

lbl_801363A4:
	mr       r3, r27
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_801363D4
	mr       r3, r27
	bl       getChild__8CollPartFv
	mr       r4, r30
	bl       getCollPart__8CollPartFUl
	cmplwi   r3, 0
	beq      lbl_801363D4
	mr       r27, r3
	b        lbl_801363D8

lbl_801363D4:
	li       r27, 0

lbl_801363D8:
	cmplwi   r27, 0
	beq      lbl_801363E8
	mr       r31, r27
	b        lbl_80136480

lbl_801363E8:
	lwz      r31, 0x10(r31)
	cmplwi   r31, 0
	beq      lbl_8013647C
	mr       r4, r30
	addi     r3, r31, 0x30
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013640C
	b        lbl_80136470

lbl_8013640C:
	mr       r3, r31
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_8013643C
	mr       r3, r31
	bl       getNext__8CollPartFv
	mr       r4, r30
	bl       getCollPart__8CollPartFUl
	cmplwi   r3, 0
	beq      lbl_8013643C
	mr       r31, r3
	b        lbl_80136470

lbl_8013643C:
	mr       r3, r31
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_8013646C
	mr       r3, r31
	bl       getChild__8CollPartFv
	mr       r4, r30
	bl       getCollPart__8CollPartFUl
	cmplwi   r3, 0
	beq      lbl_8013646C
	mr       r31, r3
	b        lbl_80136470

lbl_8013646C:
	li       r31, 0

lbl_80136470:
	cmplwi   r31, 0
	beq      lbl_8013647C
	b        lbl_80136480

lbl_8013647C:
	li       r31, 0

lbl_80136480:
	cmplwi   r31, 0
	beq      lbl_8013648C
	b        lbl_80136490

lbl_8013648C:
	li       r31, 0

lbl_80136490:
	cmplwi   r31, 0
	beq      lbl_801364A0
	mr       r3, r31
	b        lbl_801364A4

lbl_801364A0:
	li       r3, 0

lbl_801364A4:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801364B8
 * Size:	00054C
 */
void CollPart::getAllCollPartToArray(CollPart**, int, int&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r29, r5
	mr       r30, r6
	mr       r27, r3
	mr       r28, r4
	lwz      r5, 0(r6)
	cmpw     r5, r29
	blt      lbl_801364EC
	mr       r3, r5
	b        lbl_801369F0

lbl_801364EC:
	addi     r3, r5, 1
	slwi     r0, r5, 2
	stw      r3, 0(r30)
	stwx     r27, r28, r0
	lwz      r31, 4(r27)
	cmplwi   r31, 0
	beq      lbl_80136774
	lwz      r4, 0(r30)
	cmpw     r4, r29
	bge      lbl_80136774
	addi     r3, r4, 1
	slwi     r0, r4, 2
	stw      r3, 0(r30)
	stwx     r31, r28, r0
	lwz      r25, 4(r31)
	cmplwi   r25, 0
	beq      lbl_8013664C
	lwz      r4, 0(r30)
	cmpw     r4, r29
	bge      lbl_8013664C
	addi     r3, r4, 1
	slwi     r0, r4, 2
	stw      r3, 0(r30)
	stwx     r25, r28, r0
	lwz      r0, 4(r25)
	cmplwi   r0, 0
	beq      lbl_801365CC
	mr       r3, r25
	bl       getNext__8CollPartFv
	lwz      r5, 0(r30)
	mr       r26, r3
	cmpw     r5, r29
	bge      lbl_801365CC
	addi     r4, r5, 1
	slwi     r0, r5, 2
	stw      r4, 0(r30)
	stwx     r26, r28, r0
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_801365A4
	mr       r3, r26
	bl       getNext__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_801365A4:
	mr       r3, r26
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_801365CC
	mr       r3, r26
	bl       getChild__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_801365CC:
	lwz      r0, 0x10(r25)
	cmplwi   r0, 0
	beq      lbl_8013664C
	mr       r3, r25
	bl       getChild__8CollPartFv
	lwz      r5, 0(r30)
	mr       r26, r3
	cmpw     r5, r29
	bge      lbl_8013664C
	addi     r4, r5, 1
	slwi     r0, r5, 2
	stw      r4, 0(r30)
	stwx     r26, r28, r0
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80136624
	mr       r3, r26
	bl       getNext__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_80136624:
	mr       r3, r26
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_8013664C
	mr       r3, r26
	bl       getChild__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_8013664C:
	lwz      r25, 0x10(r31)
	cmplwi   r25, 0
	beq      lbl_80136774
	lwz      r4, 0(r30)
	cmpw     r4, r29
	bge      lbl_80136774
	addi     r3, r4, 1
	slwi     r0, r4, 2
	stw      r3, 0(r30)
	stwx     r25, r28, r0
	lwz      r0, 4(r25)
	cmplwi   r0, 0
	beq      lbl_801366F4
	mr       r3, r25
	bl       getNext__8CollPartFv
	lwz      r5, 0(r30)
	mr       r26, r3
	cmpw     r5, r29
	bge      lbl_801366F4
	addi     r4, r5, 1
	slwi     r0, r5, 2
	stw      r4, 0(r30)
	stwx     r26, r28, r0
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_801366CC
	mr       r3, r26
	bl       getNext__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_801366CC:
	mr       r3, r26
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_801366F4
	mr       r3, r26
	bl       getChild__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_801366F4:
	lwz      r0, 0x10(r25)
	cmplwi   r0, 0
	beq      lbl_80136774
	mr       r3, r25
	bl       getChild__8CollPartFv
	lwz      r5, 0(r30)
	mr       r26, r3
	cmpw     r5, r29
	bge      lbl_80136774
	addi     r4, r5, 1
	slwi     r0, r5, 2
	stw      r4, 0(r30)
	stwx     r26, r28, r0
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_8013674C
	mr       r3, r26
	bl       getNext__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_8013674C:
	mr       r3, r26
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80136774
	mr       r3, r26
	bl       getChild__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_80136774:
	lwz      r31, 0x10(r27)
	cmplwi   r31, 0
	beq      lbl_801369EC
	lwz      r4, 0(r30)
	cmpw     r4, r29
	bge      lbl_801369EC
	addi     r3, r4, 1
	slwi     r0, r4, 2
	stw      r3, 0(r30)
	stwx     r31, r28, r0
	lwz      r25, 4(r31)
	cmplwi   r25, 0
	beq      lbl_801368C4
	lwz      r4, 0(r30)
	cmpw     r4, r29
	bge      lbl_801368C4
	addi     r3, r4, 1
	slwi     r0, r4, 2
	stw      r3, 0(r30)
	stwx     r25, r28, r0
	lwz      r0, 4(r25)
	cmplwi   r0, 0
	beq      lbl_80136844
	mr       r3, r25
	bl       getNext__8CollPartFv
	lwz      r5, 0(r30)
	mr       r26, r3
	cmpw     r5, r29
	bge      lbl_80136844
	addi     r4, r5, 1
	slwi     r0, r5, 2
	stw      r4, 0(r30)
	stwx     r26, r28, r0
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_8013681C
	mr       r3, r26
	bl       getNext__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_8013681C:
	mr       r3, r26
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80136844
	mr       r3, r26
	bl       getChild__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_80136844:
	lwz      r0, 0x10(r25)
	cmplwi   r0, 0
	beq      lbl_801368C4
	mr       r3, r25
	bl       getChild__8CollPartFv
	lwz      r5, 0(r30)
	mr       r26, r3
	cmpw     r5, r29
	bge      lbl_801368C4
	addi     r4, r5, 1
	slwi     r0, r5, 2
	stw      r4, 0(r30)
	stwx     r26, r28, r0
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_8013689C
	mr       r3, r26
	bl       getNext__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_8013689C:
	mr       r3, r26
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_801368C4
	mr       r3, r26
	bl       getChild__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_801368C4:
	lwz      r25, 0x10(r31)
	cmplwi   r25, 0
	beq      lbl_801369EC
	lwz      r4, 0(r30)
	cmpw     r4, r29
	bge      lbl_801369EC
	addi     r3, r4, 1
	slwi     r0, r4, 2
	stw      r3, 0(r30)
	stwx     r25, r28, r0
	lwz      r0, 4(r25)
	cmplwi   r0, 0
	beq      lbl_8013696C
	mr       r3, r25
	bl       getNext__8CollPartFv
	lwz      r5, 0(r30)
	mr       r26, r3
	cmpw     r5, r29
	bge      lbl_8013696C
	addi     r4, r5, 1
	slwi     r0, r5, 2
	stw      r4, 0(r30)
	stwx     r26, r28, r0
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80136944
	mr       r3, r26
	bl       getNext__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_80136944:
	mr       r3, r26
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_8013696C
	mr       r3, r26
	bl       getChild__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_8013696C:
	lwz      r0, 0x10(r25)
	cmplwi   r0, 0
	beq      lbl_801369EC
	mr       r3, r25
	bl       getChild__8CollPartFv
	lwz      r5, 0(r30)
	mr       r26, r3
	cmpw     r5, r29
	bge      lbl_801369EC
	addi     r4, r5, 1
	slwi     r0, r5, 2
	stw      r4, 0(r30)
	stwx     r26, r28, r0
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_801369C4
	mr       r3, r26
	bl       getNext__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_801369C4:
	mr       r3, r26
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_801369EC
	mr       r3, r26
	bl       getChild__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_801369EC:
	lwz      r3, 0(r30)

lbl_801369F0:
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80136A04
 * Size:	000118
 */
void CollTree::findCollPart(FindCollPartArg&)
{
	/*
	stwu     r1, -0x440(r1)
	mflr     r0
	stw      r0, 0x444(r1)
	stfd     f31, 0x430(r1)
	psq_st   f31, 1080(r1), 0, qr0
	stmw     r26, 0x418(r1)
	lwz      r0, 0(r3)
	mr       r26, r4
	cmplwi   r0, 0
	beq      lbl_80136AFC
	li       r0, 0
	addi     r4, r1, 0xc
	stw      r0, 8(r1)
	addi     r6, r1, 8
	li       r5, 0x100
	lwz      r3, 0(r3)
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi
	lfs      f31, lbl_80518214@sda21(r2)
	mr       r31, r3
	addi     r30, r1, 0xc
	li       r29, 0
	li       r28, 0
	b        lbl_80136AEC

lbl_80136A60:
	lwz      r3, 0(r26)
	lwz      r27, 0(r30)
	cmplwi   r3, 0
	beq      lbl_80136A8C
	lwz      r12, 0(r3)
	mr       r4, r27
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80136AE4

lbl_80136A8C:
	lbz      r0, 0x58(r27)
	cmplwi   r0, 0
	bne      lbl_80136AE4
	lfs      f1, 8(r26)
	lfs      f0, 0x50(r27)
	lfs      f2, 0x1c(r27)
	fsubs    f5, f1, f0
	lfs      f3, 4(r26)
	lfs      f1, 0x4c(r27)
	fmuls    f0, f2, f2
	lfs      f4, 0xc(r26)
	lfs      f2, 0x54(r27)
	fsubs    f3, f3, f1
	fmuls    f1, f5, f5
	fsubs    f2, f4, f2
	fmadds   f1, f3, f3, f1
	fmadds   f1, f2, f2, f1
	fsubs    f0, f1, f0
	fcmpo    cr0, f0, f31
	bge      lbl_80136AE4
	mr       r29, r27
	fmr      f31, f0

lbl_80136AE4:
	addi     r30, r30, 4
	addi     r28, r28, 1

lbl_80136AEC:
	cmpw     r28, r31
	blt      lbl_80136A60
	mr       r3, r29
	b        lbl_80136B00

lbl_80136AFC:
	li       r3, 0

lbl_80136B00:
	psq_l    f31, 1080(r1), 0, qr0
	lfd      f31, 0x430(r1)
	lmw      r26, 0x418(r1)
	lwz      r0, 0x444(r1)
	mtlr     r0
	addi     r1, r1, 0x440
	blr
	*/
}

/*
 * --INFO--
 * Address:	80136B1C
 * Size:	000124
 */
CollPart* CollTree::getRandomCollPart()
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	stw      r28, 0x70(r1)
	lwz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_80136C1C
	li       r0, 0
	addi     r4, r1, 0xc
	stw      r0, 8(r1)
	addi     r6, r1, 8
	li       r5, 0x10
	lwz      r3, 0(r3)
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi
	mr       r29, r3
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x54(r1)
	xoris    r0, r29, 0x8000
	lfd      f2, lbl_80518218@sda21(r2)
	addi     r30, r1, 0xc
	stw      r4, 0x50(r1)
	lfs      f0, lbl_80518208@sda21(r2)
	lfd      f1, 0x50(r1)
	stw      r0, 0x5c(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x58(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x58(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r28, 0x64(r1)
	slwi     r31, r28, 2
	lwzx     r0, r30, r31
	cmplwi   r0, 0
	bne      lbl_80136BE8
	lis      r3, lbl_8047C5A0@ha
	lis      r4, lbl_8047C600@ha
	addi     r5, r4, lbl_8047C600@l
	mr       r6, r29
	addi     r3, r3, lbl_8047C5A0@l
	mr       r7, r28
	li       r4, 0x376
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80136BE8:
	cmpwi    r28, 0x10
	blt      lbl_80136C14
	lis      r3, lbl_8047C5A0@ha
	lis      r4, lbl_8047C600@ha
	addi     r5, r4, lbl_8047C600@l
	mr       r6, r29
	addi     r3, r3, lbl_8047C5A0@l
	mr       r7, r28
	li       r4, 0x379
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80136C14:
	lwzx     r3, r30, r31
	b        lbl_80136C20

lbl_80136C1C:
	li       r3, 0

lbl_80136C20:
	lwz      r0, 0x84(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	lwz      r28, 0x70(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	80136C40
 * Size:	000034
 */
void CollTree::getBoundingSphere(Sys::Sphere&)
{
	/*
	lwz      r5, 0(r3)
	cmplwi   r5, 0
	beqlr
	lfs      f0, 0x4c(r5)
	stfs     f0, 0(r4)
	lfs      f0, 0x50(r5)
	stfs     f0, 4(r4)
	lfs      f0, 0x54(r5)
	stfs     f0, 8(r4)
	lwz      r3, 0(r3)
	lfs      f0, 0x1c(r3)
	stfs     f0, 0xc(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80136C74
 * Size:	000064
 */
CollPart::CollPart(SysShape::MtxObject*)
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
	lis      r4, __vt__8CollPart@ha
	addi     r3, r30, 0x30
	addi     r0, r4, __vt__8CollPart@l
	stw      r0, 0(r30)
	bl       __ct__4ID32Fv
	addi     r3, r30, 0x3c
	bl       __ct__4ID32Fv
	mr       r3, r30
	mr       r4, r31
	bl       init__8CollPartFPQ28SysShape9MtxObject
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
 * Address:	80136CD8
 * Size:	000058
 */
CollPart::CollPart()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r4, __vt__8CollPart@ha
	addi     r3, r31, 0x30
	addi     r0, r4, __vt__8CollPart@l
	stw      r0, 0(r31)
	bl       __ct__4ID32Fv
	addi     r3, r31, 0x3c
	bl       __ct__4ID32Fv
	mr       r3, r31
	li       r4, 0
	bl       init__8CollPartFPQ28SysShape9MtxObject
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80136D30
 * Size:	000080
 */
void CollPart::init(SysShape::MtxObject*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r6, 0
	mr       r7, r3
	stw      r0, 0x14(r1)
	li       r0, -1
	lfs      f0, lbl_80518210@sda21(r2)
	lis      r5, 0x5F5F5F5F@ha
	stw      r6, 0x10(r3)
	stw      r6, 0xc(r3)
	addi     r3, r7, 0x3c
	stw      r6, 8(r7)
	stw      r6, 4(r7)
	stfs     f0, 0x1c(r7)
	stfs     f0, 0x18(r7)
	stfs     f0, 0x20(r7)
	stfs     f0, 0x24(r7)
	stfs     f0, 0x28(r7)
	stfs     f0, 0x4c(r7)
	stfs     f0, 0x50(r7)
	stfs     f0, 0x54(r7)
	stw      r4, 0x5c(r7)
	addi     r4, r5, 0x5F5F5F5F@l
	stw      r0, 0x2c(r7)
	stw      r6, 0x60(r7)
	sth      r6, 0x48(r7)
	stb      r6, 0x58(r7)
	bl       setID__4ID32FUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80136DB0
 * Size:	000030
 */
bool CollPart::isStickable()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, 0x732A2A2A@ha
	addi     r3, r3, 0x3c
	stw      r0, 0x14(r1)
	li       r5, 0x2a
	addi     r4, r4, 0x732A2A2A@l
	bl       match__4ID32FUlc
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80136DE0
 * Size:	0004E0
 */
void CollPart::update()
{
	/*
	stwu     r1, -0x2f0(r1)
	mflr     r0
	stw      r0, 0x2f4(r1)
	addi     r4, r1, 0x2a8
	stw      r31, 0x2ec(r1)
	mr       r31, r3
	stw      r30, 0x2e8(r1)
	stw      r29, 0x2e4(r1)
	stw      r28, 0x2e0(r1)
	bl       makeMatrixTo__8CollPartFR7Matrixf
	lfs      f0, 0x2b4(r1)
	stfs     f0, 0x4c(r31)
	lfs      f0, 0x2c4(r1)
	stfs     f0, 0x50(r31)
	lfs      f0, 0x2d4(r1)
	stfs     f0, 0x54(r31)
	lwz      r29, 4(r31)
	cmplwi   r29, 0
	beq      lbl_80137060
	mr       r3, r29
	addi     r4, r1, 0x278
	bl       makeMatrixTo__8CollPartFR7Matrixf
	addi     r3, r1, 0x278
	li       r4, 0
	li       r5, 3
	bl       __cl__7MatrixfFii
	lfs      f0, 0(r3)
	addi     r3, r1, 0x278
	li       r4, 1
	li       r5, 3
	stfs     f0, 0x4c(r29)
	bl       __cl__7MatrixfFii
	lfs      f0, 0(r3)
	addi     r3, r1, 0x278
	li       r4, 2
	li       r5, 3
	stfs     f0, 0x50(r29)
	bl       __cl__7MatrixfFii
	lfs      f0, 0(r3)
	stfs     f0, 0x54(r29)
	lwz      r28, 4(r29)
	cmplwi   r28, 0
	beq      lbl_80136F70
	mr       r3, r28
	addi     r4, r1, 0x218
	bl       makeMatrixTo__8CollPartFR7Matrixf
	addi     r3, r1, 0x218
	addi     r5, r28, 0x4c
	li       r4, 3
	bl       "getBasis__7MatrixfFiR10Vector3<f>"
	lwz      r0, 4(r28)
	cmplwi   r0, 0
	beq      lbl_80136F0C
	mr       r3, r28
	bl       getNext__8CollPartFv
	addi     r4, r1, 0x158
	mr       r30, r3
	bl       makeMatrixTo__8CollPartFR7Matrixf
	addi     r3, r1, 0x158
	addi     r4, r30, 0x4c
	bl       "getTranslation__7MatrixfFR10Vector3<f>"
	mr       r3, r30
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80136EF0
	mr       r3, r30
	bl       getNext__8CollPartFv
	bl       update__8CollPartFv

lbl_80136EF0:
	mr       r3, r30
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80136F0C
	mr       r3, r30
	bl       getChild__8CollPartFv
	bl       update__8CollPartFv

lbl_80136F0C:
	lwz      r0, 0x10(r28)
	cmplwi   r0, 0
	beq      lbl_80136F70
	mr       r3, r28
	bl       getChild__8CollPartFv
	addi     r4, r1, 0x128
	mr       r30, r3
	bl       makeMatrixTo__8CollPartFR7Matrixf
	addi     r3, r1, 0x128
	addi     r4, r30, 0x4c
	bl       "getTranslation__7MatrixfFR10Vector3<f>"
	mr       r3, r30
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80136F54
	mr       r3, r30
	bl       getNext__8CollPartFv
	bl       update__8CollPartFv

lbl_80136F54:
	mr       r3, r30
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80136F70
	mr       r3, r30
	bl       getChild__8CollPartFv
	bl       update__8CollPartFv

lbl_80136F70:
	lwz      r28, 0x10(r29)
	cmplwi   r28, 0
	beq      lbl_80137060
	mr       r3, r28
	addi     r4, r1, 0x1e8
	bl       makeMatrixTo__8CollPartFR7Matrixf
	addi     r3, r1, 0x1e8
	addi     r5, r28, 0x4c
	li       r4, 3
	bl       "getBasis__7MatrixfFiR10Vector3<f>"
	lwz      r0, 4(r28)
	cmplwi   r0, 0
	beq      lbl_80136FFC
	mr       r3, r28
	bl       getNext__8CollPartFv
	addi     r4, r1, 0xf8
	mr       r30, r3
	bl       makeMatrixTo__8CollPartFR7Matrixf
	addi     r3, r1, 0xf8
	addi     r4, r30, 0x4c
	bl       "getTranslation__7MatrixfFR10Vector3<f>"
	mr       r3, r30
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80136FE0
	mr       r3, r30
	bl       getNext__8CollPartFv
	bl       update__8CollPartFv

lbl_80136FE0:
	mr       r3, r30
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80136FFC
	mr       r3, r30
	bl       getChild__8CollPartFv
	bl       update__8CollPartFv

lbl_80136FFC:
	lwz      r0, 0x10(r28)
	cmplwi   r0, 0
	beq      lbl_80137060
	mr       r3, r28
	bl       getChild__8CollPartFv
	addi     r4, r1, 0xc8
	mr       r30, r3
	bl       makeMatrixTo__8CollPartFR7Matrixf
	addi     r3, r1, 0xc8
	addi     r4, r30, 0x4c
	bl       "getTranslation__7MatrixfFR10Vector3<f>"
	mr       r3, r30
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80137044
	mr       r3, r30
	bl       getNext__8CollPartFv
	bl       update__8CollPartFv

lbl_80137044:
	mr       r3, r30
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80137060
	mr       r3, r30
	bl       getChild__8CollPartFv
	bl       update__8CollPartFv

lbl_80137060:
	lwz      r28, 0x10(r31)
	cmplwi   r28, 0
	beq      lbl_801372A0
	mr       r3, r28
	addi     r4, r1, 0x248
	bl       makeMatrixTo__8CollPartFR7Matrixf
	addi     r3, r1, 0x248
	li       r4, 0
	li       r5, 3
	bl       __cl__7MatrixfFii
	lfs      f0, 0(r3)
	addi     r3, r1, 0x248
	li       r4, 1
	li       r5, 3
	stfs     f0, 0x4c(r28)
	bl       __cl__7MatrixfFii
	lfs      f0, 0(r3)
	addi     r3, r1, 0x248
	li       r4, 2
	li       r5, 3
	stfs     f0, 0x50(r28)
	bl       __cl__7MatrixfFii
	lfs      f0, 0(r3)
	stfs     f0, 0x54(r28)
	lwz      r29, 4(r28)
	cmplwi   r29, 0
	beq      lbl_801371B0
	mr       r3, r29
	addi     r4, r1, 0x1b8
	bl       makeMatrixTo__8CollPartFR7Matrixf
	addi     r3, r1, 0x1b8
	addi     r5, r29, 0x4c
	li       r4, 3
	bl       "getBasis__7MatrixfFiR10Vector3<f>"
	lwz      r0, 4(r29)
	cmplwi   r0, 0
	beq      lbl_8013714C
	mr       r3, r29
	bl       getNext__8CollPartFv
	addi     r4, r1, 0x98
	mr       r30, r3
	bl       makeMatrixTo__8CollPartFR7Matrixf
	addi     r3, r1, 0x98
	addi     r4, r30, 0x4c
	bl       "getTranslation__7MatrixfFR10Vector3<f>"
	mr       r3, r30
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80137130
	mr       r3, r30
	bl       getNext__8CollPartFv
	bl       update__8CollPartFv

lbl_80137130:
	mr       r3, r30
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_8013714C
	mr       r3, r30
	bl       getChild__8CollPartFv
	bl       update__8CollPartFv

lbl_8013714C:
	lwz      r0, 0x10(r29)
	cmplwi   r0, 0
	beq      lbl_801371B0
	mr       r3, r29
	bl       getChild__8CollPartFv
	addi     r4, r1, 0x68
	mr       r30, r3
	bl       makeMatrixTo__8CollPartFR7Matrixf
	addi     r3, r1, 0x68
	addi     r4, r30, 0x4c
	bl       "getTranslation__7MatrixfFR10Vector3<f>"
	mr       r3, r30
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80137194
	mr       r3, r30
	bl       getNext__8CollPartFv
	bl       update__8CollPartFv

lbl_80137194:
	mr       r3, r30
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_801371B0
	mr       r3, r30
	bl       getChild__8CollPartFv
	bl       update__8CollPartFv

lbl_801371B0:
	lwz      r28, 0x10(r28)
	cmplwi   r28, 0
	beq      lbl_801372A0
	mr       r3, r28
	addi     r4, r1, 0x188
	bl       makeMatrixTo__8CollPartFR7Matrixf
	addi     r3, r1, 0x188
	addi     r5, r28, 0x4c
	li       r4, 3
	bl       "getBasis__7MatrixfFiR10Vector3<f>"
	lwz      r0, 4(r28)
	cmplwi   r0, 0
	beq      lbl_8013723C
	mr       r3, r28
	bl       getNext__8CollPartFv
	addi     r4, r1, 0x38
	mr       r30, r3
	bl       makeMatrixTo__8CollPartFR7Matrixf
	addi     r3, r1, 0x38
	addi     r4, r30, 0x4c
	bl       "getTranslation__7MatrixfFR10Vector3<f>"
	mr       r3, r30
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80137220
	mr       r3, r30
	bl       getNext__8CollPartFv
	bl       update__8CollPartFv

lbl_80137220:
	mr       r3, r30
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_8013723C
	mr       r3, r30
	bl       getChild__8CollPartFv
	bl       update__8CollPartFv

lbl_8013723C:
	lwz      r0, 0x10(r28)
	cmplwi   r0, 0
	beq      lbl_801372A0
	mr       r3, r28
	bl       getChild__8CollPartFv
	addi     r4, r1, 8
	mr       r30, r3
	bl       makeMatrixTo__8CollPartFR7Matrixf
	addi     r3, r1, 8
	addi     r4, r30, 0x4c
	bl       "getTranslation__7MatrixfFR10Vector3<f>"
	mr       r3, r30
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80137284
	mr       r3, r30
	bl       getNext__8CollPartFv
	bl       update__8CollPartFv

lbl_80137284:
	mr       r3, r30
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_801372A0
	mr       r3, r30
	bl       getChild__8CollPartFv
	bl       update__8CollPartFv

lbl_801372A0:
	lwz      r0, 0x2f4(r1)
	lwz      r31, 0x2ec(r1)
	lwz      r30, 0x2e8(r1)
	lwz      r29, 0x2e4(r1)
	lwz      r28, 0x2e0(r1)
	mtlr     r0
	addi     r1, r1, 0x2f0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801372C0
 * Size:	00001C
 */
void Matrixf::getTranslation(Vector3f&)
{
	/*
	lfs      f0, 0xc(r3)
	stfs     f0, 0(r4)
	lfs      f0, 0x1c(r3)
	stfs     f0, 4(r4)
	lfs      f0, 0x2c(r3)
	stfs     f0, 8(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801372DC
 * Size:	000024
 */
void Matrixf::getBasis(int, Vector3f&)
{
	/*
	slwi     r0, r4, 2
	lfsx     f0, r3, r0
	add      r3, r3, r0
	stfs     f0, 0(r5)
	lfs      f0, 0x10(r3)
	stfs     f0, 4(r5)
	lfs      f0, 0x20(r3)
	stfs     f0, 8(r5)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80137300
 * Size:	000018
 */
void Matrixf::operator()(int, int)
{
	/*
	slwi     r4, r4, 4
	slwi     r0, r5, 2
	mr       r5, r3
	add      r3, r4, r0
	add      r3, r5, r3
	blr
	*/
}

/*
 * --INFO--
 * Address:	80137318
 * Size:	000084
 */
void CollPart::makeMatrixTo(Matrixf&)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r4
	stw      r30, 0x38(r1)
	mr       r30, r3
	lwz      r0, 0x2c(r3)
	cmpwi    r0, -1
	beq      lbl_80137384
	addi     r3, r1, 8
	bl       PSMTXIdentity
	lfs      f0, 0x20(r30)
	stfs     f0, 0x14(r1)
	lfs      f0, 0x24(r30)
	stfs     f0, 0x24(r1)
	lfs      f0, 0x28(r30)
	stfs     f0, 0x34(r1)
	lwz      r3, 0x5c(r30)
	lwz      r4, 0x2c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r5, r31
	addi     r4, r1, 8
	bl       PSMTXConcat

lbl_80137384:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013739C
 * Size:	000214
 */
void CollPart::makeTubeTree()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r23, 0xc(r1)
	lwz      r0, 0x10(r3)
	cmplwi   r0, 0
	beq      lbl_801373C4
	li       r0, 2
	stb      r0, 0x58(r3)
	b        lbl_801373CC

lbl_801373C4:
	li       r0, 0
	stb      r0, 0x58(r3)

lbl_801373CC:
	lwz      r28, 0x10(r3)
	b        lbl_80137594

lbl_801373D4:
	lwz      r0, 0x10(r28)
	cmplwi   r0, 0
	beq      lbl_801373EC
	li       r0, 2
	stb      r0, 0x58(r28)
	b        lbl_801373F4

lbl_801373EC:
	li       r0, 0
	stb      r0, 0x58(r28)

lbl_801373F4:
	lwz      r31, 0x10(r28)
	b        lbl_80137588

lbl_801373FC:
	lwz      r0, 0x10(r31)
	cmplwi   r0, 0
	beq      lbl_80137414
	li       r0, 2
	stb      r0, 0x58(r31)
	b        lbl_8013741C

lbl_80137414:
	li       r0, 0
	stb      r0, 0x58(r31)

lbl_8013741C:
	lwz      r30, 0x10(r31)
	b        lbl_8013757C

lbl_80137424:
	lwz      r0, 0x10(r30)
	cmplwi   r0, 0
	beq      lbl_8013743C
	li       r0, 2
	stb      r0, 0x58(r30)
	b        lbl_80137444

lbl_8013743C:
	li       r0, 0
	stb      r0, 0x58(r30)

lbl_80137444:
	lwz      r29, 0x10(r30)
	b        lbl_80137570

lbl_8013744C:
	lwz      r0, 0x10(r29)
	cmplwi   r0, 0
	beq      lbl_80137464
	li       r0, 2
	stb      r0, 0x58(r29)
	b        lbl_8013746C

lbl_80137464:
	li       r0, 0
	stb      r0, 0x58(r29)

lbl_8013746C:
	lwz      r27, 0x10(r29)
	b        lbl_80137564

lbl_80137474:
	lwz      r0, 0x10(r27)
	cmplwi   r0, 0
	beq      lbl_8013748C
	li       r0, 2
	stb      r0, 0x58(r27)
	b        lbl_80137494

lbl_8013748C:
	li       r0, 0
	stb      r0, 0x58(r27)

lbl_80137494:
	lwz      r26, 0x10(r27)
	b        lbl_80137558

lbl_8013749C:
	lwz      r0, 0x10(r26)
	cmplwi   r0, 0
	beq      lbl_801374B4
	li       r0, 2
	stb      r0, 0x58(r26)
	b        lbl_801374BC

lbl_801374B4:
	li       r0, 0
	stb      r0, 0x58(r26)

lbl_801374BC:
	lwz      r25, 0x10(r26)
	b        lbl_8013754C

lbl_801374C4:
	lwz      r0, 0x10(r25)
	cmplwi   r0, 0
	beq      lbl_801374DC
	li       r0, 2
	stb      r0, 0x58(r25)
	b        lbl_801374E4

lbl_801374DC:
	li       r0, 0
	stb      r0, 0x58(r25)

lbl_801374E4:
	lwz      r24, 0x10(r25)
	b        lbl_80137540

lbl_801374EC:
	mr       r3, r24
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80137508
	li       r0, 2
	stb      r0, 0x58(r24)
	b        lbl_80137510

lbl_80137508:
	li       r0, 0
	stb      r0, 0x58(r24)

lbl_80137510:
	mr       r3, r24
	bl       getChild__8CollPartFv
	mr       r23, r3
	b        lbl_80137534

lbl_80137520:
	mr       r3, r23
	bl       makeTubeTree__8CollPartFv
	mr       r3, r23
	bl       getNext__8CollPartFv
	mr       r23, r3

lbl_80137534:
	cmplwi   r23, 0
	bne      lbl_80137520
	lwz      r24, 4(r24)

lbl_80137540:
	cmplwi   r24, 0
	bne      lbl_801374EC
	lwz      r25, 4(r25)

lbl_8013754C:
	cmplwi   r25, 0
	bne      lbl_801374C4
	lwz      r26, 4(r26)

lbl_80137558:
	cmplwi   r26, 0
	bne      lbl_8013749C
	lwz      r27, 4(r27)

lbl_80137564:
	cmplwi   r27, 0
	bne      lbl_80137474
	lwz      r29, 4(r29)

lbl_80137570:
	cmplwi   r29, 0
	bne      lbl_8013744C
	lwz      r30, 4(r30)

lbl_8013757C:
	cmplwi   r30, 0
	bne      lbl_80137424
	lwz      r31, 4(r31)

lbl_80137588:
	cmplwi   r31, 0
	bne      lbl_801373FC
	lwz      r28, 4(r28)

lbl_80137594:
	cmplwi   r28, 0
	bne      lbl_801373D4
	lmw      r23, 0xc(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801375B0
 * Size:	00022C
 */
void CollPart::calcStickLocal(Vector3f&, Vector3f&)
{
	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stfd     f31, 0xe0(r1)
	psq_st   f31, 232(r1), 0, qr0
	stw      r31, 0xdc(r1)
	stw      r30, 0xd8(r1)
	stw      r29, 0xd4(r1)
	mr       r29, r3
	mr       r30, r4
	lbz      r0, 0x58(r3)
	mr       r31, r5
	cmpwi    r0, 0
	beq      lbl_801375F8
	blt      lbl_801377B8
	cmpwi    r0, 3
	bge      lbl_801377B8
	b        lbl_801377A0

lbl_801375F8:
	lwz      r0, 0x2c(r29)
	cmpwi    r0, -1
	beq      lbl_80137648
	addi     r3, r1, 0x34
	bl       PSMTXIdentity
	lfs      f0, 0x20(r29)
	stfs     f0, 0x40(r1)
	lfs      f0, 0x24(r29)
	stfs     f0, 0x50(r1)
	lfs      f0, 0x28(r29)
	stfs     f0, 0x60(r1)
	lwz      r3, 0x5c(r29)
	lwz      r4, 0x2c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r4, r1, 0x34
	addi     r5, r1, 0x94
	bl       PSMTXConcat

lbl_80137648:
	addi     r3, r1, 0x94
	addi     r4, r1, 0x64
	bl       PSMTXInverse
	lfs      f0, 0x94(r1)
	lfs      f1, 0x98(r1)
	fmuls    f3, f0, f0
	lfs      f4, 0x9c(r1)
	fmuls    f2, f1, f1
	lfs      f0, lbl_80518210@sda21(r2)
	fmuls    f1, f4, f4
	fadds    f3, f3, f2
	fadds    f3, f3, f1
	fcmpo    cr0, f3, f0
	ble      lbl_80137690
	ble      lbl_80137694
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_80137694

lbl_80137690:
	fmr      f3, f0

lbl_80137694:
	fabs     f1, f3
	lfs      f0, lbl_80518220@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	bge      lbl_801376BC
	lfs      f0, lbl_80518210@sda21(r2)
	stfs     f0, 0(r31)
	stfs     f0, 4(r31)
	stfs     f0, 8(r31)
	b        lbl_801377B8

lbl_801376BC:
	lfs      f0, lbl_80518224@sda21(r2)
	mr       r4, r30
	addi     r3, r1, 0x64
	addi     r5, r1, 8
	fdivs    f31, f0, f3
	bl       PSMTXMultVec
	lfs      f2, 0xc(r1)
	lfs      f3, 0x10(r1)
	lfs      f0, 8(r1)
	lfs      f1, lbl_80518210@sda21(r2)
	stfs     f0, 0(r31)
	stfs     f2, 4(r31)
	stfs     f3, 8(r31)
	lfs      f3, 0(r31)
	lfs      f2, 4(r31)
	lfs      f4, 8(r31)
	fmuls    f0, f3, f3
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80137734
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_80137738
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_80137738

lbl_80137734:
	fmr      f2, f1

lbl_80137738:
	lfs      f0, lbl_80518210@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_80137770
	lfs      f1, lbl_80518224@sda21(r2)
	lfs      f0, 0(r31)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0(r31)
	lfs      f0, 4(r31)
	fmuls    f0, f0, f1
	stfs     f0, 4(r31)
	lfs      f0, 8(r31)
	fmuls    f0, f0, f1
	stfs     f0, 8(r31)

lbl_80137770:
	lfs      f1, 0x1c(r29)
	lfs      f0, 0(r31)
	fmuls    f3, f1, f31
	lfs      f1, 4(r31)
	lfs      f2, 8(r31)
	fmuls    f0, f0, f3
	fmuls    f1, f1, f3
	fmuls    f2, f2, f3
	stfs     f0, 0(r31)
	stfs     f1, 4(r31)
	stfs     f2, 8(r31)
	b        lbl_801377B8

lbl_801377A0:
	addi     r4, r1, 0x14
	bl       getTube__8CollPartFRQ23Sys4Tube
	mr       r4, r30
	addi     r3, r1, 0x14
	bl       "getPosRatio__Q23Sys4TubeFRC10Vector3<f>"
	stfs     f1, 4(r31)

lbl_801377B8:
	psq_l    f31, 232(r1), 0, qr0
	lwz      r0, 0xf4(r1)
	lfd      f31, 0xe0(r1)
	lwz      r31, 0xdc(r1)
	lwz      r30, 0xd8(r1)
	lwz      r29, 0xd4(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801377DC
 * Size:	000168
 */
void CollPart::calcStickGlobal(Vector3f&, Vector3f&)
{
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stw      r31, 0xdc(r1)
	mr       r31, r5
	stw      r30, 0xd8(r1)
	mr       r30, r4
	stw      r29, 0xd4(r1)
	mr       r29, r3
	lbz      r0, 0x58(r3)
	cmpwi    r0, 1
	beq      lbl_801378A4
	bge      lbl_8013781C
	cmpwi    r0, 0
	bge      lbl_80137828
	b        lbl_80137928

lbl_8013781C:
	cmpwi    r0, 3
	bge      lbl_80137928
	b        lbl_801378E8

lbl_80137828:
	lwz      r0, 0x2c(r29)
	cmpwi    r0, -1
	beq      lbl_80137878
	addi     r3, r1, 0x6c
	bl       PSMTXIdentity
	lfs      f0, 0x20(r29)
	stfs     f0, 0x78(r1)
	lfs      f0, 0x24(r29)
	stfs     f0, 0x88(r1)
	lfs      f0, 0x28(r29)
	stfs     f0, 0x98(r1)
	lwz      r3, 0x5c(r29)
	lwz      r4, 0x2c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r4, r1, 0x6c
	addi     r5, r1, 0x9c
	bl       PSMTXConcat

lbl_80137878:
	mr       r4, r30
	addi     r3, r1, 0x9c
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f1, 0xc(r1)
	lfs      f2, 0x10(r1)
	lfs      f0, 8(r1)
	stfs     f0, 0(r31)
	stfs     f1, 4(r31)
	stfs     f2, 8(r31)
	b        lbl_80137928

lbl_801378A4:
	mr       r4, r31
	mr       r5, r30
	bl       "calcStickLocal__8CollPartFR10Vector3<f>R10Vector3<f>"
	mr       r3, r29
	addi     r4, r1, 0x4c
	bl       getTube__8CollPartFRQ23Sys4Tube
	lfs      f1, 4(r30)
	addi     r3, r1, 0x20
	addi     r4, r1, 0x4c
	bl       setPos__Q23Sys4TubeFf
	lfs      f0, 0x20(r1)
	stfs     f0, 0(r31)
	lfs      f0, 0x24(r1)
	stfs     f0, 4(r31)
	lfs      f0, 0x28(r1)
	stfs     f0, 8(r31)
	b        lbl_80137928

lbl_801378E8:
	mr       r4, r31
	mr       r5, r30
	bl       "calcStickLocal__8CollPartFR10Vector3<f>R10Vector3<f>"
	mr       r3, r29
	addi     r4, r1, 0x2c
	bl       getTube__8CollPartFRQ23Sys4Tube
	lfs      f1, 4(r30)
	addi     r3, r1, 0x14
	addi     r4, r1, 0x2c
	bl       setPos__Q23Sys4TubeFf
	lfs      f0, 0x14(r1)
	stfs     f0, 0(r31)
	lfs      f0, 0x18(r1)
	stfs     f0, 4(r31)
	lfs      f0, 0x1c(r1)
	stfs     f0, 8(r31)

lbl_80137928:
	lwz      r0, 0xe4(r1)
	lwz      r31, 0xdc(r1)
	lwz      r30, 0xd8(r1)
	lwz      r29, 0xd4(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80137944
 * Size:	0004C8
 */
void CollPart::calcPoseMatrix(Vector3f&, Matrixf&)
{
	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stw      r31, 0xec(r1)
	mr       r31, r5
	stw      r30, 0xe8(r1)
	mr       r30, r4
	stw      r29, 0xe4(r1)
	mr       r29, r3
	lbz      r0, 0x58(r3)
	cmpwi    r0, 1
	beq      lbl_80137CA0
	bge      lbl_80137984
	cmpwi    r0, 0
	bge      lbl_80137990
	b        lbl_80137DF0

lbl_80137984:
	cmpwi    r0, 3
	bge      lbl_80137DF0
	b        lbl_80137B1C

lbl_80137990:
	lwz      r0, 0x2c(r29)
	cmpwi    r0, -1
	beq      lbl_801379E0
	addi     r3, r1, 0x4c
	bl       PSMTXIdentity
	lfs      f0, 0x20(r29)
	stfs     f0, 0x58(r1)
	lfs      f0, 0x24(r29)
	stfs     f0, 0x68(r1)
	lfs      f0, 0x28(r29)
	stfs     f0, 0x78(r1)
	lwz      r3, 0x5c(r29)
	lwz      r4, 0x2c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r4, r1, 0x4c
	addi     r5, r1, 0xac
	bl       PSMTXConcat

lbl_801379E0:
	lfs      f1, 0xc8(r1)
	lfs      f0, 4(r30)
	lfs      f4, 0xb8(r1)
	fsubs    f1, f1, f0
	lfs      f0, 0(r30)
	lfs      f3, 0xd8(r1)
	lfs      f2, 8(r30)
	fsubs    f0, f4, f0
	fmuls    f4, f1, f1
	fsubs    f2, f3, f2
	lfs      f3, lbl_80518210@sda21(r2)
	fmadds   f4, f0, f0, f4
	fmuls    f5, f2, f2
	fadds    f4, f5, f4
	fcmpo    cr0, f4, f3
	ble      lbl_80137A30
	ble      lbl_80137A34
	frsqrte  f3, f4
	fmuls    f4, f3, f4
	b        lbl_80137A34

lbl_80137A30:
	fmr      f4, f3

lbl_80137A34:
	lfs      f3, lbl_80518210@sda21(r2)
	fcmpo    cr0, f4, f3
	ble      lbl_80137A58
	lfs      f3, lbl_80518224@sda21(r2)
	fdivs    f3, f3, f4
	fmuls    f0, f0, f3
	fmuls    f1, f1, f3
	fmuls    f2, f2, f3
	b        lbl_80137A5C

lbl_80137A58:
	fmr      f4, f3

lbl_80137A5C:
	lfs      f3, lbl_80518210@sda21(r2)
	fcmpu    cr0, f3, f4
	bne      lbl_80137A74
	fmr      f0, f3
	lfs      f2, lbl_80518224@sda21(r2)
	fmr      f1, f3

lbl_80137A74:
	lfs      f4, lbl_80518210@sda21(r2)
	lfs      f5, lbl_80518224@sda21(r2)
	fmuls    f3, f4, f2
	fmuls    f6, f4, f1
	fmsubs   f7, f4, f0, f3
	fnmsubs  f8, f5, f0, f6
	fmsubs   f6, f5, f2, f6
	fmuls    f3, f7, f7
	fmuls    f5, f8, f8
	fmadds   f3, f6, f6, f3
	fadds    f5, f5, f3
	fcmpo    cr0, f5, f4
	ble      lbl_80137AB8
	ble      lbl_80137ABC
	frsqrte  f3, f5
	fmuls    f5, f3, f5
	b        lbl_80137ABC

lbl_80137AB8:
	fmr      f5, f4

lbl_80137ABC:
	lfs      f3, lbl_80518210@sda21(r2)
	fcmpo    cr0, f5, f3
	ble      lbl_80137ADC
	lfs      f3, lbl_80518224@sda21(r2)
	fdivs    f3, f3, f5
	fmuls    f6, f6, f3
	fmuls    f7, f7, f3
	fmuls    f8, f8, f3

lbl_80137ADC:
	stfs     f6, 0(r31)
	fmuls    f5, f2, f7
	fmuls    f4, f0, f8
	stfs     f7, 0x10(r31)
	fmuls    f3, f1, f6
	fmsubs   f5, f1, f8, f5
	stfs     f8, 0x20(r31)
	fmsubs   f4, f2, f6, f4
	fmsubs   f3, f0, f7, f3
	stfs     f5, 4(r31)
	stfs     f4, 0x14(r31)
	stfs     f3, 0x24(r31)
	stfs     f0, 8(r31)
	stfs     f1, 0x18(r31)
	stfs     f2, 0x28(r31)
	b        lbl_80137DF0

lbl_80137B1C:
	lfs      f0, 0x4c(r29)
	stfs     f0, 0x88(r1)
	lfs      f0, 0x50(r29)
	stfs     f0, 0x8c(r1)
	lfs      f0, 0x54(r29)
	stfs     f0, 0x90(r1)
	lwz      r3, 0x10(r29)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x94(r1)
	lfs      f0, 0x50(r3)
	stfs     f0, 0x98(r1)
	lfs      f0, 0x54(r3)
	stfs     f0, 0x9c(r1)
	lwz      r3, 0xc(r29)
	cmplwi   r3, 0
	beq      lbl_80137B84
	lbz      r0, 0x58(r3)
	cmplwi   r0, 2
	bne      lbl_80137B84
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x7c(r1)
	lfs      f0, 0x50(r3)
	stfs     f0, 0x80(r1)
	lfs      f0, 0x54(r3)
	stfs     f0, 0x84(r1)
	b        lbl_80137B9C

lbl_80137B84:
	lfs      f2, 0x88(r1)
	lfs      f1, 0x8c(r1)
	lfs      f0, 0x90(r1)
	stfs     f2, 0x7c(r1)
	stfs     f1, 0x80(r1)
	stfs     f0, 0x84(r1)

lbl_80137B9C:
	lwz      r3, 0x10(r29)
	lwz      r3, 0x10(r3)
	cmplwi   r3, 0
	beq      lbl_80137BD4
	lbz      r0, 0x58(r3)
	cmplwi   r0, 2
	bne      lbl_80137BD4
	lfs      f0, 0x4c(r3)
	stfs     f0, 0xa0(r1)
	lfs      f0, 0x50(r3)
	stfs     f0, 0xa4(r1)
	lfs      f0, 0x54(r3)
	stfs     f0, 0xa8(r1)
	b        lbl_80137BEC

lbl_80137BD4:
	lfs      f2, 0x94(r1)
	lfs      f1, 0x98(r1)
	lfs      f0, 0x9c(r1)
	stfs     f2, 0xa0(r1)
	stfs     f1, 0xa4(r1)
	stfs     f0, 0xa8(r1)

lbl_80137BEC:
	lfs      f1, 4(r30)
	addi     r3, r1, 8
	addi     r4, r1, 0x7c
	bl       "CRSplineTangent__FfP10Vector3<f>"
	lfs      f4, 8(r1)
	lfs      f3, 0xc(r1)
	fmuls    f0, f4, f4
	lfs      f2, 0x10(r1)
	fmuls    f5, f3, f3
	lfs      f1, lbl_80518210@sda21(r2)
	fmuls    f6, f2, f2
	stfs     f4, 0x20(r1)
	fadds    f0, f0, f5
	stfs     f3, 0x24(r1)
	stfs     f2, 0x28(r1)
	fadds    f0, f6, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80137C50
	fmadds   f0, f4, f4, f5
	fadds    f3, f6, f0
	fcmpo    cr0, f3, f1
	ble      lbl_80137C54
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_80137C54

lbl_80137C50:
	fmr      f3, f1

lbl_80137C54:
	lfs      f0, lbl_80518210@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_80137C8C
	lfs      f0, lbl_80518224@sda21(r2)
	lfs      f2, 0x20(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)

lbl_80137C8C:
	lfs      f1, 0(r30)
	mr       r3, r31
	addi     r4, r1, 0x20
	bl       "makeNaturalPosture__7MatrixfFR10Vector3<f>"
	b        lbl_80137DF0

lbl_80137CA0:
	addi     r4, r1, 0x2c
	bl       getTube__8CollPartFRQ23Sys4Tube
	addi     r3, r1, 0x2c
	addi     r4, r1, 0x14
	bl       "getAxisVector__Q23Sys4TubeFR10Vector3<f>"
	lfs      f0, 0x14(r1)
	lfs      f1, 0x18(r1)
	fneg     f3, f0
	lfs      f0, 0x1c(r1)
	fneg     f2, f1
	lfs      f4, lbl_80518210@sda21(r2)
	fneg     f1, f0
	stfs     f3, 0x14(r1)
	frsp     f9, f3
	stfs     f2, 0x18(r1)
	frsp     f8, f1
	frsp     f0, f2
	stfs     f1, 0x1c(r1)
	lfs      f3, 0(r30)
	lfs      f6, 4(r30)
	lfs      f7, 8(r30)
	fmuls    f2, f3, f8
	fmuls    f1, f6, f9
	fmuls    f5, f7, f0
	fmsubs   f2, f7, f9, f2
	fmsubs   f3, f3, f0, f1
	fmsubs   f1, f6, f8, f5
	fmuls    f5, f2, f2
	fmuls    f6, f3, f3
	fmadds   f5, f1, f1, f5
	fadds    f5, f6, f5
	fcmpo    cr0, f5, f4
	ble      lbl_80137D34
	ble      lbl_80137D38
	frsqrte  f4, f5
	fmuls    f5, f4, f5
	b        lbl_80137D38

lbl_80137D34:
	fmr      f5, f4

lbl_80137D38:
	lfs      f4, lbl_80518210@sda21(r2)
	fcmpo    cr0, f5, f4
	ble      lbl_80137D58
	lfs      f4, lbl_80518224@sda21(r2)
	fdivs    f4, f4, f5
	fmuls    f1, f1, f4
	fmuls    f2, f2, f4
	fmuls    f3, f3, f4

lbl_80137D58:
	fmuls    f6, f1, f8
	lfs      f4, lbl_80518210@sda21(r2)
	fmuls    f5, f2, f9
	fmuls    f7, f3, f0
	fmsubs   f9, f3, f9, f6
	fmsubs   f6, f2, f8, f7
	fmsubs   f7, f1, f0, f5
	fmuls    f0, f9, f9
	fmuls    f5, f7, f7
	fmadds   f0, f6, f6, f0
	fadds    f5, f5, f0
	fcmpo    cr0, f5, f4
	ble      lbl_80137D9C
	ble      lbl_80137DA0
	frsqrte  f0, f5
	fmuls    f5, f0, f5
	b        lbl_80137DA0

lbl_80137D9C:
	fmr      f5, f4

lbl_80137DA0:
	lfs      f0, lbl_80518210@sda21(r2)
	fcmpo    cr0, f5, f0
	ble      lbl_80137DC0
	lfs      f0, lbl_80518224@sda21(r2)
	fdivs    f0, f0, f5
	fmuls    f6, f6, f0
	fmuls    f9, f9, f0
	fmuls    f7, f7, f0

lbl_80137DC0:
	stfs     f1, 0(r31)
	stfs     f2, 0x10(r31)
	stfs     f3, 0x20(r31)
	lfs      f0, 0x14(r1)
	stfs     f0, 4(r31)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x14(r31)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x24(r31)
	stfs     f6, 8(r31)
	stfs     f9, 0x18(r31)
	stfs     f7, 0x28(r31)

lbl_80137DF0:
	lwz      r0, 0xf4(r1)
	lwz      r31, 0xec(r1)
	lwz      r30, 0xe8(r1)
	lwz      r29, 0xe4(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80137E0C
 * Size:	0003F0
 */
void CollPart::setScale(float)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	fmr      f31, f1
	lfs      f0, 0x18(r3)
	fmuls    f0, f0, f31
	stfs     f0, 0x1c(r3)
	lwz      r30, 0x10(r3)
	cmplwi   r30, 0
	beq      lbl_8013800C
	lfs      f0, 0x18(r30)
	fmuls    f0, f0, f31
	stfs     f0, 0x1c(r30)
	lwz      r29, 0x10(r30)
	cmplwi   r29, 0
	beq      lbl_80137F34
	lfs      f0, 0x18(r29)
	fmuls    f0, f0, f31
	stfs     f0, 0x1c(r29)
	lwz      r0, 0x10(r29)
	cmplwi   r0, 0
	beq      lbl_80137ED4
	mr       r3, r29
	bl       getChild__8CollPartFv
	lfs      f0, 0x18(r3)
	mr       r31, r3
	fmuls    f0, f0, f31
	stfs     f0, 0x1c(r3)
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80137EB4
	mr       r3, r31
	bl       getChild__8CollPartFv
	fmr      f1, f31
	bl       setScale__8CollPartFf

lbl_80137EB4:
	mr       r3, r31
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80137ED4
	mr       r3, r31
	bl       getNext__8CollPartFv
	fmr      f1, f31
	bl       setScale__8CollPartFf

lbl_80137ED4:
	lwz      r0, 4(r29)
	cmplwi   r0, 0
	beq      lbl_80137F34
	mr       r3, r29
	bl       getNext__8CollPartFv
	lfs      f0, 0x18(r3)
	mr       r31, r3
	fmuls    f0, f0, f31
	stfs     f0, 0x1c(r3)
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80137F14
	mr       r3, r31
	bl       getChild__8CollPartFv
	fmr      f1, f31
	bl       setScale__8CollPartFf

lbl_80137F14:
	mr       r3, r31
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80137F34
	mr       r3, r31
	bl       getNext__8CollPartFv
	fmr      f1, f31
	bl       setScale__8CollPartFf

lbl_80137F34:
	lwz      r29, 4(r30)
	cmplwi   r29, 0
	beq      lbl_8013800C
	lfs      f0, 0x18(r29)
	fmuls    f0, f0, f31
	stfs     f0, 0x1c(r29)
	lwz      r0, 0x10(r29)
	cmplwi   r0, 0
	beq      lbl_80137FAC
	mr       r3, r29
	bl       getChild__8CollPartFv
	lfs      f0, 0x18(r3)
	mr       r31, r3
	fmuls    f0, f0, f31
	stfs     f0, 0x1c(r3)
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80137F8C
	mr       r3, r31
	bl       getChild__8CollPartFv
	fmr      f1, f31
	bl       setScale__8CollPartFf

lbl_80137F8C:
	mr       r3, r31
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80137FAC
	mr       r3, r31
	bl       getNext__8CollPartFv
	fmr      f1, f31
	bl       setScale__8CollPartFf

lbl_80137FAC:
	lwz      r0, 4(r29)
	cmplwi   r0, 0
	beq      lbl_8013800C
	mr       r3, r29
	bl       getNext__8CollPartFv
	lfs      f0, 0x18(r3)
	mr       r31, r3
	fmuls    f0, f0, f31
	stfs     f0, 0x1c(r3)
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80137FEC
	mr       r3, r31
	bl       getChild__8CollPartFv
	fmr      f1, f31
	bl       setScale__8CollPartFf

lbl_80137FEC:
	mr       r3, r31
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_8013800C
	mr       r3, r31
	bl       getNext__8CollPartFv
	fmr      f1, f31
	bl       setScale__8CollPartFf

lbl_8013800C:
	lwz      r29, 4(r28)
	cmplwi   r29, 0
	beq      lbl_801381D4
	lfs      f0, 0x18(r29)
	fmuls    f0, f0, f31
	stfs     f0, 0x1c(r29)
	lwz      r30, 0x10(r29)
	cmplwi   r30, 0
	beq      lbl_801380FC
	lfs      f0, 0x18(r30)
	fmuls    f0, f0, f31
	stfs     f0, 0x1c(r30)
	lwz      r0, 0x10(r30)
	cmplwi   r0, 0
	beq      lbl_8013809C
	mr       r3, r30
	bl       getChild__8CollPartFv
	lfs      f0, 0x18(r3)
	mr       r31, r3
	fmuls    f0, f0, f31
	stfs     f0, 0x1c(r3)
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_8013807C
	mr       r3, r31
	bl       getChild__8CollPartFv
	fmr      f1, f31
	bl       setScale__8CollPartFf

lbl_8013807C:
	mr       r3, r31
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_8013809C
	mr       r3, r31
	bl       getNext__8CollPartFv
	fmr      f1, f31
	bl       setScale__8CollPartFf

lbl_8013809C:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	beq      lbl_801380FC
	mr       r3, r30
	bl       getNext__8CollPartFv
	lfs      f0, 0x18(r3)
	mr       r31, r3
	fmuls    f0, f0, f31
	stfs     f0, 0x1c(r3)
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_801380DC
	mr       r3, r31
	bl       getChild__8CollPartFv
	fmr      f1, f31
	bl       setScale__8CollPartFf

lbl_801380DC:
	mr       r3, r31
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_801380FC
	mr       r3, r31
	bl       getNext__8CollPartFv
	fmr      f1, f31
	bl       setScale__8CollPartFf

lbl_801380FC:
	lwz      r29, 4(r29)
	cmplwi   r29, 0
	beq      lbl_801381D4
	lfs      f0, 0x18(r29)
	fmuls    f0, f0, f31
	stfs     f0, 0x1c(r29)
	lwz      r0, 0x10(r29)
	cmplwi   r0, 0
	beq      lbl_80138174
	mr       r3, r29
	bl       getChild__8CollPartFv
	lfs      f0, 0x18(r3)
	mr       r31, r3
	fmuls    f0, f0, f31
	stfs     f0, 0x1c(r3)
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80138154
	mr       r3, r31
	bl       getChild__8CollPartFv
	fmr      f1, f31
	bl       setScale__8CollPartFf

lbl_80138154:
	mr       r3, r31
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80138174
	mr       r3, r31
	bl       getNext__8CollPartFv
	fmr      f1, f31
	bl       setScale__8CollPartFf

lbl_80138174:
	lwz      r0, 4(r29)
	cmplwi   r0, 0
	beq      lbl_801381D4
	mr       r3, r29
	bl       getNext__8CollPartFv
	lfs      f0, 0x18(r3)
	mr       r31, r3
	fmuls    f0, f0, f31
	stfs     f0, 0x1c(r3)
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_801381B4
	mr       r3, r31
	bl       getChild__8CollPartFv
	fmr      f1, f31
	bl       setScale__8CollPartFf

lbl_801381B4:
	mr       r3, r31
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_801381D4
	mr       r3, r31
	bl       getNext__8CollPartFv
	fmr      f1, f31
	bl       setScale__8CollPartFf

lbl_801381D4:
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801381FC
 * Size:	00007C
 */
void CollPart::getSphere(Sys::Sphere&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lbz      r0, 0x58(r3)
	cmplwi   r0, 0
	beq      lbl_80138240
	lis      r3, lbl_8047C5A0@ha
	lis      r5, lbl_8047C5CC@ha
	addi     r3, r3, lbl_8047C5A0@l
	li       r4, 0x509
	addi     r5, r5, lbl_8047C5CC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80138240:
	lfs      f1, 0x1c(r30)
	lfs      f0, 0x4c(r30)
	stfs     f0, 0(r31)
	lfs      f0, 0x50(r30)
	stfs     f0, 4(r31)
	lfs      f0, 0x54(r30)
	stfs     f0, 8(r31)
	stfs     f1, 0xc(r31)
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
 * Address:	80138278
 * Size:	0000B8
 */
void CollPart::getTube(Sys::Tube&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lbz      r3, 0x58(r3)
	cmplwi   r3, 1
	beq      lbl_801382AC
	cmplwi   r3, 2
	bne      lbl_801382B0

lbl_801382AC:
	li       r0, 1

lbl_801382B0:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801382D4
	lis      r3, lbl_8047C5A0@ha
	lis      r5, lbl_8047C5CC@ha
	addi     r3, r3, lbl_8047C5A0@l
	li       r4, 0x50f
	addi     r5, r5, lbl_8047C5CC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801382D4:
	lwz      r3, 0x10(r30)
	lfs      f1, 0x1c(r30)
	lfs      f2, 0x1c(r3)
	lfs      f0, 0x4c(r30)
	stfs     f0, 0(r31)
	lfs      f0, 0x50(r30)
	stfs     f0, 4(r31)
	lfs      f0, 0x54(r30)
	stfs     f0, 8(r31)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0xc(r31)
	lfs      f0, 0x50(r3)
	stfs     f0, 0x10(r31)
	lfs      f0, 0x54(r3)
	stfs     f0, 0x14(r31)
	stfs     f1, 0x18(r31)
	stfs     f2, 0x1c(r31)
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
 * Address:	80138330
 * Size:	000004
 */
void CollPart::draw(Graphics&) { }

/*
 * --INFO--
 * Address:	80138334
 * Size:	000134
 */
MouthCollPart::MouthCollPart()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r0, r30
	mr       r31, r0
	bl       __ct__5CNodeFv
	lis      r4, __vt__8CollPart@ha
	addi     r3, r31, 0x30
	addi     r0, r4, __vt__8CollPart@l
	stw      r0, 0(r31)
	bl       __ct__4ID32Fv
	addi     r3, r31, 0x3c
	bl       __ct__4ID32Fv
	li       r5, 0
	lis      r4, 0x5F5F5F5F@ha
	stw      r5, 0x10(r31)
	li       r0, -1
	lfs      f0, lbl_80518210@sda21(r2)
	addi     r3, r31, 0x3c
	stw      r5, 0xc(r31)
	addi     r4, r4, 0x5F5F5F5F@l
	stw      r5, 8(r31)
	stw      r5, 4(r31)
	stfs     f0, 0x1c(r31)
	stfs     f0, 0x18(r31)
	stfs     f0, 0x20(r31)
	stfs     f0, 0x24(r31)
	stfs     f0, 0x28(r31)
	stfs     f0, 0x4c(r31)
	stfs     f0, 0x50(r31)
	stfs     f0, 0x54(r31)
	stw      r5, 0x5c(r31)
	stw      r0, 0x2c(r31)
	stw      r5, 0x60(r31)
	sth      r5, 0x48(r31)
	stb      r5, 0x58(r31)
	bl       setID__4ID32FUl
	lis      r3, __vt__13MouthCollPart@ha
	lis      r4, 0x5F5F5F5F@ha
	addi     r0, r3, __vt__13MouthCollPart@l
	li       r5, 0
	stw      r0, 0(r30)
	li       r0, -1
	lfs      f0, lbl_80518210@sda21(r2)
	addi     r3, r30, 0x3c
	stw      r5, 0x10(r30)
	addi     r4, r4, 0x5F5F5F5F@l
	stw      r5, 0xc(r30)
	stw      r5, 8(r30)
	stw      r5, 4(r30)
	stfs     f0, 0x1c(r30)
	stfs     f0, 0x18(r30)
	stfs     f0, 0x20(r30)
	stfs     f0, 0x24(r30)
	stfs     f0, 0x28(r30)
	stfs     f0, 0x4c(r30)
	stfs     f0, 0x50(r30)
	stfs     f0, 0x54(r30)
	stw      r5, 0x5c(r30)
	stw      r0, 0x2c(r30)
	stw      r5, 0x60(r30)
	sth      r5, 0x48(r30)
	stb      r5, 0x58(r30)
	bl       setID__4ID32FUl
	li       r0, 0
	mr       r3, r30
	stw      r0, 0x64(r30)
	stb      r0, 0x6c(r30)
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
 * Address:	80138468
 * Size:	000060
 */
CollPart::~CollPart()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801384AC
	lis      r5, __vt__8CollPart@ha
	li       r4, 0
	addi     r0, r5, __vt__8CollPart@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_801384AC
	mr       r3, r30
	bl       __dl__FPv

lbl_801384AC:
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
 * Address:	801384C8
 * Size:	000048
 */
void MouthCollPart::getPosition(Vector3f&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	lwz      r3, 0x68(r3)
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f0, 0xc(r3)
	stfs     f0, 0(r31)
	lfs      f0, 0x1c(r3)
	stfs     f0, 4(r31)
	lfs      f0, 0x2c(r3)
	stfs     f0, 8(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80138510
 * Size:	000038
 */
void MouthCollPart::copyMatrixTo(Matrixf&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	lwz      r3, 0x68(r3)
	bl       getWorldMatrix__Q28SysShape5JointFv
	mr       r4, r31
	bl       PSMTXCopy
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80138548
 * Size:	000010
 */
MouthSlots::MouthSlots()
{
	/*
	li       r0, 0
	stw      r0, 0(r3)
	stw      r0, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80138558
 * Size:	000064
 */
void MouthSlots::alloc(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	stw      r4, 0(r3)
	mulli    r3, r31, 0x70
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__13MouthCollPartFv@ha
	lis      r5, __dt__13MouthCollPartFv@ha
	addi     r4, r4, __ct__13MouthCollPartFv@l
	mr       r7, r31
	addi     r5, r5, __dt__13MouthCollPartFv@l
	li       r6, 0x70
	bl       __construct_new_array
	stw      r3, 4(r30)
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
 * Address:	801385BC
 * Size:	000070
 */
MouthCollPart::~MouthCollPart()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80138610
	lis      r4, __vt__13MouthCollPart@ha
	addi     r0, r4, __vt__13MouthCollPart@l
	stw      r0, 0(r30)
	beq      lbl_80138600
	lis      r5, __vt__8CollPart@ha
	li       r4, 0
	addi     r0, r5, __vt__8CollPart@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_80138600:
	extsh.   r0, r31
	ble      lbl_80138610
	mr       r3, r30
	bl       __dl__FPv

lbl_80138610:
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
 * Address:	8013862C
 * Size:	000064
 */
void MouthSlots::update()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_80138668

lbl_80138654:
	lwz      r0, 4(r29)
	add      r3, r0, r31
	bl       update__8CollPartFv
	addi     r31, r31, 0x70
	addi     r30, r30, 1

lbl_80138668:
	lwz      r0, 0(r29)
	cmpw     r30, r0
	blt      lbl_80138654
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
 * Address:	80138690
 * Size:	0000E8
 */
void MouthSlots::setup(int, SysShape::Model*, char*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r6
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	or.      r29, r4, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	li       r3, 0
	blt      lbl_801386D4
	lwz      r0, 0(r28)
	cmpw     r29, r0
	bge      lbl_801386D4
	li       r3, 1

lbl_801386D4:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801386F8
	lis      r3, lbl_8047C5A0@ha
	lis      r5, lbl_8047C5CC@ha
	addi     r3, r3, lbl_8047C5A0@l
	li       r4, 0x5cd
	addi     r5, r5, lbl_8047C5CC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801386F8:
	mulli    r0, r29, 0x70
	lwz      r3, 4(r28)
	mr       r4, r31
	add      r31, r3, r0
	stw      r30, 0x5c(r31)
	lwz      r3, 0x5c(r31)
	bl       getJoint__Q28SysShape5ModelFPc
	lis      r4, "zero__10Vector3<f>"@ha
	stw      r3, 0x68(r31)
	addi     r3, r4, "zero__10Vector3<f>"@l
	lfs      f0, lbl_80518210@sda21(r2)
	lfs      f1, 0(r3)
	li       r0, 0
	stfs     f1, 0x20(r31)
	lfs      f1, 4(r3)
	stfs     f1, 0x24(r31)
	lfs      f1, 8(r3)
	stfs     f1, 0x28(r31)
	lwz      r3, 0x68(r31)
	lwz      r3, 0x18(r3)
	lhz      r3, 0x14(r3)
	stw      r3, 0x2c(r31)
	stfs     f0, 0x1c(r31)
	stw      r0, 0x64(r31)
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
 * Address:	80138778
 * Size:	00007C
 */
MouthCollPart* MouthSlots::getSlot(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0
	blt      lbl_801387AC
	lwz      r0, 0(r30)
	cmpw     r31, r0
	bge      lbl_801387AC
	li       r3, 1

lbl_801387AC:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801387D0
	lis      r3, lbl_8047C5A0@ha
	lis      r5, lbl_8047C5CC@ha
	addi     r3, r3, lbl_8047C5A0@l
	li       r4, 0x5d3
	addi     r5, r5, lbl_8047C5CC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801387D0:
	mulli    r0, r31, 0x70
	lwz      r3, 4(r30)
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
 * Address:	801387F4
 * Size:	000150
 */
void CollPartFactory::load(char*)
{
	/*
	stwu     r1, -0x440(r1)
	mflr     r0
	li       r4, 0
	li       r5, 0
	stw      r0, 0x444(r1)
	li       r0, 0
	li       r6, 0
	li       r8, 2
	stw      r31, 0x43c(r1)
	li       r9, 0
	li       r10, 0
	stw      r30, 0x438(r1)
	stw      r29, 0x434(r1)
	stw      r0, 8(r1)
	lwz      r7, sSystemHeap__7JKRHeap@sda21(r13)
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r30, r3, r3
	bne      lbl_80138844
	li       r3, 0
	b        lbl_80138928

lbl_80138844:
	mr       r4, r30
	addi     r3, r1, 0x10
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x1c(r1)
	bne      lbl_8013886C
	li       r0, 0
	stw      r0, 0x424(r1)

lbl_8013886C:
	li       r3, 0x64
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8013891C
	mr       r29, r31
	bl       __ct__5CNodeFv
	lis      r4, __vt__8CollPart@ha
	addi     r3, r31, 0x30
	addi     r0, r4, __vt__8CollPart@l
	stw      r0, 0(r31)
	bl       __ct__4ID32Fv
	addi     r3, r31, 0x3c
	bl       __ct__4ID32Fv
	li       r5, 0
	lis      r4, 0x5F5F5F5F@ha
	stw      r5, 0x10(r31)
	li       r0, -1
	lfs      f0, lbl_80518210@sda21(r2)
	addi     r3, r31, 0x3c
	stw      r5, 0xc(r31)
	addi     r4, r4, 0x5F5F5F5F@l
	stw      r5, 8(r31)
	stw      r5, 4(r31)
	stfs     f0, 0x1c(r31)
	stfs     f0, 0x18(r31)
	stfs     f0, 0x20(r31)
	stfs     f0, 0x24(r31)
	stfs     f0, 0x28(r31)
	stfs     f0, 0x4c(r31)
	stfs     f0, 0x50(r31)
	stfs     f0, 0x54(r31)
	stw      r5, 0x5c(r31)
	stw      r0, 0x2c(r31)
	stw      r5, 0x60(r31)
	sth      r5, 0x48(r31)
	stb      r5, 0x58(r31)
	bl       setID__4ID32FUl
	lis      r4, __vt__15CollPartFactory@ha
	mr       r3, r29
	addi     r0, r4, __vt__15CollPartFactory@l
	addi     r4, r1, 0x10
	stw      r0, 0(r29)
	li       r5, 0
	bl       read__8CollPartFR6Streamb

lbl_8013891C:
	mr       r3, r30
	bl       __dla__FPv
	mr       r3, r31

lbl_80138928:
	lwz      r0, 0x444(r1)
	lwz      r31, 0x43c(r1)
	lwz      r30, 0x438(r1)
	lwz      r29, 0x434(r1)
	mtlr     r0
	addi     r1, r1, 0x440
	blr
	*/
}

/*
 * --INFO--
 * Address:	80138944
 * Size:	000128
 */
void CollPartFactory::load(JKRFileLoader*, char*)
{
	/*
	stwu     r1, -0x430(r1)
	mflr     r0
	stw      r0, 0x434(r1)
	stw      r31, 0x42c(r1)
	stw      r30, 0x428(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_80138978
	li       r3, 0
	b        lbl_80138A54

lbl_80138978:
	mr       r4, r3
	addi     r3, r1, 8
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x14(r1)
	bne      lbl_801389A0
	li       r0, 0
	stw      r0, 0x41c(r1)

lbl_801389A0:
	li       r3, 0x64
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80138A50
	mr       r30, r31
	bl       __ct__5CNodeFv
	lis      r4, __vt__8CollPart@ha
	addi     r3, r31, 0x30
	addi     r0, r4, __vt__8CollPart@l
	stw      r0, 0(r31)
	bl       __ct__4ID32Fv
	addi     r3, r31, 0x3c
	bl       __ct__4ID32Fv
	li       r5, 0
	lis      r4, 0x5F5F5F5F@ha
	stw      r5, 0x10(r31)
	li       r0, -1
	lfs      f0, lbl_80518210@sda21(r2)
	addi     r3, r31, 0x3c
	stw      r5, 0xc(r31)
	addi     r4, r4, 0x5F5F5F5F@l
	stw      r5, 8(r31)
	stw      r5, 4(r31)
	stfs     f0, 0x1c(r31)
	stfs     f0, 0x18(r31)
	stfs     f0, 0x20(r31)
	stfs     f0, 0x24(r31)
	stfs     f0, 0x28(r31)
	stfs     f0, 0x4c(r31)
	stfs     f0, 0x50(r31)
	stfs     f0, 0x54(r31)
	stw      r5, 0x5c(r31)
	stw      r0, 0x2c(r31)
	stw      r5, 0x60(r31)
	sth      r5, 0x48(r31)
	stb      r5, 0x58(r31)
	bl       setID__4ID32FUl
	lis      r4, __vt__15CollPartFactory@ha
	mr       r3, r30
	addi     r0, r4, __vt__15CollPartFactory@l
	addi     r4, r1, 8
	stw      r0, 0(r30)
	li       r5, 0
	bl       read__8CollPartFR6Streamb

lbl_80138A50:
	mr       r3, r31

lbl_80138A54:
	lwz      r0, 0x434(r1)
	lwz      r31, 0x42c(r1)
	lwz      r30, 0x428(r1)
	mtlr     r0
	addi     r1, r1, 0x430
	blr
	*/
}

/*
 * --INFO--
 * Address:	80138A6C
 * Size:	000020
 */
void CollPartFactory::createInstance(SysShape::MtxObject*, CollPartMgr*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       clone__8CollPartFPQ28SysShape9MtxObjectP11CollPartMgr
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80138A8C
 * Size:	0000AC
 */
void CollPartMgr::createOne(SysShape::MtxObject*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_80138B1C
	li       r5, 0
	lis      r4, 0x5F5F5F5F@ha
	stw      r5, 0x10(r31)
	li       r0, -1
	lfs      f0, lbl_80518210@sda21(r2)
	addi     r3, r31, 0x3c
	stw      r5, 0xc(r31)
	addi     r4, r4, 0x5F5F5F5F@l
	stw      r5, 8(r31)
	stw      r5, 4(r31)
	stfs     f0, 0x1c(r31)
	stfs     f0, 0x18(r31)
	stfs     f0, 0x20(r31)
	stfs     f0, 0x24(r31)
	stfs     f0, 0x28(r31)
	stfs     f0, 0x4c(r31)
	stfs     f0, 0x50(r31)
	stfs     f0, 0x54(r31)
	stw      r30, 0x5c(r31)
	stw      r0, 0x2c(r31)
	stw      r5, 0x60(r31)
	sth      r5, 0x48(r31)
	stb      r5, 0x58(r31)
	bl       setID__4ID32FUl

lbl_80138B1C:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80138B38
 * Size:	0002A8
 */
void CollPart::clone(SysShape::MtxObject*, CollPartMgr*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	or.      r30, r5, r5
	mr       r28, r3
	mr       r29, r4
	beq      lbl_80138C5C
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_80138BD4
	li       r5, 0
	lis      r4, 0x5F5F5F5F@ha
	stw      r5, 0x10(r31)
	li       r0, -1
	lfs      f0, lbl_80518210@sda21(r2)
	addi     r3, r31, 0x3c
	stw      r5, 0xc(r31)
	addi     r4, r4, 0x5F5F5F5F@l
	stw      r5, 8(r31)
	stw      r5, 4(r31)
	stfs     f0, 0x1c(r31)
	stfs     f0, 0x18(r31)
	stfs     f0, 0x20(r31)
	stfs     f0, 0x24(r31)
	stfs     f0, 0x28(r31)
	stfs     f0, 0x4c(r31)
	stfs     f0, 0x50(r31)
	stfs     f0, 0x54(r31)
	stw      r29, 0x5c(r31)
	stw      r0, 0x2c(r31)
	stw      r5, 0x60(r31)
	sth      r5, 0x48(r31)
	stb      r5, 0x58(r31)
	bl       setID__4ID32FUl

lbl_80138BD4:
	cmplwi   r31, 0
	bne      lbl_80138BF8
	lis      r3, lbl_8047C5A0@ha
	lis      r5, lbl_8047C614@ha
	addi     r3, r3, lbl_8047C5A0@l
	li       r4, 0x623
	addi     r5, r5, lbl_8047C614@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80138BF8:
	li       r5, 0
	lis      r4, 0x5F5F5F5F@ha
	stw      r5, 0x10(r31)
	li       r0, -1
	lfs      f0, lbl_80518210@sda21(r2)
	addi     r3, r31, 0x3c
	stw      r5, 0xc(r31)
	addi     r4, r4, 0x5F5F5F5F@l
	stw      r5, 8(r31)
	stw      r5, 4(r31)
	stfs     f0, 0x1c(r31)
	stfs     f0, 0x18(r31)
	stfs     f0, 0x20(r31)
	stfs     f0, 0x24(r31)
	stfs     f0, 0x28(r31)
	stfs     f0, 0x4c(r31)
	stfs     f0, 0x50(r31)
	stfs     f0, 0x54(r31)
	stw      r29, 0x5c(r31)
	stw      r0, 0x2c(r31)
	stw      r5, 0x60(r31)
	sth      r5, 0x48(r31)
	stb      r5, 0x58(r31)
	bl       setID__4ID32FUl
	b        lbl_80138CF0

lbl_80138C5C:
	li       r3, 0x64
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80138CF0
	mr       r26, r31
	bl       __ct__5CNodeFv
	lis      r4, __vt__8CollPart@ha
	addi     r3, r26, 0x30
	addi     r0, r4, __vt__8CollPart@l
	stw      r0, 0(r26)
	bl       __ct__4ID32Fv
	addi     r3, r26, 0x3c
	bl       __ct__4ID32Fv
	li       r5, 0
	lis      r4, 0x5F5F5F5F@ha
	stw      r5, 0x10(r26)
	li       r0, -1
	lfs      f0, lbl_80518210@sda21(r2)
	addi     r3, r26, 0x3c
	stw      r5, 0xc(r26)
	addi     r4, r4, 0x5F5F5F5F@l
	stw      r5, 8(r26)
	stw      r5, 4(r26)
	stfs     f0, 0x1c(r26)
	stfs     f0, 0x18(r26)
	stfs     f0, 0x20(r26)
	stfs     f0, 0x24(r26)
	stfs     f0, 0x28(r26)
	stfs     f0, 0x4c(r26)
	stfs     f0, 0x50(r26)
	stfs     f0, 0x54(r26)
	stw      r29, 0x5c(r26)
	stw      r0, 0x2c(r26)
	stw      r5, 0x60(r26)
	sth      r5, 0x48(r26)
	stb      r5, 0x58(r26)
	bl       setID__4ID32FUl

lbl_80138CF0:
	lfs      f0, 0x1c(r28)
	addi     r3, r31, 0x30
	addi     r4, r28, 0x30
	li       r5, 5
	stfs     f0, 0x1c(r31)
	lfs      f0, 0x1c(r31)
	stfs     f0, 0x18(r31)
	bl       __copy
	lwz      r0, 0x38(r28)
	addi     r3, r31, 0x3c
	addi     r4, r28, 0x3c
	li       r5, 5
	stw      r0, 0x38(r31)
	bl       __copy
	lwz      r0, 0x44(r28)
	mr       r3, r28
	stw      r0, 0x44(r31)
	lfs      f0, 0x20(r28)
	stfs     f0, 0x20(r31)
	lfs      f0, 0x24(r28)
	stfs     f0, 0x24(r31)
	lfs      f0, 0x28(r28)
	stfs     f0, 0x28(r31)
	lbz      r0, 0x58(r28)
	stb      r0, 0x58(r31)
	lwz      r0, 0x2c(r28)
	stw      r0, 0x2c(r31)
	lwz      r0, 0x5c(r28)
	stw      r0, 0x5c(r31)
	lwz      r0, 0x60(r28)
	stw      r0, 0x60(r31)
	lhz      r0, 0x48(r28)
	sth      r0, 0x48(r31)
	stw      r29, 0x5c(r31)
	lwz      r12, 0(r28)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r27, 0x10(r28)
	mr       r28, r3
	li       r26, 0
	b        lbl_80138DC0

lbl_80138D98:
	mr       r3, r27
	mr       r4, r29
	mr       r5, r30
	bl       clone__8CollPartFPQ28SysShape9MtxObjectP11CollPartMgr
	mr       r0, r3
	mr       r3, r31
	mr       r4, r0
	bl       add__5CNodeFP5CNode
	lwz      r27, 4(r27)
	addi     r26, r26, 1

lbl_80138DC0:
	cmpw     r26, r28
	blt      lbl_80138D98
	mr       r3, r31
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80138DE0
 * Size:	000020
 */
int CollPart::getChildCount()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       getChildCount__5CNodeFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80138E00
 * Size:	00035C
 */
void CollPart::read(Stream&, bool)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r18, 8(r1)
	mr       r30, r4
	mr       r24, r3
	mr       r31, r5
	mr       r3, r30
	bl       readInt__6StreamFv
	mr       r19, r3
	mr       r3, r30
	bl       readFloat__6StreamFv
	stfs     f1, 0x1c(r24)
	mr       r4, r30
	addi     r3, r24, 0x30
	lfs      f0, 0x1c(r24)
	stfs     f0, 0x18(r24)
	bl       read__4ID32FR6Stream
	mr       r4, r30
	addi     r3, r24, 0x3c
	bl       read__4ID32FR6Stream
	mr       r4, r30
	addi     r3, r24, 0x20
	bl       "read__10Vector3<f>FR6Stream"
	mr       r3, r30
	bl       readInt__6StreamFv
	stw      r3, 0x2c(r24)
	mr       r3, r30
	bl       readShort__6StreamFv
	lis      r4, lbl_8047C630@ha
	sth      r3, 0x48(r24)
	clrlwi   r28, r31, 0x18
	li       r23, 0
	addi     r29, r4, lbl_8047C630@l
	b        lbl_80139140

lbl_80138E8C:
	cmplwi   r28, 0
	beq      lbl_80138EB8
	li       r3, 0x68
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80138EB0
	lwz      r4, 0x5c(r24)
	bl       __ct__11AgeCollPartFPQ28SysShape5Model
	mr       r0, r3

lbl_80138EB0:
	mr       r25, r0
	b        lbl_80138F54

lbl_80138EB8:
	li       r3, 0x64
	bl       __nw__FUl
	or.      r20, r3, r3
	beq      lbl_80138F50
	lwz      r21, 0x5c(r24)
	mr       r18, r20
	bl       __ct__5CNodeFv
	lis      r4, __vt__8CollPart@ha
	addi     r3, r18, 0x30
	addi     r0, r4, __vt__8CollPart@l
	stw      r0, 0(r18)
	bl       __ct__4ID32Fv
	addi     r3, r18, 0x3c
	bl       __ct__4ID32Fv
	li       r5, 0
	lis      r4, 0x5F5F5F5F@ha
	stw      r5, 0x10(r18)
	li       r0, -1
	lfs      f0, lbl_80518210@sda21(r2)
	addi     r3, r18, 0x3c
	stw      r5, 0xc(r18)
	addi     r4, r4, 0x5F5F5F5F@l
	stw      r5, 8(r18)
	stw      r5, 4(r18)
	stfs     f0, 0x1c(r18)
	stfs     f0, 0x18(r18)
	stfs     f0, 0x20(r18)
	stfs     f0, 0x24(r18)
	stfs     f0, 0x28(r18)
	stfs     f0, 0x4c(r18)
	stfs     f0, 0x50(r18)
	stfs     f0, 0x54(r18)
	stw      r21, 0x5c(r18)
	stw      r0, 0x2c(r18)
	stw      r5, 0x60(r18)
	sth      r5, 0x48(r18)
	stb      r5, 0x58(r18)
	bl       setID__4ID32FUl

lbl_80138F50:
	mr       r25, r20

lbl_80138F54:
	mr       r3, r30
	bl       readInt__6StreamFv
	mr       r27, r3
	mr       r3, r30
	bl       readFloat__6StreamFv
	stfs     f1, 0x1c(r25)
	mr       r4, r30
	addi     r3, r25, 0x30
	lfs      f0, 0x1c(r25)
	stfs     f0, 0x18(r25)
	bl       read__4ID32FR6Stream
	mr       r4, r30
	addi     r3, r25, 0x3c
	bl       read__4ID32FR6Stream
	mr       r4, r30
	addi     r3, r25, 0x20
	bl       "read__10Vector3<f>FR6Stream"
	mr       r3, r30
	bl       readInt__6StreamFv
	stw      r3, 0x2c(r25)
	mr       r3, r30
	bl       readShort__6StreamFv
	sth      r3, 0x48(r25)
	li       r26, 0
	b        lbl_80139124

lbl_80138FB8:
	cmplwi   r28, 0
	beq      lbl_80138FE0
	li       r3, 0x68
	bl       __nw__FUl
	or.      r20, r3, r3
	beq      lbl_80139034
	lwz      r4, 0x5c(r25)
	bl       __ct__11AgeCollPartFPQ28SysShape5Model
	mr       r20, r3
	b        lbl_80139034

lbl_80138FE0:
	li       r3, 0x64
	bl       __nw__FUl
	or.      r20, r3, r3
	beq      lbl_80139034
	lwz      r21, 0x5c(r25)
	mr       r18, r20
	bl       __ct__5CNodeFv
	lis      r4, __vt__8CollPart@ha
	addi     r3, r18, 0x20
	addi     r0, r4, __vt__8CollPart@l
	stw      r0, 0(r18)
	bl       "__ct__10Vector3<f>Fv"
	addi     r3, r18, 0x30
	bl       __ct__4ID32Fv
	addi     r3, r18, 0x3c
	bl       __ct__4ID32Fv
	addi     r3, r18, 0x4c
	bl       "__ct__10Vector3<f>Fv"
	mr       r3, r18
	mr       r4, r21
	bl       init__8CollPartFPQ28SysShape9MtxObject

lbl_80139034:
	mr       r3, r30
	bl       readInt__6StreamFv
	mr       r22, r3
	mr       r3, r30
	bl       readFloat__6StreamFv
	stfs     f1, 0x1c(r20)
	mr       r4, r30
	addi     r3, r20, 0x30
	lfs      f0, 0x1c(r20)
	stfs     f0, 0x18(r20)
	bl       read__4ID32FR6Stream
	mr       r4, r30
	addi     r3, r20, 0x3c
	bl       read__4ID32FR6Stream
	mr       r4, r30
	addi     r3, r20, 0x20
	bl       "read__10Vector3<f>FR6Stream"
	mr       r3, r30
	bl       readInt__6StreamFv
	stw      r3, 0x2c(r20)
	mr       r3, r30
	bl       readU16__6StreamFv
	sth      r3, 0x48(r20)
	li       r21, 0
	b        lbl_80139108

lbl_80139098:
	cmplwi   r28, 0
	beq      lbl_801390C0
	li       r3, 0x68
	bl       __nw__FUl
	or.      r18, r3, r3
	beq      lbl_801390DC
	lwz      r4, 0x5c(r20)
	bl       __ct__11AgeCollPartFPQ28SysShape5Model
	mr       r18, r3
	b        lbl_801390DC

lbl_801390C0:
	li       r3, 0x64
	bl       __nw__FUl
	or.      r18, r3, r3
	beq      lbl_801390DC
	lwz      r4, 0x5c(r20)
	bl       __ct__8CollPartFPQ28SysShape9MtxObject
	mr       r18, r3

lbl_801390DC:
	mr       r3, r18
	mr       r4, r30
	mr       r5, r31
	bl       read__8CollPartFR6Streamb
	mr       r3, r18
	mr       r4, r29
	bl       setName__5CNodeFPc
	mr       r3, r20
	mr       r4, r18
	bl       addChild__8CollPartFP8CollPart
	addi     r21, r21, 1

lbl_80139108:
	cmpw     r21, r22
	blt      lbl_80139098
	stw      r29, 0x14(r20)
	mr       r3, r25
	mr       r4, r20
	bl       add__5CNodeFP5CNode
	addi     r26, r26, 1

lbl_80139124:
	cmpw     r26, r27
	blt      lbl_80138FB8
	stw      r29, 0x14(r25)
	mr       r3, r24
	mr       r4, r25
	bl       add__5CNodeFP5CNode
	addi     r23, r23, 1

lbl_80139140:
	cmpw     r23, r19
	blt      lbl_80138E8C
	lmw      r18, 8(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013915C
 * Size:	000020
 */
void CollPart::addChild(CollPart*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       add__5CNodeFP5CNode
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013917C
 * Size:	000008
 */
void CNode::setName(char* name)
{
	// Generated from stw r4, 0x14(r3)
	m_name = name;
}

/*
 * --INFO--
 * Address:	80139184
 * Size:	000024
 */
u16 Stream::readU16()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       readShort__6StreamFv
	lwz      r0, 0x14(r1)
	clrlwi   r3, r3, 0x10
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801391A8
 * Size:	00010C
 */
void AgeCollPart::draw(Graphics&)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	mr       r29, r3
	mr       r30, r4
	lwz      r4, 0x2c(r3)
	cmpwi    r4, -1
	beq      lbl_80139290
	lwz      r3, 0x5c(r29)
	mulli    r0, r4, 0x3c
	lwz      r3, 0x10(r3)
	add.     r31, r3, r0
	beq      lbl_80139290
	cmpwi    r4, -1
	beq      lbl_8013923C
	addi     r3, r1, 8
	bl       PSMTXIdentity
	lfs      f0, 0x20(r29)
	stfs     f0, 0x14(r1)
	lfs      f0, 0x24(r29)
	stfs     f0, 0x24(r1)
	lfs      f0, 0x28(r29)
	stfs     f0, 0x34(r1)
	lwz      r3, 0x5c(r29)
	lwz      r4, 0x2c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r4, r1, 8
	addi     r5, r1, 0x38
	bl       PSMTXConcat

lbl_8013923C:
	lbz      r0, 0x64(r29)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80139290
	lwz      r3, 0x18(r31)
	lfs      f0, lbl_8051822C@sda21(r2)
	lfs      f1, 0x38(r3)
	fmr      f31, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80139278
	lwz      r3, 0x5c(r29)
	lfs      f1, lbl_80518228@sda21(r2)
	lwz      r3, 0x10(r3)
	lwz      r3, 0x18(r3)
	lfs      f0, 0x38(r3)
	fmuls    f31, f1, f0

lbl_80139278:
	mr       r3, r31
	bl       getWorldMatrix__Q28SysShape5JointFv
	fmr      f1, f31
	mr       r4, r3
	mr       r3, r30
	bl       drawAxis__8GraphicsFfP7Matrixf

lbl_80139290:
	psq_l    f31, 136(r1), 0, qr0
	lwz      r0, 0x94(r1)
	lfd      f31, 0x80(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	801392B4
 * Size:	0000CC
 */
AgeCollPart::AgeCollPart(SysShape::Model*)
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
	lis      r4, __vt__8CollPart@ha
	addi     r3, r30, 0x30
	addi     r0, r4, __vt__8CollPart@l
	stw      r0, 0(r30)
	bl       __ct__4ID32Fv
	addi     r3, r30, 0x3c
	bl       __ct__4ID32Fv
	li       r5, 0
	lis      r4, 0x5F5F5F5F@ha
	stw      r5, 0x10(r30)
	li       r0, -1
	lfs      f0, lbl_80518210@sda21(r2)
	addi     r3, r30, 0x3c
	stw      r5, 0xc(r30)
	addi     r4, r4, 0x5F5F5F5F@l
	stw      r5, 8(r30)
	stw      r5, 4(r30)
	stfs     f0, 0x1c(r30)
	stfs     f0, 0x18(r30)
	stfs     f0, 0x20(r30)
	stfs     f0, 0x24(r30)
	stfs     f0, 0x28(r30)
	stfs     f0, 0x4c(r30)
	stfs     f0, 0x50(r30)
	stfs     f0, 0x54(r30)
	stw      r31, 0x5c(r30)
	stw      r0, 0x2c(r30)
	stw      r5, 0x60(r30)
	sth      r5, 0x48(r30)
	stb      r5, 0x58(r30)
	bl       setID__4ID32FUl
	lis      r3, __vt__11AgeCollPart@ha
	li       r0, 0
	addi     r4, r3, __vt__11AgeCollPart@l
	mr       r3, r30
	stw      r4, 0(r30)
	stb      r0, 0x64(r30)
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
 * Address:	80139380
 * Size:	000070
 */
AgeCollPart::~AgeCollPart()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801393D4
	lis      r4, __vt__11AgeCollPart@ha
	addi     r0, r4, __vt__11AgeCollPart@l
	stw      r0, 0(r30)
	beq      lbl_801393C4
	lis      r5, __vt__8CollPart@ha
	li       r4, 0
	addi     r0, r5, __vt__8CollPart@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_801393C4:
	extsh.   r0, r31
	ble      lbl_801393D4
	mr       r3, r30
	bl       __dl__FPv

lbl_801393D4:
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
 * Address:	801393F0
 * Size:	000008
 */
bool CollPart::isMouth() { return false; }

/*
 * --INFO--
 * Address:	801393F8
 * Size:	000004
 */
void CollPart::constructor() { }

/*
 * --INFO--
 * Address:	801393FC
 * Size:	000004
 */
void CollPart::doAnimation() { }

/*
 * --INFO--
 * Address:	80139400
 * Size:	000004
 */
void CollPart::doEntry() { }

/*
 * --INFO--
 * Address:	80139404
 * Size:	000004
 */
void CollPart::doSetView(unsigned long) { }

/*
 * --INFO--
 * Address:	80139408
 * Size:	000004
 */
void CollPart::doViewCalc() { }

/*
 * --INFO--
 * Address:	8013940C
 * Size:	000004
 */
void CollPart::doSimulation(float) { }

/*
 * --INFO--
 * Address:	80139410
 * Size:	000004
 */
void CollPart::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80139414
 * Size:	000070
 */
CollPartFactory::~CollPartFactory()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80139468
	lis      r4, __vt__15CollPartFactory@ha
	addi     r0, r4, __vt__15CollPartFactory@l
	stw      r0, 0(r30)
	beq      lbl_80139458
	lis      r5, __vt__8CollPart@ha
	li       r4, 0
	addi     r0, r5, __vt__8CollPart@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_80139458:
	extsh.   r0, r31
	ble      lbl_80139468
	mr       r3, r30
	bl       __dl__FPv

lbl_80139468:
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
 * Address:	80139484
 * Size:	000008
 */
bool MouthCollPart::isMouth() { return true; }

namespace Sys {

/*
 * --INFO--
 * Address:	8013948C
 * Size:	0000D4
 */
OBB::~OBB()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80139544
	lis      r3, __vt__Q23Sys3OBB@ha
	addic.   r0, r30, 0xd8
	addi     r0, r3, __vt__Q23Sys3OBB@l
	stw      r0, 0(r30)
	beq      lbl_80139528
	lis      r3, __vt__Q23Sys12TriIndexList@ha
	addic.   r0, r30, 0xd8
	addi     r0, r3, __vt__Q23Sys12TriIndexList@l
	stw      r0, 0xd8(r30)
	beq      lbl_80139528
	lis      r3, __vt__Q23Sys9IndexList@ha
	addic.   r0, r30, 0xd8
	addi     r0, r3, __vt__Q23Sys9IndexList@l
	stw      r0, 0xd8(r30)
	beq      lbl_80139528
	lis      r3, "__vt__17ArrayContainer<i>"@ha
	addic.   r0, r30, 0xd8
	addi     r0, r3, "__vt__17ArrayContainer<i>"@l
	stw      r0, 0xd8(r30)
	beq      lbl_80139528
	lis      r3, "__vt__12Container<i>"@ha
	addic.   r0, r30, 0xd8
	addi     r0, r3, "__vt__12Container<i>"@l
	stw      r0, 0xd8(r30)
	beq      lbl_80139528
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0xd8
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0xd8(r30)
	bl       __dt__5CNodeFv

lbl_80139528:
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_80139544
	mr       r3, r30
	bl       __dl__FPv

lbl_80139544:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Sys

/*
 * --INFO--
 * Address:	80139560
 * Size:	000070
 */
template <> Container<int>::~Container()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801395B4
	lis      r4, "__vt__12Container<i>"@ha
	addi     r0, r4, "__vt__12Container<i>"@l
	stw      r0, 0(r30)
	beq      lbl_801395A4
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_801395A4:
	extsh.   r0, r31
	ble      lbl_801395B4
	mr       r3, r30
	bl       __dl__FPv

lbl_801395B4:
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
 * Address:	801395D0
 * Size:	000080
 */
template <> ArrayContainer<int>::~ArrayContainer()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80139634
	lis      r4, "__vt__17ArrayContainer<i>"@ha
	addi     r0, r4, "__vt__17ArrayContainer<i>"@l
	stw      r0, 0(r30)
	beq      lbl_80139624
	lis      r4, "__vt__12Container<i>"@ha
	addi     r0, r4, "__vt__12Container<i>"@l
	stw      r0, 0(r30)
	beq      lbl_80139624
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_80139624:
	extsh.   r0, r31
	ble      lbl_80139634
	mr       r3, r30
	bl       __dl__FPv

lbl_80139634:
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
 * Address:	80139650
 * Size:	00004C
 */
template <> void ArrayContainer<int>::alloc(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	slwi     r3, r4, 2
	bl       __nwa__FUl
	stw      r3, 0x24(r30)
	li       r0, 0
	stw      r31, 0x20(r30)
	stw      r0, 0x1c(r30)
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
 * Address:	8013969C
 * Size:	0000B0
 */
template <> void ArrayContainer<int>::read(Stream&)
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
	mr       r3, r29
	bl       readInt__6StreamFv
	stw      r3, 0x20(r28)
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r4, 0x20(r28)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x20(r28)
	li       r30, 0
	li       r31, 0
	stw      r0, 0x1c(r28)
	b        lbl_80139720

lbl_801396F8:
	mr       r3, r28
	lwz      r0, 0x24(r28)
	lwz      r12, 0(r28)
	mr       r4, r29
	add      r5, r0, r31
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_80139720:
	lwz      r0, 0x20(r28)
	cmpw     r30, r0
	blt      lbl_801396F8
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
 * Address:	8013974C
 * Size:	000004
 */
template <> void ArrayContainer<int>::readObject(Stream&, int&) { }

namespace Sys {

/*
 * --INFO--
 * Address:	80139750
 * Size:	000034
 */
void IndexList::readObject(Stream&, int&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	bl       readInt__6StreamFv
	stw      r3, 0(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80139784
 * Size:	000028
 */
void IndexList::writeObject(Stream&, int&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	stw      r0, 0x14(r1)
	lwz      r4, 0(r5)
	bl       writeInt__6StreamFi
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801397AC
 * Size:	000090
 */
IndexList::~IndexList()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80139820
	lis      r4, __vt__Q23Sys9IndexList@ha
	addi     r0, r4, __vt__Q23Sys9IndexList@l
	stw      r0, 0(r30)
	beq      lbl_80139810
	lis      r4, "__vt__17ArrayContainer<i>"@ha
	addi     r0, r4, "__vt__17ArrayContainer<i>"@l
	stw      r0, 0(r30)
	beq      lbl_80139810
	lis      r4, "__vt__12Container<i>"@ha
	addi     r0, r4, "__vt__12Container<i>"@l
	stw      r0, 0(r30)
	beq      lbl_80139810
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_80139810:
	extsh.   r0, r31
	ble      lbl_80139820
	mr       r3, r30
	bl       __dl__FPv

lbl_80139820:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Sys

/*
 * --INFO--
 * Address:	8013983C
 * Size:	000010
 */
template <> void ArrayContainer<Vector3f>::setArray(Vector3f*, int)
{
	/*
	stw      r4, 0x24(r3)
	stw      r5, 0x20(r3)
	stw      r5, 0x1c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013984C
 * Size:	000040
 */
template <> void ArrayContainer<Vector3f>::addOne(Vector3f&)
{
	/*
	lwz      r7, 0x1c(r3)
	lwz      r0, 0x20(r3)
	cmpw     r7, r0
	bgelr
	lwz      r6, 0x24(r3)
	addi     r5, r7, 1
	mulli    r0, r7, 0xc
	stw      r5, 0x1c(r3)
	lfs      f0, 0(r4)
	add      r3, r6, r0
	stfs     f0, 0(r3)
	lfs      f0, 4(r4)
	stfs     f0, 4(r3)
	lfs      f0, 8(r4)
	stfs     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013988C
 * Size:	000060
 */
template <> void MonoObjectMgr<CollPart>::birth()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       "getEmptyIndex__24MonoObjectMgr<8CollPart>Fv"
	cmpwi    r3, -1
	beq      lbl_801398D4
	lwz      r6, 0x28(r31)
	li       r0, 0
	lwz      r4, 0x2c(r31)
	mulli    r5, r3, 0x64
	stbx     r0, r4, r3
	add      r3, r6, r5
	lwz      r4, 0x20(r31)
	addi     r0, r4, 1
	stw      r0, 0x20(r31)
	b        lbl_801398D8

lbl_801398D4:
	li       r3, 0

lbl_801398D8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801398EC
 * Size:	000054
 */
template <> void MonoObjectMgr<CollPart>::kill(CollPart*)
{
	/*
	lwz      r0, 0x24(r3)
	li       r6, 0
	li       r5, 0
	mtctr    r0
	cmpwi    r0, 0
	blelr

lbl_80139904:
	lwz      r0, 0x28(r3)
	add      r0, r0, r5
	cmplw    r0, r4
	bne      lbl_80139930
	lwz      r4, 0x2c(r3)
	li       r0, 1
	stbx     r0, r4, r6
	lwz      r4, 0x20(r3)
	addi     r0, r4, -1
	stw      r0, 0x20(r3)
	blr

lbl_80139930:
	addi     r5, r5, 0x64
	addi     r6, r6, 1
	bdnz     lbl_80139904
	blr
	*/
}

/*
 * --INFO--
 * Address:	80139940
 * Size:	00003C
 */
template <> void MonoObjectMgr<CollPart>::getEmptyIndex()
{
	/*
	lwz      r0, 0x24(r3)
	li       r5, 0
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_80139974

lbl_80139954:
	lwz      r4, 0x2c(r3)
	lbzx     r0, r4, r5
	cmplwi   r0, 1
	bne      lbl_8013996C
	mr       r3, r5
	blr

lbl_8013996C:
	addi     r5, r5, 1
	bdnz     lbl_80139954

lbl_80139974:
	li       r3, -1
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013997C
 * Size:	000004
 */
template <> void ArrayContainer<Vector3f>::writeObject(Stream&, Vector3f&) { }

/*
 * --INFO--
 * Address:	80139980
 * Size:	0000D4
 */
template <> void ArrayContainer<Vector3f>::write(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r28, r4
	mr       r27, r3
	lwz      r4, 0x14(r3)
	mr       r3, r28
	bl       textBeginGroup__6StreamFPc
	lwz      r4, 0x414(r28)
	mr       r3, r28
	bl       textWriteTab__6StreamFi
	lwz      r4, 0x20(r27)
	mr       r3, r28
	bl       writeInt__6StreamFi
	mr       r3, r28
	addi     r4, r2, lbl_80518230@sda21
	crclr    6
	bl       textWriteText__6StreamFPce
	lis      r3, lbl_8047C63C@ha
	li       r29, 0
	addi     r31, r3, lbl_8047C63C@l
	li       r30, 0
	b        lbl_80139A2C

lbl_801399E0:
	lwz      r4, 0x414(r28)
	mr       r3, r28
	bl       textWriteTab__6StreamFi
	mr       r3, r27
	lwz      r0, 0x24(r27)
	lwz      r12, 0(r27)
	mr       r4, r28
	add      r5, r0, r30
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r6, 0x20(r27)
	mr       r3, r28
	mr       r4, r31
	mr       r5, r29
	crclr    6
	bl       textWriteText__6StreamFPce
	addi     r30, r30, 0xc
	addi     r29, r29, 1

lbl_80139A2C:
	lwz      r0, 0x20(r27)
	cmpw     r29, r0
	blt      lbl_801399E0
	mr       r3, r28
	bl       textEndGroup__6StreamFv
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80139A54
 * Size:	000010
 */
template <> void ArrayContainer<Vector3f>::get(void*)
{
	/*
	mulli    r0, r4, 0xc
	lwz      r3, 0x24(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80139A64
 * Size:	000008
 */
template <> void ArrayContainer<Vector3f>::getNext(void*)
{
	/*
	addi     r3, r4, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	80139A6C
 * Size:	000008
 */
template <> u32 ArrayContainer<Vector3f>::getStart() { return 0x0; }

/*
 * --INFO--
 * Address:	80139A74
 * Size:	000008
 */
template <> void ArrayContainer<Vector3f>::getEnd()
{
	/*
	lwz      r3, 0x1c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80139A7C
 * Size:	000010
 */
void ArrayContainer<Vector3f>::getAt(int)
{
	/*
	mulli    r0, r4, 0xc
	lwz      r3, 0x24(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80139A8C
 * Size:	000008
 */
void ArrayContainer<Vector3f>::getTo()
{
	/*
	lwz      r3, 0x20(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80139A94
 * Size:	000004
 */
void ArrayContainer<int>::writeObject(Stream&, int&) { }

/*
 * --INFO--
 * Address:	80139A98
 * Size:	0000D4
 */
void ArrayContainer<int>::write(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r28, r4
	mr       r27, r3
	lwz      r4, 0x14(r3)
	mr       r3, r28
	bl       textBeginGroup__6StreamFPc
	lwz      r4, 0x414(r28)
	mr       r3, r28
	bl       textWriteTab__6StreamFi
	lwz      r4, 0x20(r27)
	mr       r3, r28
	bl       writeInt__6StreamFi
	mr       r3, r28
	addi     r4, r2, lbl_80518230@sda21
	crclr    6
	bl       textWriteText__6StreamFPce
	lis      r3, lbl_8047C63C@ha
	li       r29, 0
	addi     r31, r3, lbl_8047C63C@l
	li       r30, 0
	b        lbl_80139B44

lbl_80139AF8:
	lwz      r4, 0x414(r28)
	mr       r3, r28
	bl       textWriteTab__6StreamFi
	mr       r3, r27
	lwz      r0, 0x24(r27)
	lwz      r12, 0(r27)
	mr       r4, r28
	add      r5, r0, r30
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r6, 0x20(r27)
	mr       r3, r28
	mr       r4, r31
	mr       r5, r29
	crclr    6
	bl       textWriteText__6StreamFPce
	addi     r30, r30, 4
	addi     r29, r29, 1

lbl_80139B44:
	lwz      r0, 0x20(r27)
	cmpw     r29, r0
	blt      lbl_80139AF8
	mr       r3, r28
	bl       textEndGroup__6StreamFv
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80139B6C
 * Size:	00002C
 */
void ArrayContainer<int>::addOne(int&)
{
	/*
	lwz      r7, 0x1c(r3)
	lwz      r0, 0x20(r3)
	cmpw     r7, r0
	bgelr
	lwz      r6, 0(r4)
	addi     r4, r7, 1
	lwz      r5, 0x24(r3)
	slwi     r0, r7, 2
	stw      r4, 0x1c(r3)
	stwx     r6, r5, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80139B98
 * Size:	000010
 */
void ArrayContainer<int>::setArray(int*, int)
{
	/*
	stw      r4, 0x24(r3)
	stw      r5, 0x20(r3)
	stw      r5, 0x1c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80139BA8
 * Size:	000010
 */
void ArrayContainer<int>::get(void*)
{
	/*
	lwz      r3, 0x24(r3)
	slwi     r0, r4, 2
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80139BB8
 * Size:	000008
 */
void ArrayContainer<int>::getNext(void*)
{
	/*
	addi     r3, r4, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	80139BC0
 * Size:	000008
 */
u32 ArrayContainer<int>::getStart() { return 0x0; }

/*
 * --INFO--
 * Address:	80139BC8
 * Size:	000008
 */
void ArrayContainer<int>::getEnd()
{
	/*
	lwz      r3, 0x1c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80139BD0
 * Size:	000010
 */
void ArrayContainer<int>::getAt(int)
{
	/*
	lwz      r3, 0x24(r3)
	slwi     r0, r4, 2
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80139BE0
 * Size:	000008
 */
void ArrayContainer<int>::getTo()
{
	/*
	lwz      r3, 0x20(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80139BE8
 * Size:	00002C
 */
void Container<Vector3f>::getObject(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
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
 * Address:	80139C14
 * Size:	000008
 */
u32 Container<Vector3f>::getAt(int) { return 0x0; }

/*
 * --INFO--
 * Address:	80139C1C
 * Size:	000008
 */
u32 Container<Vector3f>::getTo() { return 0x0; }

/*
 * --INFO--
 * Address:	80139C24
 * Size:	00002C
 */
void Container<int>::getObject(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
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
 * Address:	80139C50
 * Size:	000008
 */
u32 Container<int>::getAt(int) { return 0x0; }

/*
 * --INFO--
 * Address:	80139C58
 * Size:	000008
 */
u32 Container<int>::getTo() { return 0x0; }
