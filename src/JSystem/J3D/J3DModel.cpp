#include "Dolphin/mtx.h"
#include "Dolphin/os.h"
#include "JSystem/J3D/J3DDisplayListObj.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DMtxBuffer.h"
#include "JSystem/J3D/J3DPacket.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/J3D/J3DTexGenBlock.h"
#include "JSystem/J3D/J3DTexMtx.h"
#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__8J3DModel
    __vt__8J3DModel:
        .4byte 0
        .4byte 0
        .4byte update__8J3DModelFv
        .4byte entry__8J3DModelFv
        .4byte calc__8J3DModelFv
        .4byte calcMaterial__8J3DModelFv
        .4byte calcDiffTexMtx__8J3DModelFv
        .4byte viewCalc__8J3DModelFv
        .4byte __dt__8J3DModelFv
    .global __vt__12J3DMtxBuffer
    __vt__12J3DMtxBuffer:
        .4byte 0
        .4byte 0
        .4byte __dt__12J3DMtxBufferFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516A10
    lbl_80516A10:
        .float 1.0
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	800662FC
 * Size:	000084
 */
void J3DModel::initialize()
{
	m_modelData       = nullptr;
	_08               = 0;
	m_displayListFlag = 0;
	_10               = nullptr;
	_14               = 0;
	m_modelScale.x    = 1.0f;
	m_modelScale.y    = 1.0f;
	m_modelScale.z    = 1.0f;
	PSMTXIdentity(_24);
	PSMTXIdentity(_54);
	m_mtxBuffer    = nullptr;
	m_matPackets   = nullptr;
	m_shapePackets = nullptr;
	m_deformData   = nullptr;
	m_skinDeform   = nullptr;
	m_vtxColorCalc = nullptr;
	_D4            = 0;
	_D8            = nullptr;
}

/*
 * --INFO--
 * Address:	80066380
 * Size:	0000C4
 */
int J3DModel::entryModelData(J3DModelData* data, u32 p2, u32 modelType)
{
	m_modelData = data;
	m_mtxBuffer = new J3DMtxBuffer();
	int result  = m_mtxBuffer->create(data, modelType);
	if (result) {
		return result;
	}
	result = createShapePacket(data);
	if (result) {
		return result;
	}
	result = createMatPacket(data, p2);
	if (result) {
		return result;
	}
	m_vertexBuffer.setVertexData(&data->m_vertexData);
	prepareShapePackets();
	return 0;
}

/*
 * --INFO--
 * Address:	80066444
 * Size:	0000BC
 */
int J3DModel::createShapePacket(J3DModelData* data)
{
	if (data->m_shapeTable.m_count) {
		m_shapePackets = new J3DShapePacket[data->m_shapeTable.m_count];
		for (s32 i = 0; i < data->m_shapeTable.m_count; i++) {
			m_shapePackets[i]._28 = data->m_shapeTable.getItem(i);
			m_shapePackets[i]._38 = this;
		}
	}
	return 0;
}

/*
 * --INFO--
 * Address:	80066500
 * Size:	0001D8
 */
