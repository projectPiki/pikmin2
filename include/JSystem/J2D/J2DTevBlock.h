#ifndef _JSYSTEM_J2D_J2DTEVBLOCK_H
#define _JSYSTEM_J2D_J2DTEVBLOCK_H

#include "Dolphin/gx.h"
#include "JSystem/J2D/J2DGXColorS10.h"
#include "JSystem/J2D/J2DTypes.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/JUtility/JUTFont.h"
#include "JSystem/JUtility/JUTPalette.h"
#include "JSystem/JUtility/TColor.h"
#include "JSystem/ResTLUT.h"
#include "JSystem/ResTIMG.h"
#include "types.h"

struct J2DTevBlock {
	virtual void initialize() { }                                                   // _08 (weak)
	virtual void setGX() { }                                                        // _0C (weak)
	virtual void loadTexture(GXTexMapID, u32) { }                                   // _10 (weak)
	virtual u32 getType()     = 0;                                                  // _14
	virtual u32 getMaxStage() = 0;                                                  // _18
	virtual void setTexNo(u32 index, u16 texNo) { }                                 // _1C (weak)
	virtual u16 getTexNo(u32 index) const { return 0xFFFF; }                        // _20 (weak)
	virtual void setFontNo(u16 fontNo) { }                                          // _24 (weak)
	virtual u16 getFontNo() const { return 0xFFFF; }                                // _28 (weak)
	virtual void setTevOrder(u32 index, J2DTevOrder order) { }                      // _2C (weak)
	virtual J2DTevOrder* getTevOrder(u32 index) { return nullptr; }                 // _30 (weak)
	virtual void setTevColor(u32 index, J2DGXColorS10 color) { }                    // _34 (weak)
	virtual J2DGXColorS10* getTevColor(u32 index) { return nullptr; }               // _38 (weak)
	virtual void setTevKColor(u32 index, JUtility::TColor color) { }                // _3C (weak)
	virtual JUtility::TColor* getTevKColor(u32 index) { return nullptr; }           // _40 (weak)
	virtual void setTevKColorSel(u32 index, u8 sel) { }                             // _44 (weak)
	virtual u8 getTevKColorSel(u32 index) { return 0x0; }                           // _48 (weak)
	virtual void setTevKAlphaSel(u32 index, u8 sel) { }                             // _4C (weak)
	virtual u8 getTevKAlphaSel(u32 index) { return 0x0; }                           // _50 (weak)
	virtual void setTevStageNum(u8) { }                                             // _54 (weak)
	virtual u8 getTevStageNum() const { return 1; }                                 // _58 (weak)
	virtual void setTevStage(u32 index, J2DTevStage stage) { }                      // _5C (weak)
	virtual J2DTevStage* getTevStage(u32 index) { return nullptr; }                 // _60 (weak)
	virtual void setTevSwapModeInfo(u32 index, J2DTevSwapModeInfo info) { }         // _64 (weak)
	virtual void setTevSwapModeTable(u32 index, J2DTevSwapModeTable table) { }      // _68 (weak)
	virtual J2DTevSwapModeTable* getTevSwapModeTable(u32 index) { return nullptr; } // _6C (weak)
	virtual void setIndTevStage(u32 index, J2DIndTevStage stage) { }                // _70 (weak)
	virtual J2DIndTevStage* getIndTevStage(u32 index) { return nullptr; }           // _74 (weak)
	virtual bool insertTexture(u32 index, const ResTIMG* img) { return false; }     // _78 (weak)
	virtual bool insertTexture(u32, const ResTIMG*, JUTPalette*) { return false; }  // _7C (weak)
	virtual bool insertTexture(u32, JUTTexture*) { return false; }                  // _80 (weak)
	virtual bool setTexture(u32 index, const ResTIMG* img) { return false; }        // _84 (weak)
	virtual bool setTexture(u32 index, JUTTexture* texture) { return false; }       // _88 (weak)
	virtual bool removeTexture(u32) { return false; }                               // _8C (weak)
	virtual bool setFont(ResFONT* font) { return false; }                           // _90 (weak)
	virtual bool setFont(JUTFont* font) { return false; }                           // _94 (weak)
	virtual bool setPalette(u32 index, const ResTLUT* lut) { return false; }        // _98 (weak)
	virtual bool prepareTexture(u8 count) { return false; }                         // _9C (weak)
	virtual JUTTexture* getTexture(u32 index);                                      // _A0
	virtual JUTPalette* getPalette(u32 index);                                      // _A4
	virtual JUTFont* getFont() { return nullptr; }                                  // _A8 (weak)
	virtual void shiftDeleteFlag(u8, bool) { }                                      // _AC (weak)
	virtual void setUndeleteFlag(u8 flag) { }                                       // _B0 (weak)
	virtual void setFontUndeleteFlag() { }                                          // _B4 (weak)
	virtual ~J2DTevBlock() { }                                                      // _B8 (weak)

