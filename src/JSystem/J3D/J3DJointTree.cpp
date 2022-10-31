#include "JSystem/J3D/J3DJoint.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DJointTree.h"
#include "JSystem/J3D/J3DMtxCalc.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804A2F70
    lbl_804A2F70:
        .4byte lbl_8008839C
        .4byte lbl_8008836C
        .4byte lbl_80088390
        .4byte lbl_800883F0
        .4byte lbl_800883F0
        .4byte lbl_800883F0
        .4byte lbl_800883F0
        .4byte lbl_800883F0
        .4byte lbl_800883F0
        .4byte lbl_800883F0
        .4byte lbl_800883F0
        .4byte lbl_800883F0
        .4byte lbl_800883F0
        .4byte lbl_800883F0
        .4byte lbl_800883F0
        .4byte lbl_800883F0
        .4byte lbl_800883A0
        .4byte lbl_800883BC
        .4byte lbl_800883D8
    .global __vt__12J3DJointTree
    __vt__12J3DJointTree:
        .4byte 0
        .4byte 0
        .4byte calc__12J3DJointTreeFP12J3DMtxBufferRC3VecRA3_A4_Cf
        .4byte __dt__12J3DJointTreeFv
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516AF0
    lbl_80516AF0:
        .4byte 0xBDCCCCCD
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	8008828C
 * Size:	000084
 */
J3DJointTree::J3DJointTree()
    : m_hierarchy(nullptr)
    , m_08(0)
    , m_flags(0)
    , _10(nullptr)
    , m_transformCalc(nullptr)
    , m_joints(nullptr)
    , m_jointCnt(0)
    , m_envelopeCnt(0)
    , _20(nullptr)
    , m_maxBillBoardCnt(0)
    , _28(nullptr)
    , _2C(nullptr)
    , _30(nullptr)
    , m_mtxData()
    , _40(0)
    , m_nametab(nullptr)
{
}

/*
 * --INFO--
 * Address:	80088310
 * Size:	00015C
 */
