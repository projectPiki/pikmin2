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
	enum Flags {
		IsHidden  = 0x1,
		SkinPos   = 0x4,
		SkinNorm  = 0x8,
		EnableLOD = 0x100,
		NoMtx     = 0x200,
		Invalid   = 0xFFFFFFFF,
	};

	virtual void draw() const;            // _08
	virtual void drawFast() const;        // _0C
	virtual void simpleDraw() const;      // _10
	virtual void simpleDrawCache() const; // _14

	void calcNBTScale(const Vec&, Mtx33*, Mtx33*);
	int countBumpMtxNum() const;
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
	void show() { offFlag(IsHidden); }
	void hide() { onFlag(IsHidden); }
	void setCurrentViewNoPtr(u32* pViewNoPtr) { mCurrentViewNumber = pViewNoPtr; }
	void setScaleFlagArray(u8* pScaleFlagArray) { mFlagList = pScaleFlagArray; }
	void setTexMtxLoadType(u32 type) { mFlags = (mFlags & 0xFFFF0FFF) | type; }
	bool getNBTFlag() const { return mMode; }
	u32 getBumpMtxOffset() const { return mBumpMtxOffset; }

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
	u8 mMode;                     // _34
	J3DShapeMtx** mShapeMtx;      // _38
	J3DShapeDraw** mShapeDraw;    // _3C
	J3DCurrentMtx mCurrentMtx;    // _40
	u8 _48;                       // _48
	J3DVertexData* mVtxData;      // _4C
	J3DDrawMtxData* mDrawMtxData; // _50
	u8* mFlagList;                // _54
	J3DJos32Tree* mTree1;         // _58, TP has this as Mtx** mDrawMtx
	J3DJos32Tree* mTree2;         // _5C, TP has this as Mtx33** mNrmMtx
	u32* mCurrentViewNumber;      // _60
	int mBumpMtxOffset;           // _64
};

struct J3DShapeMtx {
	typedef void (J3DShapeMtx::*LoadMtxIndxFunction)(int, u16) const;

	virtual ~J3DShapeMtx() { }                                     // _08 (weak)
	virtual int getType() const { return 'SMTX'; }                 // _0C (weak)
	virtual int getUseMtxNum() const { return 1; }                 // _10 (weak)
	virtual u16 getUseMtxIndex(u16) const { return mUseMtxIndex; } // _14 (weak)
	virtual void load() const;                                     // _18
	virtual void calcNBTScale(const Vec&, Mtx33, f32 Mtx33);       // _1C

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
	virtual ~J3DShapeMtxMulti() { }                                         // _08 (weak)
	virtual int getType() const { return 'SMML'; }                          // _0C (weak)
	virtual int getUseMtxNum() const { return mUseMtxNum; }                 // _10 (weak)
	virtual u16 getUseMtxIndex(unsigned short p1) const { return _0C[p1]; } // _14 (weak)
	virtual void load() const;                                              // _18
	virtual void calcNBTScale(const Vec&, Mtx33, Mtx33);                    // _1C

	u16 mUseMtxNum; // _08
	u16* _0C;       // _0C
};

struct J3DShapeMtxConcatView : public J3DShapeMtx {
	typedef void (J3DShapeMtxConcatView::*LoadMtxConcatViewFunction)(int, u16) const;

	virtual ~J3DShapeMtxConcatView() { }                            // _08 (weak)
	virtual int getType() const { return 'SMCV'; }                  // _0C (weak)
	virtual void load() const;                                      // _18
	virtual void loadNrmMtx(int, unsigned short) const;             // _20 (weak)
	virtual void loadNrmMtx(int, unsigned short, f32 (*)[4]) const; // _24

	void loadMtxConcatView_PNGP(int, unsigned short) const;
	void loadMtxConcatView_PCPU(int, unsigned short) const;
	void loadMtxConcatView_NCPU(int, unsigned short) const;
	void loadMtxConcatView_PNCPU(int, unsigned short) const;
	void loadMtxConcatView_PNGP_LOD(int, unsigned short) const;

	static LoadMtxConcatViewFunction sMtxLoadPipeline[4];
	static LoadMtxConcatViewFunction sMtxLoadLODPipeline[4];
	static Mtx* sMtxPtrTbl[2];
};

struct J3DShapeMtxMultiConcatView : public J3DShapeMtxConcatView {
	virtual ~J3DShapeMtxMultiConcatView() { }                                     // _08 (weak)
	virtual int getType() const { return 'SMMC'; }                                // _0C (weak)
	virtual int getUseMtxNum() const { return mUseMtxNum; }                       // _10 (weak)
	virtual u16 getUseMtxIndex(unsigned short index) const { return _0C[index]; } // _14 (weak)
	virtual void load() const;                                                    // _18
	virtual void loadNrmMtx(int, unsigned short) const;                           // _20 (weak)
	virtual void loadNrmMtx(int, unsigned short, f32 (*)[4]) const;               // _24

	u16 mUseMtxNum; // _08
	u16* _0C;       // _0C
};

struct J3DShapeMtxBBoardConcatView : public J3DShapeMtxConcatView {
	virtual ~J3DShapeMtxBBoardConcatView() { }     // _08 (weak)
	virtual int getType() const { return 'SMBB'; } // _0C (weak)
	virtual void load() const;                     // _18
};

struct J3DShapeMtxYBBoardConcatView : public J3DShapeMtxConcatView {
	virtual ~J3DShapeMtxYBBoardConcatView() { }    // _08 (weak)
	virtual int getType() const { return 'SMYB'; } // _0C (weak)
	virtual void load() const;                     // _18
};

#endif