	// _00 VTBL
};

struct J2DTevBlock1 : public J2DTevBlock {
	J2DTevBlock1();

	virtual void initialize();                                                           // _08
	virtual void setGX();                                                                // _0C
	virtual void loadTexture(_GXTexMapID id, u32 index);                                 // _10
	virtual u32 getType() { return JBT_Tev1; }                                           // _14 (weak)
	virtual u32 getMaxStage() { return 0x1; }                                            // _18 (weak)
	virtual void setTexNo(u32 index, u16 texNo) { mTexIndices[index] = texNo; }          // _1C (weak)
	virtual u16 getTexNo(u32 index) const { return mTexIndices[index]; }                 // _20 (weak)
	virtual void setFontNo(u16 fontNo) { mFontNo = fontNo; }                             // _24 (weak)
	virtual u16 getFontNo() const { return mFontNo; }                                    // _28 (weak)
	virtual void setTevOrder(u32 index, J2DTevOrder order) { mOrders[index] = order; }   // _2C (weak)
	virtual J2DTevOrder* getTevOrder(u32 index) { return mOrders + index; }              // _30 (weak)
	virtual void setTevColor(u32 index, J2DGXColorS10 color) { mColors[index] = color; } // _34 (weak)
	virtual J2DGXColorS10* getTevColor(u32 index) { return mColors + index; }            // _38 (weak)
	virtual void setTevKColor(u32 index, JUtility::TColor color)
	{
		mKColors[index].r = color.r;
		mKColors[index].g = color.g;
		mKColors[index].b = color.b;
		mKColors[index].a = color.a;
	}                                                                                                                // _3C (weak)
	virtual JUtility::TColor* getTevKColor(u32 index) { return mKColors + index; }                                   // _40 (weak)
	virtual void setTevKColorSel(u32 index, u8 sel) { mKColorSels[index] = sel; }                                    // _44 (weak)
	virtual u8 getTevKColorSel(u32 index) { return mKColorSels[index]; }                                             // _48 (weak)
	virtual void setTevKAlphaSel(u32 index, u8 sel) { mKAlphaSels[index] = sel; }                                    // _4C (weak)
	virtual u8 getTevKAlphaSel(u32 index) { return mKAlphaSels[index]; }                                             // _50 (weak)
	virtual void setTevStageNum(u8 stageNum) { }                                                                     // _54 (weak)
	virtual u8 getTevStageNum() const { return 0x1; }                                                                // _58 (weak)
	virtual void setTevStage(u32 index, J2DTevStage stage) { mStages[index] = stage; }                               // _5C (weak)
	virtual J2DTevStage* getTevStage(u32 index) { return mStages + index; }                                          // _60 (weak)
	virtual void setTevSwapModeInfo(u32 index, J2DTevSwapModeInfo info) { mStages[index].setTevSwapModeInfo(info); } // _64 (weak)
	virtual void setTevSwapModeTable(u32 index, J2DTevSwapModeTable table) { mSwapModeTables[index] = table; }       // _68 (weak)
	virtual J2DTevSwapModeTable* getTevSwapModeTable(u32 index) { return mSwapModeTables + index; }                  // _6C (weak)
	virtual void setIndTevStage(u32 index, J2DIndTevStage stage) { mIndStages[index] = stage; }                      // _70 (weak)
	virtual J2DIndTevStage* getIndTevStage(u32 index) { return mIndStages + index; }                                 // _74 (weak)
	virtual bool insertTexture(u32 index, const ResTIMG* img) { return insertTexture(index, img, nullptr); }         // _78 (weak)
	virtual bool insertTexture(u32, const ResTIMG*, JUTPalette*);                                                    // _7C
	virtual bool insertTexture(u32, JUTTexture*);                                                                    // _80
	virtual bool setTexture(u32 index, const ResTIMG* img);                                                          // _84
	virtual bool setTexture(u32 index, JUTTexture* texture);                                                         // _88
	virtual bool removeTexture(u32);                                                                                 // _8C
	virtual bool setFont(ResFONT* font);                                                                             // _90
	virtual bool setFont(JUTFont* font);                                                                             // _94
	virtual bool setPalette(u32 index, const ResTLUT* lut);                                                          // _98
	virtual bool prepareTexture(u8 count);                                                                           // _9C
	virtual JUTTexture* getTexture(u32 index) { return (index >= 1) ? nullptr : mTextures[index]; }                  // _A0 (weak)
	virtual JUTPalette* getPalette(u32 index)                                                                        // _A4 (weak)
	{
		if (index >= 1) {
			return nullptr;
		}
		return mPalettes[index];
	}
	virtual JUTFont* getFont() { return mFont; }                     // _A8 (weak)
	virtual void shiftDeleteFlag(u8, bool);                          // _AC
	virtual void setUndeleteFlag(u8 flag) { mUndeleteFlag &= flag; } // _B0 (weak)
	virtual void setFontUndeleteFlag() { mUndeleteFlag &= 0x7F; }    // _B4 (weak)
	virtual ~J2DTevBlock1();                                         // _B8

