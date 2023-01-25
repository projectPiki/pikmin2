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
#include "JSystem/JUT/JUTNameTab.h"
#include "BitFlag.h"

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
	void simpleCalcMaterial(u16, f32 (*)[4]);
	void syncJ3DSysFlags() const;

	inline u16 getShapeCount() { return mShapeTable.mCount; }

	inline u16 getMaterialCount1() { return mMaterialTable.mCount1; }

	/** @fabricated */
	inline void init(const J3DModelHierarchy* hierarchy)
	{
		mJointTree.makeHierarchy(nullptr, &hierarchy, &mMaterialTable, &mShapeTable);
		mShapeTable.initShapeNodes(&mJointTree.mMtxData, &mVertexData);
	}

	inline void setTevColor(char* name, J3DGXColorS10& color)
	{
		u16 idx          = mMaterialTable._0C->getIndex(name);
		J3DMaterial* mat = mMaterialTable.mMaterials1[idx];
		mat->mTevBlock->setTevColor(0, color);
	}

	inline void setTevColor(char* name, u16 r, u16 g, u16 b, u16 a)
	{
		u16 idx          = mMaterialTable._0C->getIndex(name);
		J3DMaterial* mat = mMaterialTable.mMaterials1[idx];
		mat->mTevBlock->setTevColor(0, J3DGXColorS10(r, g, b, a));
	}

	inline J3DVertexData* getVertexData() { return &mVertexData; }
	inline J3DJoint* getJointNodePointer(u16 idx) const { return mJointTree.getJointNodePointer(idx); }

	// VTBL _00
	const void* mBmd;                // _04
	u32 mModelLoaderFlags;           // _08
	u16 _0C;                         // _0C
	u16 mJointSet;                   // _0E
	J3DJointTree mJointTree;         // _10
	J3DMaterialTable mMaterialTable; // _58
	J3DShapeTable mShapeTable;       // _78
	JUTNameTab* _84;                 // _84
	J3DVertexData mVertexData;       // _88
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
		mVertexBuffer.init();
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

	inline J3DModelData* getModelData() { return mModelData; }

	// _00 VTBL
	J3DModelData* mModelData;          // _04
	BitFlag<u32> _08;                  // _08 /* bitfield of some sort */
	u32 mDisplayListFlag;              // _0C
	void* _10;                         // _10
	BitFlag<u32> _14;                  // _14
	JGeometry::TVec3<f32> mModelScale; // _18
	Mtx mPosMtx;                       // _24
	Mtx _54;                           // _54
	J3DMtxBuffer* mMtxBuffer;          // _84
	J3DVertexBuffer mVertexBuffer;     // _88
	J3DMatPacket* mMatPackets;         // _C0
	J3DShapePacket* mShapePackets;     // _C4
	J3DDeformData* mDeformData;        // _C8
	J3DSkinDeform* mSkinDeform;        // _CC
	J3DVtxColorCalc* mVtxColorCalc;    // _D0
	u32 _D4;                           // _D4
	void* _D8;                         // _D8
};

struct J3DModelHierarchy {
	u16 _00;
	u16 _02;
};

struct J3DSkinDeform {
	J3DSkinDeform();                                      // UNUSED
	virtual void deform(J3DVertexBuffer*, J3DMtxBuffer*); // _08
	virtual ~J3DSkinDeform() { }                          // _0C

	void deform(J3DModel* model);

	// _00 VTBL
	unknown _04;      // _04
	BitFlag<u32> _08; // _08 /* bitfield of some sort */
	unknown _0C;      // _0C
	unknown _10;      // _10
	BitFlag<u32> _14; // _14
};

#endif
