#ifndef _JSYSTEM_J3D_J3DSHAPE_H
#define _JSYSTEM_J3D_J3DSHAPE_H

#include "Dolphin/gx.h"
#include "Dolphin/mtx.h"
#include "JSystem/JGeometry.h"
#include "JSystem/J3D/J3DMaterial.h"
#include "types.h"

struct J3DDrawMtxData;
struct J3DJos32Tree;
struct J3DMaterial;
struct J3DVertexData;
struct JUTNameTab;
struct Vec;

struct J3DShapeDraw;
struct J3DShapeMtx;

#define J3DShapeMtx_Base     0x0
#define J3DShapeMtx_BBoard   0x1
#define J3DShapeMtx_Y_BBoard 0x2
#define J3DShapeMtx_Multi    0x3

enum J3DShapeFlags {
	J3DShape_Hide      = 0x1,
	J3DShape_SkinPos   = 0x4,
	J3DShape_SkinNorm  = 0x8,
	J3DShape_Hidden    = 0x10,
	J3DShape_EnableLOD = 0x100,
	J3DShape_NoMtx     = 0x200,
	J3DShape_Invalid   = 0xFFFFFFFF,
};

struct J3DShapeInitData {
	u8 mShapeMtxType;            // _00
	u16 mMtxGroupNum;            // _02
	u16 mVtxDescListIndex;       // _04
	u16 mShapeMtxInitDataIndex;  // _06
	u16 mShapeDrawInitDataIndex; // _08
	f32 mRadius;                 // _0C
	JGeometry::TVec3f mMin;      // _10
	JGeometry::TVec3f mMax;      // _1C
};

struct J3DShape {
	J3DShape() { initialize(); }

	enum {
		kVcdVatDLSize = 0xC0,
	};

	virtual void draw() const;            // _08
	virtual void drawFast() const;        // _0C
	virtual void simpleDraw() const;      // _10
	virtual void simpleDrawCache() const; // _14

	void calcNBTScale(const Vec&, Mtx33*, Mtx33*);
	u32 countBumpMtxNum() const;
	void initialize();
	bool isSameVcdVatCmd(J3DShape*);
	void loadPreDrawSetting() const;
	void makeVcdVatCmd();
	void makeVtxArrayCmd();

	void onFlag(u32 flag) { mFlags |= flag; }
	void offFlag(u32 flag) { mFlags &= ~flag; }
	bool checkFlag(u32 flag) const { return !!(mFlags & flag); }
	void setDrawMtxDataPointer(J3DDrawMtxData* pMtxData) { mDrawMtxData = pMtxData; }
	void setVertexDataPointer(J3DVertexData* pVtxData) { mVtxData = pVtxData; }
	void* getVcdVatCmd() const { return mVcdVatCmd; }
	void setVcdVatCmd(void* pVatCmd) { mVcdVatCmd = (u8*)pVatCmd; }
	void setDrawMtx(Mtx** pDrawMtx) { mDrawMtx = pDrawMtx; }
	void setNrmMtx(Mtx33** pNrmMtx) { mNrmMtx = pNrmMtx; }
	void show() { offFlag(J3DShape_Hide); }
	void hide() { onFlag(J3DShape_Hide); }
	void setCurrentViewNoPtr(u32* pViewNoPtr) { mCurrentViewNumber = pViewNoPtr; }
	void setScaleFlagArray(u8* pScaleFlagArray) { mScaleFlagArray = pScaleFlagArray; }
	void setTexMtxLoadType(u32 type) { mFlags = (mFlags & 0xFFFF0FFF) | type; }
	bool getNBTFlag() const { return mHasNBT; }
	u32 getBumpMtxOffset() const { return mBumpMtxOffset; }
	void setCurrentMtx(J3DCurrentMtx& mtx) { mCurrentMtx = mtx; }
	void setBumpMtxOffset(u32 offset) { mBumpMtxOffset = offset; }

