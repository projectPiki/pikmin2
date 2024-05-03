#ifndef _JSYSTEM_J2D_J2DMATERIALFACTORY_H
#define _JSYSTEM_J2D_J2DMATERIALFACTORY_H

#include "JSystem/J2D/J2DMaterial.h"
#include "JSystem/J2D/J2DManage.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "types.h"

struct J2DIndInitData {
	u8 mUseData;                                      // _00
	u8 mIndTexStageNum;                               // _01
	u8 _02[2];                                        // _02
	J2DIndTexOrderInfo mIndTexOrderInfo[4];           // _04
	J2DIndTexMtxInfo mIndTexMtxInfo[3];               // _0C
	J2DIndTexCoordScaleInfo mIndTexCoordScaleInfo[4]; // _60
	J2DIndTevStageInfo mIndTevStageInfo[4];           // _68
	u8 _AC[0x90];                                     // _AC
};

/**
 * @size{0x68}
 */
struct J2DMaterialBlock {
	u8 _00[8];                   // _00, unknown
	u16 _08;                     // _08, connected to J2DMaterialFactory's _00
	u32 mMatInitDataOffset;      // _0C
	u32 mMatIndexTableOffset;    // _10
	u32 _14;                     // _14
	u32 mIndInitDataOffset;      // _18
	u32 mCullModeOffset;         // _1C
	u32 mMatColorOffset;         // _20
	u32 mColorChanNumOffset;     // _24
	u32 mColorChanInfoOffset;    // _28
	u32 mTexGenNumOffset;        // _2C
	u32 mTexCoordInfoOffset;     // _30
	u32 mTexMtxInfoOffset;       // _34
	u32 mTexNoOffset;            // _38
	u32 mFontNoOffset;           // _3C
	u32 mTevOrderInfoOffset;     // _40
	u32 mTevColorOffset;         // _44
	u32 mTevKColorOffset;        // _48
	u32 mTevStageNumOffset;      // _4C
	u32 mTevStageInfoOffset;     // _50
	u32 mTevSwapInfoOffset;      // _54
	u32 mTevSwapTableInfoOffset; // _58
	u32 mAlphaCompInfoOffset;    // _5C
	u32 mBlendInfoOffset;        // _60
	u32 mDitherOffset;           // _64
};

/**
 * @size{0xE8}
 */
struct J2DMaterialInitData {
	u8 mMode;                        // _00
	u8 mCullModeIdx;                 // _01
	u8 mColorChanIdx;                // _02
	u8 mTexGenIdx;                   // _03
	u8 mTevStageIdx;                 // _04
	u8 mDitherIdx;                   // _05
	u8 mAlphaCalc;                   // _06
	u16 mMatColorIdx[2];             // _08
	u16 mColorChanInfoIdx[4];        // _0C
	u16 mTexCoordIdx[8];             // _14
	u16 mTexMtxIdx[10];              // _24
	u16 mTexNoIdx[8];                // _38
	u16 mFontNoIdx;                  // _48
	u16 mTevKColorIdx[4];            // _4A
	u8 mTevKColorSel[16];            // _52
	u8 mTevKAlphaSel[16];            // _62
	u16 mTevOrderInfoIdx[16];        // _72
	u16 mTevColorIdx[4];             // _92
	u16 mTevStageInfoIdx[16];        // _9A
	u16 mTevSwapInfoIdx[16];         // _BA
	u16 mTevSwapModeTableInfoIdx[4]; // _DA
	u16 mAlphaCompInfoIdx;           // _E2
	u16 mBlendInfoIdx;               // _E4
	u16 _E6;                         // _E6, padding?
};

/**
 * @size{0x5C}
 */
struct J2DMaterialFactory {
	J2DMaterialFactory(J2DMaterialBlock const&);

	u32 countStages(int) const;
	J2DMaterial* create(J2DMaterial*, int, u32, J2DResReference*, J2DResReference*, JKRArchive*) const;
	JUtility::TColor newMatColor(int, int) const;
	u8 newColorChanNum(int) const;
	J2DColorChan newColorChan(int, int) const;
	u32 newTexGenNum(int) const;
	J2DTexCoord newTexCoord(int, int) const;
	J2DTexMtx* newTexMtx(int, int) const;
	u8 newCullMode(int) const;
	u16 newTexNo(int, int) const;
	u16 newFontNo(int) const;
	J2DTevOrder newTevOrder(int, int) const;
	J2DGXColorS10 newTevColor(int, int) const;
	JUtility::TColor newTevKColor(int, int) const;
	u8 newTevStageNum(int) const;
	J2DTevStage newTevStage(int, int) const;
	J2DTevSwapModeTable newTevSwapModeTable(int, int) const;
	u8 newIndTexStageNum(int) const;
	J2DIndTexOrder newIndTexOrder(int, int) const;
	J2DIndTexMtx newIndTexMtx(int, int) const;
	J2DIndTevStage newIndTevStage(int, int) const;
	J2DIndTexCoordScale newIndTexCoordScale(int, int) const;
	J2DAlphaComp newAlphaComp(int) const;
	J2DBlend newBlend(int) const;
	u8 newDither(int) const;

	u32 getMaterialMode(int idx) const { return mMaterialInitData[mMatIndexTable[idx]].mMode; }

	u8 getMaterialAlphaCalc(int idx) const { return mMaterialInitData[mMatIndexTable[idx]].mAlphaCalc; }

	u16 _00;                                    // _00
	J2DMaterialInitData* mMaterialInitData;     // _04
	u16* mMatIndexTable;                        // _08
	J2DIndInitData* mIndInitData;               // _0C
	GXColor* mMatColor;                         // _10
	u8* mColorChanNum;                          // _14
	J2DColorChanInfo* mColorChanInfo;           // _18
	u8* mTexGenNum;                             // _1C
	J2DTexCoordInfo* mTexCoordInfo;             // _20
	J2DTexMtxInfo* mTexMtxInfo;                 // _24
	u16* mTexNo;                                // _28
	u16* mFontNo;                               // _2C
	GXCullMode* mCullMode;                      // _30
	J2DTevOrderInfo* mTevOrderInfo;             // _34
	GXColorS10* mTevColor;                      // _38
	GXColor* mTevKColor;                        // _3C
	u8* mTevStageNum;                           // _40
	J2DTevStageInfo* mTevStageInfo;             // _44
	J2DTevSwapModeInfo* mTevSwapInfo;           // _48
	J2DTevSwapModeTableInfo* mTevSwapTableInfo; // _4C
	J2DAlphaCompInfo* mAlphaCompInfo;           // _50
	J2DBlendInfo* mBlendInfo;                   // _54
	u8* mDither;                                // _58
};

#endif
