#ifndef _JSYSTEM_J3D_J3DMATERIALFACTORY_H
#define _JSYSTEM_J3D_J3DMATERIALFACTORY_H

#include "Dolphin/gx.h"
#include "Dolphin/mtx.h"
#include "JSystem/J3D/J3DFileBlock.h"
#include "JSystem/J3D/J3DGXColor.h"
#include "JSystem/J3D/J3DInd.h"
#include "JSystem/J3D/J3DMaterial.h"
#include "JSystem/J3D/J3DPE.h"
#include "JSystem/J3D/J3DTexMtx.h"
#include "JSystem/J3D/J3DTevBlock.h"
#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

struct J3DAlphaCompInfo {
	u8 _00[0x5]; // _00
};

struct J3DColorChanInfo {
	J3DColorChan mChan; // _00
};

struct J3DDisplayListInit {
	u32 _00; // _00
	u32 _04; // _04
};

struct J3DFogInfo {
	u8 _00;       // _00
	u8 _01;       // _01
	u16 _02;      // _02
	f32 _04;      // _04
	f32 _08;      // _08
	f32 _0C;      // _0C
	f32 _10;      // _10
	u8 _14;       // _14
	u8 _15;       // _15
	u8 _16;       // _16
	u16 _18[0xA]; // _18
};

struct J3DIndInitData {
	u8 _00;             // _00
	u8 mIndTexStageNum; // _01
	u32 : 0;
	J3DIndTexOrder mIndTexOrders[4];           // _04
	J3DIndTexMtx mIndTexMatrices[3];           // _14
	J3DIndTexCoordScale mIndTexCoordScales[1]; // _68 - unknown length
	u8 _6C[0xCC];                              // _6C - tbd
};

struct J3DLightInfo {
};

struct J3DPatchingInfo {
	u16 _00;   // _00
	u16 _02;   // _02
	u16 _04;   // _04
	u16 _06;   // _06
	u16 _08;   // _08
	u16 _0A;   // _0A
	u8 _0C[4]; // _0C
};

struct J3DTevStageInfo {
	u8 _00[0x14]; // _00
};

extern const J3DTevSwapModeInfo j3dDefaultTevSwapMode;

struct J3DTevSwapModeTableInfo {
	u8 _00; // _00
	u8 _01; // _01
	u8 _02; // _02
	u8 _03; // _03
};

struct J3DTexCoord2Info {
};

/**
 * @size{0x14C}
 */
struct J3DMaterialInitData {
	u8 mPixelEngineMode;            // _00
	u8 mCullModeIndex;              // _01
	u8 mNumberColorChanControls;    // _02
	u8 mNumTexGensIndex;            // _03
	u8 mNumTevStagesIndex;          // _04
	u8 mZCompLocIndex;              // _05
	u8 mZModeIndex;                 // _06
	u8 mDitherIndex;                // _07
	u16 mMatColorIndex[2];          // _08
	u16 mColorChanControlIndex[4];  // _0C
	u16 mAmbColorIndex[2];          // _14
	u16 mLightColorIndex[8];        // _18
	u16 mTexGenInfoIndex[8];        // _28
	u16 mPostTexGenInfoIndex[8];    // _38
	u16 mTexMatrixIndex[10];        // _48
	u16 mPosTexMatrixIndex[20];     // _5C
	u16 mTextureIndex[8];           // _84
	u16 mTevKColorIndex[4];         // _94
	u8 mTevKColorSels[16];          // _9C
	u8 mTevKAlphaSels[16];          // _AC
	u16 mTevOrderInfoIndex[16];     // _BC
	u16 mTevColorIndex[4];          // _DC
	u16 mTevStageInfoIndex[16];     // _E4
	u16 mTevSwapModeInfoIndex[16];  // _104
	u16 mTevSwapModeTableIndex[16]; // _124
	u16 mFogInfoIndex;              // _144
	u16 mAlphaCompareIndex;         // _146
	u16 mBlendModeIndex;            // _148
	u16 mNBTScaleIndex;             // _14C
};

struct J3DMaterialFactory {
	enum MaterialType { NORMAL = 0, LOCKED, PATCHED };

	J3DMaterialFactory(const J3DMaterialBlock& block);
	J3DMaterialFactory(const J3DMaterialDLBlock& block);

