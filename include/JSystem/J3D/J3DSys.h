#ifndef _JSYSTEM_J3D_J3DSYS_H
#define _JSYSTEM_J3D_J3DSYS_H

#include "Dolphin/mtx.h"
#include "JSystem/J3D/J3DPacket.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/JGeometry.h"
#include "types.h"

struct J3DDrawBuffer;
struct J3DMatPacket;
struct J3DModel;
struct J3DMtxCalc;
struct J3DShapePacket;
struct J3DTexture;

struct J3DSys {
	enum DrawMode {
		SYSDRAW_Opa  = 0,
		SYSDRAW_Xlu  = 1,
		SYSDRAW_Unk3 = 3,
		SYSDRAW_Unk4 = 4,
	};

	J3DSys();

	void drawInit();
	void reinitGX();
	void reinitGenMode();
	void reinitIndStages();
	void reinitLighting();
	void reinitPixelProc();
	void reinitTexture();
	void reinitTevStages();
	void reinitTransform();
	void loadPosMtxIndx(int, u16) const;
	void loadNrmMtxIndx(int, u16) const;
	void ErrorReport(J3DErrType) const;

	void setTexCacheRegion(GXTexCacheSize);

	Mtx* getViewMtx() { return &mViewMtx; }
	void setDrawModeOpaTexEdge() { mDrawMode = SYSDRAW_Opa; }
	void setDrawModeXlu() { mDrawMode = SYSDRAW_Xlu; }
	void* getVtxPos() const { return mVtxPos; }
	void setVtxPos(void* pVtxPos) { mVtxPos = pVtxPos; }
	void* getVtxNrm() const { return mVtxNorm; }
	void setVtxNrm(void* pVtxNrm) { mVtxNorm = pVtxNrm; }

	void* getVtxCol() const { return mVtxColor; }
	void setVtxCol(GXColor* pVtxCol) { mVtxColor = pVtxCol; }

	void setModel(J3DModel* pModel) { mModel = pModel; }
	void setShapePacket(J3DShapePacket* pPacket) { mShapePacket = pPacket; }
	void setMatPacket(J3DMatPacket* pPacket) { mMatPacket = pPacket; }
	void setMaterialMode(u32 mode) { mMaterialMode = mode; }

	J3DMatPacket* getMatPacket() { return mMatPacket; }

	void setTexture(J3DTexture* pTex) { mTexture = pTex; }
	J3DTexture* getTexture() { return mTexture; }

	void setNBTScale(Vec* scale) { mNBTScale = scale; }
	Vec* getNBTScale() { return mNBTScale; }

	void onFlag(u32 flag) { mFlags |= flag; }

	void offFlag(u32 flag) { mFlags &= ~flag; }

	bool checkFlag(u32 flag) { return mFlags & flag; }

	void setModelDrawMtx(Mtx* pMtxArr)
	{
		mModelDrawMtx = pMtxArr;
		GXSetArray(GX_POS_MTX_ARRAY, mModelDrawMtx, sizeof(*mModelDrawMtx));
	}

	void setModelNrmMtx(Mtx* pMtxArr)
	{
		mModelNormMtx = pMtxArr;
		GXSetArray(GX_NRM_MTX_ARRAY, mModelNormMtx, sizeof(Mtx33)); // why???
	}

	// Type 0: Opa Buffer
	// Type 1: Xlu Buffer
	void setDrawBuffer(J3DDrawBuffer* buffer, int type) { mDrawBuffer[type] = buffer; }

	// Type 0: Opa Buffer
	// Type 1: Xlu Buffer
	J3DDrawBuffer* getDrawBuffer(int type) { return mDrawBuffer[type]; }

	Mtx& getModelDrawMtx(u16 no) const { return mModelDrawMtx[no]; }
	J3DShapePacket* getShapePacket() const { return mShapePacket; }

	void setViewMtx(Mtx m) { PSMTXCopy(m, mViewMtx); }

	J3DModel* getModel() { return mModel; }

	static Vec* getScale() { return &mCurrentS; }

	static Mtx mCurrentMtx;
	static Vec mCurrentS;
	static Vec mParentS;
	static J3DTexCoordScaleInfo sTexCoordScaleTable[8];

	Mtx mViewMtx;                   // _000
	J3DMtxCalc* mMtxCalc;           // _030
	u32 mFlags;                     // _034
	J3DModel* mModel;               // _038
	J3DMatPacket* mMatPacket;       // _03C
	J3DShapePacket* mShapePacket;   // _040
	J3DShape* mShape;               // _044
	J3DDrawBuffer* mDrawBuffer[2];  // _048, 0=Opa, 1=Xlu
	DrawMode mDrawMode;             // _050
	u32 mMaterialMode;              // _054
	J3DTexture* mTexture;           // _058
	u8 _5C[4];                      // _05C, unknown
	u32 mTexCacheRegionNum;         // _060
	GXTexRegion mTexCacheRegion[8]; // _064
	u8 _E4[0x20];                   // _0E4, unknown
	Mtx* mModelDrawMtx;             // _104
	Mtx* mModelNormMtx;             // _108
	void* mVtxPos;                  // _10C
	void* mVtxNorm;                 // _110
	GXColor* mVtxColor;             // _114
	Vec* mNBTScale;                 // _118
};

enum J3DSysFlag {
	J3DSysFlag_SkinPosCpu = 0x00000004,
	J3DSysFlag_SkinNrmCpu = 0x00000008,
	J3DSysFlag_PostTexMtx = 0x40000000,
};

extern J3DSys j3dSys;

extern s32 j3dDefaultViewNo;

void makeTexCoordTable();
void makeTevSwapTable();
void makeAlphaCmpTable();
void makeZModeTable();
void J3DFifoLoadTexCached(GXTexMapID, u32, GXTexCacheSize, u32, GXTexCacheSize);

#endif