	// _00 = VTBL
	u16 mTexIndices[1];                     // _04
	u16 mFontNo;                            // _06
	J2DTevOrder mOrders[1];                 // _08
	J2DGXColorS10 mColors[4];               // _0C
	J2DTevStage mStages[1];                 // _2C
	JUtility::TColor mKColors[4];           // _34
	u8 mKColorSels[1];                      // _44
	u8 mKAlphaSels[1];                      // _45
	J2DTevSwapModeTable mSwapModeTables[4]; // _46
	J2DIndTevStage mIndStages[1];           // _4C
	JUTTexture* mTextures[1];               // _50
	JUTPalette* mPalettes[1];               // _54
	JUTResFont* mFont;                      // _58
	u8 mUndeleteFlag;                       // _5C
};

struct J2DTevBlock2 : public J2DTevBlock {
	J2DTevBlock2();

	virtual void initialize();                                                           // _08
	virtual void setGX();                                                                // _0C
	virtual void loadTexture(_GXTexMapID id, u32 index);                                 // _10
	virtual u32 getType() { return JBT_Tev2; }                                           // _14 (weak)
	virtual u32 getMaxStage() { return 0x2; }                                            // _18 (weak)
	virtual void setTexNo(u32 index, u16 texNo) { mTexIndices[index] = texNo; }          // _1C (weak)
	virtual u16 getTexNo(u32 index) const { return mTexIndices[index]; }                 // _20 (weak)
	virtual void setFontNo(u16 fontNo) { mFontNo = fontNo; }                             // _24 (weak)
	virtual u16 getFontNo() const { return mFontNo; }                                    // _28 (weak)
	virtual void setTevOrder(u32 index, J2DTevOrder order) { mOrders[index] = order; }   // _2C (weak)
	virtual J2DTevOrder* getTevOrder(u32 index) { return mOrders + index; }              // _30 (weak)
	virtual void setTevColor(u32 index, J2DGXColorS10 color) { mColors[index] = color; } // _34 (weak)
	virtual J2DGXColorS10* getTevColor(u32 index) { return mColors + index; }            // _38 (weak)
	virtual void setTevKColor(u32 index, JUtility::TColor color)
	{
		mKColors[index].r = color.r;
		mKColors[index].g = color.g;
		mKColors[index].b = color.b;
		mKColors[index].a = color.a;
	}                                                                                                                // _3C (weak)
	virtual JUtility::TColor* getTevKColor(u32 index) { return mKColors + index; }                                   // _40 (weak)
	virtual void setTevKColorSel(u32 index, u8 sel) { mKColorSels[index] = sel; }                                    // _44 (weak)
	virtual u8 getTevKColorSel(u32 index) { return mKColorSels[index]; }                                             // _48 (weak)
	virtual void setTevKAlphaSel(u32 index, u8 sel) { mKAlphaSels[index] = sel; }                                    // _4C (weak)
	virtual u8 getTevKAlphaSel(u32 index) { return mKAlphaSels[index]; }                                             // _50 (weak)
	virtual void setTevStageNum(u8 stageNum) { mStageNum = stageNum; }                                               // _54 (weak)
	virtual u8 getTevStageNum() const { return mStageNum; }                                                          // _58 (weak)
	virtual void setTevStage(u32 index, J2DTevStage stage) { mStages[index] = stage; }                               // _5C (weak)
	virtual J2DTevStage* getTevStage(u32 index) { return mStages + index; }                                          // _60 (weak)
	virtual void setTevSwapModeInfo(u32 index, J2DTevSwapModeInfo info) { mStages[index].setTevSwapModeInfo(info); } // _64 (weak)
	virtual void setTevSwapModeTable(u32 index, J2DTevSwapModeTable table) { mSwapModeTables[index] = table; }       // _68 (weak)
	virtual J2DTevSwapModeTable* getTevSwapModeTable(u32 index) { return &mSwapModeTables[index]; }                  // _6C (weak)
	virtual void setIndTevStage(u32 index, J2DIndTevStage stage) { mIndStages[index] = stage; }                      // _70 (weak)
	virtual J2DIndTevStage* getIndTevStage(u32 index) { return mIndStages + index; }                                 // _74 (weak)
	virtual bool insertTexture(u32 index, const ResTIMG* img) { return insertTexture(index, img, nullptr); }         // _78 (weak)
	virtual bool insertTexture(u32, const ResTIMG*, JUTPalette*);                                                    // _7C
	virtual bool insertTexture(u32, JUTTexture*);                                                                    // _80
	virtual bool setTexture(u32 index, const ResTIMG* img);                                                          // _84
	virtual bool setTexture(u32 index, JUTTexture* texture);                                                         // _88
	virtual bool removeTexture(u32);                                                                                 // _8C
	virtual bool setFont(ResFONT* font);                                                                             // _90
	virtual bool setFont(JUTFont* font);                                                                             // _94
	virtual bool setPalette(u32 index, const ResTLUT* lut);                                                          // _98
	virtual bool prepareTexture(u8 count);                                                                           // _9C
	virtual JUTTexture* getTexture(u32 index) { return (index >= 2) ? nullptr : mTextures[index]; }                  // _A0 (weak)
	virtual JUTPalette* getPalette(u32 index)                                                                        // _A4 (weak)
	{
		if (index >= 2) {
			return nullptr;
		}
		return mPalettes[index];
	}
	virtual JUTFont* getFont() { return mFont; }                     // _A8 (weak)
	virtual void shiftDeleteFlag(u8, bool);                          // _AC
	virtual void setUndeleteFlag(u8 flag) { mUndeleteFlag &= flag; } // _B0 (weak)
	virtual void setFontUndeleteFlag() { mUndeleteFlag &= 0x7F; }    // _B4 (weak)
	virtual ~J2DTevBlock2();                                         // _B8

