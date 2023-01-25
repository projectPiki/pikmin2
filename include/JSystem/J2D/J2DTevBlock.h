#ifndef _JSYSTEM_J2D_J2DTEVBLOCK_H
#define _JSYSTEM_J2D_J2DTEVBLOCK_H

#include "Dolphin/gx.h"
#include "JSystem/J2D/J2DGXColorS10.h"
#include "JSystem/J2D/J2DTypes.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/JUT/JUTFont.h"
#include "JSystem/JUT/JUTPalette.h"
#include "JSystem/JUT/TColor.h"
#include "JSystem/ResTLUT.h"
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

	virtual void initialize();                                                                                  // _08
	virtual void setGX();                                                                                       // _0C
	virtual void loadTexture(_GXTexMapID id, u32 index);                                                        // _10
	virtual u32 getType() { return JBT_Tev1; }                                                                  // _14 (weak)
	virtual u32 getMaxStage() { return 0x1; }                                                                   // _18 (weak)
	virtual void setTexNo(u32 index, u16 texNo) { m_texIndices[index] = texNo; }                                // _1C (weak)
	virtual u16 getTexNo(u32 index) const { return m_texIndices[index]; }                                       // _20 (weak)
	virtual void setFontNo(u16 fontNo) { m_fontNo = fontNo; }                                                   // _24 (weak)
	virtual u16 getFontNo() const { return m_fontNo; }                                                          // _28 (weak)
	virtual void setTevOrder(u32 index, J2DTevOrder order) { m_orders[index] = order; }                         // _2C (weak)
	virtual J2DTevOrder* getTevOrder(u32 index) { return m_orders + index; }                                    // _30 (weak)
	virtual void setTevColor(u32 index, J2DGXColorS10 color) { m_colors[index] = color; }                       // _34 (weak)
	virtual J2DGXColorS10* getTevColor(u32 index) { return m_colors + index; }                                  // _38 (weak)
	virtual void setTevKColor(u32 index, JUtility::TColor color);                                               // _3C (weak)
	virtual JUtility::TColor* getTevKColor(u32 index) { return m_kColors + index; }                             // _40 (weak)
	virtual void setTevKColorSel(u32 index, u8 sel) { m_kColorSels[index] = sel; }                              // _44 (weak)
	virtual u8 getTevKColorSel(u32 index) { return m_kColorSels[index]; }                                       // _48 (weak)
	virtual void setTevKAlphaSel(u32 index, u8 sel) { m_kAlphaSels[index] = sel; }                              // _4C (weak)
	virtual u8 getTevKAlphaSel(u32 index) { return m_kAlphaSels[index]; }                                       // _50 (weak)
	virtual void setTevStageNum(u8 stageNum) { }                                                                // _54 (weak)
	virtual u8 getTevStageNum() const { return 0x1; }                                                           // _58 (weak)
	virtual void setTevStage(u32 index, J2DTevStage stage) { m_stages[index] = stage; }                         // _5C (weak)
	virtual J2DTevStage* getTevStage(u32 index) { return m_stages + index; }                                    // _60 (weak)
	virtual void setTevSwapModeInfo(u32 index, J2DTevSwapModeInfo info);                                        // _64 (weak)
	virtual void setTevSwapModeTable(u32 index, J2DTevSwapModeTable table) { m_swapModeTables[index] = table; } // _68 (weak)
	virtual J2DTevSwapModeTable* getTevSwapModeTable(u32 index) { return m_swapModeTables + index; }            // _6C (weak)
	virtual void setIndTevStage(u32 index, J2DIndTevStage stage) { m_indStages[index] = stage; }                // _70 (weak)
	virtual J2DIndTevStage* getIndTevStage(u32 index) { return m_indStages + index; }                           // _74 (weak)
	virtual bool insertTexture(u32 index, const ResTIMG* img) { return insertTexture(index, img, nullptr); }    // _78 (weak)
	virtual bool insertTexture(u32, const ResTIMG*, JUTPalette*);                                               // _7C
	virtual bool insertTexture(u32, JUTTexture*);                                                               // _80
	virtual bool setTexture(u32 index, const ResTIMG* img);                                                     // _84
	virtual bool setTexture(u32 index, JUTTexture* texture);                                                    // _88
	virtual bool removeTexture(u32);                                                                            // _8C
	virtual bool setFont(ResFONT* font);                                                                        // _90
	virtual bool setFont(JUTFont* font);                                                                        // _94
	virtual bool setPalette(u32 index, const ResTLUT* lut);                                                     // _98
	virtual bool prepareTexture(u8 count);                                                                      // _9C
	virtual JUTTexture* getTexture(u32 index) { return (index >= 1) ? nullptr : m_textures[index]; }            // _A0 (weak)
	virtual JUTPalette* getPalette(u32 index)                                                                   // _A4 (weak)
	{
		if (index >= 1) {
			return nullptr;
		}
		return m_palettes[index];
	}
	virtual JUTFont* getFont() { return m_font; }                     // _A8 (weak)
	virtual void shiftDeleteFlag(u8, bool);                           // _AC
	virtual void setUndeleteFlag(u8 flag) { m_undeleteFlag &= flag; } // _B0 (weak)
	virtual void setFontUndeleteFlag() { m_undeleteFlag &= 0x7F; }    // _B4 (weak)
	virtual ~J2DTevBlock1();                                          // _B8

	// _00 = VTBL
	u16 m_texIndices[1];                     // _04
	u16 m_fontNo;                            // _06
	J2DTevOrder m_orders[1];                 // _08
	J2DGXColorS10 m_colors[4];               // _0C
	J2DTevStage m_stages[1];                 // _2C
	JUtility::TColor m_kColors[4];           // _34
	u8 m_kColorSels[1];                      // _44
	u8 m_kAlphaSels[1];                      // _45
	J2DTevSwapModeTable m_swapModeTables[4]; // _46
	J2DIndTevStage m_indStages[1];           // _4C
	JUTTexture* m_textures[1];               // _50
	JUTPalette* m_palettes[1];               // _54
	JUTResFont* m_font;                      // _58
	u8 m_undeleteFlag;                       // _5C
};

