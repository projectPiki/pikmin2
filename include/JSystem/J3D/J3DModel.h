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
#include "JSystem/J3D/J3DMtxBuffer.h"
#include "JSystem/JGeometry.h"
#include "JSystem/J3D/J3DPacket.h"
#include "JSystem/JUtility/JUTNameTab.h"
#include "BitFlag.h"

struct J3DDeformData;
struct J3DMatPacket;
struct J3DModelData;
struct J3DMtxBuffer;
struct J3DShapePacket;
struct J3DSkinDeform;
struct J3DVtxColorCalc;
struct J3DModel;

typedef void (*J3DCalcCallBack)(J3DModel*, u32 timing);

// TODO: name these
enum J3DModelFlags {
	J3DMODEL_Unk1       = 0x1,
	J3DMODEL_Unk2       = 0x2,
	J3DMODEL_SkinPosCpu = 0x4,
	J3DMODEL_SkinNrmCpu = 0x8,
	J3DMODEL_Unk5       = 0x10,
	J3DMODEL_Unk6       = 0x20,
	J3DMODEL_Unk7       = 0x40,
	J3DMODEL_Unk8       = 0x80,
	J3DMODEL_Unk9       = 0x100,
	J3DMODEL_Unk10      = 0x200,
	J3DMODEL_Unk11      = 0x400,
	J3DMODEL_Unk12      = 0x800,
	J3DMODEL_Unk13      = 0x1000,
	J3DMODEL_Unk14      = 0x2000,
	J3DMODEL_Unk15      = 0x4000,
	J3DMODEL_Unk16      = 0x8000,
	J3DMODEL_Unk17      = 0x10000,
	J3DMODEL_Unk18      = 0x20000,
	J3DMODEL_Unk19      = 0x40000,
	J3DMODEL_Unk20      = 0x80000,
	J3DMODEL_Unk21      = 0x100000,
	J3DMODEL_Unk22      = 0x200000,
	J3DMODEL_Unk23      = 0x400000,
	J3DMODEL_Unk24      = 0x800000,
	J3DMODEL_Unk25      = 0x1000000,
	J3DMODEL_Unk26      = 0x2000000,
	J3DMODEL_Unk27      = 0x4000000,
	J3DMODEL_Unk28      = 0x8000000,
	J3DMODEL_Unk29      = 0x10000000,
	J3DMODEL_Unk30      = 0x20000000,
	J3DMODEL_Unk31      = 0x40000000,
	J3DMODEL_Unk32      = 0x80000000,
};

/**
 * @size{0xE4}
 */
struct J3DModelData {
	J3DModelData();

	virtual ~J3DModelData() { } // _08 (weak)

	void clear();
	void newSharedDisplayList(u32);
	void indexToPtr();
	void makeSharedDL();
	void simpleCalcMaterial(u16, f32 (*)[4]);
	void syncJ3DSysFlags() const;

	inline void init(const J3DModelHierarchy* hierarchy)
	{
		mJointTree.makeHierarchy(nullptr, &hierarchy, &mMaterialTable, &mShapeTable);
		mShapeTable.initShapeNodes(&mJointTree.mMtxData, &mVertexData);
	}

	inline void setTevColor(char* name, J3DGXColorS10& color)
	{
		u16 idx          = mMaterialTable.mMaterialNames->getIndex(name);
		J3DMaterial* mat = mMaterialTable.mMaterials[idx];
		mat->mTevBlock->setTevColor(0, color);
	}

	inline void setTevColor(char* name, u16 r, u16 g, u16 b, u16 a)
	{
		u16 idx          = mMaterialTable.mMaterialNames->getIndex(name);
		J3DMaterial* mat = mMaterialTable.mMaterials[idx];
		mat->mTevBlock->setTevColor(0, J3DGXColorS10(r, g, b, a));
	}

	inline void doMakeShared()
	{
		newSharedDisplayList(0x40000);
		makeSharedDL();
	}

	J3DVertexData* getVertexData() { return &mVertexData; }
	J3DJoint* getJointNodePointer(u16 idx) const { return mJointTree.getJointNodePointer(idx); }
	J3DMaterialTable& getMaterialTable() { return mMaterialTable; }
	JUTNameTab* getMaterialName() const { return mMaterialTable.getMaterialName(); }
	u16 getShapeNum() const { return mShapeTable.getShapeNum(); }
	u16 getMaterialNum() const { return mMaterialTable.getMaterialNum(); }
	u16 getJointNum() const { return mJointTree.getJointNum(); }
	u16 getDrawMtxNum() const { return mJointTree.getDrawMtxNum(); }
	J3DMaterial* getMaterialNodePointer(u16 idx) const { return mMaterialTable.getMaterialNodePointer(idx); }
	J3DShape* getShapeNodePointer(u16 idx) const { return mShapeTable.getItem(idx); }
	J3DJointTree& getJointTree() { return mJointTree; }
	JUTNameTab* getJointName() const { return mJointTree.getJointName(); }
	Mtx& getInvJointMtx(s32 idx) const { return mJointTree.getInvJointMtx(idx); }
	J3DTexture* getTexture() const { return mMaterialTable.getTexture(); }
	JUTNameTab* getTextureName() const { return mMaterialTable.getTextureName(); }
	u16 getWEvlpMtxNum() const { return mJointTree.getWEvlpMtxNum(); }
	u32 getModelDataType() const { return mJointTree.getModelDataType(); }
	void* getVtxPosArray() const { return mVertexData.getVtxPosArray(); }
	void* getVtxNrmArray() const { return mVertexData.getVtxNrmArray(); }
	GXColor* getVtxColorArray(u8 idx) const { return mVertexData.getVtxColorArray(idx); }
	u32 getVertexNum() const { return mVertexData.getVtxNum(); }
	u32 getVertexColorNum() const { return mVertexData.getColNum(); }