	J3DMaterial* getMaterial() const { return mMaterial; }
	u32 getIndex() const { return mId; }
	u32 getPipeline() const { return (mFlags >> 2) & 0x07; }
	u32 getTexMtxLoadType() const { return mFlags & 0xF000; }
	u32 getMtxGroupNum() const { return mMtxGroupNum; }
	J3DShapeDraw* getShapeDraw(u32 idx) const { return mShapeDraw[idx]; }
	J3DShapeMtx* getShapeMtx(u32 idx) const { return mShapeMtx[idx]; }
	JGeometry::TVec3f* getMin() { return &mMin; }
	JGeometry::TVec3f* getMax() { return &mMax; }

	static u8* sOldVcdVatCmd;
	static u8 sEnvelopeFlag;
	static void resetVcdVatCache() { sOldVcdVatCmd = nullptr; }

	// _00 = VTBL
	J3DMaterial* mMaterial;       // _04
	u16 mId;                      // _08
	u16 mMtxGroupNum;             // _0A
	u32 mFlags;                   // _0C
	f32 mRadius;                  // _10
	JGeometry::TVec3f mMin;       // _14
	JGeometry::TVec3f mMax;       // _20
	u8* mVcdVatCmd;               // _2C
	GXVtxDescList* mVtxDesc;      // _30
	bool mHasNBT;                 // _34
	J3DShapeMtx** mShapeMtx;      // _38
	J3DShapeDraw** mShapeDraw;    // _3C
	J3DCurrentMtx mCurrentMtx;    // _40
	u8 mHasPNMTXIdx;              // _48
	J3DVertexData* mVtxData;      // _4C
	J3DDrawMtxData* mDrawMtxData; // _50
	u8* mScaleFlagArray;          // _54
	Mtx** mDrawMtx;               // _58
	Mtx33** mNrmMtx;              // _5C
	u32* mCurrentViewNumber;      // _60
	int mBumpMtxOffset;           // _64
};

struct J3DShapeMtx {
	typedef void (J3DShapeMtx::*LoadMtxIndxFunction)(int, u16) const;

	J3DShapeMtx(u16 useMtxIdx)
	    : mUseMtxIndex(useMtxIdx)
	{
	}

	virtual ~J3DShapeMtx() { }                                     // _08 (weak)
	virtual int getType() const { return 'SMTX'; }                 // _0C (weak)
	virtual int getUseMtxNum() const { return 1; }                 // _10 (weak)
	virtual u16 getUseMtxIndex(u16) const { return mUseMtxIndex; } // _14 (weak)
	virtual void load() const;                                     // _18
	virtual void calcNBTScale(const Vec&, Mtx33*, Mtx33*);         // _1C

	static void setLODFlag(u8 flag) { sLODFlag = flag; }
	static u8 getLODFlag() { return sLODFlag; }
	static void setCurrentPipeline(u32 pipeline) { sCurrentPipeline = pipeline; }

	void loadMtxIndx_PNGP(int, u16) const;
	void loadMtxIndx_PCPU(int, u16) const;
	void loadMtxIndx_NCPU(int, u16) const;
	void loadMtxIndx_PNCPU(int, u16) const;

	static void resetMtxLoadCache();

	// VTBL _00
	u16 mUseMtxIndex; // _04

	static u16 sMtxLoadCache[10];
	static LoadMtxIndxFunction sMtxLoadPipeline[4];

	static u32 sCurrentPipeline;
	static u8* sCurrentScaleFlag;
	static u32 sTexMtxLoadType;
	static bool sNBTFlag;
	static bool sLODFlag;
};

struct J3DShapeDraw {
	J3DShapeDraw(const u8*, u32);

	virtual ~J3DShapeDraw();

	void draw() const;

	// _00 = VTBL
	u32 mDlSize;            // _04
	const u8* mDisplayList; // _08
};

struct J3DShapeTable {
	inline J3DShapeTable()
	    : mCount(0)
	    , mItems(nullptr)
	    , mNames(nullptr)
	{
	}

	virtual ~J3DShapeTable() { } // _08 (weak)

	void initShapeNodes(J3DDrawMtxData*, J3DVertexData*);
	void sortVcdVatCmd();

	J3DShape* getItem(u16 index) const { return mItems[index]; } // called getShapeNodePointer in TP
	u16 getShapeNum() const { return mCount; }

	// VTBL _00
	u16 mCount;         // _04
	J3DShape** mItems;  // _08
	JUTNameTab* mNames; // _0C
};