struct J2DTevBlock2 : public J2DTevBlock {
	J2DTevBlock2();

	virtual void initialize();                                                                                  // _08
	virtual void setGX();                                                                                       // _0C
	virtual void loadTexture(_GXTexMapID id, u32 index);                                                        // _10
	virtual u32 getType() { return JBT_Tev2; }                                                                  // _14 (weak)
	virtual u32 getMaxStage() { return 0x2; }                                                                   // _18 (weak)
	virtual void setTexNo(u32 index, u16 texNo) { m_texIndices[index] = texNo; }                                // _1C (weak)
	virtual u16 getTexNo(u32 index) const { return m_texIndices[index]; }                                       // _20 (weak)
	virtual void setFontNo(u16 fontNo) { m_fontNo = fontNo; }                                                   // _24 (weak)
	virtual u16 getFontNo() const { return m_fontNo; }                                                          // _28 (weak)
	virtual void setTevOrder(u32 index, J2DTevOrder order) { m_orders[index] = order; }                         // _2C (weak)
	virtual J2DTevOrder* getTevOrder(u32 index) { return m_orders + index; }                                    // _30 (weak)
	virtual void setTevColor(u32 index, J2DGXColorS10 color) { m_colors[index] = color; }                       // _34 (weak)
	virtual J2DGXColorS10* getTevColor(u32 index) { return m_colors + index; }                                  // _38 (weak)
	virtual void setTevKColor(u32 index, JUtility::TColor color);                                               // _3C (weak)
	virtual JUtility::TColor* getTevKColor(u32 index) { return m_kColors + index; }                             // _40 (weak)
	virtual void setTevKColorSel(u32 index, u8 sel) { m_kColorSels[index] = sel; }                              // _44 (weak)
	virtual u8 getTevKColorSel(u32 index) { return m_kColorSels[index]; }                                       // _48 (weak)
	virtual void setTevKAlphaSel(u32 index, u8 sel) { m_kAlphaSels[index] = sel; }                              // _4C (weak)
	virtual u8 getTevKAlphaSel(u32 index) { return m_kAlphaSels[index]; }                                       // _50 (weak)
	virtual void setTevStageNum(u8 stageNum) { m_stageNum = stageNum; }                                         // _54 (weak)
	virtual u8 getTevStageNum() const { return m_stageNum; }                                                    // _58 (weak)
	virtual void setTevStage(u32 index, J2DTevStage stage) { m_stages[index] = stage; }                         // _5C (weak)
	virtual J2DTevStage* getTevStage(u32 index) { return m_stages + index; }                                    // _60 (weak)
	virtual void setTevSwapModeInfo(u32 index, J2DTevSwapModeInfo info);                                        // _64 (weak)
	virtual void setTevSwapModeTable(u32 index, J2DTevSwapModeTable table) { m_swapModeTables[index] = table; } // _68 (weak)
	virtual J2DTevSwapModeTable* getTevSwapModeTable(u32 index) { return m_swapModeTables + index; }            // _6C (weak)
	virtual void setIndTevStage(u32 index, J2DIndTevStage stage) { m_indStages[index] = stage; }                // _70 (weak)
	virtual J2DIndTevStage* getIndTevStage(u32 index) { return m_indStages + index; }                           // _74 (weak)
	virtual bool insertTexture(u32 index, const ResTIMG* img) { return insertTexture(index, img, nullptr); }    // _78 (weak)
	virtual bool insertTexture(u32, const ResTIMG*, JUTPalette*);                                               // _7C
	virtual bool insertTexture(u32, JUTTexture*);                                                               // _80
	virtual bool setTexture(u32 index, const ResTIMG* img);                                                     // _84
	virtual bool setTexture(u32 index, JUTTexture* texture);                                                    // _88
	virtual bool removeTexture(u32);                                                                            // _8C
	virtual bool setFont(ResFONT* font);                                                                        // _90
	virtual bool setFont(JUTFont* font);                                                                        // _94
	virtual bool setPalette(u32 index, const ResTLUT* lut);                                                     // _98
	virtual bool prepareTexture(u8 count);                                                                      // _9C
	virtual JUTTexture* getTexture(u32 index) { return (index >= 2) ? nullptr : m_textures[index]; }            // _A0 (weak)
	virtual JUTPalette* getPalette(u32 index)                                                                   // _A4 (weak)
	{
		if (index >= 2) {
			return nullptr;
		}
		return m_palettes[index];
	}
	virtual JUTFont* getFont() { return m_font; }                     // _A8 (weak)
	virtual void shiftDeleteFlag(u8, bool);                           // _AC
	virtual void setUndeleteFlag(u8 flag) { m_undeleteFlag &= flag; } // _B0 (weak)
	virtual void setFontUndeleteFlag() { m_undeleteFlag &= 0x7F; }    // _B4 (weak)
	virtual ~J2DTevBlock2();                                          // _B8