void J3DJointTree::makeHierarchy(J3DJoint* joint, const J3DModelHierarchy** hierarchies, J3DMaterialTable* matTable,
                                 J3DShapeTable* shapeTable)
{
	J3DMaterial* selectedMaterial;
	J3DShape* selectedShape;
	J3DJoint* rootJointMaybe = joint;
	while (true) {
		while (true) {
			const J3DModelHierarchy* currentHierarchy = *hierarchies;
			J3DJoint* selectedJoint                   = nullptr;
			selectedMaterial                          = nullptr;
			selectedShape                             = nullptr;
			if (true) {
				switch (currentHierarchy->_00) {
				case 0:
					return;
				case 1:
					hierarchies++;
					makeHierarchy(rootJointMaybe, hierarchies, matTable, shapeTable);
					break;
				case 2:
					hierarchies++;
					return;
				case 0x10:
					hierarchies++;
					selectedJoint = m_joints[currentHierarchy->_02];
					break;
				case 0x11:
					hierarchies++;
					selectedMaterial = matTable->m_materials1[currentHierarchy->_02];
					break;
				case 0x12:
					hierarchies++;
					selectedShape = shapeTable->m_items[currentHierarchy->_02];
				}
			}
			if (selectedJoint == nullptr) {
				break;
			}
			rootJointMaybe = selectedJoint;
			if (joint == nullptr) {
				_10 = selectedJoint;
			} else {
				joint->appendChild(selectedJoint);
			}
		}
		if (selectedMaterial) {
			if (joint->m_material) {
				selectedMaterial->_04 = joint->m_material;
			}
			joint->m_material         = selectedMaterial;
			selectedMaterial->m_joint = joint;
		} else {
			if (selectedShape) {
				joint->m_material->m_shape = selectedShape;
				selectedShape->_04         = joint->m_material;
			}
		}
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r23, 0xC(r1)
	  mr        r24, r4
	  mr        r23, r3
	  mr        r25, r5
	  mr        r26, r6
	  mr        r27, r7
	  mr        r31, r24

	.loc_0x28:
	  lwz       r4, 0x0(r25)
	  li        r30, 0
	  li        r29, 0
	  li        r28, 0
	  lhz       r0, 0x0(r4)
	  cmplwi    r0, 0x12
	  bgt-      .loc_0xE0
	  lis       r3, 0x804A
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r3, 0x2F70
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  addi      r0, r4, 0x4
	  mr        r3, r23
	  stw       r0, 0x0(r25)
	  mr        r4, r31
	  mr        r5, r25
	  mr        r6, r26
	  mr        r7, r27
	  bl        .loc_0x0
	  b         .loc_0xE0
	  addi      r0, r4, 0x4
	  stw       r0, 0x0(r25)
	  b         .loc_0x148
	  b         .loc_0x148
	  lwz       r3, 0x18(r23)
	  addi      r0, r4, 0x4
	  stw       r0, 0x0(r25)
	  lhz       r0, 0x2(r4)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r30, r3, r0
	  b         .loc_0xE0
	  addi      r0, r4, 0x4
	  stw       r0, 0x0(r25)
	  lhz       r0, 0x2(r4)
	  lwz       r3, 0x8(r26)
	  rlwinm    r0,r0,2,14,29
	  lwzx      r29, r3, r0
	  b         .loc_0xE0
	  addi      r0, r4, 0x4
	  stw       r0, 0x0(r25)
	  lhz       r0, 0x2(r4)
	  lwz       r3, 0x8(r27)
	  rlwinm    r0,r0,2,14,29
	  lwzx      r28, r3, r0

	.loc_0xE0:
	  cmplwi    r30, 0
	  beq-      .loc_0x10C
	  cmplwi    r24, 0
	  mr        r31, r30
	  bne-      .loc_0xFC
	  stw       r30, 0x10(r23)
	  b         .loc_0x28

	.loc_0xFC:
	  mr        r3, r24
	  mr        r4, r30
	  bl        -0x1CB8C
	  b         .loc_0x28

	.loc_0x10C:
	  cmplwi    r29, 0
	  beq-      .loc_0x130
	  lwz       r0, 0x58(r24)
	  cmplwi    r0, 0
	  beq-      .loc_0x124
	  stw       r0, 0x4(r29)

	.loc_0x124:
	  stw       r29, 0x58(r24)
	  stw       r24, 0xC(r29)
	  b         .loc_0x28

	.loc_0x130:
	  cmplwi    r28, 0
	  beq+      .loc_0x28
	  lwz       r3, 0x58(r24)
	  stw       r28, 0x8(r3)
	  stw       r3, 0x4(r28)
	  b         .loc_0x28

	.loc_0x148:
	  lmw       r23, 0xC(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008846C
 * Size:	000174
 */
void J3DJointTree::findImportantMtxIndex()
{
	for (int i = 0; i < m_mtxData._02; i++) {
		_30[i] = m_mtxData._08[i];
	}
	for (int i = 0; i < m_envelopeCnt; i++) {
		u16 v1    = 0;
		float max = -0.1f;
		for (u8 j = _20[i]; j != 0; j--) {
			if (max < _28[j]) {
				max = _28[j];
				v1  = m_maxBillBoardCnt[j];
			}
		}
		_30[i + m_mtxData._02] = v1;
	}
	/*
	stwu     r1, -0x30(r1)
	li       r9, 0
	stmw     r25, 0x14(r1)
	lhz      r4, 0x36(r3)
	lhz      r0, 0x1e(r3)
	cmplwi   r4, 0
	lwz      r7, 0x24(r3)
	lwz      r6, 0x28(r3)
	lwz      r5, 0x30(r3)
	ble      lbl_80088560
	cmplwi   r4, 8
	addi     r8, r4, -8
	ble      lbl_80088554
	clrlwi   r10, r8, 0x10
	b        lbl_80088530

lbl_800884A8:
	lwz      r8, 0x3c(r3)
	rlwinm   r25, r9, 1, 0xf, 0x1e
	addi     r27, r25, 2
	addi     r9, r9, 8
	lhzx     r11, r8, r25
	add      r8, r5, r25
	addi     r28, r25, 4
	addi     r29, r25, 6
	sth      r11, 0(r8)
	addi     r30, r25, 8
	addi     r31, r25, 0xa
	addi     r12, r25, 0xc
	lwz      r26, 0x3c(r3)
	addi     r11, r25, 0xe
	lhzx     r27, r26, r27
	sth      r27, 2(r8)
	lwz      r27, 0x3c(r3)
	lhzx     r28, r27, r28
	sth      r28, 4(r8)
	lwz      r28, 0x3c(r3)
	lhzx     r29, r28, r29
	sth      r29, 6(r8)
	lwz      r29, 0x3c(r3)
	lhzx     r30, r29, r30
	sth      r30, 8(r8)
	lwz      r30, 0x3c(r3)
	lhzx     r31, r30, r31
	sth      r31, 0xa(r8)
	lwz      r31, 0x3c(r3)
	lhzx     r12, r31, r12
	sth      r12, 0xc(r8)
	lwz      r12, 0x3c(r3)
	lhzx     r11, r12, r11
	sth      r11, 0xe(r8)

lbl_80088530:
	clrlwi   r8, r9, 0x10
	cmplw    r8, r10
	blt      lbl_800884A8
	b        lbl_80088554

lbl_80088540:
	lwz      r8, 0x3c(r3)
	rlwinm   r10, r9, 1, 0xf, 0x1e
	addi     r9, r9, 1
	lhzx     r8, r8, r10
	sthx     r8, r5, r10

lbl_80088554:
	clrlwi   r8, r9, 0x10
	cmplw    r8, r4
	blt      lbl_80088540

lbl_80088560:
	li       r11, 0
	b        lbl_800885CC

lbl_80088568:
	lwz      r8, 0x20(r3)
	clrlwi   r4, r11, 0x10
	mr       r9, r6
	mr       r10, r7
	lbzx     r4, r8, r4
	li       r8, 0
	lfs      f1, lbl_80516AF0@sda21(r2)
	mtctr    r4
	cmpwi    r4, 0
	ble      lbl_800885B8

lbl_80088590:
	lfs      f0, 0(r9)
	fcmpo    cr0, f1, f0
	bge      lbl_800885A4
	fmr      f1, f0
	lhz      r8, 0(r10)

lbl_800885A4:
	addi     r9, r9, 4
	addi     r10, r10, 2
	addi     r6, r6, 4
	addi     r7, r7, 2
	bdnz     lbl_80088590

lbl_800885B8:
	lhz      r4, 0x36(r3)
	add      r4, r11, r4
	addi     r11, r11, 1
	slwi     r4, r4, 1
	sthx     r8, r5, r4

lbl_800885CC:
	cmpw     r11, r0
	blt      lbl_80088568
	lmw      r25, 0x14(r1)
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	800885E0
 * Size:	000070
 */
void J3DJointTree::calc(J3DMtxBuffer* buffer, const Vec& vec, const float (&mtx)[3][4])
{
	m_transformCalc->init(vec, mtx);
	J3DMtxCalc::setMtxBuffer(buffer);
	if (_10 != nullptr) {
		J3DJoint::mCurrentMtxCalc = m_transformCalc;
		_10->recursiveCalc();
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r4, r5
	mr       r5, r6
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x14(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       setMtxBuffer__10J3DMtxCalcFP12J3DMtxBuffer
	lwz      r3, 0x10(r30)
	cmplwi   r3, 0
	beq      lbl_80088638
	lwz      r0, 0x14(r30)
	stw      r0, mCurrentMtxCalc__8J3DJoint@sda21(r13)
	bl       recursiveCalc__8J3DJointFv

lbl_80088638:
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
 * Address:	80088650
 * Size:	000008
 */
// void J3DMtxCalc::setMtxBuffer(J3DMtxBuffer*)
// {
// 	/*
// 	stw      r3, mMtxBuffer__10J3DMtxCalc@sda21(r13)
// 	blr
// 	*/
// }