	bool checkFlag(u32 flag) const { return (mModelLoaderFlags & flag) ? true : false; }
	u32 getFlag() const { return mModelLoaderFlags; }
	u16 checkBumpFlag() const { return mBumpFlag; }
	void setBumpFlag(u32 flag) { mBumpFlag = flag; }
	bool checkBBoardFlag() const { return mBillboardFlag == 1; }
	bool isLocked() { return mMaterialTable.isLocked(); }

	void entryTexMtxAnimator(J3DAnmTextureSRTKey* anm) { mMaterialTable.entryTexMtxAnimator(anm); }
	void entryTevRegAnimator(J3DAnmTevRegKey* anm) { mMaterialTable.entryTevRegAnimator(anm); }

	// VTBL _00
	const void* mBmd;                // _04
	u32 mModelLoaderFlags;           // _08
	u16 mBumpFlag;                   // _0C
	u16 mBillboardFlag;              // _0E
	J3DJointTree mJointTree;         // _10
	J3DMaterialTable mMaterialTable; // _58
	J3DShapeTable mShapeTable;       // _78
	J3DVertexData mVertexData;       // _88
};

/**
 * @size{0xDC}
 */
struct J3DModel {
	J3DModel(J3DModelData* data, u32 p2, u32 modelType)
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
	virtual ~J3DModel() { }        // _20 (weak)

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

	void onFlag(u32 flag) { mFlags |= flag; }
	void offFlag(u32 flag) { mFlags &= ~flag; }
	bool checkFlag(u32 flag) const { return mFlags & flag; }

	bool isCpuSkinningOn() const { return (mFlags & J3DMODEL_SkinPosCpu) && (mFlags & J3DMODEL_SkinNrmCpu); }

	Mtx& getBaseTRMtx() { return mPosMtx; }
	void i_setBaseTRMtx(Mtx m) { PSMTXCopy(m, mPosMtx); }
	u32 getMtxCalcMode() const { return mFlags & J3DMODEL_SkinPosCpu; }
	J3DVertexBuffer* getVertexBuffer() const { return (J3DVertexBuffer*)&mVertexBuffer; }
	J3DMatPacket* getMatPacket(u16 idx) const { return &mMatPackets[idx]; }
	J3DShapePacket* getShapePacket(u16 idx) const { return &mShapePackets[idx]; }
	Mtx33* getBumpMtxPtr(int idx) const { return mMtxBuffer->getBumpMtxPtr(idx); }
	Mtx33* getNrmMtxPtr() const { return mMtxBuffer->getNrmMtxPtr(); }
	Mtx* getDrawMtxPtr() const { return mMtxBuffer->getDrawMtxPtr(); }
	void setBaseScale(const Vec& scale)
	{
		mModelScale.x = scale.x;
		mModelScale.y = scale.y;
		mModelScale.z = scale.z;
	}
	void setUserArea(u32 area) { mUserArea = area; }
	u32 getUserArea() const { return mUserArea; }
	void setAnmMtx(int i, Mtx m) { mMtxBuffer->setAnmMtx(i, m); }

	// void setBaseScale(const Vec& scale) { mModelScale = scale; }
	Vec* getBaseScale() { return &mModelScale; }

	// _00 VTBL
	J3DModelData* mModelData;       // _04
	u32 mFlags;                     // _08
	u32 mDiffFlag;                  // _0C
	J3DCalcCallBack mCalcCallBack;  // _10
	u32 mUserArea;                  // _14
	Vec mModelScale;                // _18
	Mtx mPosMtx;                    // _24
	Mtx mInternalView;              // _54
	J3DMtxBuffer* mMtxBuffer;       // _84
	J3DVertexBuffer mVertexBuffer;  // _88
	J3DMatPacket* mMatPackets;      // _C0
	J3DShapePacket* mShapePackets;  // _C4
	J3DDeformData* mDeformData;     // _C8
	J3DSkinDeform* mSkinDeform;     // _CC
	J3DVtxColorCalc* mVtxColorCalc; // _D0
	u32 _D4;                        // _D4
	void* _D8;                      // _D8
};

struct J3DModelHierarchy {
	u16 mType;  // _00
	u16 mValue; // _02
};

#endif
