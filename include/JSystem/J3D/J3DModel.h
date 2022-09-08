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

	virtual ~J3DModelData(); // _00

	void clear();
	void newSharedDisplayList(u32);
	void indexToPtr();
	void makeSharedDL();
	void simpleCalcMaterial(u16, Mtx*);
	void syncJ3DSysFlags() const;

	// VTBL _00
	u8* m_bmd;                        // _04
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
	virtual void update();         // _00
	virtual void entry();          // _04
	virtual void calc();           // _08
	virtual void calcMaterial();   // _0C
	virtual void calcDiffTexMtx(); // _10
	virtual void viewCalc();       // _14
	virtual ~J3DModel();           // _18

	void initialize();
	void entryModelData(J3DModelData*, unsigned long, unsigned long);
	J3DShapePacket* createShapePacket(J3DModelData*);
	J3DMatPacket* createMatPacket(J3DModelData*, unsigned long);
	void newDifferedDisplayList(unsigned long);
	void newDifferedTexMtx(J3DTexDiffFlag);
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
	JGeometry::TVec3f m_modelScale;  // _18
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
	short _00;
	short _02;
};

struct J3DModelLoaderDataBase {
	static J3DModelData* load(const void*, u32);
	static J3DModelData* loadBinaryDisplayList(const void*, u32);
};

#endif