	// _00 = VTBL
	u16 m_texIndices[2];                     // _04
	u16 m_fontNo;                            // _08
	J2DTevOrder m_orders[2];                 // _0A
	J2DGXColorS10 m_colors[4];               // _12
	u8 m_stageNum;                           // _32
	J2DTevStage m_stages[2];                 // _33
	JUtility::TColor m_kColors[4];           // _44
	u8 m_kColorSels[2];                      // _54
	u8 m_kAlphaSels[2];                      // _56
	J2DTevSwapModeTable m_swapModeTables[4]; // _58
	J2DIndTevStage m_indStages[2];           // _5C
	JUTTexture* m_textures[2];               // _64
	JUTPalette* m_palettes[2];               // _6C
	JUTResFont* m_font;                      // _74
	u8 m_undeleteFlag;                       // _78
};

struct J2DTevBlock4 : J2DTevBlock {
	J2DTevBlock4();

	virtual void initialize();                                                                                  // _08
	virtual void setGX();                                                                                       // _0C
	virtual void loadTexture(_GXTexMapID id, u32 index);                                                        // _10
	virtual u32 getType() { return JBT_Tev4; }                                                                  // _14 (weak)
	virtual u32 getMaxStage() { return 0x4; }                                                                   // _18 (weak)
	virtual void setTexNo(u32 index, u16 texNo) { m_texIndices[index] = texNo; }                                // _1C (weak)
	virtual u16 getTexNo(u32 index) const { return m_texIndices[index]; }                                       // _20 (weak)
	virtual void setFontNo(u16 fontNo) { m_fontNo = fontNo; }                                                   // _24 (weak)
	virtual u16 getFontNo() const { return m_fontNo; }                                                          // _28 (weak)
	virtual void setTevOrder(u32 index, J2DTevOrder order) { m_orders[index] = order; }                         // _2C (weak)
	virtual J2DTevOrder* getTevOrder(u32 index) { return m_orders + index; }                                    // _30 (weak)
	virtual void setTevColor(u32 index, J2DGXColorS10 color) { m_colors[index] = color; }                       // _34 (weak)
	virtual J2DGXColorS10* getTevColor(u32 index) { return m_colors + index; }                                  // _38 (weak)
	virtual void setTevKColor(u32 index, JUtility::TColor color);                                               // _3C (weak)
	virtual JUtility::TColor* getTevKColor(u32 index) { return m_kColors + index; }                             // _40 (weak)
	virtual void setTevKColorSel(u32 index, u8 sel) { m_kColorSels[index] = sel; }                              // _44 (weak)
	virtual u8 getTevKColorSel(u32 index) { return m_kColorSels[index]; }                                       // _48 (weak)
	virtual void setTevKAlphaSel(u32 index, u8 sel) { m_kAlphaSels[index] = sel; }                              // _4C (weak)
	virtual u8 getTevKAlphaSel(u32 index) { return m_kAlphaSels[index]; }                                       // _50 (weak)
	virtual void setTevStageNum(u8 stageNum) { m_stageNum = stageNum; }                                         // _54 (weak)
	virtual u8 getTevStageNum() const { return m_stageNum; }                                                    // _58 (weak)
	virtual void setTevStage(u32 index, J2DTevStage stage) { m_stages[index] = stage; }                         // _5C (weak)
	virtual J2DTevStage* getTevStage(u32 index) { return m_stages + index; }                                    // _60 (weak)
	virtual void setTevSwapModeInfo(u32 index, J2DTevSwapModeInfo info);                                        // _64 (weak)
	virtual void setTevSwapModeTable(u32 index, J2DTevSwapModeTable table) { m_swapModeTables[index] = table; } // _68 (weak)
	virtual J2DTevSwapModeTable* getTevSwapModeTable(u32 index) { return m_swapModeTables + index; }            // _6C (weak)
	virtual void setIndTevStage(u32 index, J2DIndTevStage stage) { m_indStages[index] = stage; }                // _70 (weak)
	virtual J2DIndTevStage* getIndTevStage(u32 index) { return m_indStages + index; }                           // _74 (weak)
	virtual bool insertTexture(u32 index, const ResTIMG* img) { return insertTexture(index, img, nullptr); }    // _78 (weak)
	virtual bool insertTexture(u32, const ResTIMG*, JUTPalette*);                                               // _7C
	virtual bool insertTexture(u32, JUTTexture*);                                                               // _80
	virtual bool setTexture(u32 index, const ResTIMG* img);                                                     // _84
	virtual bool setTexture(u32 index, JUTTexture* texture);                                                    // _88
	virtual bool removeTexture(u32);                                                                            // _8C
	virtual bool setFont(ResFONT* font);                                                                        // _90
	virtual bool setFont(JUTFont* font);                                                                        // _94
	virtual bool setPalette(u32 index, const ResTLUT* lut);                                                     // _98
	virtual bool prepareTexture(u8 count);                                                                      // _9C
	virtual JUTTexture* getTexture(u32 index) { return (index >= 4) ? nullptr : m_textures[index]; }            // _A0 (weak)
	virtual JUTPalette* getPalette(u32 index)                                                                   // _A4 (weak)
	{
		if (index >= 4) {
			return nullptr;
		}
		return m_palettes[index];
	}
	virtual JUTFont* getFont() { return m_font; }                     // _A8 (weak)
	virtual void shiftDeleteFlag(u8, bool);                           // _AC
	virtual void setUndeleteFlag(u8 flag) { m_undeleteFlag &= flag; } // _B0 (weak)
	virtual void setFontUndeleteFlag() { m_undeleteFlag &= 0x7F; }    // _B4 (weak)
	virtual ~J2DTevBlock4();                                          // _B8

