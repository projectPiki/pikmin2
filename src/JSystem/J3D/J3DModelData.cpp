#include "Dolphin/gd.h"
#include "Dolphin/os.h"
#include "JSystem/J3D/J3DDisplayListObj.h"
#include "JSystem/J3D/J3DMaterial.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/J3D/J3DTevBlock.h"
#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__13J3DShapeTable
    __vt__13J3DShapeTable:
        .4byte 0
        .4byte 0
        .4byte __dt__13J3DShapeTableFv
    .global __vt__12J3DModelData
    __vt__12J3DModelData:
        .4byte 0
        .4byte 0
        .4byte __dt__12J3DModelDataFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global sInterruptFlag$1509
    sInterruptFlag$1509:
        .skip 0x4
    .global init$1510
    init$1510:
        .skip 0x4
*/

/*
 * --INFO--
 * Address:	80083794
 * Size:	000018
 */
void J3DModelData::clear()
{
	m_bmd              = nullptr;
	m_modelLoaderFlags = 0;
	_0C                = 0;
	m_jointSet         = 0;
}

/*
 * --INFO--
 * Address:	800837AC
 * Size:	000080
 */
J3DModelData::J3DModelData()
    : m_jointTree()
    , m_materialTable()
    , m_shapeTable()
    , _84()
    , m_vertexData()
{
	clear();
}

/*
 * --INFO--
 * Address:	8008382C
 * Size:	000048
 * __dt__13J3DShapeTableFv
 */
// J3DShapeTable::~J3DShapeTable()
// {
// }

/*
 * --INFO--
 * Address:	80083874
 * Size:	000064
 * __dt__12J3DJointTreeFv
 */
// J3DJointTree::~J3DJointTree()
// {
// }

/*
 * --INFO--
 * Address:	800838D8
 * Size:	000094
 */