	size_t calcSize(J3DMaterial*, MaterialType, int, u32) const;
	size_t calcSizeNormalMaterial(J3DMaterial*, int, u32) const;
	size_t calcSizePatchedMaterial(J3DMaterial*, int, u32) const;
	size_t calcSizeLockedMaterial(J3DMaterial*, int, u32) const;
	u32 countUniqueMaterials();
	J3DMaterial* create(J3DMaterial*, MaterialType, int, u32) const;
	J3DMaterial* createNormalMaterial(J3DMaterial*, int, u32) const;
	J3DLockedMaterial* createLockedMaterial(J3DMaterial*, int, u32) const;
	J3DPatchedMaterial* createPatchedMaterial(J3DMaterial*, int, u32) const;
	J3DAlphaComp newAlphaComp(int) const;
	J3DGXColor newAmbColor(int, int) const;
	J3DBlend newBlend(int) const;
	J3DColorChan newColorChan(int, int) const;
	u8 newColorChanNum(int) const;
	u8 newCullMode(int) const;
	u8 newDither(int) const;
	J3DFog newFog(int) const;
	J3DIndTexCoordScale newIndTexCoordScale(int, int) const;
	J3DIndTexMtx newIndTexMtx(int, int) const;
	J3DIndTexOrder newIndTexOrder(int, int) const;
	u8 newIndTexStageNum(int) const;
	J3DIndTevStage newIndTevStage(int, int) const;
	J3DGXColor newMatColor(int, int) const;
	J3DNBTScale newNBTScale(int) const;
	J3DGXColorS10 newTevColor(int, int) const;
	J3DGXColor newTevKColor(int, int) const;
	J3DTevOrder newTevOrder(int, int) const;
	J3DTevStage newTevStage(int, int) const;
	u8 newTevStageNum(int) const;
	J3DTevSwapModeTable newTevSwapModeTable(int, int) const;
	J3DTexCoord newTexCoord(int, int) const;
	u8 newTexGenNum(int) const;
	J3DTexMtx newTexMtx(int, int) const;
	u16 newTexNo(int, int) const;
	u8 newZCompLoc(int) const;
	J3DZMode newZMode(int) const;
	void modifyPatchedCurrentMtx(J3DMaterial*, int) const;

	/** @fabricated */
	// inline s32 getMaterialInitDataIndex(s32 initDataIndexIndex) const { return _08[initDataIndexIndex]; }
	inline J3DMaterialInitData& getMaterialInitData(s32 index) const { return mInitData[mMatRemapTable[index]]; }

	/** @fabricated */
	inline J3DIndInitData& getIndInitData(s32 index) const { return mIndInitData[index]; }

	// unused/inlined:
	// inline J3DMaterialInitData& getMaterialInitData(u16 initDataIndexIndex) const { return _04[_08[initDataIndexIndex]]; }
	// J3DMaterialInitData& getMaterialInitData(u16 initDataIndexIndex) const;

	u16 mMaterialNum;                               // _00
	J3DMaterialInitData* mInitData;                 // _04
	u16* mMatRemapTable;                            // _08
	J3DIndInitData* mIndInitData;                   // _0C
	GXColor* mColorData;                            // _10
	u8* mNumColorChans;                             // _14
	J3DColorChanInfo* mColorChanInfo;               // _18
	GXColor* mAmbientColors;                        // _1C
	J3DLightInfo* mLightInfo;                       // _20
	u8* mNumTexCoords;                              // _24
	J3DTexCoordInfo* mTexCoordInfo;                 // _28
	J3DTexCoord2Info* mTexCoord2Info;               // _2C
	J3DTexMtxInfo* mTexMtxInfo;                     // _30
	J3DTexMtxInfo* mTexMtxInfo2;                    // _34
	u16* mTextureRemapTable;                        // _38
	GXCullMode* mCullModeInfo;                      // _3C
	J3DTevOrderInfo* mTevOrderInfo;                 // _40
	GXColorS10* mTevColors;                         // _44
	GXColor* mTevKColors;                           // _48
	u8* mNumTevStages;                              // _4C
	J3DTevStageInfo* mTevStageInfo;                 // _50
	J3DTevSwapModeInfo* mTevSwapModeInfo;           // _54
	J3DTevSwapModeTableInfo* mTevSwapModeTableInfo; // _58
	J3DFogInfo* mFogInfo;                           // _5C
	J3DAlphaCompInfo* mAlphaCompInfo;               // _60
	J3DBlendInfo* mBlendInfo;                       // _64
	J3DZModeInfo* mZModeInfo;                       // _68
	u8* mZCompareInfo;                              // _6C
	u8* mDitherInfo;                                // _70
	J3DNBTScaleInfo* mNBTScaleInfo;                 // _74
	J3DDisplayListInit* mDisplayLists;              // _78
	J3DPatchingInfo* mPatchInfo;                    // _7C
	J3DCurrentMtxInfo* mCurrMtxInfo;                // _80
	u8* mPEModes;                                   // _84
};

/**
 * @size{0x138}
 */