	// _00 = VTBL
	u16 m_texIndices[4];                     // _04
	u16 m_fontNo;                            // _0C
	J2DTevOrder m_orders[4];                 // _0E
	J2DGXColorS10 m_colors[4];               // _1E
	u8 m_stageNum;                           // _3E
	J2DTevStage m_stages[4];                 // _3F
	JUtility::TColor m_kColors[4];           // _60
	u8 m_kColorSels[4];                      // _70
	u8 m_kAlphaSels[4];                      // _74
	J2DTevSwapModeTable m_swapModeTables[4]; // _78
	J2DIndTevStage m_indStages[4];           // _7C
	JUTTexture* m_textures[4];               // _8C
	JUTPalette* m_palettes[4];               // _9C
	JUTResFont* m_font;                      // _AC
	u8 m_undeleteFlag;                       // _B0
};

struct J2DTevBlock8 : J2DTevBlock {
	J2DTevBlock8();

	virtual void initialize();                                                                                  // _08
	virtual void setGX();                                                                                       // _0C
	virtual void loadTexture(_GXTexMapID id, u32 index);                                                        // _10
	virtual u32 getType() { return JBT_Tev8; }                                                                  // _14 (weak)
	virtual u32 getMaxStage() { return 0x8; }                                                                   // _18 (weak)
	virtual void setTexNo(u32 index, u16 texNo) { m_texIndices[index] = texNo; }                                // _1C (weak)
	virtual u16 getTexNo(u32 index) const { return m_texIndices[index]; }                                       // _20 (weak)
	virtual void setFontNo(u16 fontNo) { m_fontNo = fontNo; }                                                   // _24 (weak)
	virtual u16 getFontNo() const { return m_fontNo; }                                                          // _28 (weak)
	virtual void setTevOrder(u32 index, J2DTevOrder order) { m_orders[index] = order; }                         // _2C (weak)
	virtual J2DTevOrder* getTevOrder(u32 index) { return m_orders + index; }                                    // _30 (weak)
	virtual void setTevColor(u32 index, J2DGXColorS10 color) { m_colors[index] = color; }                       // _34 (weak)
	virtual J2DGXColorS10* getTevColor(u32 index) { return m_colors + index; }                                  // _38 (weak)
	virtual void setTevKColor(u32 index, JUtility::TColor color);                                               // _3C (weak)
	virtual JUtility::TColor* getTevKColor(u32 index) { return m_kColors + index; }                             // _40 (weak)
	virtual void setTevKColorSel(u32 index, u8 sel) { m_kColorSels[index] = sel; }                              // _44 (weak)
	virtual u8 getTevKColorSel(u32 index) { return m_kColorSels[index]; }                                       // _48 (weak)
	virtual void setTevKAlphaSel(u32 index, u8 sel) { m_kAlphaSels[index] = sel; }                              // _4C (weak)
	virtual u8 getTevKAlphaSel(u32 index) { return m_kAlphaSels[index]; }                                       // _50 (weak)
	virtual void setTevStageNum(u8 stageNum) { m_stageNum = stageNum; }                                         // _54 (weak)
	virtual u8 getTevStageNum() const { return m_stageNum; }                                                    // _58 (weak)
	virtual void setTevStage(u32 index, J2DTevStage stage) { m_stages[index] = stage; }                         // _5C (weak)
	virtual J2DTevStage* getTevStage(u32 index) { return m_stages + index; }                                    // _60 (weak)
	virtual void setTevSwapModeInfo(u32 index, J2DTevSwapModeInfo info);                                        // _64 (weak)
	virtual void setTevSwapModeTable(u32 index, J2DTevSwapModeTable table) { m_swapModeTables[index] = table; } // _68 (weak)
	virtual J2DTevSwapModeTable* getTevSwapModeTable(u32 index) { return m_swapModeTables + index; }            // _6C (weak)
	virtual void setIndTevStage(u32 index, J2DIndTevStage stage) { m_indStages[index] = stage; }                // _70 (weak)
	virtual J2DIndTevStage* getIndTevStage(u32 index) { return m_indStages + index; }                           // _74 (weak)
	virtual bool insertTexture(u32 index, const ResTIMG* img) { return insertTexture(index, img, nullptr); }    // _78 (weak)
	virtual bool insertTexture(u32, const ResTIMG*, JUTPalette*);                                               // _7C
	virtual bool insertTexture(u32, JUTTexture*);                                                               // _80
	virtual bool setTexture(u32 index, const ResTIMG* img);                                                     // _84
	virtual bool setTexture(u32 index, JUTTexture* texture);                                                    // _88
	virtual bool removeTexture(u32);                                                                            // _8C
	virtual bool setFont(ResFONT* font);                                                                        // _90
	virtual bool setFont(JUTFont* font);                                                                        // _94
	virtual bool setPalette(u32 index, const ResTLUT* lut);                                                     // _98
	virtual bool prepareTexture(u8 count);                                                                      // _9C
	virtual JUTTexture* getTexture(u32 index) { return (index >= 8) ? nullptr : m_textures[index]; }            // _A0 (weak)
	virtual JUTPalette* getPalette(u32 index)                                                                   // _A4 (weak)
	{
		if (index >= 8) {
			return nullptr;
		}
		return m_palettes[index];
	}
	virtual JUTFont* getFont() { return m_font; }                     // _A8 (weak)
	virtual void shiftDeleteFlag(u8, bool);                           // _AC
	virtual void setUndeleteFlag(u8 flag) { m_undeleteFlag &= flag; } // _B0 (weak)
	virtual void setFontUndeleteFlag() { m_fontUndeleteFlag = 0; }    // _B4 (weak)
	virtual ~J2DTevBlock8();                                          // _B8

