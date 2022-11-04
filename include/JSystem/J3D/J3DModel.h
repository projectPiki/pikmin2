#ifndef _JSYSTEM_J3D_J3DMODEL_H
#define _JSYSTEM_J3D_J3DMODEL_H

#include "Dolphin/mtx.h"
#include "JSystem/J3D/J3DVertexData.h"
#include "types.h"
#include "JSystem/J3D/J3DShape.h"
#include "JSystem/J3D/J3DMaterial.h"
#include "JSystem/J3D/J3DJointTree.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/J3D/J3DVertexBuffer.h"
#include "JSystem/JGeometry.h"
#include "JSystem/J3D/J3DPacket.h"

struct J3DDeformData;
struct J3DMatPacket;
struct J3DModelData;
struct J3DMtxBuffer;
struct J3DShapePacket;
struct J3DSkinDeform;
struct J3DVtxColorCalc;

/**
 * @size{0xE4}
 */
struct J3DModelData {
	J3DModelData();

	/**
	 * @reifiedAddress{80083BB4}
	 * @reifiedFile{JSystem/J3D/J3DModelLoader.cpp}
	 */
	virtual ~J3DModelData() { } // _08 (weak)

	void clear();
	void newSharedDisplayList(u32);
	void indexToPtr();
	void makeSharedDL();
	void simpleCalcMaterial(u16, float (*)[4]);
	void syncJ3DSysFlags() const;

	inline u16 getShapeCount() { return m_shapeTable.m_count; }

	inline u16 getMaterialCount1() { return m_materialTable.m_count1; }

	/** @fabricated */
	inline void init(const J3DModelHierarchy* hierarchy)
	{
		m_jointTree.makeHierarchy(nullptr, &hierarchy, &m_materialTable, &m_shapeTable);
		m_shapeTable.initShapeNodes(&m_jointTree.m_mtxData, &m_vertexData);
	}

	// VTBL _00
	const void* m_bmd;                // _04
	u32 m_modelLoaderFlags;           // _08
	u16 _0C;                          // _0C
	u16 m_jointSet;                   // _0E
	J3DJointTree m_jointTree;         // _10
	J3DMaterialTable m_materialTable; // _58
	J3DShapeTable m_shapeTable;       // _78
	JUTNameTab* _84;                  // _84
	J3DVertexData m_vertexData;       // _88
};

/**
 * @size{0xDC}
 */
struct J3DModel {
	/**
	 * @fabricated
	 */
	J3DModel(J3DModelData* data, unsigned long p2, unsigned long modelType)
	{
		m_vertexBuffer.init();
		initialize();
		entryModelData(data, p2, modelType);
	}
	virtual void update();         // _08
	virtual void entry();          // _0C
	virtual void calc();           // _10
	virtual void calcMaterial();   // _14
	virtual void calcDiffTexMtx(); // _18
	virtual void viewCalc();       // _1C

	/**
	 * @reifiedAddress{800675CC}
	 * @reifiedFile{JSystem/J3D/J3DModel.cpp}
	 */
	virtual ~J3DModel() { } // _20 (weak)

	void initialize();
	int entryModelData(J3DModelData*, u32, u32);
	int createShapePacket(J3DModelData*);
	int createMatPacket(J3DModelData*, u32);
	int newDifferedDisplayList(u32);
	int newDifferedTexMtx(J3DTexDiffFlag);
	void lock();
	void makeDL();
	void diff();
	void setVtxColorCalc(J3DVtxColorCalc*, J3DDeformAttachFlag);
	void calcWeightEnvelopeMtx();
	void calcNrmMtx();
	void calcBumpMtx();
	void calcBBoardMtx();
	void prepareShapePackets();

	// _00 VTBL
	J3DModelData* m_modelData;       // _04
	u32 _08;                         // _08 /* bitfield of some sort */
	u32 m_displayListFlag;           // _0C
	void* _10;                       // _10
	u32 _14;                         // _14
	Vec m_modelScale;                // _18
	Mtx _24;                         // _24
	Mtx _54;                         // _54
	J3DMtxBuffer* m_mtxBuffer;       // _84
	J3DVertexBuffer m_vertexBuffer;  // _88
	J3DMatPacket* m_matPackets;      // _C0
	J3DShapePacket* m_shapePackets;  // _C4
	J3DDeformData* m_deformData;     // _C8
	J3DSkinDeform* m_skinDeform;     // _CC
	J3DVtxColorCalc* m_vtxColorCalc; // _D0
	u32 _D4;                         // _D4
	void* _D8;                       // _D8
};

struct J3DModelHierarchy {
	u16 _00;
	u16 _02;
};

#endif
