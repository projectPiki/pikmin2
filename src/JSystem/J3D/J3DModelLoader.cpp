#include "Dolphin/mtx.h"
#include "JSystem/J3D/J3DFileBlock.h"
#include "JSystem/J3D/J3DMaterial.h"
#include "JSystem/J3D/J3DMaterialFactory.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "JSystem/J3D/J3DMtxCalc.h"
#include "JSystem/J3D/J3DShape.h"
#include "JSystem/J3D/J3DTexture.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JSupport/JSU.h"
#include "JSystem/JUT/JUTNameTab.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__18J3DModelLoader_v21
    __vt__18J3DModelLoader_v21:
        .4byte 0
        .4byte 0
        .4byte load__14J3DModelLoaderFPCvUl
        .4byte loadMaterialTable__14J3DModelLoaderFPCv
        .4byte loadBinaryDisplayList__14J3DModelLoaderFPCvUl
        .4byte calcLoadSize__14J3DModelLoaderFPCvUl
        .4byte calcLoadMaterialTableSize__14J3DModelLoaderFPCv
        .4byte calcLoadBinaryDisplayListSize__14J3DModelLoaderFPCvUl
        .4byte countMaterialNum__14J3DModelLoaderFPCv
        .4byte setupBBoardInfo__14J3DModelLoaderFv
        .4byte __dt__18J3DModelLoader_v21Fv
        .4byte readMaterial__14J3DModelLoaderFPC16J3DMaterialBlockUl
        .4byte readMaterial_v21__18J3DModelLoader_v21FPC20J3DMaterialBlock_v21Ul
        .4byte readMaterialTable__14J3DModelLoaderFPC16J3DMaterialBlockUl
        .4byte
   readMaterialTable_v21__18J3DModelLoader_v21FPC20J3DMaterialBlock_v21Ul .4byte
   calcSizeMaterial__14J3DModelLoaderFPC16J3DMaterialBlockUl .4byte
   calcSizeMaterialTable__14J3DModelLoaderFPC16J3DMaterialBlockUl .global
   __vt__18J3DModelLoader_v26
    __vt__18J3DModelLoader_v26:
        .4byte 0
        .4byte 0
        .4byte load__14J3DModelLoaderFPCvUl
        .4byte loadMaterialTable__14J3DModelLoaderFPCv
        .4byte loadBinaryDisplayList__14J3DModelLoaderFPCvUl
        .4byte calcLoadSize__14J3DModelLoaderFPCvUl
        .4byte calcLoadMaterialTableSize__14J3DModelLoaderFPCv
        .4byte calcLoadBinaryDisplayListSize__14J3DModelLoaderFPCvUl
        .4byte countMaterialNum__14J3DModelLoaderFPCv
        .4byte setupBBoardInfo__14J3DModelLoaderFv
        .4byte __dt__18J3DModelLoader_v26Fv
        .4byte readMaterial__18J3DModelLoader_v26FPC16J3DMaterialBlockUl
        .4byte readMaterial_v21__14J3DModelLoaderFPC20J3DMaterialBlock_v21Ul
        .4byte readMaterialTable__18J3DModelLoader_v26FPC16J3DMaterialBlockUl
        .4byte
   readMaterialTable_v21__14J3DModelLoaderFPC20J3DMaterialBlock_v21Ul .4byte
   calcSizeMaterial__18J3DModelLoader_v26FPC16J3DMaterialBlockUl .4byte
   calcSizeMaterialTable__18J3DModelLoader_v26FPC16J3DMaterialBlockUl .global
   "__vt__73J3DMtxCalcNoAnm<27J3DMtxCalcCalcTransformMaya,24J3DMtxCalcJ3DSysInitMaya>"
    "__vt__73J3DMtxCalcNoAnm<27J3DMtxCalcCalcTransformMaya,24J3DMtxCalcJ3DSysInitMaya>":
        .4byte 0
        .4byte 0
        .4byte
   "__dt__73J3DMtxCalcNoAnm<27J3DMtxCalcCalcTransformMaya,24J3DMtxCalcJ3DSysInitMaya>Fv"
        .4byte setAnmTransform__10J3DMtxCalcFP15J3DAnmTransform
        .4byte getAnmTransform__10J3DMtxCalcFv
        .4byte setAnmTransform__10J3DMtxCalcFUcP15J3DAnmTransform
        .4byte getAnmTransform__10J3DMtxCalcFUc
        .4byte setWeight__10J3DMtxCalcFUcf
        .4byte getWeight__10J3DMtxCalcCFUc
        .4byte
   "init__73J3DMtxCalcNoAnm<27J3DMtxCalcCalcTransformMaya,24J3DMtxCalcJ3DSysInitMaya>FRC3VecRA3_A4_Cf"
        .4byte
   "calc__73J3DMtxCalcNoAnm<27J3DMtxCalcCalcTransformMaya,24J3DMtxCalcJ3DSysInitMaya>Fv"
    .global
   "__vt__83J3DMtxCalcNoAnm<32J3DMtxCalcCalcTransformSoftimage,29J3DMtxCalcJ3DSysInitSoftimage>"
    "__vt__83J3DMtxCalcNoAnm<32J3DMtxCalcCalcTransformSoftimage,29J3DMtxCalcJ3DSysInitSoftimage>":
        .4byte 0
        .4byte 0
        .4byte
   "__dt__83J3DMtxCalcNoAnm<32J3DMtxCalcCalcTransformSoftimage,29J3DMtxCalcJ3DSysInitSoftimage>Fv"
        .4byte setAnmTransform__10J3DMtxCalcFP15J3DAnmTransform
        .4byte getAnmTransform__10J3DMtxCalcFv
        .4byte setAnmTransform__10J3DMtxCalcFUcP15J3DAnmTransform
        .4byte getAnmTransform__10J3DMtxCalcFUc
        .4byte setWeight__10J3DMtxCalcFUcf
        .4byte getWeight__10J3DMtxCalcCFUc
        .4byte
   "init__83J3DMtxCalcNoAnm<32J3DMtxCalcCalcTransformSoftimage,29J3DMtxCalcJ3DSysInitSoftimage>FRC3VecRA3_A4_Cf"
        .4byte
   "calc__83J3DMtxCalcNoAnm<32J3DMtxCalcCalcTransformSoftimage,29J3DMtxCalcJ3DSysInitSoftimage>Fv"
    .global
   "__vt__75J3DMtxCalcNoAnm<28J3DMtxCalcCalcTransformBasic,25J3DMtxCalcJ3DSysInitBasic>"
    "__vt__75J3DMtxCalcNoAnm<28J3DMtxCalcCalcTransformBasic,25J3DMtxCalcJ3DSysInitBasic>":
        .4byte 0
        .4byte 0
        .4byte
   "__dt__75J3DMtxCalcNoAnm<28J3DMtxCalcCalcTransformBasic,25J3DMtxCalcJ3DSysInitBasic>Fv"
        .4byte setAnmTransform__10J3DMtxCalcFP15J3DAnmTransform
        .4byte getAnmTransform__10J3DMtxCalcFv
        .4byte setAnmTransform__10J3DMtxCalcFUcP15J3DAnmTransform
        .4byte getAnmTransform__10J3DMtxCalcFUc
        .4byte setWeight__10J3DMtxCalcFUcf
        .4byte getWeight__10J3DMtxCalcCFUc
        .4byte
   "init__75J3DMtxCalcNoAnm<28J3DMtxCalcCalcTransformBasic,25J3DMtxCalcJ3DSysInitBasic>FRC3VecRA3_A4_Cf"
        .4byte
   "calc__75J3DMtxCalcNoAnm<28J3DMtxCalcCalcTransformBasic,25J3DMtxCalcJ3DSysInitBasic>Fv"
    .global __vt__19J3DMtxCalcNoAnmBase
    __vt__19J3DMtxCalcNoAnmBase:
        .4byte 0
        .4byte 0
        .4byte __dt__19J3DMtxCalcNoAnmBaseFv
        .4byte setAnmTransform__10J3DMtxCalcFP15J3DAnmTransform
        .4byte getAnmTransform__10J3DMtxCalcFv
        .4byte setAnmTransform__10J3DMtxCalcFUcP15J3DAnmTransform
        .4byte getAnmTransform__10J3DMtxCalcFUc
        .4byte setWeight__10J3DMtxCalcFUcf
        .4byte getWeight__10J3DMtxCalcCFUc
        .4byte 0
        .4byte 0
    .global __vt__10J3DTexture
    __vt__10J3DTexture:
        .4byte 0
        .4byte 0
        .4byte __dt__10J3DTextureFv
    .global __vt__14J3DModelLoader
    __vt__14J3DModelLoader:
        .4byte 0
        .4byte 0
        .4byte load__14J3DModelLoaderFPCvUl
        .4byte loadMaterialTable__14J3DModelLoaderFPCv
        .4byte loadBinaryDisplayList__14J3DModelLoaderFPCvUl
        .4byte calcLoadSize__14J3DModelLoaderFPCvUl
        .4byte calcLoadMaterialTableSize__14J3DModelLoaderFPCv
        .4byte calcLoadBinaryDisplayListSize__14J3DModelLoaderFPCvUl
        .4byte countMaterialNum__14J3DModelLoaderFPCv
        .4byte setupBBoardInfo__14J3DModelLoaderFv
        .4byte __dt__14J3DModelLoaderFv
        .4byte readMaterial__14J3DModelLoaderFPC16J3DMaterialBlockUl
        .4byte readMaterial_v21__14J3DModelLoaderFPC20J3DMaterialBlock_v21Ul
        .4byte readMaterialTable__14J3DModelLoaderFPC16J3DMaterialBlockUl
        .4byte
   readMaterialTable_v21__14J3DModelLoaderFPC20J3DMaterialBlock_v21Ul .4byte
   calcSizeMaterial__14J3DModelLoaderFPC16J3DMaterialBlockUl .4byte
   calcSizeMaterialTable__14J3DModelLoaderFPC16J3DMaterialBlockUl
*/

/*
 * --INFO--
 * Address:	8006F894
 * Size:	000154
 */