	// _00 = VTBL
	u16 mTexIndices[2];                     // _04
	u16 mFontNo;                            // _08
	J2DTevOrder mOrders[2];                 // _0A
	J2DGXColorS10 mColors[4];               // _12
	u8 mStageNum;                           // _32
	J2DTevStage mStages[2];                 // _33
	u8 __;                                  // ???
	JUtility::TColor mKColors[4];           // _44
	u8 mKColorSels[2];                      // _54
	u8 mKAlphaSels[2];                      // _56
	J2DTevSwapModeTable mSwapModeTables[4]; // _58
	J2DIndTevStage mIndStages[2];           // _5C
	JUTTexture* mTextures[2];               // _64
	JUTPalette* mPalettes[2];               // _6C
	JUTResFont* mFont;                      // _74
	u8 mUndeleteFlag;                       // _78
};

struct J2DTevBlock4 : J2DTevBlock {
	J2DTevBlock4();

	virtual void initialize();                                                           // _08
	virtual void setGX();                                                                // _0C
	virtual void loadTexture(_GXTexMapID id, u32 index);                                 // _10
	virtual u32 getType() { return JBT_Tev4; }                                           // _14 (weak)
	virtual u32 getMaxStage() { return 0x4; }                                            // _18 (weak)
	virtual void setTexNo(u32 index, u16 texNo) { mTexIndices[index] = texNo; }          // _1C (weak)
	virtual u16 getTexNo(u32 index) const { return mTexIndices[index]; }                 // _20 (weak)
	virtual void setFontNo(u16 fontNo) { mFontNo = fontNo; }                             // _24 (weak)
	virtual u16 getFontNo() const { return mFontNo; }                                    // _28 (weak)
	virtual void setTevOrder(u32 index, J2DTevOrder order) { mOrders[index] = order; }   // _2C (weak)
	virtual J2DTevOrder* getTevOrder(u32 index) { return mOrders + index; }              // _30 (weak)
	virtual void setTevColor(u32 index, J2DGXColorS10 color) { mColors[index] = color; } // _34 (weak)
	virtual J2DGXColorS10* getTevColor(u32 index) { return mColors + index; }            // _38 (weak)
	virtual void setTevKColor(u32 index, JUtility::TColor color)
	{
		mKColors[index].r = color.r;
		mKColors[index].g = color.g;
		mKColors[index].b = color.b;
		mKColors[index].a = color.a;
	}                                                                                                                // _3C (weak)
	virtual JUtility::TColor* getTevKColor(u32 index) { return mKColors + index; }                                   // _40 (weak)
	virtual void setTevKColorSel(u32 index, u8 sel) { mKColorSels[index] = sel; }                                    // _44 (weak)
	virtual u8 getTevKColorSel(u32 index) { return mKColorSels[index]; }                                             // _48 (weak)
	virtual void setTevKAlphaSel(u32 index, u8 sel) { mKAlphaSels[index] = sel; }                                    // _4C (weak)
	virtual u8 getTevKAlphaSel(u32 index) { return mKAlphaSels[index]; }                                             // _50 (weak)
	virtual void setTevStageNum(u8 stageNum) { mStageNum = stageNum; }                                               // _54 (weak)
	virtual u8 getTevStageNum() const { return mStageNum; }                                                          // _58 (weak)
	virtual void setTevStage(u32 index, J2DTevStage stage) { mStages[index] = stage; }                               // _5C (weak)
	virtual J2DTevStage* getTevStage(u32 index) { return mStages + index; }                                          // _60 (weak)
	virtual void setTevSwapModeInfo(u32 index, J2DTevSwapModeInfo info) { mStages[index].setTevSwapModeInfo(info); } // _64 (weak)
	virtual void setTevSwapModeTable(u32 index, J2DTevSwapModeTable table) { mSwapModeTables[index] = table; }       // _68 (weak)
	virtual J2DTevSwapModeTable* getTevSwapModeTable(u32 index) { return mSwapModeTables + index; }                  // _6C (weak)
	virtual void setIndTevStage(u32 index, J2DIndTevStage stage) { mIndStages[index] = stage; }                      // _70 (weak)
	virtual J2DIndTevStage* getIndTevStage(u32 index) { return mIndStages + index; }                                 // _74 (weak)
	virtual bool insertTexture(u32 index, const ResTIMG* img) { return insertTexture(index, img, nullptr); }         // _78 (weak)
	virtual bool insertTexture(u32, const ResTIMG*, JUTPalette*);                                                    // _7C
	virtual bool insertTexture(u32, JUTTexture*);                                                                    // _80
	virtual bool setTexture(u32 index, const ResTIMG* img);                                                          // _84
	virtual bool setTexture(u32 index, JUTTexture* texture);                                                         // _88
	virtual bool removeTexture(u32);                                                                                 // _8C
	virtual bool setFont(ResFONT* font);                                                                             // _90
	virtual bool setFont(JUTFont* font);                                                                             // _94
	virtual bool setPalette(u32 index, const ResTLUT* lut);                                                          // _98
	virtual bool prepareTexture(u8 count);                                                                           // _9C
	virtual JUTTexture* getTexture(u32 index) { return (index >= 4) ? nullptr : mTextures[index]; }                  // _A0 (weak)
	virtual JUTPalette* getPalette(u32 index)                                                                        // _A4 (weak)
	{
		if (index >= 4) {
			return nullptr;
		}
		return mPalettes[index];
	}
	virtual JUTFont* getFont() { return mFont; }                     // _A8 (weak)
	virtual void shiftDeleteFlag(u8, bool);                          // _AC
	virtual void setUndeleteFlag(u8 flag) { mUndeleteFlag &= flag; } // _B0 (weak)
	virtual void setFontUndeleteFlag() { mUndeleteFlag &= 0x7F; }    // _B4 (weak)
	virtual ~J2DTevBlock4();                                         // _B8