struct J3DMaterialInitData_v21 {
	u8 mPixelEngineMode;            // _00
	u8 mCullModeIndex;              // _01
	u8 mNumberColorChanControls;    // _02
	u8 mNumTexGensIndex;            // _03
	u8 mNumTevStagesIndex;          // _04
	u8 mZCompLocIndex;              // _05
	u8 mZModeIndex;                 // _06
	u8 mDitherIndex;                // _07
	u16 mMatColorIndex[2];          // _08
	u16 mColorChanControlIndex[4];  // _0C
	u16 mTexGenInfoIndex[8];        // _14
	u16 mPostTexGenInfoIndex[8];    // _24
	u16 mTexMatrixIndex[10];        // _34
	u16 mPosTexMatrixIndex[20];     // _48
	u16 mTextureIndex[8];           // _70
	u16 mTevKColorIndex[4];         // _80
	u8 mTevKColorSels[16];          // _88
	u8 mTevKAlphaSels[16];          // _98
	u16 mTevOrderInfoIndex[16];     // _A8
	u16 mTevColorIndex[4];          // _C8
	u16 mTevStageInfoIndex[16];     // _D0
	u16 mTevSwapModeInfoIndex[16];  // _F0
	u16 mTevSwapModeTableIndex[16]; // _110
	u16 mFogInfoIndex;              // _130
	u16 mAlphaCompareIndex;         // _132
	u16 mBlendModeIndex;            // _134
	u16 mNBTScaleIndex;             // _136
};

struct J3DMaterialFactory_v21 {
	J3DMaterialFactory_v21(const J3DMaterialBlock_v21&);
	u16 countUniqueMaterials();
	J3DMaterial* create(J3DMaterial*, int, u32) const;
	J3DGXColor newMatColor(int, int) const;
	u8 newColorChanNum(int) const;
	J3DColorChan newColorChan(int, int) const;
	u8 newTexGenNum(int) const;
	J3DTexMtx newTexMtx(int, int) const;
	u16 newTexNo(int, int) const;
	u8 newZCompLoc(int) const;
	J3DZMode newZMode(int) const;
	void modifyPatchedCurrentMtx(J3DMaterial*, int) const;
	J3DTexCoord newTexCoord(int, int) const;
	u8 newCullMode(int) const;
	J3DTevOrder newTevOrder(int, int) const;
	J3DGXColorS10 newTevColor(int, int) const;
	J3DGXColor newTevKColor(int, int) const;
	u8 newTevStageNum(int) const;
	J3DTevStage newTevStage(int, int) const;
	J3DTevSwapModeTable newTevSwapModeTable(int, int) const;
	J3DFog newFog(int) const;
	J3DAlphaComp newAlphaComp(int) const;
	J3DBlend newBlend(int) const;
	u8 newDither(int) const;
	J3DNBTScale newNBTScale(int) const;

	J3DMaterialInitData_v21* getMatData(u16 i) const { return &mInitData[mMatRemapTable[i]]; }

	u16 mMaterialNum;                               // _00
	J3DMaterialInitData_v21* mInitData;             // _04
	u16* mMatRemapTable;                            // _08
	GXColor* mColorData;                            // _0C
	u8* mNumColorChans;                             // _10
	J3DColorChanInfo* mColorChanInfo;               // _14
	u8* mNumTexCoords;                              // _18
	J3DTexCoordInfo* mTexCoordInfo;                 // _1C
	J3DTexCoord2Info* mTexCoord2Info;               // _20
	J3DTexMtxInfo* mTexMtxInfo;                     // _24
	J3DTexMtxInfo* mTexMtxInfo2;                    // _28
	u16* mTextureRemapTable;                        // _2C
	GXCullMode* mCullModeInfo;                      // _30
	J3DTevOrderInfo* mTevOrderInfo;                 // _34
	GXColorS10* mTevColors;                         // _38
	GXColor* mTevKColors;                           // _3C
	u8* mNumTevStages;                              // _40
	J3DTevStageInfo* mTevStageInfo;                 // _44
	J3DTevSwapModeInfo* mTevSwapModeInfo;           // _48
	J3DTevSwapModeTableInfo* mTevSwapModeTableInfo; // _4C
	J3DFogInfo* mFogInfo;                           // _50
	J3DAlphaCompInfo* mAlphaCompInfo;               // _54
	J3DBlendInfo* mBlendInfo;                       // _58
	J3DZModeInfo* mZModeInfo;                       // _5C
	u8* mZCompareInfo;                              // _60
	u8* mDitherInfo;                                // _64
	J3DNBTScaleInfo* mNBTScaleInfo;                 // _68
	void* _6C;                                      // _6C
	void* _70;                                      // _70
	void* _74;                                      // _74
	void* _78;                                      // _78
	void* _7C;                                      // _7C
	void* _80;                                      // _80
	void* _84;                                      // _84
};

#endif