void J3DModelData::newSharedDisplayList(u32 flags)
{
	// u16 count = m_materialTable.m_count1;
	// for (u16 i = 0; i < count; i++) {
	// 	if (flags & J3DMLF_19) {
	// 		m_materialTable.m_materials1[i]->newSingleSharedDisplayList(m_materialTable.m_materials1[i]->countDLSize());
	// 	} else {
	// 		m_materialTable.m_materials1[i]->newSharedDisplayList(m_materialTable.m_materials1[i]->countDLSize());
	// 	}
	// }
	u16 count = m_materialTable.m_count1;
	for (u16 i = 0; i < count; i++) {
		if (flags & J3DMLF_19) {
			J3DMaterial* material = m_materialTable.m_materials1[i];
			material->newSingleSharedDisplayList(material->countDLSize());
		} else {
			J3DMaterial* material = m_materialTable.m_materials1[i];
			material->newSharedDisplayList(material->countDLSize());
		}
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	rlwinm   r30, r4, 0, 0xd, 0xd
	li       r28, 0
	lhz      r31, 0x5c(r3)
	b        lbl_8008394C

lbl_800838FC:
	cmplwi   r30, 0
	beq      lbl_80083928
	lwz      r3, 0x60(r27)
	rlwinm   r0, r28, 2, 0xe, 0x1d
	lwzx     r29, r3, r0
	mr       r3, r29
	bl       countDLSize__11J3DMaterialFv
	mr       r4, r3
	mr       r3, r29
	bl       newSingleSharedDisplayList__11J3DMaterialFUl
	b        lbl_80083948

lbl_80083928:
	lwz      r3, 0x60(r27)
	rlwinm   r0, r28, 2, 0xe, 0x1d
	lwzx     r29, r3, r0
	mr       r3, r29
	bl       countDLSize__11J3DMaterialFv
	mr       r4, r3
	mr       r3, r29
	bl       newSharedDisplayList__11J3DMaterialFUl

lbl_80083948:
	addi     r28, r28, 1

lbl_8008394C:
	clrlwi   r0, r28, 0x10
	cmplw    r0, r31
	blt      lbl_800838FC
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008396C
 * Size:	0000C4
 */
void J3DModelData::indexToPtr()
{
	j3dSys._58                = m_materialTable.m_texture;
	static int sInterruptFlag = OSDisableInterrupts();
	OSDisableScheduler();
	u16 count = m_materialTable.m_count1;
	for (u16 i = 0; i < count; i++) {
		J3DMaterial* material = m_materialTable.m_materials1[i];
		GDCurrentDL currentDL;
		GDInitGDLObj(&currentDL, material->_48->_00, material->_48->_08);
		__GDCurrentDL = &currentDL;
		material->m_tevBlock->indexToPtr();
	}
	__GDCurrentDL = nullptr;
	OSEnableScheduler();
	OSRestoreInterrupts(sInterruptFlag);
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r27, r3
	lis      r3, j3dSys@ha
	addi     r3, r3, j3dSys@l
	lbz      r0, init$1510@sda21(r13)
	lwz      r4, 0x6c(r27)
	extsb.   r0, r0
	stw      r4, 0x58(r3)
	bne      lbl_800839AC
	bl       OSDisableInterrupts
	li       r0, 1
	stw      r3, sInterruptFlag$1509@sda21(r13)
	stb      r0, init$1510@sda21(r13)

lbl_800839AC:
	bl       OSDisableScheduler
	lhz      r30, 0x5c(r27)
	addi     r31, r1, 8
	li       r28, 0
	b        lbl_800839FC

lbl_800839C0:
	lwz      r4, 0x60(r27)
	rlwinm   r0, r28, 2, 0xe, 0x1d
	addi     r3, r1, 8
	lwzx     r29, r4, r0
	lwz      r5, 0x48(r29)
	lwz      r4, 0(r5)
	lwz      r5, 8(r5)
	bl       GDInitGDLObj
	stw      r31, __GDCurrentDL@sda21(r13)
	lwz      r3, 0x2c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1

lbl_800839FC:
	clrlwi   r0, r28, 0x10
	cmplw    r0, r30
	blt      lbl_800839C0
	li       r0, 0
	stw      r0, __GDCurrentDL@sda21(r13)
	bl       OSEnableScheduler
	lwz      r3, sInterruptFlag$1509@sda21(r13)
	bl       OSRestoreInterrupts
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80083A30
 * Size:	000080
 */
void J3DModelData::makeSharedDL()
{
	j3dSys._58 = m_materialTable.m_texture;
	u16 count  = m_materialTable.m_count1;
	for (u16 i = 0; i < count; i++) {
		J3DMaterial* material = m_materialTable.m_materials1[i];
		material->makeSharedDisplayList();
	}
}

/*
 * --INFO--
 * Address:	80083AB0
 * Size:	0000C8
 */
void J3DModelData::simpleCalcMaterial(u16 jointIndex, Mtx) // float (*)[4])
{
	syncJ3DSysFlags();
	for (J3DMaterial* material = m_jointTree.m_joints[jointIndex]->m_material; material != nullptr; material = material->_04) {
		// TODO: ???
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r5
	bl       syncJ3DSysFlags__12J3DModelDataCFv
	lwz      r3, 0x28(r31)
	rlwinm   r0, r30, 2, 0xe, 0x1d
	lis      r31, 0xc000
	lwzx     r3, r3, r0
	lwz      r30, 0x58(r3)
	b        lbl_80083B54

lbl_80083AF0:
	lwz      r3, 0x3c(r30)
	cmplw    r3, r31
	bge      lbl_80083B04
	mr       r0, r3
	b        lbl_80083B08

lbl_80083B04:
	li       r0, 0

lbl_80083B08:
	cmplwi   r0, 0
	beq      lbl_80083B38
	lis      r0, 0xc000
	cmplw    r3, r0
	bge      lbl_80083B20
	b        lbl_80083B24

lbl_80083B20:
	li       r3, 0

lbl_80083B24:
	lwz      r12, 0(r3)
	mr       r4, r30
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_80083B38:
	mr       r3, r30
	mr       r4, r29
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r30, 4(r30)

lbl_80083B54:
	cmplwi   r30, 0
	bne      lbl_80083AF0
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
 * Address:	80083B78
 * Size:	00003C
 */
void J3DModelData::syncJ3DSysFlags() const
{
	if (m_modelLoaderFlags & J3DMLF_06) {
		j3dSys._34 |= 0x40000000;
	} else {
		j3dSys._34 &= ~0x40000000;
	}
}

/*
 * --INFO--
 * Address:	80083BB4
 * Size:	000098
 * __dt__12J3DModelDataFv
 */
// J3DModelData::~J3DModelData()
// {
// }