	// _00 = VTBL
	u16 mTexIndices[4];                     // _04
	u16 mFontNo;                            // _0C
	J2DTevOrder mOrders[4];                 // _0E
	J2DGXColorS10 mColors[4];               // _1E
	u8 mStageNum;                           // _3E
	J2DTevStage mStages[4];                 // _3F
	u8 __;                                  // ???
	JUtility::TColor mKColors[4];           // _60
	u8 mKColorSels[4];                      // _70
	u8 mKAlphaSels[4];                      // _74
	J2DTevSwapModeTable mSwapModeTables[4]; // _78
	J2DIndTevStage mIndStages[4];           // _7C
	JUTTexture* mTextures[4];               // _8C
	JUTPalette* mPalettes[4];               // _9C
	JUTResFont* mFont;                      // _AC
	u8 mUndeleteFlag;                       // _B0
};

struct J2DTevBlock8 : J2DTevBlock {
	J2DTevBlock8();

	virtual void initialize();                                                           // _08
	virtual void setGX();                                                                // _0C
	virtual void loadTexture(_GXTexMapID id, u32 index);                                 // _10
	virtual u32 getType() { return JBT_Tev8; }                                           // _14 (weak)
	virtual u32 getMaxStage() { return 0x8; }                                            // _18 (weak)
	virtual void setTexNo(u32 index, u16 texNo) { mTexIndices[index] = texNo; }          // _1C (weak)
	virtual u16 getTexNo(u32 index) const { return mTexIndices[index]; }                 // _20 (weak)
	virtual void setFontNo(u16 fontNo) { mFontNo = fontNo; }                             // _24 (weak)
	virtual u16 getFontNo() const { return mFontNo; }                                    // _28 (weak)
	virtual void setTevOrder(u32 index, J2DTevOrder order) { mOrders[index] = order; }   // _2C (weak)
	virtual J2DTevOrder* getTevOrder(u32 index) { return mOrders + index; }              // _30 (weak)
	virtual void setTevColor(u32 index, J2DGXColorS10 color) { mColors[index] = color; } // _34 (weak)
	virtual J2DGXColorS10* getTevColor(u32 index) { return mColors + index; }            // _38 (weak)
	virtual void setTevKColor(u32 index, JUtility::TColor color)
	{
		mKColors[index].r = color.r;
		mKColors[index].g = color.g;
		mKColors[index].b = color.b;
		mKColors[index].a = color.a;
	}                                                                                                                // _3C (weak)
	virtual JUtility::TColor* getTevKColor(u32 index) { return mKColors + index; }                                   // _40 (weak)
	virtual void setTevKColorSel(u32 index, u8 sel) { mKColorSels[index] = sel; }                                    // _44 (weak)
	virtual u8 getTevKColorSel(u32 index) { return mKColorSels[index]; }                                             // _48 (weak)
	virtual void setTevKAlphaSel(u32 index, u8 sel) { mKAlphaSels[index] = sel; }                                    // _4C (weak)
	virtual u8 getTevKAlphaSel(u32 index) { return mKAlphaSels[index]; }                                             // _50 (weak)
	virtual void setTevStageNum(u8 stageNum) { mStageNum = stageNum; }                                               // _54 (weak)
	virtual u8 getTevStageNum() const { return mStageNum; }                                                          // _58 (weak)
	virtual void setTevStage(u32 index, J2DTevStage stage) { mStages[index] = stage; }                               // _5C (weak)
	virtual J2DTevStage* getTevStage(u32 index) { return mStages + index; }                                          // _60 (weak)
	virtual void setTevSwapModeInfo(u32 index, J2DTevSwapModeInfo info) { mStages[index].setTevSwapModeInfo(info); } // _64 (weak)
	virtual void setTevSwapModeTable(u32 index, J2DTevSwapModeTable table) { mSwapModeTables[index] = table; }       // _68 (weak)
	virtual J2DTevSwapModeTable* getTevSwapModeTable(u32 index) { return mSwapModeTables + index; }                  // _6C (weak)
	virtual void setIndTevStage(u32 index, J2DIndTevStage stage) { mIndStages[index] = stage; }                      // _70 (weak)
	virtual J2DIndTevStage* getIndTevStage(u32 index) { return mIndStages + index; }                                 // _74 (weak)
	virtual bool insertTexture(u32 index, const ResTIMG* img) { return insertTexture(index, img, nullptr); }         // _78 (weak)
	virtual bool insertTexture(u32, const ResTIMG*, JUTPalette*);                                                    // _7C
	virtual bool insertTexture(u32, JUTTexture*);                                                                    // _80
	virtual bool setTexture(u32 index, const ResTIMG* img);                                                          // _84
	virtual bool setTexture(u32 index, JUTTexture* texture);                                                         // _88
	virtual bool removeTexture(u32);                                                                                 // _8C
	virtual bool setFont(ResFONT* font);                                                                             // _90
	virtual bool setFont(JUTFont* font);                                                                             // _94
	virtual bool setPalette(u32 index, const ResTLUT* lut);                                                          // _98
	virtual bool prepareTexture(u8 count);                                                                           // _9C
	virtual JUTTexture* getTexture(u32 index) { return (index >= 8) ? nullptr : mTextures[index]; }                  // _A0 (weak)
	virtual JUTPalette* getPalette(u32 index)                                                                        // _A4 (weak)
	{
		if (index >= 8) {
			return nullptr;
		}
		return mPalettes[index];
	}
	virtual JUTFont* getFont() { return mFont; }                     // _A8 (weak)
	virtual void shiftDeleteFlag(u8, bool);                          // _AC
	virtual void setUndeleteFlag(u8 flag) { mUndeleteFlag &= flag; } // _B0 (weak)
	virtual void setFontUndeleteFlag() { mFontUndeleteFlag = 0; }    // _B4 (weak)
	virtual ~J2DTevBlock8();                                         // _B8