J3DModelData* J3DModelLoaderDataBase::load(const void* stream, unsigned long flags)
{
	if (stream == nullptr) {
		return nullptr;
	}
	J3DFileHeader* header = (J3DFileHeader*)stream;
	if (header->m_j3dVersion == 'J3D1' && header->m_fileVersion == 'bmd1') {
		return nullptr;
	}
	if (header->m_j3dVersion == 'J3D2' && header->m_fileVersion == 'bmd2') {
		J3DModelLoader_v21 loader;
		return loader.load(stream, flags);
	}
	if (header->m_j3dVersion == 'J3D2' && header->m_fileVersion == 'bmd3') {
		J3DModelLoader_v26 loader;
		return loader.load(stream, flags);
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	8006F9E8
 * Size:	00005C
 */
// J3DModelLoader_v26::~J3DModelLoader_v26()
// {
// }

/*
 * --INFO--
 * Address:	8006FA44
 * Size:	00005C
 */
// J3DModelLoader_v21::~J3DModelLoader_v21()
// {
// }

/*
 * --INFO--
 * Address:	8006FAA0
 * Size:	000048
 */
// J3DModelLoader::~J3DModelLoader()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	or.      r31, r3, r3
// 	beq      lbl_8006FAD0
// 	lis      r5, __vt__14J3DModelLoader@ha
// 	extsh.   r0, r4
// 	addi     r0, r5, __vt__14J3DModelLoader@l
// 	stw      r0, 0(r31)
// 	ble      lbl_8006FAD0
// 	bl       __dl__FPv

// lbl_8006FAD0:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r31
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8006FAE8
 * Size:	0000BC
 */
J3DModelData* J3DModelLoaderDataBase::loadBinaryDisplayList(const void* stream, u32 flags)
{
	if (stream == nullptr) {
		return nullptr;
	}
	J3DFileHeader* header = (J3DFileHeader*)stream;
	if (header->m_j3dVersion == 'J3D2' && (header->m_fileVersion == 'bdl3' || header->m_fileVersion == 'bdl4')) {
		J3DModelLoader_v26 loader;
		return loader.loadBinaryDisplayList(stream, flags);
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	8006FBA4
 * Size:	0002BC
 * load__14J3DModelLoaderFPCvUl
 */
J3DModelData* J3DModelLoader::load(const void* stream, u32 flags)
{
	JKRHeap::sCurrentHeap->getTotalFreeSize();
	m_modelData = new J3DModelData();
	m_modelData->clear();
	const J3DFileHeader* header       = reinterpret_cast<const J3DFileHeader*>(stream);
	m_modelData->m_bmd                = (u8*)stream;
	const J3DFileBlockBase* nextBlock = header->getFirstBlock();
	m_modelData->m_jointTree.m_flags  = 0;
	m_materialTable                   = &m_modelData->m_materialTable;
	for (u32 i = 0; i < header->m_blockCount; i++) {
		switch (nextBlock->m_blockType) {
		case J3DFBT_Info:
			readInformation((const J3DModelInfoBlock*)nextBlock, flags);
			break;
		case J3DFBT_Vertex:
			readVertex((const J3DVertexBlock*)nextBlock);
			break;
		case J3DFBT_Envelope:
			readEnvelop((const J3DEnvelopeBlock*)nextBlock);
			break;
		case J3DFBT_Draw:
			readDraw((const J3DDrawBlock*)nextBlock);
			break;
		case J3DFBT_Joint:
			readJoint((const J3DJointBlock*)nextBlock);
			break;
		case J3DFBT_Material:
			readMaterial((const J3DMaterialBlock*)nextBlock, flags);
			break;
		case J3DFBT_MaterialV21:
			readMaterial_v21((const J3DMaterialBlock_v21*)nextBlock, flags);
			break;
		case J3DFBT_Shape:
			readShape((const J3DShapeBlock*)nextBlock, flags);
			break;
		case J3DFBT_Texture:
			readTexture((const J3DTextureBlock*)nextBlock);
			break;
		}
		nextBlock = nextBlock->getNext();
	}
	m_modelData->init(m_modelData->m_jointTree.m_hierarchy);
	m_modelData->m_shapeTable.sortVcdVatCmd();
	m_modelData->m_jointTree.findImportantMtxIndex();
	setupBBoardInfo();
	if (m_modelData->m_modelLoaderFlags & 0x100) {
		for (u16 i = 0; i < m_modelData->m_shapeTable.m_count; i++) {
			m_modelData->m_shapeTable.m_items[i]->m_flags |= 0x200;
		}
	}
	return m_modelData;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r26, 0x18(r1)
	mr       r27, r3
	mr       r29, r4
	mr       r28, r5
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getTotalFreeSize__7JKRHeapFv
	li       r3, 0xe4
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8006FBE0
	bl       __ct__12J3DModelDataFv
	mr       r0, r3

lbl_8006FBE0:
	stw      r0, 4(r27)
	lwz      r3, 4(r27)
	bl       clear__12J3DModelDataFv
	lwz      r4, 4(r27)
	lis      r3, 0x4D415432@ha
	li       r0, 0
	lwz      r26, 0xc(r29)
	stw      r29, 4(r4)
	addi     r30, r29, 0x20
	addi     r31, r3, 0x4D415432@l
	li       r29, 0
	lwz      r3, 4(r27)
	stw      r0, 0x1c(r3)
	lwz      r3, 4(r27)
	addi     r0, r3, 0x58
	stw      r0, 8(r27)
	b        lbl_8006FD94

lbl_8006FC24:
	lwz      r4, 0(r30)
	cmpw     r4, r31
	beq      lbl_8006FD48
	bge      lbl_8006FC84
	lis      r3, 0x494E4631@ha
	addi     r0, r3, 0x494E4631@l
	cmpw     r4, r0
	beq      lbl_8006FCD4
	bge      lbl_8006FC70
	lis      r3, 0x45565031@ha
	addi     r0, r3, 0x45565031@l
	cmpw     r4, r0
	beq      lbl_8006FCF8
	bge      lbl_8006FD88
	lis      r3, 0x44525731@ha
	addi     r0, r3, 0x44525731@l
	cmpw     r4, r0
	beq      lbl_8006FD08
	b        lbl_8006FD88

lbl_8006FC70:
	lis      r3, 0x4A4E5431@ha
	addi     r0, r3, 0x4A4E5431@l
	cmpw     r4, r0
	beq      lbl_8006FD18
	b        lbl_8006FD88

lbl_8006FC84:
	lis      r3, 0x54455831@ha
	addi     r0, r3, 0x54455831@l
	cmpw     r4, r0
	beq      lbl_8006FD7C
	bge      lbl_8006FCC0
	lis      r3, 0x53485031@ha
	addi     r0, r3, 0x53485031@l
	cmpw     r4, r0
	beq      lbl_8006FD68
	bge      lbl_8006FD88
	lis      r3, 0x4D415434@ha
	addi     r0, r3, 0x4D415434@l
	cmpw     r4, r0
	bge      lbl_8006FD88
	b        lbl_8006FD28

lbl_8006FCC0:
	lis      r3, 0x56545831@ha
	addi     r0, r3, 0x56545831@l
	cmpw     r4, r0
	beq      lbl_8006FCE8
	b        lbl_8006FD88

lbl_8006FCD4:
	mr       r3, r27
	mr       r4, r30
	mr       r5, r28
	bl       readInformation__14J3DModelLoaderFPC17J3DModelInfoBlockUl
	b        lbl_8006FD88

lbl_8006FCE8:
	mr       r3, r27
	mr       r4, r30
	bl       readVertex__14J3DModelLoaderFPC14J3DVertexBlock
	b        lbl_8006FD88

lbl_8006FCF8:
	mr       r3, r27
	mr       r4, r30
	bl       readEnvelop__14J3DModelLoaderFPC16J3DEnvelopeBlock
	b        lbl_8006FD88

lbl_8006FD08:
	mr       r3, r27
	mr       r4, r30
	bl       readDraw__14J3DModelLoaderFPC12J3DDrawBlock
	b        lbl_8006FD88

lbl_8006FD18:
	mr       r3, r27
	mr       r4, r30
	bl       readJoint__14J3DModelLoaderFPC13J3DJointBlock
	b        lbl_8006FD88

lbl_8006FD28:
	mr       r3, r27
	mr       r4, r30
	lwz      r12, 0(r27)
	mr       r5, r28
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_8006FD88

lbl_8006FD48:
	mr       r3, r27
	mr       r4, r30
	lwz      r12, 0(r27)
	mr       r5, r28
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	b        lbl_8006FD88

lbl_8006FD68:
	mr       r3, r27
	mr       r4, r30
	mr       r5, r28
	bl       readShape__14J3DModelLoaderFPC13J3DShapeBlockUl
	b        lbl_8006FD88

lbl_8006FD7C:
	mr       r3, r27
	mr       r4, r30
	bl       readTexture__14J3DModelLoaderFPC15J3DTextureBlock

lbl_8006FD88:
	lwz      r0, 4(r30)
	addi     r29, r29, 1
	add      r30, r30, r0

lbl_8006FD94:
	cmplw    r29, r26
	blt      lbl_8006FC24
	lwz      r3, 4(r27)
	addi     r5, r1, 8
	li       r4, 0
	lwz      r0, 0x14(r3)
	stw      r0, 8(r1)
	lwz      r26, 4(r27)
	addi     r3, r26, 0x10
	addi     r6, r26, 0x58
	addi     r7, r26, 0x78
	bl
makeHierarchy__12J3DJointTreeFP8J3DJointPPC17J3DModelHierarchyP16J3DMaterialTableP13J3DShapeTable
	addi     r3, r26, 0x78
	addi     r4, r26, 0x44
	addi     r5, r26, 0x88
	bl       initShapeNodes__13J3DShapeTableFP14J3DDrawMtxDataP13J3DVertexData
	lwz      r3, 4(r27)
	addi     r3, r3, 0x78
	bl       sortVcdVatCmd__13J3DShapeTableFv
	lwz      r3, 4(r27)
	addi     r3, r3, 0x10
	bl       findImportantMtxIndex__12J3DJointTreeFv
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 4(r27)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_8006FE48
	li       r5, 0
	b        lbl_8006FE34

lbl_8006FE18:
	lwz      r3, 0x80(r4)
	rlwinm   r0, r5, 2, 0xe, 0x1d
	addi     r5, r5, 1
	lwzx     r3, r3, r0
	lwz      r0, 0xc(r3)
	ori      r0, r0, 0x200
	stw      r0, 0xc(r3)

lbl_8006FE34:
	lwz      r4, 4(r27)
	clrlwi   r0, r5, 0x10
	lhz      r3, 0x7c(r4)
	cmplw    r0, r3
	blt      lbl_8006FE18

lbl_8006FE48:
	lwz      r3, 4(r27)
	lmw      r26, 0x18(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8006FE60
 * Size:	000004
 */
void J3DModelLoader::readMaterial_v21(const J3DMaterialBlock_v21*, unsigned long) { }

/*
 * --INFO--
 * Address:	8006FE64
 * Size:	000004
 */
void J3DModelLoader::readMaterial(const J3DMaterialBlock*, unsigned long) { }

/*
 * --INFO--
 * Address:	8006FE68
 * Size:	000148
 * loadMaterialTable__14J3DModelLoaderFPCv
 */
J3DMaterialTable* J3DModelLoader::loadMaterialTable(const void* stream)
{
	m_materialTable = new J3DMaterialTable();
	m_materialTable->clear();
	const J3DFileHeader* header       = reinterpret_cast<const J3DFileHeader*>(stream);
	const J3DFileBlockBase* nextBlock = header->getFirstBlock();
	for (u32 i = 0; i < header->m_blockCount; i++) {
		switch (nextBlock->m_blockType) {
		case J3DFBT_Material:
			readMaterialTable((const J3DMaterialBlock*)nextBlock, 0x51100000);
			break;
		case J3DFBT_MaterialV21:
			readMaterialTable_v21((const J3DMaterialBlock_v21*)nextBlock, 0x51100000);
			break;
		case J3DFBT_Texture:
			readTextureTable((const J3DTextureBlock*)nextBlock);
			break;
		default:
			break;
		}
		nextBlock = nextBlock->getNext();
	}
	if (m_materialTable->m_texture == nullptr) {
		m_materialTable->m_texture = new J3DTexture(0, nullptr);
	}
	return m_materialTable;
}

/*
 * --INFO--
 * Address:	8006FFB0
 * Size:	000004
 */
void J3DModelLoader::readMaterialTable_v21(const J3DMaterialBlock_v21*, unsigned long) { }

/*
 * --INFO--
 * Address:	8006FFB4
 * Size:	000004
 */
void J3DModelLoader::readMaterialTable(const J3DMaterialBlock*, unsigned long) { }

/*
 * --INFO--
 * Address:	8006FFB8
 * Size:	0002A4
 * loadBinaryDisplayList__14J3DModelLoaderFPCvUl
 */
J3DModelData* J3DModelLoader::loadBinaryDisplayList(const void* stream, u32 flags)
{
	m_modelData = new J3DModelData();
	m_modelData->clear();
	const J3DFileHeader* header       = reinterpret_cast<const J3DFileHeader*>(stream);
	m_modelData->m_bmd                = stream;
	const J3DFileBlockBase* nextBlock = header->getFirstBlock();
	m_modelData->m_jointTree.m_flags  = 0x1;
	m_materialTable                   = &m_modelData->m_materialTable;
	for (u32 i = 0; i < header->m_blockCount; i++) {
		switch (nextBlock->m_blockType) {
		case J3DFBT_Info:
			readInformation((const J3DModelInfoBlock*)nextBlock, flags);
			break;
		case J3DFBT_Vertex:
			readVertex((const J3DVertexBlock*)nextBlock);
			break;
		case J3DFBT_Envelope:
			readEnvelop((const J3DEnvelopeBlock*)nextBlock);
			break;
		case J3DFBT_Draw:
			readDraw((const J3DDrawBlock*)nextBlock);
			break;
		case J3DFBT_Joint:
			readJoint((const J3DJointBlock*)nextBlock);
			break;
		case J3DFBT_Shape:
			readShape((const J3DShapeBlock*)nextBlock, flags);
			break;
		case J3DFBT_Texture:
			readTexture((const J3DTextureBlock*)nextBlock);
			break;
		case J3DFBT_MaterialDL:
			readMaterialDL((const J3DMaterialDLBlock*)nextBlock, flags);
			modifyMaterial(flags);
			break;
		case J3DFBT_Material: {
			u32 matFlags                     = flags & 0x3000000;
			matFlags                         = matFlags | 0x50100000;
			const J3DMaterialBlock* matBlock = (const J3DMaterialBlock*)nextBlock;
			m_materialBlock                  = matBlock;
			if ((flags & 0x3000) == 0) {
				readMaterial(matBlock, matFlags);
			} else if ((flags & 0x3000) == 0x2000) {
				readPatchedMaterial(matBlock, matFlags);
			}
			break;
		}
		default:
			break;
		}
		nextBlock = nextBlock->getNext();
	}
	m_modelData->init(m_modelData->m_jointTree.m_hierarchy);
	m_modelData->m_shapeTable.sortVcdVatCmd();
	m_modelData->m_jointTree.findImportantMtxIndex();
	setupBBoardInfo();
	m_modelData->indexToPtr();
	return m_modelData;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r24, 0x10(r1)
	mr       r25, r3
	mr       r27, r4
	mr       r26, r5
	li       r3, 0xe4
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8006FFEC
	bl       __ct__12J3DModelDataFv
	mr       r0, r3

lbl_8006FFEC:
	stw      r0, 4(r25)
	lwz      r3, 4(r25)
	bl       clear__12J3DModelDataFv
	lwz      r4, 4(r25)
	lis      r3, 0x4D415433@ha
	li       r0, 1
	lwz      r24, 0xc(r27)
	stw      r27, 4(r4)
	addi     r28, r27, 0x20
	rlwinm   r30, r26, 0, 6, 7
	rlwinm   r29, r26, 0, 0x12, 0x13
	lwz      r4, 4(r25)
	addi     r31, r3, 0x4D415433@l
	li       r27, 0
	stw      r0, 0x1c(r4)
	lwz      r3, 4(r25)
	addi     r0, r3, 0x58
	stw      r0, 8(r25)
	b        lbl_800701D0

lbl_80070038:
	lwz      r4, 0(r28)
	cmpw     r4, r31
	beq      lbl_80070180
	bge      lbl_80070098
	lis      r3, 0x494E4631@ha
	addi     r0, r3, 0x494E4631@l
	cmpw     r4, r0
	beq      lbl_800700E8
	bge      lbl_80070084
	lis      r3, 0x45565031@ha
	addi     r0, r3, 0x45565031@l
	cmpw     r4, r0
	beq      lbl_8007010C
	bge      lbl_800701C4
	lis      r3, 0x44525731@ha
	addi     r0, r3, 0x44525731@l
	cmpw     r4, r0
	beq      lbl_8007011C
	b        lbl_800701C4

lbl_80070084:
	lis      r3, 0x4A4E5431@ha
	addi     r0, r3, 0x4A4E5431@l
	cmpw     r4, r0
	beq      lbl_8007012C
	b        lbl_800701C4

lbl_80070098:
	lis      r3, 0x54455831@ha
	addi     r0, r3, 0x54455831@l
	cmpw     r4, r0
	beq      lbl_80070150
	bge      lbl_800700D4
	lis      r3, 0x53485031@ha
	addi     r0, r3, 0x53485031@l
	cmpw     r4, r0
	beq      lbl_8007013C
	bge      lbl_800701C4
	lis      r3, 0x4D444C33@ha
	addi     r0, r3, 0x4D444C33@l
	cmpw     r4, r0
	beq      lbl_80070160
	b        lbl_800701C4

lbl_800700D4:
	lis      r3, 0x56545831@ha
	addi     r0, r3, 0x56545831@l
	cmpw     r4, r0
	beq      lbl_800700FC
	b        lbl_800701C4

lbl_800700E8:
	mr       r3, r25
	mr       r4, r28
	mr       r5, r26
	bl       readInformation__14J3DModelLoaderFPC17J3DModelInfoBlockUl
	b        lbl_800701C4

lbl_800700FC:
	mr       r3, r25
	mr       r4, r28
	bl       readVertex__14J3DModelLoaderFPC14J3DVertexBlock
	b        lbl_800701C4

lbl_8007010C:
	mr       r3, r25
	mr       r4, r28
	bl       readEnvelop__14J3DModelLoaderFPC16J3DEnvelopeBlock
	b        lbl_800701C4

lbl_8007011C:
	mr       r3, r25
	mr       r4, r28
	bl       readDraw__14J3DModelLoaderFPC12J3DDrawBlock
	b        lbl_800701C4

lbl_8007012C:
	mr       r3, r25
	mr       r4, r28
	bl       readJoint__14J3DModelLoaderFPC13J3DJointBlock
	b        lbl_800701C4

lbl_8007013C:
	mr       r3, r25
	mr       r4, r28
	mr       r5, r26
	bl       readShape__14J3DModelLoaderFPC13J3DShapeBlockUl
	b        lbl_800701C4

lbl_80070150:
	mr       r3, r25
	mr       r4, r28
	bl       readTexture__14J3DModelLoaderFPC15J3DTextureBlock
	b        lbl_800701C4

lbl_80070160:
	mr       r3, r25
	mr       r4, r28
	mr       r5, r26
	bl       readMaterialDL__14J3DModelLoaderFPC18J3DMaterialDLBlockUl
	mr       r3, r25
	mr       r4, r26
	bl       modifyMaterial__14J3DModelLoaderFUl
	b        lbl_800701C4

lbl_80070180:
	cmplwi   r29, 0
	lis      r5, 0x5010
	stw      r28, 0x10(r25)
	or       r5, r5, r30
	bne      lbl_800701B0
	lwz      r12, 0(r25)
	mr       r3, r25
	mr       r4, r28
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_800701C4

lbl_800701B0:
	cmplwi   r29, 0x2000
	bne      lbl_800701C4
	mr       r3, r25
	mr       r4, r28
	bl       readPatchedMaterial__14J3DModelLoaderFPC16J3DMaterialBlockUl

lbl_800701C4:
	lwz      r0, 4(r28)
	addi     r27, r27, 1
	add      r28, r28, r0

lbl_800701D0:
	cmplw    r27, r24
	blt      lbl_80070038
	lwz      r3, 4(r25)
	addi     r5, r1, 8
	li       r4, 0
	lwz      r0, 0x14(r3)
	stw      r0, 8(r1)
	lwz      r24, 4(r25)
	addi     r3, r24, 0x10
	addi     r6, r24, 0x58
	addi     r7, r24, 0x78
	bl
makeHierarchy__12J3DJointTreeFP8J3DJointPPC17J3DModelHierarchyP16J3DMaterialTableP13J3DShapeTable
	addi     r3, r24, 0x78
	addi     r4, r24, 0x44
	addi     r5, r24, 0x88
	bl       initShapeNodes__13J3DShapeTableFP14J3DDrawMtxDataP13J3DVertexData
	lwz      r3, 4(r25)
	addi     r3, r3, 0x78
	bl       sortVcdVatCmd__13J3DShapeTableFv
	lwz      r3, 4(r25)
	addi     r3, r3, 0x10
	bl       findImportantMtxIndex__12J3DJointTreeFv
	mr       r3, r25
	lwz      r12, 0(r25)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 4(r25)
	bl       indexToPtr__12J3DModelDataFv
	lwz      r3, 4(r25)
	lmw      r24, 0x10(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8007025C
 * Size:	00014C
 */
void J3DModelLoader::setupBBoardInfo()
{
	for (u16 i = 0; i < m_modelData->m_jointTree.m_jointCnt; i++) {
		J3DMaterial* material = m_modelData->m_jointTree.m_joints[i]->m_material;
		if (material) {
			u16 id                     = material->m_shape->m_id;
			u16* initDataIndexToIDMap  = JSUConvertOffsetToPtr<u16>(m_shapeBlock, m_shapeBlock->_10);
			J3DShapeInitData* initData = JSUConvertOffsetToPtr<J3DShapeInitData>(m_shapeBlock, m_shapeBlock->_0C);
			switch (initData[initDataIndexToIDMap[id]].m_shapeMtxType) {
			case J3DShapeMtx_Base:
				m_modelData->m_jointTree.m_joints[i]->_16 &= 0x0F;
				break;
			case J3DShapeMtx_BBoard:
				// m_modelData->m_jointTree.m_joints[i]->_16 = (m_modelData->m_jointTree.m_joints[i]->_16
				//                                              & (J3DJoint::J3DJ16_Unknown_01 | J3DJoint::J3DJ16_Unknown_02
				//                                                 | J3DJoint::J3DJ16_Unknown_04 | J3DJoint::J3DJ16_Unknown_08))
				//                                             | J3DJoint::J3DJ16_Unknown_10;
				m_modelData->m_jointTree.m_joints[i]->_16 = m_modelData->m_jointTree.m_joints[i]->_16 & 0x0F | 0x10;
				m_modelData->m_jointSet                   = 1;
				break;
			case J3DShapeMtx_Y_BBoard:
				m_modelData->m_jointTree.m_joints[i]->_16 = m_modelData->m_jointTree.m_joints[i]->_16 & 0x0F | 0x20;
				m_modelData->m_jointSet                   = 1;
				break;
			case J3DShapeMtx_Multi:
				m_modelData->m_jointTree.m_joints[i]->_16 = m_modelData->m_jointTree.m_joints[i]->_16 & 0x0F;
				break;
			default:
				break;
			}
		}
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r29, r3
	li       r30, 0
	b        lbl_80070380

lbl_80070278:
	lwz      r3, 0x28(r4)
	rlwinm   r31, r30, 2, 0xe, 0x1d
	lwzx     r3, r3, r31
	lwz      r4, 0x58(r3)
	cmplwi   r4, 0
	beq      lbl_8007037C
	lwz      r5, 8(r4)
	lwz      r3, 0xc(r29)
	lhz      r27, 8(r5)
	lwz      r4, 0x10(r3)
	bl       "JSUConvertOffsetToPtr<Us>__FPCvUl"
	lwz      r5, 0xc(r29)
	mr       r28, r3
	lwz      r4, 0xc(r5)
	mr       r3, r5
	bl       "JSUConvertOffsetToPtr<16J3DShapeInitData>__FPCvUl"
	rlwinm   r0, r27, 1, 0xf, 0x1e
	lhzx     r0, r28, r0
	mulli    r0, r0, 0x28
	lbzx     r0, r3, r0
	cmpwi    r0, 2
	beq      lbl_80070338
	bge      lbl_800702E4
	cmpwi    r0, 0
	beq      lbl_800702F0
	bge      lbl_8007030C
	b        lbl_8007037C

lbl_800702E4:
	cmpwi    r0, 4
	bge      lbl_8007037C
	b        lbl_80070364

lbl_800702F0:
	lwz      r3, 4(r29)
	lwz      r3, 0x28(r3)
	lwzx     r3, r3, r31
	lbz      r0, 0x16(r3)
	clrlwi   r0, r0, 0x1c
	stb      r0, 0x16(r3)
	b        lbl_8007037C

lbl_8007030C:
	lwz      r3, 4(r29)
	li       r0, 1
	lwz      r3, 0x28(r3)
	lwzx     r4, r3, r31
	lbz      r3, 0x16(r4)
	rlwinm   r3, r3, 0, 0x1c, 0x17
	ori      r3, r3, 0x10
	stb      r3, 0x16(r4)
	lwz      r3, 4(r29)
	sth      r0, 0xe(r3)
	b        lbl_8007037C

lbl_80070338:
	lwz      r3, 4(r29)
	li       r0, 1
	lwz      r3, 0x28(r3)
	lwzx     r4, r3, r31
	lbz      r3, 0x16(r4)
	rlwinm   r3, r3, 0, 0x1c, 0x17
	ori      r3, r3, 0x20
	stb      r3, 0x16(r4)
	lwz      r3, 4(r29)
	sth      r0, 0xe(r3)
	b        lbl_8007037C

lbl_80070364:
	lwz      r3, 4(r29)
	lwz      r3, 0x28(r3)
	lwzx     r3, r3, r31
	lbz      r0, 0x16(r3)
	clrlwi   r0, r0, 0x1c
	stb      r0, 0x16(r3)

lbl_8007037C:
	addi     r30, r30, 1

lbl_80070380:
	lwz      r4, 4(r29)
	clrlwi   r0, r30, 0x10
	lhz      r3, 0x2c(r4)
	cmplw    r0, r3
	blt      lbl_80070278
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800703A8
 * Size:	000168
 */
void J3DModelLoader::readInformation(const J3DModelInfoBlock* block, unsigned long flags)
{
	J3DMtxCalc* calc                = nullptr;
	m_modelData->m_modelLoaderFlags = flags | block->_08;
	m_modelData->m_jointTree.m_08   = m_modelData->m_modelLoaderFlags;
	switch (m_modelData->m_modelLoaderFlags & (J3DMLF_MtxCalc_SoftImage | J3DMLF_MtxCalc_Maya | J3DMLF_03 | J3DMLF_04)) {
	case 0:
		calc = new J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformBasic, J3DMtxCalcJ3DSysInitBasic>();
		break;
	case J3DMLF_MtxCalc_SoftImage:
		calc = new J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformSoftimage, J3DMtxCalcJ3DSysInitSoftimage>();
		break;
	case J3DMLF_MtxCalc_Maya:
		calc = new J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformMaya, J3DMtxCalcJ3DSysInitMaya>();
		break;
	}
	m_modelData->m_jointTree.m_transformCalc = calc;
	m_modelData->m_vertexData._10            = block->_0C;
	m_modelData->m_vertexData._00            = block->_10;
	m_modelData->m_jointTree.m_hierarchy     = JSUConvertOffsetToPtr<J3DModelHierarchy>(block, block->_14);
}

/*
 * --INFO--
 * Address:	80070510
 * Size:	00005C
 * __dt__19J3DMtxCalcNoAnmBaseFv
 */
// J3DMtxCalcNoAnmBase::~J3DMtxCalcNoAnmBase() { }

/*
 * --INFO--
 * Address:	8007056C
 * Size:	000238
 * readVertex__14J3DModelLoaderFPC14J3DVertexBlock
 */
void J3DModelLoader::readVertex(const J3DVertexBlock*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r30, r4
	lwz      r4, 8(r4)
	lwz      r5, 4(r3)
	mr       r3, r30
	addi     r31, r5, 0x88
	bl       "JSUConvertOffsetToPtr<17_GXVtxAttrFmtList>__FPCvPCv"
	stw      r3, 0x14(r31)
	mr       r3, r30
	lwz      r4, 0xc(r30)
	bl       "JSUConvertOffsetToPtr<v>__FPCvPCv"
	stw      r3, 0x18(r31)
	mr       r3, r30
	lwz      r4, 0x10(r30)
	bl       "JSUConvertOffsetToPtr<v>__FPCvPCv"
	stw      r3, 0x1c(r31)
	mr       r3, r30
	lwz      r4, 0x14(r30)
	bl       "JSUConvertOffsetToPtr<v>__FPCvPCv"
	stw      r3, 0x20(r31)
	mr       r29, r30
	mr       r28, r31
	li       r27, 0

lbl_800705D4:
	lwz      r4, 0x18(r29)
	mr       r3, r30
	bl       "JSUConvertOffsetToPtr<v>__FPCvPCv"
	addi     r27, r27, 1
	stw      r3, 0x24(r28)
	cmpwi    r27, 2
	addi     r29, r29, 4
	addi     r28, r28, 4
	blt      lbl_800705D4
	mr       r28, r30
	mr       r29, r31
	li       r27, 0

lbl_80070604:
	lwz      r4, 0x20(r28)
	mr       r3, r30
	bl       "JSUConvertOffsetToPtr<v>__FPCvPCv"
	addi     r27, r27, 1
	stw      r3, 0x2c(r29)
	cmpwi    r27, 8
	addi     r28, r28, 4
	addi     r29, r29, 4
	blt      lbl_80070604
	lwz      r3, 0x14(r31)
	b        lbl_80070644

lbl_80070630:
	cmpwi    r0, 0xa
	bne      lbl_80070640
	lwz      r0, 8(r3)
	b        lbl_80070654

lbl_80070640:
	addi     r3, r3, 0x10

lbl_80070644:
	lwz      r0, 0(r3)
	cmpwi    r0, 0xff
	bne      lbl_80070630
	li       r0, 4

lbl_80070654:
	cmpwi    r0, 4
	li       r4, 6
	bne      lbl_80070664
	li       r4, 0xc

lbl_80070664:
	lwz      r0, 0x20(r31)
	li       r3, 0
	cmplwi   r0, 0
	beq      lbl_8007067C
	mr       r3, r0
	b        lbl_800706A0

lbl_8007067C:
	lwz      r0, 0x24(r31)
	cmplwi   r0, 0
	beq      lbl_80070690
	mr       r3, r0
	b        lbl_800706A0

lbl_80070690:
	lwz      r0, 0x2c(r31)
	cmplwi   r0, 0
	beq      lbl_800706A0
	mr       r3, r0

lbl_800706A0:
	lwz      r0, 0x1c(r31)
	cmplwi   r0, 0
	bne      lbl_800706B8
	li       r0, 0
	stw      r0, 4(r31)
	b        lbl_800706EC

lbl_800706B8:
	cmplwi   r3, 0
	beq      lbl_800706D4
	subf     r0, r0, r3
	divwu    r3, r0, r4
	addi     r0, r3, 1
	stw      r0, 4(r31)
	b        lbl_800706EC

lbl_800706D4:
	lwz      r3, 0x10(r30)
	lwz      r0, 4(r30)
	subf     r0, r3, r0
	divwu    r3, r0, r4
	addi     r0, r3, 1
	stw      r0, 4(r31)

lbl_800706EC:
	lwz      r0, 0x28(r31)
	li       r3, 0
	cmplwi   r0, 0
	beq      lbl_80070704
	mr       r3, r0
	b        lbl_80070714

lbl_80070704:
	lwz      r0, 0x2c(r31)
	cmplwi   r0, 0
	beq      lbl_80070714
	mr       r3, r0

lbl_80070714:
	lwz      r0, 0x24(r31)
	cmplwi   r0, 0
	bne      lbl_8007072C
	li       r0, 0
	stw      r0, 8(r31)
	b        lbl_80070760

lbl_8007072C:
	cmplwi   r3, 0
	beq      lbl_80070748
	subf     r0, r0, r3
	srwi     r3, r0, 2
	addi     r0, r3, 1
	stw      r0, 8(r31)
	b        lbl_80070760

lbl_80070748:
	lwz      r3, 0x18(r30)
	lwz      r0, 4(r30)
	subf     r0, r3, r0
	srwi     r3, r0, 2
	addi     r0, r3, 1
	stw      r0, 8(r31)

lbl_80070760:
	lwz      r0, 0x2c(r31)
	cmplwi   r0, 0
	bne      lbl_80070778
	li       r0, 0
	stw      r0, 0xc(r31)
	b        lbl_80070790

lbl_80070778:
	lwz      r3, 0x20(r30)
	lwz      r0, 4(r30)
	subf     r0, r3, r0
	srwi     r3, r0, 3
	addi     r0, r3, 1
	stw      r0, 0xc(r31)

lbl_80070790:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800707A4
 * Size:	000098
 */
void J3DModelLoader::readEnvelop(const J3DEnvelopeBlock* block)
{
	m_modelData->m_jointTree.m_envelopeCnt     = block->m_count;
	m_modelData->m_jointTree._20               = JSUConvertOffsetToPtr<u8>(block, block->_0C);
	m_modelData->m_jointTree.m_maxBillBoardCnt = JSUConvertOffsetToPtr<u16>(block, block->_10);
	m_modelData->m_jointTree._28               = JSUConvertOffsetToPtr<float>(block, block->_14);
	m_modelData->m_jointTree._2C               = JSUConvertOffsetToPtr<Mtx>(block, block->_18);

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	lhz      r0, 8(r4)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	lwz      r4, 0xc(r4)
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r3, r30
	lwz      r5, 4(r29)
	sth      r0, 0x2e(r5)
	lwz      r31, 4(r29)
	bl       "JSUConvertOffsetToPtr<Uc>__FPCvPCv"
	stw      r3, 0x30(r31)
	mr       r3, r30
	lwz      r4, 0x10(r30)
	lwz      r31, 4(r29)
	bl       "JSUConvertOffsetToPtr<Us>__FPCvPCv"
	stw      r3, 0x34(r31)
	mr       r3, r30
	lwz      r4, 0x14(r30)
	lwz      r31, 4(r29)
	bl       "JSUConvertOffsetToPtr<f>__FPCvPCv"
	stw      r3, 0x38(r31)
	mr       r3, r30
	lwz      r4, 0x18(r30)
	lwz      r31, 4(r29)
	bl       "JSUConvertOffsetToPtr<A3_A4_f>__FPCvPCv"
	stw      r3, 0x3c(r31)
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
 * Address:	8007083C
 * Size:	0000B8
 */
void J3DModelLoader::readDraw(const J3DDrawBlock* block)
{
	void* const* offset                        = &block->_0C;
	m_modelData->m_jointTree.m_mtxData.m_count = block->m_count - m_modelData->m_jointTree.m_envelopeCnt;

	m_modelData->m_jointTree.m_mtxData._04 = JSUConvertOffsetToPtr<u8>(block, *offset++);
	m_modelData->m_jointTree.m_mtxData._08 = JSUConvertOffsetToPtr<u16>(block, *offset++);

	u16 i;
	for (i = 0; m_modelData->m_jointTree.m_mtxData.m_count > i; i++) {
		if (m_modelData->m_jointTree.m_mtxData._04[i] == 1) {
			break;
		}
	}
	m_modelData->m_jointTree.m_mtxData._02 = i;

	m_modelData->m_jointTree._30 = new u16[m_modelData->m_jointTree.m_mtxData.m_count];
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	lhz      r0, 8(r4)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	lwz      r4, 0xc(r4)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r31, 4(r3)
	mr       r3, r30
	lhz      r5, 0x2e(r31)
	subf     r0, r5, r0
	sth      r0, 0x44(r31)
	bl       "JSUConvertOffsetToPtr<Uc>__FPCvPCv"
	stw      r3, 0x48(r31)
	mr       r3, r30
	lwz      r4, 0x10(r30)
	bl       "JSUConvertOffsetToPtr<Us>__FPCvPCv"
	stw      r3, 0x4c(r31)
	li       r5, 0
	lhz      r4, 0x44(r31)
	b        lbl_800708B4

lbl_8007089C:
	lwz      r3, 0x48(r31)
	clrlwi   r0, r5, 0x10
	lbzx     r0, r3, r0
	cmplwi   r0, 1
	beq      lbl_800708C0
	addi     r5, r5, 1

lbl_800708B4:
	clrlwi   r0, r5, 0x10
	cmplw    r0, r4
	blt      lbl_8007089C

lbl_800708C0:
	sth      r5, 0x46(r31)
	lhz      r0, 0x44(r31)
	lwz      r31, 4(r29)
	slwi     r3, r0, 1
	bl       __nwa__FUl
	stw      r3, 0x40(r31)
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
 * Address:	800708F4
 * Size:	0000EC
 */
void J3DModelLoader::readJoint(const J3DJointBlock*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	addi     r3, r1, 8
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	bl       __ct__15J3DJointFactoryFRC13J3DJointBlock
	lwz      r0, 0x14(r29)
	lhz      r4, 8(r29)
	lwz      r3, 4(r31)
	cmplwi   r0, 0
	sth      r4, 0x2c(r3)
	beq      lbl_8007096C
	li       r3, 0x10
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80070960
	lwz      r4, 0x14(r29)
	mr       r3, r29
	bl       "JSUConvertOffsetToPtr<7ResNTAB>__FPCvPCv"
	mr       r4, r3
	mr       r3, r30
	bl       __ct__10JUTNameTabFPC7ResNTAB
	mr       r30, r3

lbl_80070960:
	lwz      r3, 4(r31)
	stw      r30, 0x54(r3)
	b        lbl_80070978

lbl_8007096C:
	lwz      r3, 4(r31)
	li       r0, 0
	stw      r0, 0x54(r3)

lbl_80070978:
	lwz      r30, 4(r31)
	lhz      r0, 0x2c(r30)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x28(r30)
	li       r29, 0
	b        lbl_800709B0

lbl_80070994:
	addi     r3, r1, 8
	clrlwi   r4, r29, 0x10
	bl       create__15J3DJointFactoryFi
	lwz      r4, 0x28(r30)
	rlwinm   r0, r29, 2, 0xe, 0x1d
	addi     r29, r29, 1
	stwx     r3, r4, r0

lbl_800709B0:
	lwz      r30, 4(r31)
	clrlwi   r0, r29, 0x10
	lhz      r3, 0x2c(r30)
	cmplw    r0, r3
	blt      lbl_80070994
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
 * Address:	800709E0
 * Size:	000274
 */
void J3DModelLoader_v26::readMaterial(const J3DMaterialBlock*, unsigned long)
{
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stmw     r27, 0x9c(r1)
	mr       r29, r3
	mr       r27, r4
	mr       r30, r5
	addi     r3, r1, 8
	bl       __ct__18J3DMaterialFactoryFRC16J3DMaterialBlock
	lhz      r0, 8(r27)
	addi     r3, r1, 8
	lwz      r4, 8(r29)
	sth      r0, 4(r4)
	bl       countUniqueMaterials__18J3DMaterialFactoryFv
	lwz      r0, 0x14(r27)
	lwz      r4, 8(r29)
	cmplwi   r0, 0
	sth      r3, 6(r4)
	beq      lbl_80070A64
	li       r3, 0x10
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_80070A58
	lwz      r4, 0x14(r27)
	mr       r3, r27
	bl       "JSUConvertOffsetToPtr<7ResNTAB>__FPCvPCv"
	mr       r4, r3
	mr       r3, r28
	bl       __ct__10JUTNameTabFPC7ResNTAB
	mr       r28, r3

lbl_80070A58:
	lwz      r3, 8(r29)
	stw      r28, 0xc(r3)
	b        lbl_80070A70

lbl_80070A64:
	lwz      r3, 8(r29)
	li       r0, 0
	stw      r0, 0xc(r3)

lbl_80070A70:
	lwz      r3, 8(r29)
	lhz      r0, 4(r3)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	lwz      r4, 8(r29)
	rlwinm.  r31, r30, 0, 0xa, 0xa
	stw      r3, 8(r4)
	beq      lbl_80070AD0
	lwz      r3, 8(r29)
	li       r4, 0x20
	lhz      r28, 6(r3)
	mulli    r3, r28, 0x4c
	addi     r3, r3, 0x10
	bl       __nwa__FUli
	lis      r4, __ct__11J3DMaterialFv@ha
	lis      r5, __dt__11J3DMaterialFv@ha
	addi     r4, r4, __ct__11J3DMaterialFv@l
	mr       r7, r28
	addi     r5, r5, __dt__11J3DMaterialFv@l
	li       r6, 0x4c
	bl       __construct_new_array
	lwz      r4, 8(r29)
	stw      r3, 0x10(r4)
	b        lbl_80070ADC

lbl_80070AD0:
	lwz      r3, 8(r29)
	li       r0, 0
	stw      r0, 0x10(r3)

lbl_80070ADC:
	cmplwi   r31, 0
	beq      lbl_80070B38
	li       r27, 0
	b        lbl_80070B24

lbl_80070AEC:
	clrlwi   r6, r27, 0x10
	lwz      r0, 0x10(r4)
	mulli    r28, r6, 0x4c
	mr       r7, r30
	addi     r3, r1, 8
	li       r5, 0
	add      r4, r0, r28
	bl
create__18J3DMaterialFactoryCFP11J3DMaterialQ218J3DMaterialFactory12MaterialTypeiUl
	lwz      r3, 8(r29)
	addi     r27, r27, 1
	lwz      r0, 0x10(r3)
	add      r3, r0, r28
	srwi     r0, r3, 4
	stw      r0, 0x20(r3)

lbl_80070B24:
	lwz      r4, 8(r29)
	clrlwi   r3, r27, 0x10
	lhz      r0, 6(r4)
	cmplw    r3, r0
	blt      lbl_80070AEC

lbl_80070B38:
	li       r27, 0
	b        lbl_80070B6C

lbl_80070B40:
	mr       r7, r30
	addi     r3, r1, 8
	clrlwi   r6, r27, 0x10
	li       r4, 0
	li       r5, 0
	bl
create__18J3DMaterialFactoryCFP11J3DMaterialQ218J3DMaterialFactory12MaterialTypeiUl
	lwz      r4, 8(r29)
	rlwinm   r0, r27, 2, 0xe, 0x1d
	addi     r27, r27, 1
	lwz      r4, 8(r4)
	stwx     r3, r4, r0

lbl_80070B6C:
	lwz      r3, 8(r29)
	clrlwi   r4, r27, 0x10
	lhz      r0, 4(r3)
	cmplw    r4, r0
	blt      lbl_80070B40
	cmplwi   r31, 0
	beq      lbl_80070BFC
	li       r8, 0
	b        lbl_80070BE4

lbl_80070B90:
	lwz      r3, 0x10(r1)
	rlwinm   r6, r8, 1, 0xf, 0x1e
	rlwinm   r7, r8, 2, 0xe, 0x1d
	lwz      r4, 0x10(r5)
	lhzx     r0, r3, r6
	addi     r8, r8, 1
	lwz      r3, 8(r5)
	mulli    r0, r0, 0x4c
	lwzx     r3, r3, r7
	add      r0, r4, r0
	srwi     r0, r0, 4
	stw      r0, 0x20(r3)
	lwz      r3, 0x10(r1)
	lwz      r4, 8(r29)
	lhzx     r0, r3, r6
	lwz      r3, 8(r4)
	mulli    r0, r0, 0x4c
	lwz      r4, 0x10(r4)
	lwzx     r3, r3, r7
	add      r0, r4, r0
	stw      r0, 0x38(r3)

lbl_80070BE4:
	lwz      r5, 8(r29)
	clrlwi   r3, r8, 0x10
	lhz      r0, 4(r5)
	cmplw    r3, r0
	blt      lbl_80070B90
	b        lbl_80070C40

lbl_80070BFC:
	li       r7, 0
	b        lbl_80070C2C

lbl_80070C04:
	lwz      r4, 0x10(r1)
	rlwinm   r3, r7, 1, 0xf, 0x1e
	lwz      r6, 8(r5)
	rlwinm   r0, r7, 2, 0xe, 0x1d
	lhzx     r4, r4, r3
	addi     r7, r7, 1
	srwi     r5, r6, 4
	lwzx     r3, r6, r0
	add      r0, r5, r4
	stw      r0, 0x20(r3)

lbl_80070C2C:
	lwz      r5, 8(r29)
	clrlwi   r3, r7, 0x10
	lhz      r0, 4(r5)
	cmplw    r3, r0
	blt      lbl_80070C04

lbl_80070C40:
	lmw      r27, 0x9c(r1)
	lwz      r0, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80070C54
 * Size:	000054
 */
// J3DMaterial::J3DMaterial()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	lis      r5, 0x3CF3CF00@ha
// 	lis      r6, __vt__11J3DMaterial@ha
// 	stw      r0, 0x14(r1)
// 	addi     r0, r6, __vt__11J3DMaterial@l
// 	addi     r5, r5, 0x3CF3CF00@l
// 	lis      r4, 0x00F3CF3C@ha
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	stw      r0, 0(r3)
// 	addi     r0, r4, 0x00F3CF3C@l
// 	stw      r5, 0x40(r3)
// 	stw      r0, 0x44(r3)
// 	bl       initialize__11J3DMaterialFv
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r31
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80070CA8
 * Size:	00025C
 */
void J3DModelLoader_v21::readMaterial_v21(const J3DMaterialBlock_v21*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stmw      r27, 0x7C(r1)
	  mr        r29, r3
	  mr        r27, r4
	  mr        r30, r5
	  addi      r3, r1, 0x8
	  bl        0x13D38
	  lhz       r0, 0x8(r27)
	  addi      r3, r1, 0x8
	  lwz       r4, 0x8(r29)
	  sth       r0, 0x4(r4)
	  bl        0x13F04
	  lwz       r0, 0x14(r27)
	  lwz       r4, 0x8(r29)
	  cmplwi    r0, 0
	  sth       r3, 0x6(r4)
	  beq-      .loc_0x84
	  li        r3, 0x10
	  bl        -0x4CE54
	  mr.       r28, r3
	  beq-      .loc_0x78
	  lwz       r4, 0x14(r27)
	  mr        r3, r27
	  bl        -0x278A0
	  mr        r4, r3
	  mr        r3, r28
	  bl        -0x4200C
	  mr        r28, r3

	.loc_0x78:
	  lwz       r3, 0x8(r29)
	  stw       r28, 0xC(r3)
	  b         .loc_0x90

	.loc_0x84:
	  lwz       r3, 0x8(r29)
	  li        r0, 0
	  stw       r0, 0xC(r3)

	.loc_0x90:
	  lwz       r3, 0x8(r29)
	  lhz       r0, 0x4(r3)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x4CD98
	  lwz       r4, 0x8(r29)
	  rlwinm.   r31,r30,0,10,10
	  stw       r3, 0x8(r4)
	  beq-      .loc_0xF0
	  lwz       r3, 0x8(r29)
	  li        r4, 0x20
	  lhz       r28, 0x6(r3)
	  mulli     r3, r28, 0x4C
	  addi      r3, r3, 0x10
	  bl        -0x4CD74
	  lis       r4, 0x8007
	  lis       r5, 0x8007
	  addi      r4, r4, 0xC54
	  mr        r7, r28
	  subi      r5, r5, 0x256C
	  li        r6, 0x4C
	  bl        0x50C68
	  lwz       r4, 0x8(r29)
	  stw       r3, 0x10(r4)
	  b         .loc_0xFC

	.loc_0xF0:
	  lwz       r3, 0x8(r29)
	  li        r0, 0
	  stw       r0, 0x10(r3)

	.loc_0xFC:
	  cmplwi    r31, 0
	  beq-      .loc_0x154
	  li        r27, 0
	  b         .loc_0x140

	.loc_0x10C:
	  rlwinm    r5,r27,0,16,31
	  lwz       r0, 0x10(r4)
	  mulli     r28, r5, 0x4C
	  mr        r6, r30
	  addi      r3, r1, 0x8
	  add       r4, r0, r28
	  bl        0x13E60
	  lwz       r3, 0x8(r29)
	  addi      r27, r27, 0x1
	  lwz       r0, 0x10(r3)
	  add       r3, r0, r28
	  rlwinm    r0,r3,28,4,31
	  stw       r0, 0x20(r3)

	.loc_0x140:
	  lwz       r4, 0x8(r29)
	  rlwinm    r3,r27,0,16,31
	  lhz       r0, 0x6(r4)
	  cmplw     r3, r0
	  blt+      .loc_0x10C

	.loc_0x154:
	  li        r27, 0
	  b         .loc_0x184

	.loc_0x15C:
	  mr        r6, r30
	  addi      r3, r1, 0x8
	  rlwinm    r5,r27,0,16,31
	  li        r4, 0
	  bl        0x13E18
	  lwz       r4, 0x8(r29)
	  rlwinm    r0,r27,2,14,29
	  addi      r27, r27, 0x1
	  lwz       r4, 0x8(r4)
	  stwx      r3, r4, r0

	.loc_0x184:
	  lwz       r3, 0x8(r29)
	  rlwinm    r4,r27,0,16,31
	  lhz       r0, 0x4(r3)
	  cmplw     r4, r0
	  blt+      .loc_0x15C
	  cmplwi    r31, 0
	  beq-      .loc_0x214
	  li        r8, 0
	  b         .loc_0x1FC

	.loc_0x1A8:
	  lwz       r3, 0x10(r1)
	  rlwinm    r6,r8,1,15,30
	  rlwinm    r7,r8,2,14,29
	  lwz       r4, 0x10(r5)
	  lhzx      r0, r3, r6
	  addi      r8, r8, 0x1
	  lwz       r3, 0x8(r5)
	  mulli     r0, r0, 0x4C
	  lwzx      r3, r3, r7
	  add       r0, r4, r0
	  rlwinm    r0,r0,28,4,31
	  stw       r0, 0x20(r3)
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0x8(r29)
	  lhzx      r0, r3, r6
	  lwz       r3, 0x8(r4)
	  mulli     r0, r0, 0x4C
	  lwz       r4, 0x10(r4)
	  lwzx      r3, r3, r7
	  add       r0, r4, r0
	  stw       r0, 0x38(r3)

	.loc_0x1FC:
	  lwz       r5, 0x8(r29)
	  rlwinm    r3,r8,0,16,31
	  lhz       r0, 0x4(r5)
	  cmplw     r3, r0
	  blt+      .loc_0x1A8
	  b         .loc_0x248

	.loc_0x214:
	  li        r6, 0
	  lis       r4, 0xC000
	  b         .loc_0x234

	.loc_0x220:
	  lwz       r3, 0x8(r5)
	  rlwinm    r0,r6,2,14,29
	  addi      r6, r6, 0x1
	  lwzx      r3, r3, r0
	  stw       r4, 0x20(r3)

	.loc_0x234:
	  lwz       r5, 0x8(r29)
	  rlwinm    r3,r6,0,16,31
	  lhz       r0, 0x4(r5)
	  cmplw     r3, r0
	  blt+      .loc_0x220

	.loc_0x248:
	  lmw       r27, 0x7C(r1)
	  lwz       r0, 0x94(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80070F04
 * Size:	00011C
 */
void J3DModelLoader::readShape(const J3DShapeBlock*, unsigned long)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r27, 0x2c(r1)
	mr       r28, r4
	mr       r27, r3
	mr       r30, r5
	stw      r28, 0xc(r3)
	addi     r3, r1, 8
	lwz      r31, 4(r27)
	bl       __ct__15J3DShapeFactoryFRC13J3DShapeBlock
	lwz      r0, 0x14(r28)
	lhz      r3, 8(r28)
	cmplwi   r0, 0
	sth      r3, 0x7c(r31)
	beq      lbl_80070F78
	li       r3, 0x10
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_80070F70
	lwz      r4, 0x14(r28)
	mr       r3, r28
	bl       "JSUConvertOffsetToPtr<7ResNTAB>__FPCvPCv"
	mr       r4, r3
	mr       r3, r29
	bl       __ct__10JUTNameTabFPC7ResNTAB
	mr       r29, r3

lbl_80070F70:
	stw      r29, 0x84(r31)
	b        lbl_80070F80

lbl_80070F78:
	li       r0, 0
	stw      r0, 0x84(r31)

lbl_80070F80:
	lhz      r0, 0x7c(r31)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x80(r31)
	addi     r3, r1, 8
	lhz      r4, 0x7c(r31)
	bl       allocVcdVatCmdBuffer__15J3DShapeFactoryFUl
	lwz      r3, 4(r27)
	li       r6, 0
	lwz      r29, 0x14(r3)
	b        lbl_80071000

lbl_80070FAC:
	cmplwi   r0, 0x12
	bne      lbl_80070FFC
	lhz      r4, 2(r29)
	mr       r5, r30
	addi     r3, r1, 8
	bl       create__15J3DShapeFactoryFiUlP14_GXVtxDescList
	lhz      r0, 2(r29)
	lwz      r4, 0x80(r31)
	slwi     r0, r0, 2
	stwx     r3, r4, r0
	lhz      r0, 2(r29)
	lwz      r3, 0xc(r1)
	slwi     r0, r0, 1
	lwz      r4, 8(r1)
	lhzx     r0, r3, r0
	lwz      r5, 0x10(r1)
	mulli    r3, r0, 0x28
	addi     r0, r3, 4
	lhzx     r0, r4, r0
	add      r6, r5, r0

lbl_80070FFC:
	addi     r29, r29, 4

lbl_80071000:
	lhz      r0, 0(r29)
	cmplwi   r0, 0
	bne      lbl_80070FAC
	lmw      r27, 0x2c(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80071020
 * Size:	0000C4
 */
void J3DModelLoader::readTexture(const J3DTextureBlock* block)
{
	u16 count                = block->_08;
	ResTIMG* resTextureImage = JSUConvertOffsetToPtr<ResTIMG>(block, block->_0C);
	// TODO: I wonder if the rest of this is an inline from somewhere...
	if (block->_10) {
		m_materialTable->_18 = new JUTNameTab(JSUConvertOffsetToPtr<ResNTAB>(block, block->_10));
	} else {
		m_materialTable->_18 = nullptr;
	}
	m_materialTable->m_texture = new J3DTexture(count, resTextureImage);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r28, r4
	lhz      r29, 8(r4)
	mr       r27, r3
	lwz      r4, 0xc(r4)
	mr       r3, r28
	bl       "JSUConvertOffsetToPtr<7ResTIMG>__FPCvPCv"
	lwz      r0, 0x10(r28)
	mr       r31, r3
	cmplwi   r0, 0
	beq      lbl_80071090
	li       r3, 0x10
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80071084
	lwz      r4, 0x10(r28)
	mr       r3, r28
	bl       "JSUConvertOffsetToPtr<7ResNTAB>__FPCvPCv"
	mr       r4, r3
	mr       r3, r30
	bl       __ct__10JUTNameTabFPC7ResNTAB
	mr       r30, r3

lbl_80071084:
	lwz      r3, 8(r27)
	stw      r30, 0x18(r3)
	b        lbl_8007109C

lbl_80071090:
	lwz      r3, 8(r27)
	li       r0, 0
	stw      r0, 0x18(r3)

lbl_8007109C:
	li       r3, 0xc
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_800710C8
	lis      r4, __vt__10J3DTexture@ha
	li       r0, 0
	addi     r4, r4, __vt__10J3DTexture@l
	stw      r4, 8(r3)
	sth      r29, 0(r3)
	sth      r0, 2(r3)
	stw      r31, 4(r3)

lbl_800710C8:
	lwz      r4, 8(r27)
	stw      r3, 0x14(r4)
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800710E4
 * Size:	00014C
 * readMaterialTable__18J3DModelLoader_v26FPC16J3DMaterialBlockUl
 */
void J3DModelLoader_v26::readMaterialTable(const J3DMaterialBlock* block, u32 flags)
{
	J3DMaterialFactory factory(*block);
	m_materialTable->m_count1 = block->m_count;
	// TODO: I wonder if the rest of this is an inline from somewhere...
	if (block->_14) {
		m_materialTable->_0C = new JUTNameTab(JSUConvertOffsetToPtr<ResNTAB>(block, block->_14));
	} else {
		m_materialTable->_0C = nullptr;
	}
	m_materialTable->m_materials1 = new J3DMaterial*[m_materialTable->m_count1];
	for (u16 i = 0; i < m_materialTable->m_count1; i++) {
		m_materialTable->m_materials1[i] = factory.create(nullptr, J3DMaterialFactory::NORMAL, i, flags);
	}
	for (u16 i = 0; i < m_materialTable->m_count1; i++) {
		J3DMaterial** materials = m_materialTable->m_materials1;
		materials[i]->_20       = (u32)(materials + (u32)factory._08[i]);
	}

	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stw       r31, 0x9C(r1)
	  mr        r31, r5
	  stw       r30, 0x98(r1)
	  mr        r30, r3
	  addi      r3, r1, 0x8
	  stw       r29, 0x94(r1)
	  stw       r28, 0x90(r1)
	  mr        r28, r4
	  bl        -0x4D6C
	  lwz       r0, 0x14(r28)
	  lhz       r4, 0x8(r28)
	  lwz       r3, 0x8(r30)
	  cmplwi    r0, 0
	  sth       r4, 0x4(r3)
	  beq-      .loc_0x80
	  li        r3, 0x10
	  bl        -0x4D28C
	  mr.       r29, r3
	  beq-      .loc_0x74
	  lwz       r4, 0x14(r28)
	  mr        r3, r28
	  bl        -0x27CD8
	  mr        r4, r3
	  mr        r3, r29
	  bl        -0x42444
	  mr        r29, r3

	.loc_0x74:
	  lwz       r3, 0x8(r30)
	  stw       r29, 0xC(r3)
	  b         .loc_0x8C

	.loc_0x80:
	  lwz       r3, 0x8(r30)
	  li        r0, 0
	  stw       r0, 0xC(r3)

	.loc_0x8C:
	  lwz       r3, 0x8(r30)
	  lhz       r0, 0x4(r3)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x4D1D0
	  lwz       r4, 0x8(r30)
	  li        r29, 0
	  stw       r3, 0x8(r4)
	  b         .loc_0xD8

	.loc_0xAC:
	  mr        r7, r31
	  addi      r3, r1, 0x8
	  rlwinm    r6,r29,0,16,31
	  li        r4, 0
	  li        r5, 0
	  bl        -0x4AE8
	  lwz       r4, 0x8(r30)
	  rlwinm    r0,r29,2,14,29
	  addi      r29, r29, 0x1
	  lwz       r4, 0x8(r4)
	  stwx      r3, r4, r0

	.loc_0xD8:
	  lwz       r3, 0x8(r30)
	  rlwinm    r4,r29,0,16,31
	  lhz       r0, 0x4(r3)
	  cmplw     r4, r0
	  blt+      .loc_0xAC
	  li        r6, 0
	  b         .loc_0x118

	.loc_0xF4:
	  lwz       r4, 0x10(r1)
	  rlwinm    r3,r6,1,15,30
	  lwz       r5, 0x8(r5)
	  rlwinm    r0,r6,2,14,29
	  lhzx      r4, r4, r3
	  addi      r6, r6, 0x1
	  lwzx      r3, r5, r0
	  add       r0, r5, r4
	  stw       r0, 0x20(r3)

	.loc_0x118:
	  lwz       r5, 0x8(r30)
	  rlwinm    r3,r6,0,16,31
	  lhz       r0, 0x4(r5)
	  cmplw     r3, r0
	  blt+      .loc_0xF4
	  lwz       r0, 0xA4(r1)
	  lwz       r31, 0x9C(r1)
	  lwz       r30, 0x98(r1)
	  lwz       r29, 0x94(r1)
	  lwz       r28, 0x90(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80071230
 * Size:	00014C
 */
void J3DModelLoader_v21::readMaterialTable_v21(const J3DMaterialBlock_v21*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stw       r31, 0x8C(r1)
	  mr        r31, r5
	  stw       r30, 0x88(r1)
	  mr        r30, r3
	  addi      r3, r1, 0x8
	  stw       r29, 0x84(r1)
	  stw       r28, 0x80(r1)
	  mr        r28, r4
	  bl        0x137A4
	  lwz       r0, 0x14(r28)
	  lhz       r4, 0x8(r28)
	  lwz       r3, 0x8(r30)
	  cmplwi    r0, 0
	  sth       r4, 0x4(r3)
	  beq-      .loc_0x80
	  li        r3, 0x10
	  bl        -0x4D3D8
	  mr.       r29, r3
	  beq-      .loc_0x74
	  lwz       r4, 0x14(r28)
	  mr        r3, r28
	  bl        -0x27E24
	  mr        r4, r3
	  mr        r3, r29
	  bl        -0x42590
	  mr        r29, r3

	.loc_0x74:
	  lwz       r3, 0x8(r30)
	  stw       r29, 0xC(r3)
	  b         .loc_0x8C

	.loc_0x80:
	  lwz       r3, 0x8(r30)
	  li        r0, 0
	  stw       r0, 0xC(r3)

	.loc_0x8C:
	  lwz       r3, 0x8(r30)
	  lhz       r0, 0x4(r3)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x4D31C
	  lwz       r4, 0x8(r30)
	  li        r29, 0
	  stw       r3, 0x8(r4)
	  b         .loc_0xD4

	.loc_0xAC:
	  mr        r6, r31
	  addi      r3, r1, 0x8
	  rlwinm    r5,r29,0,16,31
	  li        r4, 0
	  bl        0x13940
	  lwz       r4, 0x8(r30)
	  rlwinm    r0,r29,2,14,29
	  addi      r29, r29, 0x1
	  lwz       r4, 0x8(r4)
	  stwx      r3, r4, r0

	.loc_0xD4:
	  lwz       r3, 0x8(r30)
	  rlwinm    r4,r29,0,16,31
	  lhz       r0, 0x4(r3)
	  cmplw     r4, r0
	  blt+      .loc_0xAC
	  li        r7, 0
	  b         .loc_0x118

	.loc_0xF0:
	  lwz       r4, 0x10(r1)
	  rlwinm    r3,r7,1,15,30
	  lwz       r6, 0x8(r5)
	  rlwinm    r0,r7,2,14,29
	  lhzx      r4, r4, r3
	  addi      r7, r7, 0x1
	  rlwinm    r5,r6,28,4,31
	  lwzx      r3, r6, r0
	  add       r0, r5, r4
	  stw       r0, 0x20(r3)

	.loc_0x118:
	  lwz       r5, 0x8(r30)
	  rlwinm    r3,r7,0,16,31
	  lhz       r0, 0x4(r5)
	  cmplw     r3, r0
	  blt+      .loc_0xF0
	  lwz       r0, 0x94(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r30, 0x88(r1)
	  lwz       r29, 0x84(r1)
	  lwz       r28, 0x80(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007137C
 * Size:	0000C4
 */
void J3DModelLoader::readTextureTable(const J3DTextureBlock* block)
{
	// TODO: seems identical to readTexture...
	u16 count                = block->_08;
	ResTIMG* resTextureImage = JSUConvertOffsetToPtr<ResTIMG>(block, block->_0C);
	if (block->_10) {
		m_materialTable->_18 = new JUTNameTab(JSUConvertOffsetToPtr<ResNTAB>(block, block->_10));
	} else {
		m_materialTable->_18 = nullptr;
	}
	m_materialTable->m_texture = new J3DTexture(count, resTextureImage);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r28, r4
	lhz      r29, 8(r4)
	mr       r27, r3
	lwz      r4, 0xc(r4)
	mr       r3, r28
	bl       "JSUConvertOffsetToPtr<7ResTIMG>__FPCvPCv"
	lwz      r0, 0x10(r28)
	mr       r31, r3
	cmplwi   r0, 0
	beq      lbl_800713EC
	li       r3, 0x10
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_800713E0
	lwz      r4, 0x10(r28)
	mr       r3, r28
	bl       "JSUConvertOffsetToPtr<7ResNTAB>__FPCvPCv"
	mr       r4, r3
	mr       r3, r30
	bl       __ct__10JUTNameTabFPC7ResNTAB
	mr       r30, r3

lbl_800713E0:
	lwz      r3, 8(r27)
	stw      r30, 0x18(r3)
	b        lbl_800713F8

lbl_800713EC:
	lwz      r3, 8(r27)
	li       r0, 0
	stw      r0, 0x18(r3)

lbl_800713F8:
	li       r3, 0xc
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80071424
	lis      r4, __vt__10J3DTexture@ha
	li       r0, 0
	addi     r4, r4, __vt__10J3DTexture@l
	stw      r4, 8(r3)
	sth      r29, 0(r3)
	sth      r0, 2(r3)
	stw      r31, 4(r3)

lbl_80071424:
	lwz      r4, 8(r27)
	stw      r3, 0x14(r4)
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80071440
 * Size:	000150
 */
void J3DModelLoader::readPatchedMaterial(const J3DMaterialBlock*, unsigned long)
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stw      r31, 0x9c(r1)
	stw      r30, 0x98(r1)
	mr       r30, r5
	stw      r29, 0x94(r1)
	mr       r29, r3
	addi     r3, r1, 8
	stw      r28, 0x90(r1)
	mr       r28, r4
	bl       __ct__18J3DMaterialFactoryFRC16J3DMaterialBlock
	lhz      r0, 8(r28)
	addi     r3, r1, 8
	lwz      r4, 8(r29)
	sth      r0, 4(r4)
	bl       countUniqueMaterials__18J3DMaterialFactoryFv
	lwz      r0, 0x14(r28)
	lwz      r4, 8(r29)
	cmplwi   r0, 0
	sth      r3, 6(r4)
	beq      lbl_800714D0
	li       r3, 0x10
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_800714C4
	lwz      r4, 0x14(r28)
	mr       r3, r28
	bl       "JSUConvertOffsetToPtr<7ResNTAB>__FPCvPCv"
	mr       r4, r3
	mr       r3, r31
	bl       __ct__10JUTNameTabFPC7ResNTAB
	mr       r31, r3

lbl_800714C4:
	lwz      r3, 8(r29)
	stw      r31, 0xc(r3)
	b        lbl_800714DC

lbl_800714D0:
	lwz      r3, 8(r29)
	li       r0, 0
	stw      r0, 0xc(r3)

lbl_800714DC:
	lwz      r3, 8(r29)
	lhz      r0, 4(r3)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	lwz      r4, 8(r29)
	li       r0, 0
	li       r31, 0
	stw      r3, 8(r4)
	lwz      r3, 8(r29)
	stw      r0, 0x10(r3)
	b        lbl_8007155C

lbl_80071508:
	clrlwi   r28, r31, 0x10
	mr       r7, r30
	mr       r6, r28
	addi     r3, r1, 8
	li       r4, 0
	li       r5, 2
	bl
create__18J3DMaterialFactoryCFP11J3DMaterialQ218J3DMaterialFactory12MaterialTypeiUl
	lwz      r4, 8(r29)
	rlwinm   r6, r31, 2, 0xe, 0x1d
	slwi     r0, r28, 1
	addi     r31, r31, 1
	lwz      r4, 8(r4)
	stwx     r3, r4, r6
	lwz      r4, 8(r29)
	lwz      r3, 0x10(r1)
	lwz      r5, 8(r4)
	lhzx     r0, r3, r0
	srwi     r4, r5, 4
	lwzx     r3, r5, r6
	add      r0, r4, r0
	stw      r0, 0x20(r3)

lbl_8007155C:
	lwz      r3, 8(r29)
	clrlwi   r4, r31, 0x10
	lhz      r0, 4(r3)
	cmplw    r4, r0
	blt      lbl_80071508
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x9c(r1)
	lwz      r30, 0x98(r1)
	lwz      r29, 0x94(r1)
	lwz      r28, 0x90(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80071590
 * Size:	0001BC
 */
void J3DModelLoader::readMaterialDL(const J3DMaterialDLBlock*, unsigned long)
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stw      r31, 0x9c(r1)
	mr       r31, r5
	stw      r30, 0x98(r1)
	mr       r30, r3
	addi     r3, r1, 8
	stw      r29, 0x94(r1)
	stw      r28, 0x90(r1)
	mr       r28, r4
	bl       __ct__18J3DMaterialFactoryFRC18J3DMaterialDLBlock
	lwz      r4, 8(r30)
	lhz      r0, 4(r4)
	cmplwi   r0, 0
	bne      lbl_800716E0
	li       r3, 1
	lwz      r0, 0x20(r28)
	sth      r3, 0x1c(r4)
	lhz      r4, 8(r28)
	cmplwi   r0, 0
	lwz      r3, 8(r30)
	sth      r4, 4(r3)
	lwz      r3, 8(r30)
	sth      r4, 6(r3)
	beq      lbl_80071630
	li       r3, 0x10
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_80071624
	lwz      r4, 0x20(r28)
	mr       r3, r28
	bl       "JSUConvertOffsetToPtr<7ResNTAB>__FPCvPCv"
	mr       r4, r3
	mr       r3, r29
	bl       __ct__10JUTNameTabFPC7ResNTAB
	mr       r29, r3

lbl_80071624:
	lwz      r3, 8(r30)
	stw      r29, 0xc(r3)
	b        lbl_8007163C

lbl_80071630:
	lwz      r3, 8(r30)
	li       r0, 0
	stw      r0, 0xc(r3)

lbl_8007163C:
	lwz      r3, 8(r30)
	lhz      r0, 4(r3)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	lwz      r4, 8(r30)
	li       r0, 0
	li       r29, 0
	stw      r3, 8(r4)
	lwz      r3, 8(r30)
	stw      r0, 0x10(r3)
	b        lbl_80071694

lbl_80071668:
	mr       r7, r31
	addi     r3, r1, 8
	clrlwi   r6, r29, 0x10
	li       r4, 0
	li       r5, 1
	bl
create__18J3DMaterialFactoryCFP11J3DMaterialQ218J3DMaterialFactory12MaterialTypeiUl
	lwz      r4, 8(r30)
	rlwinm   r0, r29, 2, 0xe, 0x1d
	addi     r29, r29, 1
	lwz      r4, 8(r4)
	stwx     r3, r4, r0

lbl_80071694:
	lwz      r3, 8(r30)
	clrlwi   r4, r29, 0x10
	lhz      r0, 4(r3)
	cmplw    r4, r0
	blt      lbl_80071668
	li       r6, 0
	lis      r4, 0xc000
	b        lbl_800716C8

lbl_800716B4:
	lwz      r3, 8(r5)
	rlwinm   r0, r6, 2, 0xe, 0x1d
	addi     r6, r6, 1
	lwzx     r3, r3, r0
	stw      r4, 0x20(r3)

lbl_800716C8:
	lwz      r5, 8(r30)
	clrlwi   r3, r6, 0x10
	lhz      r0, 4(r5)
	cmplw    r3, r0
	blt      lbl_800716B4
	b        lbl_8007172C

lbl_800716E0:
	li       r28, 0
	b        lbl_80071718

lbl_800716E8:
	lwz      r3, 8(r4)
	rlwinm   r29, r28, 2, 0xe, 0x1d
	clrlwi   r6, r28, 0x10
	mr       r7, r31
	lwzx     r4, r3, r29
	addi     r3, r1, 8
	li       r5, 1
	bl
create__18J3DMaterialFactoryCFP11J3DMaterialQ218J3DMaterialFactory12MaterialTypeiUl
	lwz      r4, 8(r30)
	addi     r28, r28, 1
	lwz      r4, 8(r4)
	stwx     r3, r4, r29

lbl_80071718:
	lwz      r4, 8(r30)
	clrlwi   r3, r28, 0x10
	lhz      r0, 4(r4)
	cmplw    r3, r0
	blt      lbl_800716E8

lbl_8007172C:
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x9c(r1)
	lwz      r30, 0x98(r1)
	lwz      r29, 0x94(r1)
	lwz      r28, 0x90(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8007174C
 * Size:	00007C
 */
void J3DModelLoader::modifyMaterial(u32 flags)
{
	if ((flags & 0x2000) != 0) {
		J3DMaterialFactory factory(*m_materialBlock);
		for (u16 i = 0; i < m_materialTable->m_count1; i++) {
			factory.modifyPatchedCurrentMtx(m_materialTable->m_materials1[i], i);
		}
	}
}

/*
 * --INFO--
 * Address:	800717C8
 * Size:	000008
 */
u32 J3DModelLoader::calcSizeMaterial(const J3DMaterialBlock*, unsigned long) { return 0x0; }

/*
 * --INFO--
 * Address:	800717D0
 * Size:	000008
 */
u32 J3DModelLoader::calcSizeMaterialTable(const J3DMaterialBlock*, unsigned long) { return 0x0; }

/*
 * --INFO--
 * Address:	800717D8
 * Size:	000048
 */
J3DTexture::~J3DTexture()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80071808
	lis      r5, __vt__10J3DTexture@ha
	extsh.   r0, r4
	addi     r0, r5, __vt__10J3DTexture@l
	stw      r0, 8(r31)
	ble      lbl_80071808
	bl       __dl__FPv

lbl_80071808:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

// /*
//  * --INFO--
//  * Address:	80071820
//  * Size:	00006C
//  */
// void J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformMaya, J3DMtxCalcJ3DSysInitMaya>::~J3DMtxCalcNoAnm()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  stw       r31, 0xC(r1)
// 	  mr.       r31, r3
// 	  beq-      .loc_0x54
// 	  lis       r3, 0x804A
// 	  addi      r0, r3, 0x1EB8
// 	  stw       r0, 0x0(r31)
// 	  beq-      .loc_0x44
// 	  lis       r3, 0x804A
// 	  addi      r0, r3, 0x1F3C
// 	  stw       r0, 0x0(r31)
// 	  beq-      .loc_0x44
// 	  lis       r3, 0x804A
// 	  subi      r0, r3, 0x4C4
// 	  stw       r0, 0x0(r31)

// 	.loc_0x44:
// 	  extsh.    r0, r4
// 	  ble-      .loc_0x54
// 	  mr        r3, r31
// 	  bl        -0x4D7BC

// 	.loc_0x54:
// 	  lwz       r0, 0x14(r1)
// 	  mr        r3, r31
// 	  lwz       r31, 0xC(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8007188C
//  * Size:	000028
//  */
// void J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformMaya, J3DMtxCalcJ3DSysInitMaya>::init(const Vec&, const float (&)[3][4])
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  mr        r3, r4
// 	  mr        r4, r5
// 	  stw       r0, 0x14(r1)
// 	  bl        -0x6608
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	800718B4
//  * Size:	000028
//  */
// void J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformMaya, J3DMtxCalcJ3DSysInitMaya>::calc()
// {
// 	/*
// 	.loc_0x0:
// 	  subi      r3, r3, 0x10
// 	  b         -0x3D64
// 	  subi      r3, r3, 0x30
// 	  b         -0x3D6C
// 	  subi      r3, r3, 0x10
// 	  b         -0x36F0
// 	  subi      r3, r3, 0x30
// 	  b         -0x36F8
// 	  subi      r3, r3, 0x10
// 	  b         -0x3510
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	800718DC
//  * Size:	00006C
//  */
// void J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformSoftimage, J3DMtxCalcJ3DSysInitSoftimage>::~J3DMtxCalcNoAnm()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  stw       r31, 0xC(r1)
// 	  mr.       r31, r3
// 	  beq-      .loc_0x54
// 	  lis       r3, 0x804A
// 	  addi      r0, r3, 0x1EE4
// 	  stw       r0, 0x0(r31)
// 	  beq-      .loc_0x44
// 	  lis       r3, 0x804A
// 	  addi      r0, r3, 0x1F3C
// 	  stw       r0, 0x0(r31)
// 	  beq-      .loc_0x44
// 	  lis       r3, 0x804A
// 	  subi      r0, r3, 0x4C4
// 	  stw       r0, 0x0(r31)

// 	.loc_0x44:
// 	  extsh.    r0, r4
// 	  ble-      .loc_0x54
// 	  mr        r3, r31
// 	  bl        -0x4D878

// 	.loc_0x54:
// 	  lwz       r0, 0x14(r1)
// 	  mr        r3, r31
// 	  lwz       r31, 0xC(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80071948
//  * Size:	00004C
//  */
// void J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformSoftimage, J3DMtxCalcJ3DSysInitSoftimage>::init(const Vec&, const float (&)[3][4])
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  lis       r3, 0x8051
// 	  lfs       f2, 0x0(r4)
// 	  stw       r0, 0x14(r1)
// 	  subi      r6, r3, 0xBFC
// 	  lfs       f1, 0x4(r4)
// 	  lis       r3, 0x8051
// 	  lfs       f0, 0x8(r4)
// 	  subi      r4, r3, 0xC2C
// 	  stfs      f2, 0x0(r6)
// 	  mr        r3, r5
// 	  stfs      f1, 0x4(r6)
// 	  stfs      f0, 0x8(r6)
// 	  bl        0x7894C
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80071994
//  * Size:	000028
//  */
// void J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformSoftimage, J3DMtxCalcJ3DSysInitSoftimage>::calc()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  lwz       r3, -0x7674(r13)
// 	  addi      r3, r3, 0x18
// 	  bl        -0x6560
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	800719BC
//  * Size:	00006C
//  */
// void J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformBasic, J3DMtxCalcJ3DSysInitBasic>::~J3DMtxCalcNoAnm()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  stw       r31, 0xC(r1)
// 	  mr.       r31, r3
// 	  beq-      .loc_0x54
// 	  lis       r3, 0x804A
// 	  addi      r0, r3, 0x1F10
// 	  stw       r0, 0x0(r31)
// 	  beq-      .loc_0x44
// 	  lis       r3, 0x804A
// 	  addi      r0, r3, 0x1F3C
// 	  stw       r0, 0x0(r31)
// 	  beq-      .loc_0x44
// 	  lis       r3, 0x804A
// 	  subi      r0, r3, 0x4C4
// 	  stw       r0, 0x0(r31)

// 	.loc_0x44:
// 	  extsh.    r0, r4
// 	  ble-      .loc_0x54
// 	  mr        r3, r31
// 	  bl        -0x4D958

// 	.loc_0x54:
// 	  lwz       r0, 0x14(r1)
// 	  mr        r3, r31
// 	  lwz       r31, 0xC(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80071A28
//  * Size:	000028
//  */
// void J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformBasic, J3DMtxCalcJ3DSysInitBasic>::init(const Vec&, const float (&)[3][4])
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  mr        r3, r4
// 	  mr        r4, r5
// 	  stw       r0, 0x14(r1)
// 	  bl        -0x683C
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80071A50
//  * Size:	000028
//  */
// void J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformBasic, J3DMtxCalcJ3DSysInitBasic>::calc()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  lwz       r3, -0x7674(r13)
// 	  addi      r3, r3, 0x18
// 	  bl        -0x6734
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80071A78
//  * Size:	000018
//  */
// void JSUConvertOffsetToPtr<ResTIMG>(const void*, const void*)
// {
// 	/*
// 	cmplwi   r4, 0
// 	bne      lbl_80071A88
// 	li       r3, 0
// 	blr

// lbl_80071A88:
// 	add      r3, r3, r4
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80071A90
//  * Size:	000018
//  */
// void JSUConvertOffsetToPtr<float[3][4]>(const void*, const void*)
// {
// 	/*
// 	cmplwi   r4, 0
// 	bne      lbl_80071AA0
// 	li       r3, 0
// 	blr

// lbl_80071AA0:
// 	add      r3, r3, r4
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80071AA8
//  * Size:	000018
//  */
// void JSUConvertOffsetToPtr<void>(const void*, const void*)
// {
// 	/*
// 	cmplwi   r4, 0
// 	bne      lbl_80071AB8
// 	li       r3, 0
// 	blr

// lbl_80071AB8:
// 	add      r3, r3, r4
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80071AC0
//  * Size:	000018
//  */
// void JSUConvertOffsetToPtr<_GXVtxAttrFmtList>(const void*, const void*)
// {
// 	/*
// 	cmplwi   r4, 0
// 	bne      lbl_80071AD0
// 	li       r3, 0
// 	blr

// lbl_80071AD0:
// 	add      r3, r3, r4
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80071AD8
//  * Size:	000018
//  */
// void JSUConvertOffsetToPtr<J3DModelHierarchy>(const void*, const void*)
// {
// 	/*
// 	cmplwi   r4, 0
// 	bne      lbl_80071AE8
// 	li       r3, 0
// 	blr

// lbl_80071AE8:
// 	add      r3, r3, r4
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80071AF0
//  * Size:	000018
//  */
// void JSUConvertOffsetToPtr<J3DShapeInitData>(const void*, unsigned long)
// {
// 	/*
// 	cmplwi   r4, 0
// 	bne      lbl_80071B00
// 	li       r3, 0
// 	blr

// lbl_80071B00:
// 	add      r3, r3, r4
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80071B08
//  * Size:	000018
//  */
// void JSUConvertOffsetToPtr<unsigned short>(const void*, unsigned long)
// {
// 	/*
// 	cmplwi   r4, 0
// 	bne      lbl_80071B18
// 	li       r3, 0
// 	blr

// lbl_80071B18:
// 	add      r3, r3, r4
// 	blr
// 	*/
// }