int J3DModel::createMatPacket(J3DModelData* data, u32 p2)
{
	if (data->m_materialTable.m_count1 != 0) {
		m_matPackets = new J3DMatPacket[data->m_materialTable.m_count1];
	}
	u16 count = data->m_materialTable.m_count1;
	for (u16 i = 0; i < count; i++) {
		J3DMaterial* material       = data->m_materialTable.m_materials1[i];
		J3DMatPacket* matPacket     = &m_matPackets[i];
		J3DShapePacket* shapePacket = &m_shapePackets[material->m_shape->m_id];
		matPacket->_30              = material;
		matPacket->_28              = shapePacket;
		matPacket->addShapePacket(shapePacket);
		matPacket->_38 = (u32)data->m_materialTable.m_texture;
		matPacket->_34 = material->_20;
		if (data->m_jointTree.m_flags == 1) {
			matPacket->_10 = matPacket->_10 | 1;
		}
		if ((p2 & 0x80000) != 0) {
			matPacket->m_displayList = material->_48;
		} else {
			if (data->m_jointTree.m_flags == 1) {
				if ((p2 & 0x40000) != 0) {
					matPacket->m_displayList = material->_48;
				} else {
					J3DDisplayListObj* dl = material->_48;
					J3DErrType result     = dl->single_To_Double();
					if (result != JET_Success) {
						return result;
					}
					matPacket->m_displayList = dl;
				}
			} else if ((p2 & 0x20000) != 0) {
				if ((p2 & 0x40000) != 0) {
					material->newSingleSharedDisplayList(material->countDLSize());
					matPacket->m_displayList = material->_48;
				} else {
					material->newSharedDisplayList(material->countDLSize());
					J3DDisplayListObj* dl = material->_48;
					dl->single_To_Double();
					matPacket->m_displayList = dl;
				}
			} else {
				if ((p2 & 0x40000) != 0) {
					matPacket->newSingleDisplayList(material->countDLSize());
				} else {
					matPacket->newDisplayList(material->countDLSize());
				}
			}
		}
	}
	return JET_Success;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r23, 0xc(r1)
	mr       r24, r4
	mr       r23, r3
	mr       r26, r5
	lhz      r25, 0x5c(r4)
	cmplwi   r25, 0
	beq      lbl_80066554
	rlwinm   r3, r25, 6, 0xa, 0x19
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__12J3DMatPacketFv@ha
	lis      r5, __dt__12J3DMatPacketFv@ha
	addi     r4, r4, __ct__12J3DMatPacketFv@l
	mr       r7, r25
	addi     r5, r5, __dt__12J3DMatPacketFv@l
	li       r6, 0x40
	bl       __construct_new_array
	stw      r3, 0xc0(r23)

lbl_80066554:
	lhz      r31, 0x5c(r24)
	rlwinm   r29, r26, 0, 0xc, 0xc
	rlwinm   r28, r26, 0, 0xd, 0xd
	rlwinm   r27, r26, 0, 0xe, 0xe
	li       r26, 0
	b        lbl_800666B4

lbl_8006656C:
	lwz      r5, 0x60(r24)
	rlwinm   r4, r26, 2, 0xe, 0x1d
	lwz      r3, 0xc0(r23)
	rlwinm   r0, r26, 6, 0xa, 0x19
	lwzx     r30, r5, r4
	add      r25, r3, r0
	lwz      r5, 0xc4(r23)
	lwz      r4, 8(r30)
	mr       r3, r25
	lhz      r0, 8(r4)
	mulli    r0, r0, 0x3c
	stw      r30, 0x30(r25)
	add      r4, r5, r0
	stw      r4, 0x28(r25)
	bl       addShapePacket__12J3DMatPacketFP14J3DShapePacket
	lwz      r0, 0x6c(r24)
	stw      r0, 0x38(r25)
	lwz      r0, 0x20(r30)
	stw      r0, 0x34(r25)
	lwz      r0, 0x1c(r24)
	cmplwi   r0, 1
	bne      lbl_800665D0
	lwz      r0, 0x10(r25)
	ori      r0, r0, 1
	stw      r0, 0x10(r25)

lbl_800665D0:
	cmplwi   r29, 0
	beq      lbl_800665E4
	lwz      r0, 0x48(r30)
	stw      r0, 0x20(r25)
	b        lbl_800666B0

lbl_800665E4:
	lwz      r0, 0x1c(r24)
	cmplwi   r0, 1
	bne      lbl_80066624
	cmplwi   r28, 0
	beq      lbl_80066604
	lwz      r0, 0x48(r30)
	stw      r0, 0x20(r25)
	b        lbl_800666B0

lbl_80066604:
	lwz      r30, 0x48(r30)
	mr       r3, r30
	bl       single_To_Double__17J3DDisplayListObjFv
	cmpwi    r3, 0
	beq      lbl_8006661C
	b        lbl_800666C4

lbl_8006661C:
	stw      r30, 0x20(r25)
	b        lbl_800666B0

lbl_80066624:
	cmplwi   r27, 0
	beq      lbl_8006667C
	cmplwi   r28, 0
	beq      lbl_80066654
	mr       r3, r30
	bl       countDLSize__11J3DMaterialFv
	mr       r4, r3
	mr       r3, r30
	bl       newSingleSharedDisplayList__11J3DMaterialFUl
	lwz      r0, 0x48(r30)
	stw      r0, 0x20(r25)
	b        lbl_800666B0

lbl_80066654:
	mr       r3, r30
	bl       countDLSize__11J3DMaterialFv
	mr       r4, r3
	mr       r3, r30
	bl       newSharedDisplayList__11J3DMaterialFUl
	lwz      r30, 0x48(r30)
	mr       r3, r30
	bl       single_To_Double__17J3DDisplayListObjFv
	stw      r30, 0x20(r25)
	b        lbl_800666B0

lbl_8006667C:
	cmplwi   r28, 0
	beq      lbl_8006669C
	mr       r3, r30
	bl       countDLSize__11J3DMaterialFv
	mr       r4, r3
	mr       r3, r25
	bl       newSingleDisplayList__13J3DDrawPacketFUl
	b        lbl_800666B0

lbl_8006669C:
	mr       r3, r30
	bl       countDLSize__11J3DMaterialFv
	mr       r4, r3
	mr       r3, r25
	bl       newDisplayList__13J3DDrawPacketFUl

lbl_800666B0:
	addi     r26, r26, 1

lbl_800666B4:
	clrlwi   r0, r26, 0x10
	cmplw    r0, r31
	blt      lbl_8006656C
	li       r3, 0

lbl_800666C4:
	lmw      r23, 0xc(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	800666D8
 * Size:	000090
 */
int J3DModel::newDifferedDisplayList(u32 displayListFlag)
{
	m_displayListFlag = displayListFlag;
	// It sure is wild what pre-fetching the limit will do.
	// for (u16 i = 0; i < m_modelData->m_shapeTable.m_count; i++) {
	u16 count = m_modelData->m_shapeTable.m_count;
	for (u16 i = 0; i < count; i++) {
		int result = m_shapePackets[i].newDifferedDisplayList(displayListFlag);
		if (result) {
			return result;
		}
	}
	return 0;
}

/*
 * --INFO--
 * Address:	80066768
 * Size:	00008C
 */
int J3DModel::newDifferedTexMtx(J3DTexDiffFlag texDiffFlag)
{
	u16 count = m_modelData->m_shapeTable.m_count;
	for (u16 i = 0; i < count; i++) {
		int result = m_shapePackets[i].newDifferedTexMtx(texDiffFlag);
		if (result) {
			return result;
		}
	}
	return 0;
}

/*
 * --INFO--
 * Address:	800667F4
 * Size:	000130
 */
void J3DModel::lock()
{
	int count = m_modelData->m_materialTable.m_count1;
	for (int i = 0; i < count; i++) {
		m_matPackets[i]._10 |= 1;
	}
}

/*
 * --INFO--
 * Address:	80066924
 * Size:	0000A4
 */
void J3DModel::makeDL()
{
	j3dSys._38 = this;
	j3dSys._58 = m_modelData->m_materialTable.m_texture;
	u32 count  = m_modelData->m_materialTable.m_count1;
	for (u16 i = 0; i < count; i++) {
		j3dSys.m_matPacket = &m_matPackets[i];
		m_modelData->m_materialTable.m_materials1[i]->makeDisplayList();
	}
}

/*
 * --INFO--
 * Address:	800669C8
 * Size:	000164
 */
void J3DModel::calcMaterial()
{
	if (_08 & 4) {
		j3dSys._34 |= 0x4;
	} else {
		j3dSys._34 &= ~0x4;
	}
	if (_08 & 8) {
		j3dSys._34 |= 0x8;
	} else {
		j3dSys._34 &= ~0x8;
	}
	j3dSys._38 = this;
	m_modelData->syncJ3DSysFlags();
	j3dSys._58 = m_modelData->m_materialTable.m_texture;
	u32 count  = m_modelData->m_materialTable.m_count1;
	for (u16 i = 0; i < count; i++) {
		j3dSys.m_matPacket = &m_matPackets[i];
		m_modelData->m_materialTable.m_materials1[i]->makeDisplayList();
		// TODO: This appears to share code with inside of loop of J3DModelData::simpleCalcMaterial(u16 jointIndex, Mtx*)
		// TODO: Similarly, ???
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, j3dSys@ha
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r28, r3
	addi     r3, r4, j3dSys@l
	stw      r28, 0x38(r3)
	lwz      r0, 8(r28)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_80066A04
	lwz      r0, 0x34(r3)
	ori      r0, r0, 4
	stw      r0, 0x34(r3)
	b        lbl_80066A10

lbl_80066A04:
	lwz      r0, 0x34(r3)
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stw      r0, 0x34(r3)

lbl_80066A10:
	lwz      r0, 8(r28)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	beq      lbl_80066A34
	lis      r3, j3dSys@ha
	addi     r3, r3, j3dSys@l
	lwz      r0, 0x34(r3)
	ori      r0, r0, 8
	stw      r0, 0x34(r3)
	b        lbl_80066A48

lbl_80066A34:
	lis      r3, j3dSys@ha
	addi     r3, r3, j3dSys@l
	lwz      r0, 0x34(r3)
	rlwinm   r0, r0, 0, 0x1d, 0x1b
	stw      r0, 0x34(r3)

lbl_80066A48:
	lwz      r3, 4(r28)
	bl       syncJ3DSysFlags__12J3DModelDataCFv
	lwz      r4, 4(r28)
	lis      r3, j3dSys@ha
	addi     r31, r3, j3dSys@l
	li       r29, 0
	lwz      r0, 0x6c(r4)
	lis      r27, 0xc000
	stw      r0, 0x58(r31)
	lhz      r30, 0x5c(r4)
	b        lbl_80066B0C

lbl_80066A74:
	lwz      r4, 0xc0(r28)
	rlwinm   r3, r29, 6, 0xa, 0x19
	rlwinm   r0, r29, 2, 0xe, 0x1d
	add      r3, r4, r3
	stw      r3, 0x3c(r31)
	lwz      r3, 4(r28)
	lwz      r3, 0x60(r3)
	lwzx     r26, r3, r0
	lwz      r3, 0x3c(r26)
	cmplw    r3, r27
	bge      lbl_80066AA8
	mr       r0, r3
	b        lbl_80066AAC

lbl_80066AA8:
	li       r0, 0

lbl_80066AAC:
	cmplwi   r0, 0
	beq      lbl_80066ADC
	lis      r0, 0xc000
	cmplw    r3, r0
	bge      lbl_80066AC4
	b        lbl_80066AC8

lbl_80066AC4:
	li       r3, 0

lbl_80066AC8:
	lwz      r12, 0(r3)
	mr       r4, r26
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_80066ADC:
	lwz      r4, 0xc(r26)
	mr       r3, r26
	lwz      r5, 0x84(r28)
	lhz      r0, 0x14(r4)
	lwz      r12, 0(r26)
	mulli    r0, r0, 0x30
	lwz      r4, 0xc(r5)
	lwz      r12, 8(r12)
	add      r4, r4, r0
	mtctr    r12
	bctrl
	addi     r29, r29, 1

lbl_80066B0C:
	clrlwi   r0, r29, 0x10
	cmplw    r0, r30
	blt      lbl_80066A74
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80066B2C
 * Size:	000140
 */
void J3DModel::calcDiffTexMtx()
{
	j3dSys._38 = this;
	u32 count  = m_modelData->m_materialTable.m_count1;
	for (u16 i = 0; i < count; i++) {
		j3dSys.m_matPacket    = &m_matPackets[i];
		J3DMaterial* material = m_modelData->m_materialTable.m_materials1[i];
		material->calcDiffTexMtx(m_mtxBuffer->m_worldMatrices[material->m_joint->getJntNo()]);
	}
	count = m_modelData->m_shapeTable.m_count;
	for (u16 i = 0; i < count; i++) {
		J3DShapePacket* packet = &m_shapePackets[i];
		J3DTexGenBlock* block  = m_modelData->m_shapeTable.getItem(i)->_04->m_texGenBlock;
		for (u16 j = 0; j < 8; j++) {
			J3DTexMtx* texMtx1      = block->getTexMtx(j);
			J3DShapePacket_0x24* v1 = static_cast<J3DShapePacket_0x24*>(packet->_24);
			if (texMtx1 && v1) {
				PSMTXCopy(texMtx1->_64, v1->_00[j]);
			}
		}
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, j3dSys@ha
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r30, r3
	addi     r31, r4, j3dSys@l
	li       r26, 0
	stw      r30, 0x38(r31)
	lwz      r3, 4(r3)
	lhz      r29, 0x5c(r3)
	b        lbl_80066BA8

lbl_80066B5C:
	lwz      r4, 0xc0(r30)
	rlwinm   r3, r26, 6, 0xa, 0x19
	rlwinm   r0, r26, 2, 0xe, 0x1d
	add      r3, r4, r3
	stw      r3, 0x3c(r31)
	lwz      r4, 4(r30)
	lwz      r3, 0x84(r30)
	lwz      r4, 0x60(r4)
	lwz      r5, 0xc(r3)
	lwzx     r3, r4, r0
	lwz      r4, 0xc(r3)
	lwz      r12, 0(r3)
	lhz      r0, 0x14(r4)
	lwz      r12, 0xc(r12)
	mulli    r0, r0, 0x30
	add      r4, r5, r0
	mtctr    r12
	bctrl
	addi     r26, r26, 1

lbl_80066BA8:
	clrlwi   r0, r26, 0x10
	cmplw    r0, r29
	blt      lbl_80066B5C
	lwz      r3, 4(r30)
	li       r31, 0
	lhz      r29, 0x7c(r3)
	b        lbl_80066C4C

lbl_80066BC4:
	lwz      r3, 4(r30)
	clrlwi   r4, r31, 0x10
	rlwinm   r0, r31, 2, 0xe, 0x1d
	lwz      r5, 0xc4(r30)
	lwz      r3, 0x80(r3)
	mulli    r4, r4, 0x3c
	li       r25, 0
	lwzx     r3, r3, r0
	add      r28, r5, r4
	lwz      r3, 4(r3)
	lwz      r27, 0x28(r3)
	b        lbl_80066C3C

lbl_80066BF4:
	mr       r3, r27
	clrlwi   r26, r25, 0x10
	lwz      r12, 0(r27)
	mr       r4, r26
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	lwz      r4, 0x24(r28)
	beq      lbl_80066C38
	cmplwi   r4, 0
	beq      lbl_80066C38
	mulli    r0, r26, 0x30
	lwz      r4, 0(r4)
	addi     r3, r3, 0x64
	add      r4, r4, r0
	bl       PSMTXCopy

lbl_80066C38:
	addi     r25, r25, 1

lbl_80066C3C:
	clrlwi   r0, r25, 0x10
	cmpwi    r0, 8
	blt      lbl_80066BF4
	addi     r31, r31, 1

lbl_80066C4C:
	clrlwi   r0, r31, 0x10
	cmplw    r0, r29
	blt      lbl_80066BC4
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80066C6C
 * Size:	00009C
 * diff__8J3DModelFv
 */
void J3DModel::diff()
{
	u16 count = m_modelData->m_materialTable.m_count1;
	for (u16 i = 0; i < count; i++) {
		j3dSys.m_matPacket = &m_matPackets[i];
		m_modelData->m_materialTable.m_materials1[i]->diff(m_displayListFlag);
	}
}

/*
 * --INFO--
 * Address:	80066D08
 * Size:	000034
 */
void J3DModel::setVtxColorCalc(J3DVtxColorCalc* vtxColorCalc, J3DDeformAttachFlag deformAttachFlag)
{
	m_vtxColorCalc = vtxColorCalc;
	if (vtxColorCalc) {
		m_vertexBuffer.copyVtxColorArray(deformAttachFlag);
	}
}

/*
 * --INFO--
 * Address:	80066D3C
 * Size:	00004C
 */
void J3DModel::calcWeightEnvelopeMtx()
{
	if (m_modelData->m_jointTree.m_envelopeCnt && !(_08 & 0x10) && !(m_modelData->m_modelLoaderFlags & J3DMLF_09)) {
		m_mtxBuffer->calcWeightEnvelopeMtx();
	}
}

/*
 * --INFO--
 * Address:	80066D88
 * Size:	00004C
 * update__8J3DModelFv
 */
void J3DModel::update()
{
	calc();
	entry();
}

/*
 * --INFO--
 * Address:	80066DD4
 * Size:	0001E0
 */
void J3DModel::calc()
{
	if ((_08 & 4) != 0) {
		j3dSys._34 |= 4;

	} else {
		j3dSys._34 &= ~4;
	}
	if ((_08 & 8) != 0) {
		j3dSys._34 |= 8;
	} else {
		j3dSys._34 &= ~8;
	}
	j3dSys._38 = this;
	m_modelData->syncJ3DSysFlags();
	m_vertexBuffer._2C = m_vertexBuffer._04;
	m_vertexBuffer._30 = m_vertexBuffer._0C;
	m_vertexBuffer._34 = m_vertexBuffer._14;
	if (_D8 != nullptr) {
		// _D8->something(m_modelData);
	}
	if (m_deformData != nullptr) {
		// m_deformData->deform(this);
	}
	if (m_vtxColorCalc != nullptr) {
		// m_vtxColorCalc->calc(this);
	}
	if (_D4 != nullptr) {
		// _D4->something(this);
	}
	if ((_08 & 2) != 0) {
		J3DJointTree* jointTree = &m_modelData->m_jointTree;
		j3dSys._38              = this;
		// jointTree->calc(m_mtxBuffer, j3dDefaultScale, j3dDefaultMtx);
	} else {
		J3DJointTree* jointTree = &m_modelData->m_jointTree;
		j3dSys._38              = this;
		jointTree->calc(m_mtxBuffer, m_modelScale, _24);
	}
	if (m_modelData->m_jointTree.m_envelopeCnt != 0 && (_08 & 0x10) == 0 && (m_modelData->m_modelLoaderFlags & J3DMLF_09) == 0) {
		m_mtxBuffer->calcWeightEnvelopeMtx();
	}
	if (m_skinDeform != nullptr) {
		// m_skinDeform->deform(this);
	}
	if (_10 != nullptr) {
		// _10(this, 0);
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, j3dSys@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r4, j3dSys@l
	stw      r30, 8(r1)
	mr       r30, r3
	stw      r30, 0x38(r31)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_80066E14
	lwz      r0, 0x34(r31)
	ori      r0, r0, 4
	stw      r0, 0x34(r31)
	b        lbl_80066E20

lbl_80066E14:
	lwz      r0, 0x34(r31)
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stw      r0, 0x34(r31)

lbl_80066E20:
	lwz      r0, 8(r30)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	beq      lbl_80066E44
	lis      r3, j3dSys@ha
	addi     r3, r3, j3dSys@l
	lwz      r0, 0x34(r3)
	ori      r0, r0, 8
	stw      r0, 0x34(r3)
	b        lbl_80066E58

lbl_80066E44:
	lis      r3, j3dSys@ha
	addi     r3, r3, j3dSys@l
	lwz      r0, 0x34(r3)
	rlwinm   r0, r0, 0, 0x1d, 0x1b
	stw      r0, 0x34(r3)

lbl_80066E58:
	lwz      r3, 4(r30)
	bl       syncJ3DSysFlags__12J3DModelDataCFv
	lwz      r0, 0x8c(r30)
	stw      r0, 0xb4(r30)
	lwz      r0, 0x94(r30)
	stw      r0, 0xb8(r30)
	lwz      r0, 0x9c(r30)
	stw      r0, 0xbc(r30)
	lwz      r3, 0xd8(r30)
	cmplwi   r3, 0
	beq      lbl_80066E98
	lwz      r12, 0(r3)
	lwz      r4, 4(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_80066E98:
	lwz      r3, 0xc8(r30)
	cmplwi   r3, 0
	beq      lbl_80066EAC
	mr       r4, r30
	bl       deform__13J3DDeformDataFP8J3DModel

lbl_80066EAC:
	lwz      r3, 0xd0(r30)
	cmplwi   r3, 0
	beq      lbl_80066EC0
	mr       r4, r30
	bl       calc__15J3DVtxColorCalcFP8J3DModel

lbl_80066EC0:
	lwz      r3, 0xd4(r30)
	cmplwi   r3, 0
	beq      lbl_80066EE0
	lwz      r12, 0(r3)
	mr       r4, r30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80066EE0:
	stw      r30, 0x38(r31)
	lwz      r0, 8(r30)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_80066F1C
	lwz      r3, 4(r30)
	lis      r5, j3dDefaultScale@ha
	lwzu     r12, 0x10(r3)
	lis      r6, j3dDefaultMtx@ha
	lwz      r4, 0x84(r30)
	addi     r5, r5, j3dDefaultScale@l
	lwz      r12, 8(r12)
	addi     r6, r6, j3dDefaultMtx@l
	mtctr    r12
	bctrl
	b        lbl_80066F3C

lbl_80066F1C:
	lwz      r3, 4(r30)
	addi     r5, r30, 0x18
	lwzu     r12, 0x10(r3)
	addi     r6, r30, 0x24
	lwz      r4, 0x84(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80066F3C:
	lwz      r3, 4(r30)
	lhz      r0, 0x2e(r3)
	cmplwi   r0, 0
	beq      lbl_80066F6C
	lwz      r0, 8(r30)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	bne      lbl_80066F6C
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	bne      lbl_80066F6C
	lwz      r3, 0x84(r30)
	bl       calcWeightEnvelopeMtx__12J3DMtxBufferFv

lbl_80066F6C:
	lwz      r3, 0xcc(r30)
	cmplwi   r3, 0
	beq      lbl_80066F80
	mr       r4, r30
	bl       deform__13J3DSkinDeformFP8J3DModel

lbl_80066F80:
	lwz      r12, 0x10(r30)
	cmplwi   r12, 0
	beq      lbl_80066F9C
	mr       r3, r30
	li       r4, 0
	mtctr    r12
	bctrl

lbl_80066F9C:
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
 * Address:	80066FB4
 * Size:	0000F4
 * entry__8J3DModelFv
 */
void J3DModel::entry()
{
	j3dSys._38 = this;
	if (_08 & 4) {
		j3dSys._34 |= 0x4;
	} else {
		j3dSys._34 &= ~0x4;
	}
	if (_08 & 8) {
		j3dSys._34 |= 0x8;
	} else {
		j3dSys._34 &= ~0x8;
	}
	m_modelData->syncJ3DSysFlags();
	j3dSys._58 = m_modelData->m_materialTable.m_texture;
	for (u16 i = 0; i < m_modelData->m_jointTree.m_jointCnt; i++) {
		J3DJoint* joint = m_modelData->m_jointTree.m_joints[i];
		if (joint->m_material) {
			joint->entryIn();
		}
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, j3dSys@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r4, j3dSys@l
	stw      r30, 8(r1)
	stw      r31, 0x38(r3)
	lwz      r0, 8(r31)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_80066FF4
	lwz      r0, 0x34(r3)
	ori      r0, r0, 4
	stw      r0, 0x34(r3)
	b        lbl_80067000

lbl_80066FF4:
	lwz      r0, 0x34(r3)
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stw      r0, 0x34(r3)

lbl_80067000:
	lwz      r0, 8(r31)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	beq      lbl_80067024
	lis      r3, j3dSys@ha
	addi     r3, r3, j3dSys@l
	lwz      r0, 0x34(r3)
	ori      r0, r0, 8
	stw      r0, 0x34(r3)
	b        lbl_80067038

lbl_80067024:
	lis      r3, j3dSys@ha
	addi     r3, r3, j3dSys@l
	lwz      r0, 0x34(r3)
	rlwinm   r0, r0, 0, 0x1d, 0x1b
	stw      r0, 0x34(r3)

lbl_80067038:
	lwz      r3, 4(r31)
	bl       syncJ3DSysFlags__12J3DModelDataCFv
	lwz      r4, 4(r31)
	lis      r3, j3dSys@ha
	addi     r3, r3, j3dSys@l
	li       r30, 0
	lwz      r0, 0x6c(r4)
	stw      r0, 0x58(r3)
	b        lbl_8006707C

lbl_8006705C:
	lwz      r3, 0x28(r4)
	rlwinm   r0, r30, 2, 0xe, 0x1d
	lwzx     r3, r3, r0
	lwz      r0, 0x58(r3)
	cmplwi   r0, 0
	beq      lbl_80067078
	bl       entryIn__8J3DJointFv

lbl_80067078:
	addi     r30, r30, 1

lbl_8006707C:
	lwz      r4, 4(r31)
	clrlwi   r0, r30, 0x10
	lhz      r3, 0x2c(r4)
	cmplw    r0, r3
	blt      lbl_8006705C
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
 * Address:	800670A8
 * Size:	000368
 */
void J3DModel::viewCalc()
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stw      r31, 0x6c(r1)
	mr       r31, r3
	lwz      r6, 0x84(r3)
	lwz      r0, 0x30(r6)
	lwz      r4, 0x14(r6)
	slwi     r7, r0, 2
	lwz      r3, 0x18(r6)
	lwzx     r5, r4, r7
	lwzx     r0, r3, r7
	stwx     r0, r4, r7
	lwz      r0, 0x30(r6)
	lwz      r3, 0x18(r6)
	slwi     r0, r0, 2
	stwx     r5, r3, r0
	lwz      r6, 0x84(r31)
	lwz      r0, 0x30(r6)
	lwz      r4, 0x1c(r6)
	slwi     r7, r0, 2
	lwz      r3, 0x20(r6)
	lwzx     r5, r4, r7
	lwzx     r0, r3, r7
	stwx     r0, r4, r7
	lwz      r0, 0x30(r6)
	lwz      r3, 0x20(r6)
	slwi     r0, r0, 2
	stwx     r5, r3, r0
	lwz      r3, 4(r31)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	beq      lbl_800671E4
	lwz      r0, 8(r31)
	clrlwi   r0, r0, 0x1e
	cmplwi   r0, 2
	bne      lbl_800673F4
	lfs      f0, 0x24(r31)
	lis      r3, j3dSys@ha
	lfs      f3, 0x18(r31)
	addi     r3, r3, j3dSys@l
	addi     r4, r1, 0x38
	addi     r5, r31, 0x54
	fmuls    f0, f0, f3
	stfs     f0, 0x38(r1)
	lfs      f0, 0x28(r31)
	lfs      f2, 0x1c(r31)
	fmuls    f0, f0, f2
	stfs     f0, 0x3c(r1)
	lfs      f0, 0x2c(r31)
	lfs      f1, 0x20(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x40(r1)
	lfs      f0, 0x30(r31)
	stfs     f0, 0x44(r1)
	lfs      f0, 0x34(r31)
	fmuls    f0, f0, f3
	stfs     f0, 0x48(r1)
	lfs      f0, 0x38(r31)
	fmuls    f0, f0, f2
	stfs     f0, 0x4c(r1)
	lfs      f0, 0x3c(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x50(r1)
	lfs      f0, 0x40(r31)
	stfs     f0, 0x54(r1)
	lfs      f0, 0x44(r31)
	fmuls    f0, f0, f3
	stfs     f0, 0x58(r1)
	lfs      f0, 0x48(r31)
	fmuls    f0, f0, f2
	stfs     f0, 0x5c(r1)
	lfs      f0, 0x4c(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x60(r1)
	lfs      f0, 0x50(r31)
	stfs     f0, 0x64(r1)
	bl       PSMTXConcat
	b        lbl_800673F4

lbl_800671E4:
	lwz      r4, 8(r31)
	li       r3, 0
	rlwinm.  r5, r4, 0, 0x1d, 0x1d
	beq      lbl_80067200
	rlwinm.  r0, r4, 0, 0x1c, 0x1c
	beq      lbl_80067200
	li       r3, 1

lbl_80067200:
	clrlwi.  r0, r3, 0x18
	beq      lbl_800672BC
	clrlwi   r0, r4, 0x1e
	cmplwi   r0, 2
	bne      lbl_800673F4
	lfs      f0, 0x24(r31)
	lis      r3, j3dSys@ha
	lfs      f3, 0x18(r31)
	addi     r3, r3, j3dSys@l
	addi     r4, r1, 8
	addi     r5, r31, 0x54
	fmuls    f0, f0, f3
	stfs     f0, 8(r1)
	lfs      f0, 0x28(r31)
	lfs      f2, 0x1c(r31)
	fmuls    f0, f0, f2
	stfs     f0, 0xc(r1)
	lfs      f0, 0x2c(r31)
	lfs      f1, 0x20(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x10(r1)
	lfs      f0, 0x30(r31)
	stfs     f0, 0x14(r1)
	lfs      f0, 0x34(r31)
	fmuls    f0, f0, f3
	stfs     f0, 0x18(r1)
	lfs      f0, 0x38(r31)
	fmuls    f0, f0, f2
	stfs     f0, 0x1c(r1)
	lfs      f0, 0x3c(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x20(r1)
	lfs      f0, 0x40(r31)
	stfs     f0, 0x24(r1)
	lfs      f0, 0x44(r31)
	fmuls    f0, f0, f3
	stfs     f0, 0x28(r1)
	lfs      f0, 0x48(r31)
	fmuls    f0, f0, f2
	stfs     f0, 0x2c(r1)
	lfs      f0, 0x4c(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x30(r1)
	lfs      f0, 0x50(r31)
	stfs     f0, 0x34(r1)
	bl       PSMTXConcat
	b        lbl_800673F4

lbl_800672BC:
	cmplwi   r5, 0
	beq      lbl_80067334
	lwz      r3, 0x84(r31)
	clrlwi   r4, r4, 0x1e
	addi     r5, r31, 0x18
	addi     r6, r31, 0x24
	bl       calcDrawMtx__12J3DMtxBufferFUlRC3VecRA3_A4_Cf
	mr       r3, r31
	bl       calcNrmMtx__8J3DModelFv
	mr       r3, r31
	bl       calcBumpMtx__8J3DModelFv
	lwz      r5, 0x84(r31)
	lwz      r3, 4(r31)
	lwz      r4, 0x30(r5)
	lhz      r0, 0x44(r3)
	lwz      r5, 0x18(r5)
	slwi     r3, r4, 2
	mulli    r4, r0, 0x30
	lwzx     r3, r5, r3
	bl       DCStoreRangeNoSync
	lwz      r5, 0x84(r31)
	lwz      r3, 4(r31)
	lwz      r4, 0x30(r5)
	lhz      r0, 0x44(r3)
	lwz      r5, 0x20(r5)
	slwi     r3, r4, 2
	mulli    r4, r0, 0x24
	lwzx     r3, r5, r3
	bl       DCStoreRange
	b        lbl_800673F4

lbl_80067334:
	rlwinm.  r0, r4, 0, 0x1c, 0x1c
	beq      lbl_80067380
	lwz      r3, 0x84(r31)
	clrlwi   r4, r4, 0x1e
	addi     r5, r31, 0x18
	addi     r6, r31, 0x24
	bl       calcDrawMtx__12J3DMtxBufferFUlRC3VecRA3_A4_Cf
	mr       r3, r31
	bl       calcBBoardMtx__8J3DModelFv
	lwz      r5, 0x84(r31)
	lwz      r3, 4(r31)
	lwz      r4, 0x30(r5)
	lhz      r0, 0x44(r3)
	lwz      r5, 0x18(r5)
	slwi     r3, r4, 2
	mulli    r4, r0, 0x30
	lwzx     r3, r5, r3
	bl       DCStoreRange
	b        lbl_800673F4

lbl_80067380:
	lwz      r3, 0x84(r31)
	clrlwi   r4, r4, 0x1e
	addi     r5, r31, 0x18
	addi     r6, r31, 0x24
	bl       calcDrawMtx__12J3DMtxBufferFUlRC3VecRA3_A4_Cf
	mr       r3, r31
	bl       calcNrmMtx__8J3DModelFv
	mr       r3, r31
	bl       calcBBoardMtx__8J3DModelFv
	mr       r3, r31
	bl       calcBumpMtx__8J3DModelFv
	lwz      r5, 0x84(r31)
	lwz      r3, 4(r31)
	lwz      r4, 0x30(r5)
	lhz      r0, 0x44(r3)
	lwz      r5, 0x18(r5)
	slwi     r3, r4, 2
	mulli    r4, r0, 0x30
	lwzx     r3, r5, r3
	bl       DCStoreRangeNoSync
	lwz      r5, 0x84(r31)
	lwz      r3, 4(r31)
	lwz      r4, 0x30(r5)
	lhz      r0, 0x44(r3)
	lwz      r5, 0x20(r5)
	slwi     r3, r4, 2
	mulli    r4, r0, 0x24
	lwzx     r3, r5, r3
	bl       DCStoreRange

lbl_800673F4:
	mr       r3, r31
	bl       prepareShapePackets__8J3DModelFv
	lwz      r0, 0x74(r1)
	lwz      r31, 0x6c(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	80067410
 * Size:	000024
 */
void J3DModel::calcNrmMtx() { m_mtxBuffer->calcNrmMtx(); }

/*
 * --INFO--
 * Address:	80067434
 * Size:	000100
 */
void J3DModel::calcBumpMtx()
{
	if (m_modelData->_0C != 1) {
		return;
	}
	u16 count = m_modelData->m_materialTable.m_count1;
	for (u16 i = 0; i < count; i++) {
		J3DMaterial* material = m_modelData->m_materialTable.m_materials1[i];
		if (material->m_texGenBlock->getNBTScale()->_00 == 1) {
			material->m_shape->calcNBTScale(material->m_texGenBlock->getNBTScale()->_04,
			                                m_mtxBuffer->_1C[1][m_mtxBuffer->m_currentViewNumber],
			                                m_mtxBuffer->_24[1][i][m_mtxBuffer->m_currentViewNumber]);
			DCStoreRange(m_mtxBuffer->_24[1][i][m_mtxBuffer->m_currentViewNumber],
			             m_modelData->m_jointTree.m_mtxData.m_count * sizeof(Mtx33));
		}
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r28, r3
	lwz      r3, 4(r3)
	lhz      r0, 0xc(r3)
	cmplwi   r0, 1
	bne      lbl_80067520
	lhz      r31, 0x5c(r3)
	li       r29, 0
	li       r30, 0
	b        lbl_80067514

lbl_80067468:
	lwz      r3, 4(r28)
	rlwinm   r0, r29, 2, 0xe, 0x1d
	lwz      r3, 0x60(r3)
	lwzx     r27, r3, r0
	lwz      r3, 0x28(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0(r3)
	cmplwi   r0, 1
	bne      lbl_80067510
	lwz      r6, 0x84(r28)
	lwz      r3, 0x28(r27)
	lwz      r4, 0x28(r6)
	lwz      r12, 0(r3)
	lwz      r0, 0x30(r6)
	lwzx     r5, r4, r30
	slwi     r0, r0, 2
	lwz      r4, 0x20(r6)
	lwz      r12, 0x5c(r12)
	lwzx     r26, r5, r0
	lwzx     r25, r4, r0
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 8(r27)
	mr       r5, r25
	mr       r6, r26
	addi     r4, r4, 4
	bl       calcNBTScale__8J3DShapeFRC3VecPA3_A3_fPA3_A3_f
	lwz      r4, 0x84(r28)
	lwz      r3, 4(r28)
	lwz      r5, 0x28(r4)
	lwz      r4, 0x30(r4)
	lhz      r0, 0x44(r3)
	lwzx     r5, r5, r30
	slwi     r3, r4, 2
	mulli    r4, r0, 0x24
	lwzx     r3, r5, r3
	bl       DCStoreRange
	addi     r30, r30, 4

lbl_80067510:
	addi     r29, r29, 1

lbl_80067514:
	clrlwi   r0, r29, 0x10
	cmplw    r0, r31
	blt      lbl_80067468

lbl_80067520:
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80067534
 * Size:	000034
 */
void J3DModel::calcBBoardMtx()
{
	if (m_modelData->m_jointSet == 1) {
		m_mtxBuffer->calcBBoardMtx();
	}
}

/*
 * --INFO--
 * Address:	80067568
 * Size:	000064
 */
void J3DModel::prepareShapePackets()
{
	/*
	lwz      r6, 4(r3)
	lis      r4, j3dSys@ha
	addi     r5, r3, 0x54
	li       r9, 0
	lhz      r8, 0x7c(r6)
	addi     r4, r4, j3dSys@l
	b        lbl_800675BC

lbl_80067584:
	clrlwi   r0, r9, 0x10
	lwz      r7, 0xc4(r3)
	mulli    r6, r0, 0x3c
	lwz      r0, 0x84(r3)
	add      r6, r7, r6
	stw      r0, 0x2c(r6)
	lwz      r0, 8(r3)
	clrlwi   r0, r0, 0x1e
	cmplwi   r0, 2
	bne      lbl_800675B4
	stw      r5, 0x30(r6)
	b        lbl_800675B8

lbl_800675B4:
	stw      r4, 0x30(r6)

lbl_800675B8:
	addi     r9, r9, 1

lbl_800675BC:
	clrlwi   r0, r9, 0x10
	cmplw    r0, r8
	blt      lbl_80067584
	blr
	*/
}

/*
 * --INFO--
 * Address:	800675CC
 * Size:	000064
 * __dt__8J3DModelFv
 */
// J3DModel::~J3DModel()
// {
// }

/*
 * --INFO--
 * Address:	80067630
 * Size:	000048
 * __dt__12J3DMtxBufferFv
 */
// J3DMtxBuffer::~J3DMtxBuffer()
// {
// }