struct J3DShapeMtxMulti : public J3DShapeMtx {
	J3DShapeMtxMulti(u16* useMtxIndexTable, u16 useMtxIndex, u16 useMtxNum)
	    : J3DShapeMtx(useMtxIndex)
	    , mUseMtxNum(useMtxNum)
	    , mUseMtxIndexTable(useMtxIndexTable)
	{
	}

	virtual ~J3DShapeMtxMulti() { }                                            // _08 (weak)
	virtual int getType() const { return 'SMML'; }                             // _0C (weak)
	virtual int getUseMtxNum() const { return mUseMtxNum; }                    // _10 (weak)
	virtual u16 getUseMtxIndex(u16 p1) const { return mUseMtxIndexTable[p1]; } // _14 (weak)
	virtual void load() const;                                                 // _18
	virtual void calcNBTScale(const Vec&, Mtx33*, Mtx33*);                     // _1C

	u16 mUseMtxNum;         // _08
	u16* mUseMtxIndexTable; // _0C
};

struct J3DShapeMtxConcatView : public J3DShapeMtx {
	typedef void (J3DShapeMtxConcatView::*LoadMtxConcatViewFunction)(int, u16) const;

	J3DShapeMtxConcatView(u16 useMtxIdx)
	    : J3DShapeMtx(useMtxIdx)
	{
	}

	virtual ~J3DShapeMtxConcatView() { }                 // _08 (weak)
	virtual int getType() const { return 'SMCV'; }       // _0C (weak)
	virtual void load() const;                           // _18
	virtual void loadNrmMtx(int, u16) const { }          // _20 (weak)
	virtual void loadNrmMtx(int, u16, f32 (*)[4]) const; // _24

	void loadMtxConcatView_PNGP(int, u16) const;
	void loadMtxConcatView_PCPU(int, u16) const;
	void loadMtxConcatView_NCPU(int, u16) const;
	void loadMtxConcatView_PNCPU(int, u16) const;
	void loadMtxConcatView_PNGP_LOD(int, u16) const;

	static LoadMtxConcatViewFunction sMtxLoadPipeline[4];
	static LoadMtxConcatViewFunction sMtxLoadLODPipeline[4];
	static MtxP sMtxPtrTbl[2];
};

struct J3DShapeMtxMultiConcatView : public J3DShapeMtxConcatView {
	J3DShapeMtxMultiConcatView(u16* useMtxIndexTable, u16 useMtxIndex, u16 useMtxNum)
	    : J3DShapeMtxConcatView(useMtxIndex)
	    , mUseMtxNum(useMtxNum)
	    , mUseMtxIndexTable(useMtxIndexTable)
	{
	}

	virtual ~J3DShapeMtxMultiConcatView() { }                                        // _08 (weak)
	virtual int getType() const { return 'SMMC'; }                                   // _0C (weak)
	virtual int getUseMtxNum() const { return mUseMtxNum; }                          // _10 (weak)
	virtual u16 getUseMtxIndex(u16 index) const { return mUseMtxIndexTable[index]; } // _14 (weak)
	virtual void load() const;                                                       // _18
	virtual void loadNrmMtx(int, u16) const { }                                      // _20 (weak)
	virtual void loadNrmMtx(int, u16, Mtx) const;                                    // _24

	u16 mUseMtxNum;         // _08
	u16* mUseMtxIndexTable; // _0C
};

struct J3DShapeMtxBBoardConcatView : public J3DShapeMtxConcatView {
	J3DShapeMtxBBoardConcatView(u16 useMtxIdx)
	    : J3DShapeMtxConcatView(useMtxIdx)
	{
	}

	virtual ~J3DShapeMtxBBoardConcatView() { }     // _08 (weak)
	virtual int getType() const { return 'SMBB'; } // _0C (weak)
	virtual void load() const;                     // _18
};

struct J3DShapeMtxYBBoardConcatView : public J3DShapeMtxConcatView {
	J3DShapeMtxYBBoardConcatView(u16 useMtxIdx)
	    : J3DShapeMtxConcatView(useMtxIdx)
	{
	}

	virtual ~J3DShapeMtxYBBoardConcatView() { }    // _08 (weak)
	virtual int getType() const { return 'SMYB'; } // _0C (weak)
	virtual void load() const;                     // _18
};

#endif
