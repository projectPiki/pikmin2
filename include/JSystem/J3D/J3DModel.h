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

// This belongs... somewhere
inline void J3DCalcViewBaseMtx(Mtx view, Vec const& scale, const Mtx& base, Mtx dst)
{
	Mtx m;

	m[0][0] = base[0][0] * scale.x;
	m[0][1] = base[0][1] * scale.y;
	m[0][2] = base[0][2] * scale.z;
	m[0][3] = base[0][3];

	m[1][0] = base[1][0] * scale.x;
	m[1][1] = base[1][1] * scale.y;
	m[1][2] = base[1][2] * scale.z;
	m[1][3] = base[1][3];

	m[2][0] = base[2][0] * scale.x;
	m[2][1] = base[2][1] * scale.y;
	m[2][2] = base[2][2] * scale.z;
	m[2][3] = base[2][3];

	PSMTXConcat(view, m, dst);
}

struct J3DUnkCalc1 {
	virtual void calc(J3DModel* model);
};

struct J3DUnkCalc2 {
	virtual void unk();
	virtual void calc(J3DModelData* mpModelData);
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
	u32 getDrawMtxNum() const { return mJointTree.getDrawMtxNum(); }
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
	const J3DModelHierarchy* getHierarchy() const { return mJointTree.getHierarchy(); }

	u8 getDrawMtxFlag(u16 idx) const { return mJointTree.getDrawMtxFlag(idx); }
	u16 getDrawMtxIndex(u16 idx) const { return mJointTree.getDrawMtxIndex(idx); }
	u16* getWEvlpImportantMtxIndex() const { return mJointTree.getWEvlpImportantMtxIndex(); }

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
	J3DModel(J3DModelData* data, u32 matFlags, u32 viewNum)
	{
		mVertexBuffer.init();
		initialize();
		entryModelData(data, matFlags, viewNum);
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
	void setBaseScale(Vector3f scale)
	{
		mModelScale.x = scale.x;
		mModelScale.y = scale.y;
		mModelScale.z = scale.z;
	}
	void setBaseScale(f32 x, f32 y, f32 z)
	{
		mModelScale.x = x;
		mModelScale.y = y;
		mModelScale.z = z;
	}
	void setUserArea(u32 area) { mUserArea = area; }
	u32 getUserArea() const { return mUserArea; }
	void setAnmMtx(int i, Mtx m) { mMtxBuffer->setAnmMtx(i, m); }
	MtxP getAnmMtx(int p1) { return mMtxBuffer->getAnmMtx(p1); }
	J3DMtxBuffer* getMtxBuffer() const { return mMtxBuffer; }

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
	J3DUnkCalc1* mUnkCalc1;         // _D4
	J3DUnkCalc2* mUnkCalc2;         // _D8
};

struct J3DModelHierarchy {
	u16 mType;  // _00
	u16 mValue; // _02
};

#endif