	// _00 = VTBL
	u16 m_texIndices[8];                     // _04
	u16 m_fontNo;                            // _14
	J2DTevOrder m_orders[8];                 // _16
	J2DGXColorS10 m_colors[4];               // _36
	u8 m_stageNum;                           // _56
	J2DTevStage m_stages[8];                 // _57
	JUtility::TColor m_kColors[4];           // _98
	u8 m_kColorSels[8];                      // _A8
	u8 m_kAlphaSels[8];                      // _B0
	J2DTevSwapModeTable m_swapModeTables[4]; // _B8
	J2DIndTevStage m_indStages[8];           // _BC
	JUTTexture* m_textures[8];               // _DC
	JUTPalette* m_palettes[8];               // _FC
	JUTResFont* m_font;                      // _11C
	u8 m_undeleteFlag;                       // _120
	u8 m_fontUndeleteFlag;                   // _121
};

struct J2DTevBlock16 : J2DTevBlock {
	J2DTevBlock16();

	virtual void initialize();                                                                                  // _08
	virtual void setGX();                                                                                       // _0C
	virtual void loadTexture(_GXTexMapID id, u32 index);                                                        // _10
	virtual u32 getType() { return JBT_Tev16; }                                                                 // _14 (weak)
	virtual u32 getMaxStage() { return 0x10; }                                                                  // _18 (weak)
	virtual void setTexNo(u32 index, u16 texNo) { m_texIndices[index] = texNo; }                                // _1C (weak)
	virtual u16 getTexNo(u32 index) const { return m_texIndices[index]; }                                       // _20 (weak)
	virtual void setFontNo(u16 fontNo) { m_fontNo = fontNo; }                                                   // _24 (weak)
	virtual u16 getFontNo() const { return m_fontNo; }                                                          // _28 (weak)
	virtual void setTevOrder(u32 index, J2DTevOrder order) { m_orders[index] = order; }                         // _2C (weak)
	virtual J2DTevOrder* getTevOrder(u32 index) { return m_orders + index; }                                    // _30 (weak)
	virtual void setTevColor(u32 index, J2DGXColorS10 color) { m_colors[index] = color; }                       // _34 (weak)
	virtual J2DGXColorS10* getTevColor(u32 index) { return m_colors + index; }                                  // _38 (weak)
	virtual void setTevKColor(u32 index, JUtility::TColor color);                                               // _3C (weak)
	virtual JUtility::TColor* getTevKColor(u32 index) { return m_kColors + index; }                             // _40 (weak)
	virtual void setTevKColorSel(u32 index, u8 sel) { m_kColorSels[index] = sel; }                              // _44 (weak)
	virtual u8 getTevKColorSel(u32 index) { return m_kColorSels[index]; }                                       // _48 (weak)
	virtual void setTevKAlphaSel(u32 index, u8 sel) { m_kAlphaSels[index] = sel; }                              // _4C (weak)
	virtual u8 getTevKAlphaSel(u32 index) { return m_kAlphaSels[index]; }                                       // _50 (weak)
	virtual void setTevStageNum(u8 stageNum) { m_stageNum = stageNum; }                                         // _54 (weak)
	virtual u8 getTevStageNum() const { return m_stageNum; }                                                    // _58 (weak)
	virtual void setTevStage(u32 index, J2DTevStage stage) { m_stages[index] = stage; }                         // _5C (weak)
	virtual J2DTevStage* getTevStage(u32 index) { return m_stages + index; }                                    // _60 (weak)
	virtual void setTevSwapModeInfo(u32 index, J2DTevSwapModeInfo info);                                        // _64 (weak)
	virtual void setTevSwapModeTable(u32 index, J2DTevSwapModeTable table) { m_swapModeTables[index] = table; } // _68 (weak)
	virtual J2DTevSwapModeTable* getTevSwapModeTable(u32 index) { return m_swapModeTables + index; }            // _6C (weak)
	virtual void setIndTevStage(u32 index, J2DIndTevStage stage) { m_indStages[index] = stage; }                // _70 (weak)
	virtual J2DIndTevStage* getIndTevStage(u32 index) { return m_indStages + index; }                           // _74 (weak)
	virtual bool insertTexture(u32 index, const ResTIMG* img) { return insertTexture(index, img, nullptr); }    // _78 (weak)
	virtual bool insertTexture(u32, const ResTIMG*, JUTPalette*);                                               // _7C
	virtual bool insertTexture(u32, JUTTexture*);                                                               // _80
	virtual bool setTexture(u32 index, const ResTIMG* img);                                                     // _84
	virtual bool setTexture(u32 index, JUTTexture* texture);                                                    // _88
	virtual bool removeTexture(u32);                                                                            // _8C
	virtual bool setFont(ResFONT* font);                                                                        // _90
	virtual bool setFont(JUTFont* font);                                                                        // _94
	virtual bool setPalette(u32 index, const ResTLUT* lut);                                                     // _98
	virtual bool prepareTexture(u8 count);                                                                      // _9C
	virtual JUTTexture* getTexture(u32 index) { return (index >= 8) ? nullptr : m_textures[index]; }            // _A0 (weak)
	virtual JUTPalette* getPalette(u32 index)                                                                   // _A4 (weak)
	{
		if (index >= 8) {
			return nullptr;
		}
		return m_palettes[index];
	}
	virtual JUTFont* getFont() { return m_font; }                      // _A8 (weak)
	virtual void shiftDeleteFlag(u8, bool);                            // _AC
	virtual void setUndeleteFlag(u8 flag) { m_undeleteFlag &= flag; }; // _B0 (weak)
	virtual void setFontUndeleteFlag() { m_fontUndeleteFlag = 0; }     // _B4 (weak)
	virtual ~J2DTevBlock16();                                          // _B8

	// _00 = VTBL
	u16 m_texIndices[8];                     // _04
	u16 m_fontNo;                            // _14
	J2DTevOrder m_orders[16];                // _16
	J2DGXColorS10 m_colors[4];               // _56
	u8 m_stageNum;                           // _76
	J2DTevStage m_stages[16];                // _77
	JUtility::TColor m_kColors[4];           // _F8
	u8 m_kColorSels[16];                     // _108
	u8 m_kAlphaSels[16];                     // _118
	J2DTevSwapModeTable m_swapModeTables[4]; // _128
	J2DIndTevStage m_indStages[16];          // _12C
	JUTTexture* m_textures[8];               // _16C
	JUTPalette* m_palettes[8];               // _18C
	JUTResFont* m_font;                      // _1AC
	u8 m_undeleteFlag;                       // _1B0
	u8 m_fontUndeleteFlag;                   // _1B1
};

#endif