	// _00 = VTBL
	u16 mTexIndices[8];                     // _04
	u16 mFontNo;                            // _14
	J2DTevOrder mOrders[8];                 // _16
	J2DGXColorS10 mColors[4];               // _36
	u8 mStageNum;                           // _56
	J2DTevStage mStages[8];                 // _57
	u8 __;                                  // ???
	JUtility::TColor mKColors[4];           // _98
	u8 mKColorSels[8];                      // _A8
	u8 mKAlphaSels[8];                      // _B0
	J2DTevSwapModeTable mSwapModeTables[4]; // _B8
	J2DIndTevStage mIndStages[8];           // _BC
	JUTTexture* mTextures[8];               // _DC
	JUTPalette* mPalettes[8];               // _FC
	JUTResFont* mFont;                      // _11C
	u8 mUndeleteFlag;                       // _120
	u8 mFontUndeleteFlag;                   // _121
};

struct J2DTevBlock16 : J2DTevBlock {
	J2DTevBlock16();

	virtual void initialize();                                                           // _08
	virtual void setGX();                                                                // _0C
	virtual void loadTexture(_GXTexMapID id, u32 index);                                 // _10
	virtual u32 getType() { return JBT_Tev16; }                                          // _14 (weak)
	virtual u32 getMaxStage() { return 0x10; }                                           // _18 (weak)
	virtual void setTexNo(u32 index, u16 texNo) { mTexIndices[index] = texNo; }          // _1C (weak)
	virtual u16 getTexNo(u32 index) const { return mTexIndices[index]; }                 // _20 (weak)
	virtual void setFontNo(u16 fontNo) { mFontNo = fontNo; }                             // _24 (weak)
	virtual u16 getFontNo() const { return mFontNo; }                                    // _28 (weak)
	virtual void setTevOrder(u32 index, J2DTevOrder order) { mOrders[index] = order; }   // _2C (weak)
	virtual J2DTevOrder* getTevOrder(u32 index) { return mOrders + index; }              // _30 (weak)
	virtual void setTevColor(u32 index, J2DGXColorS10 color) { mColors[index] = color; } // _34 (weak)
	virtual J2DGXColorS10* getTevColor(u32 index) { return mColors + index; }            // _38 (weak)
	virtual void setTevKColor(u32 index, JUtility::TColor color)
	{
		mKColors[index].r = color.r;
		mKColors[index].g = color.g;
		mKColors[index].b = color.b;
		mKColors[index].a = color.a;
	}                                                                                                                // _3C (weak)
	virtual JUtility::TColor* getTevKColor(u32 index) { return mKColors + index; }                                   // _40 (weak)
	virtual void setTevKColorSel(u32 index, u8 sel) { mKColorSels[index] = sel; }                                    // _44 (weak)
	virtual u8 getTevKColorSel(u32 index) { return mKColorSels[index]; }                                             // _48 (weak)
	virtual void setTevKAlphaSel(u32 index, u8 sel) { mKAlphaSels[index] = sel; }                                    // _4C (weak)
	virtual u8 getTevKAlphaSel(u32 index) { return mKAlphaSels[index]; }                                             // _50 (weak)
	virtual void setTevStageNum(u8 stageNum) { mStageNum = stageNum; }                                               // _54 (weak)
	virtual u8 getTevStageNum() const { return mStageNum; }                                                          // _58 (weak)
	virtual void setTevStage(u32 index, J2DTevStage stage) { mStages[index] = stage; }                               // _5C (weak)
	virtual J2DTevStage* getTevStage(u32 index) { return mStages + index; }                                          // _60 (weak)
	virtual void setTevSwapModeInfo(u32 index, J2DTevSwapModeInfo info) { mStages[index].setTevSwapModeInfo(info); } // _64 (weak)
	virtual void setTevSwapModeTable(u32 index, J2DTevSwapModeTable table) { mSwapModeTables[index] = table; }       // _68 (weak)
	virtual J2DTevSwapModeTable* getTevSwapModeTable(u32 index) { return mSwapModeTables + index; }                  // _6C (weak)
	virtual void setIndTevStage(u32 index, J2DIndTevStage stage) { mIndStages[index] = stage; }                      // _70 (weak)
	virtual J2DIndTevStage* getIndTevStage(u32 index) { return mIndStages + index; }                                 // _74 (weak)
	virtual bool insertTexture(u32 index, const ResTIMG* img) { return insertTexture(index, img, nullptr); }         // _78 (weak)
	virtual bool insertTexture(u32, const ResTIMG*, JUTPalette*);                                                    // _7C
	virtual bool insertTexture(u32, JUTTexture*);                                                                    // _80
	virtual bool setTexture(u32 index, const ResTIMG* img);                                                          // _84
	virtual bool setTexture(u32 index, JUTTexture* texture);                                                         // _88
	virtual bool removeTexture(u32);                                                                                 // _8C
	virtual bool setFont(ResFONT* font);                                                                             // _90
	virtual bool setFont(JUTFont* font);                                                                             // _94
	virtual bool setPalette(u32 index, const ResTLUT* lut);                                                          // _98
	virtual bool prepareTexture(u8 count);                                                                           // _9C
	virtual JUTTexture* getTexture(u32 index) { return (index >= 8) ? nullptr : mTextures[index]; }                  // _A0 (weak)
	virtual JUTPalette* getPalette(u32 index)                                                                        // _A4 (weak)
	{
		if (index >= 8) {
			return nullptr;
		}
		return mPalettes[index];
	}
	virtual JUTFont* getFont() { return mFont; }                      // _A8 (weak)
	virtual void shiftDeleteFlag(u8, bool);                           // _AC
	virtual void setUndeleteFlag(u8 flag) { mUndeleteFlag &= flag; }; // _B0 (weak)
	virtual void setFontUndeleteFlag() { mFontUndeleteFlag = 0; }     // _B4 (weak)
	virtual ~J2DTevBlock16();                                         // _B8

	// _00 = VTBL
	u16 mTexIndices[8];                     // _04
	u16 mFontNo;                            // _14
	J2DTevOrder mOrders[16];                // _16
	J2DGXColorS10 mColors[4];               // _56
	u8 mStageNum;                           // _76
	J2DTevStage mStages[16];                // _77
	u8 __;                                  // ???
	JUtility::TColor mKColors[4];           // _F8
	u8 mKColorSels[16];                     // _108
	u8 mKAlphaSels[16];                     // _118
	J2DTevSwapModeTable mSwapModeTables[4]; // _128
	J2DIndTevStage mIndStages[16];          // _12C
	JUTTexture* mTextures[8];               // _16C
	JUTPalette* mPalettes[8];               // _18C
	JUTResFont* mFont;                      // _1AC
	u8 mUndeleteFlag;                       // _1B0
	u8 mFontUndeleteFlag;                   // _1B1
};

#endif
