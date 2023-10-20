#ifndef _JSYSTEM_J2D_J2DMATERIALFACTORY_H
#define _JSYSTEM_J2D_J2DMATERIALFACTORY_H

#include "JSystem/J2D/J2DMaterial.h"
#include "JSystem/J2D/J2DManage.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "types.h"

struct J2DIndInitData;

/**
 * @size{0x68}
 */
struct J2DMaterialBlock {
	u8 _00[8];    // _00, unknown
	s16 _08;      // _08
	u8 _0A[6];    // _0A, unknown
	int _14;      // _14
	u8 _18[0x50]; // _18, unknown
};

/**
 * @size{0xE8}
 */
struct J2DMaterialInitData {
	u8 _00[4];       // _00, unknown
	u8 mTevStageNum; // _04
	u8 _05;          // _05, unknown
	u8 _06;          // _06
	u8 _07;          // _07, unknown
	u8 _08[0xE0];    // _08, unknown
};

/**
 * @size{0x5C}
 */
struct J2DMaterialFactory {
	J2DMaterialFactory(J2DMaterialBlock const&);

	void countStages(int) const;
	void create(J2DMaterial*, int, u32, J2DResReference*, J2DResReference*, JKRArchive*) const;
	JUtility::TColor newMatColor(int, int) const;
	void newColorChanNum(int) const;
	void newColorChan(int, int) const;
	void newTexGenNum(int) const;
	void newTexCoord(int, int) const;
	void newTexMtx(int, int) const;
	void newCullMode(int) const;
	void newTexNo(int, int) const;
	void newFontNo(int) const;
	void newTevOrder(int, int) const;
	void newTevColor(int, int) const;
	void newTevKColor(int, int) const;
	void newTevStageNum(int) const;
	void newTevStage(int, int) const;
	void newTevSwapModeTable(int, int) const;
	void newIndTexStageNum(int) const;
	void newIndTexOrder(int, int) const;
	void newIndTexMtx(int, int) const;
	void newIndTevStage(int, int) const;
	void newIndTexCoordScale(int, int) const;
	void newAlphaComp(int) const;
	void newBlend(int) const;
	void newDither(int) const;

	// _00 = VTBL
	int _00;                                    // _00
	J2DMaterialInitData* mMaterialInitData;     // _04
	u16* _08;                                   // _08
	J2DIndInitData* mIndInitData;               // _0C
	GXColor* _10;                               // _10
	u8* _14;                                    // _14
	J2DColorChanInfo* mColorChanInfo;           // _18
	u8* _1C;                                    // _1C
	J2DTexCoordInfo* mTexCoordInfo;             // _20
	J2DTexMtxInfo* mTexMtxInfo;                 // _24
	u16* _28;                                   // _28
	u16* _2C;                                   // _2C
	u8* mCullMode;                              // _30
	J2DTevOrderInfo* mTevOrderInfo;             // _34
	GXColorS10* _38;                            // _38
	GXColor* _3C;                               // _3C
	u8* _40;                                    // _40
	J2DTevStageInfo* mTevStageInfo;             // _44
	J2DTevSwapModeInfo* mTevSwapInfo;           // _48
	J2DTevSwapModeTableInfo* mTevSwapTableInfo; // _4C
	J2DAlphaCompInfo* mAlphaCompInfo;           // _50
	J2DBlendInfo* mBlendInfo;                   // _54
	u8* _58;                                    // _58
};

#endif
