#ifndef _JSYSTEM_J2D_J2DTEVBLOCK_H
#define _JSYSTEM_J2D_J2DTEVBLOCK_H

#include "Dolphin/gx.h"
#include "JSystem/J2D/J2DGXColorS10.h"
#include "JSystem/J2D/J2DTypes.h"
#include "JSystem/JUT/JUTFont.h"
#include "JSystem/JUT/JUTPalette.h"
#include "JSystem/JUT/JUTTexture.h"
#include "JSystem/JUT/TColor.h"
#include "JSystem/ResTLUT.h"
#include "types.h"

struct J2DTevBlock {
	virtual void initialize();                                                // _08 (weak)
	virtual void setGX();                                                     // _0C (weak)
	virtual void loadTexture(GXTexMapID, unsigned long);                      // _10 (weak)
	virtual u32 getType()     = 0;                                            // _14
	virtual u32 getMaxStage() = 0;                                            // _18
	virtual void setTexNo(unsigned long, unsigned short);                     // _1C (weak)
	virtual u16 getTexNo(unsigned long) const;                                // _20 (weak)
	virtual void setFontNo(unsigned short);                                   // _24 (weak)
	virtual u16 getFontNo() const;                                            // _28 (weak)
	virtual void setTevOrder(unsigned long, J2DTevOrder);                     // _2C (weak)
	virtual J2DTevOrder* getTevOrder(unsigned long);                          // _30 (weak)
	virtual void setTevColor(unsigned long, J2DGXColorS10);                   // _34 (weak)
	virtual J2DGXColorS10* getTevColor(unsigned long) { return nullptr; }     // _38 (weak)
	virtual void setTevKColor(unsigned long, JUtility::TColor);               // _3C (weak)
	virtual JUtility::TColor* getTevKColor(unsigned long) { return nullptr; } // _40 (weak)
	virtual void setTevKColorSel(unsigned long, unsigned char);               // _44 (weak)
	virtual u8 getTevKColorSel(unsigned long);                                // _48 (weak)
	virtual void setTevKAlphaSel(unsigned long, unsigned char);               // _4C (weak)
	virtual u8 getTevKAlphaSel(unsigned long);                                // _50 (weak)
	virtual void setTevStageNum(unsigned char);                               // _54 (weak)
	virtual u8 getTevStageNum() const { return 1; };                          // _58 (weak)
	virtual void setTevStage(unsigned long, J2DTevStage);                     // _5C (weak)
	virtual J2DTevStage* getTevStage(unsigned long);                          // _60 (weak)
	virtual void setTevSwapModeInfo(unsigned long, J2DTevSwapModeInfo);       // _64 (weak)
	virtual void setTevSwapModeTable(unsigned long, J2DTevSwapModeTable);     // _68 (weak)
	virtual J2DTevSwapModeTable* getTevSwapModeTable(unsigned long);          // _6C (weak)
	virtual void setIndTevStage(unsigned long, J2DIndTevStage);               // _70 (weak)
	virtual J2DIndTevStage* getIndTevStage(unsigned long);                    // _74 (weak)
	virtual bool insertTexture(unsigned long, const ResTIMG*);                // _78 (weak)
	virtual bool insertTexture(unsigned long, const ResTIMG*, JUTPalette*);   // _7C (weak)
	virtual bool insertTexture(unsigned long, JUTTexture*);                   // _80 (weak)
	virtual bool setTexture(unsigned long, const ResTIMG*);                   // _84 (weak)
	virtual bool setTexture(unsigned long, JUTTexture*);                      // _88 (weak)
	virtual bool removeTexture(unsigned long);                                // _8C (weak)
	virtual bool setFont(ResFONT*);                                           // _90 (weak)
	virtual bool setFont(JUTFont*);                                           // _94 (weak)
	virtual bool setPalette(unsigned long, const ResTLUT*);                   // _98 (weak)
	virtual bool prepareTexture(unsigned char);                               // _9C (weak)
	virtual JUTTexture* getTexture(unsigned long);                            // _A0
	virtual JUTPalette* getPalette(unsigned long);                            // _A4
	virtual JUTFont* getFont();                                               // _A8 (weak)
	virtual void shiftDeleteFlag(unsigned char, bool);                        // _AC (weak)
	virtual void setUndeleteFlag(unsigned char);                              // _B0 (weak)
	virtual void setFontUndeleteFlag();                                       // _B4 (weak)
	virtual ~J2DTevBlock();                                                   // _B8 (weak)

	// _00 VTBL
};

struct J2DTevBlock1 : J2DTevBlock {
	J2DTevBlock1();

	virtual void initialize();                                              // _08
	virtual void setGX();                                                   // _0C
	virtual void loadTexture(_GXTexMapID, unsigned long);                   // _10
	virtual u32 getType();                                                  // _14 (weak)
	virtual u32 getMaxStage();                                              // _18 (weak)
	virtual void setTexNo(unsigned long, unsigned short);                   // _1C (weak)
	virtual u16 getTexNo(unsigned long) const;                              // _20 (weak)
	virtual void setFontNo(unsigned short);                                 // _24 (weak)
	virtual u16 getFontNo() const;                                          // _28 (weak)
	virtual void setTevOrder(unsigned long, J2DTevOrder);                   // _2C (weak)
	virtual J2DTevOrder* getTevOrder(unsigned long);                        // _30 (weak)
	virtual void setTevColor(unsigned long, J2DGXColorS10);                 // _34 (weak)
	virtual J2DGXColorS10* getTevColor(unsigned long);                      // _38 (weak)
	virtual void setTevKColor(unsigned long, JUtility::TColor);             // _3C (weak)
	virtual JUtility::TColor* getTevKColor(unsigned long);                  // _40 (weak)
	virtual void setTevKColorSel(unsigned long, unsigned char);             // _44 (weak)
	virtual u8 getTevKColorSel(unsigned long);                              // _48 (weak)
	virtual void setTevKAlphaSel(unsigned long, unsigned char);             // _4C (weak)
	virtual u8 getTevKAlphaSel(unsigned long);                              // _50 (weak)
	virtual void setTevStageNum(unsigned char);                             // _54 (weak)
	virtual u8 getTevStageNum() const;                                      // _58 (weak)
	virtual void setTevStage(unsigned long, J2DTevStage);                   // _5C (weak)
	virtual J2DTevStage* getTevStage(unsigned long);                        // _60 (weak)
	virtual void setTevSwapModeInfo(unsigned long, J2DTevSwapModeInfo);     // _64 (weak)
	virtual void setTevSwapModeTable(unsigned long, J2DTevSwapModeTable);   // _68 (weak)
	virtual J2DTevSwapModeTable* getTevSwapModeTable(unsigned long);        // _6C (weak)
	virtual void setIndTevStage(unsigned long, J2DIndTevStage);             // _70 (weak)
	virtual J2DIndTevStage* getIndTevStage(unsigned long);                  // _74 (weak)
	virtual bool insertTexture(unsigned long, const ResTIMG*);              // _78 (weak)
	virtual bool insertTexture(unsigned long, const ResTIMG*, JUTPalette*); // _7C
	virtual bool insertTexture(unsigned long, JUTTexture*);                 // _80
	virtual bool setTexture(unsigned long, const ResTIMG*);                 // _84
	virtual bool setTexture(unsigned long, JUTTexture*);                    // _88
	virtual bool removeTexture(unsigned long);                              // _8C
	virtual bool setFont(ResFONT*);                                         // _90
	virtual bool setFont(JUTFont*);                                         // _94
	virtual bool setPalette(unsigned long, const ResTLUT*);                 // _98
	virtual bool prepareTexture(unsigned char);                             // _9C
	virtual JUTTexture* getTexture(unsigned long);                          // _A0 (weak)
	virtual JUTPalette* getPalette(unsigned long);                          // _A4 (weak)
	virtual JUTFont* getFont();                                             // _A8 (weak)
	virtual void shiftDeleteFlag(unsigned char, bool);                      // _AC
	virtual void setUndeleteFlag(unsigned char);                            // _B0 (weak)
	virtual void setFontUndeleteFlag();                                     // _B4 (weak)
	virtual ~J2DTevBlock1();                                                // _B8

	u16 m_texIndices[1];                     // _04
	u16 m_fontNo;                            // _06
	J2DTevOrder m_orders[1];                 // _08
	J2DGXColorS10 m_colors[4];               // _0C
	J2DTevStage m_stages[1];                 // _2C
	JUtility::TColor m_kColors[4];           // _34
	u8 m_kColorSels[1];                      // _44
	u8 m_kAlphaSels[1];                      // _45
	J2DTevSwapModeTable m_swapModeTables[4]; // _46
	u32 : 0;
	J2DIndTevStage m_indStages[1]; // _4C
	JUTTexture* m_textures[1];     // _50
	JUTPalette* m_palettes[1];     // _54
	JUTResFont* m_font;            // _58
	u8 _5C;                        // _5C
};

struct J2DTevBlock2 : J2DTevBlock {
	J2DTevBlock2();

	virtual void initialize();                                              // _08
	virtual void setGX();                                                   // _0C
	virtual void loadTexture(_GXTexMapID, unsigned long);                   // _10
	virtual u32 getType();                                                  // _14 (weak)
	virtual u32 getMaxStage();                                              // _18 (weak)
	virtual void setTexNo(unsigned long, unsigned short);                   // _1C (weak)
	virtual u16 getTexNo(unsigned long) const;                              // _20 (weak)
	virtual void setFontNo(unsigned short);                                 // _24 (weak)
	virtual u16 getFontNo() const;                                          // _28 (weak)
	virtual void setTevOrder(unsigned long, J2DTevOrder);                   // _2C (weak)
	virtual J2DTevOrder* getTevOrder(unsigned long);                        // _30 (weak)
	virtual void setTevColor(unsigned long, J2DGXColorS10);                 // _34 (weak)
	virtual J2DGXColorS10* getTevColor(unsigned long);                      // _38 (weak)
	virtual void setTevKColor(unsigned long, JUtility::TColor);             // _3C (weak)
	virtual JUtility::TColor* getTevKColor(unsigned long);                  // _40 (weak)
	virtual void setTevKColorSel(unsigned long, unsigned char);             // _44 (weak)
	virtual u8 getTevKColorSel(unsigned long);                              // _48 (weak)
	virtual void setTevKAlphaSel(unsigned long, unsigned char);             // _4C (weak)
	virtual u8 getTevKAlphaSel(unsigned long);                              // _50 (weak)
	virtual void setTevStageNum(unsigned char);                             // _54 (weak)
	virtual u8 getTevStageNum() const;                                      // _58 (weak)
	virtual void setTevStage(unsigned long, J2DTevStage);                   // _5C (weak)
	virtual J2DTevStage* getTevStage(unsigned long);                        // _60 (weak)
	virtual void setTevSwapModeInfo(unsigned long, J2DTevSwapModeInfo);     // _64 (weak)
	virtual void setTevSwapModeTable(unsigned long, J2DTevSwapModeTable);   // _68 (weak)
	virtual J2DTevSwapModeTable* getTevSwapModeTable(unsigned long);        // _6C (weak)
	virtual void setIndTevStage(unsigned long, J2DIndTevStage);             // _70 (weak)
	virtual J2DIndTevStage* getIndTevStage(unsigned long);                  // _74 (weak)
	virtual bool insertTexture(unsigned long, const ResTIMG*);              // _78 (weak)
	virtual bool insertTexture(unsigned long, const ResTIMG*, JUTPalette*); // _7C
	virtual bool insertTexture(unsigned long, JUTTexture*);                 // _80
	virtual bool setTexture(unsigned long, const ResTIMG*);                 // _84
	virtual bool setTexture(unsigned long, JUTTexture*);                    // _88
	virtual bool removeTexture(unsigned long);                              // _8C
	virtual bool setFont(ResFONT*);                                         // _90
	virtual bool setFont(JUTFont*);                                         // _94
	virtual bool setPalette(unsigned long, const ResTLUT*);                 // _98
	virtual bool prepareTexture(unsigned char);                             // _9C
	virtual JUTTexture* getTexture(unsigned long);                          // _A0 (weak)
	virtual JUTPalette* getPalette(unsigned long);                          // _A4 (weak)
	virtual JUTFont* getFont();                                             // _A8 (weak)
	virtual void shiftDeleteFlag(unsigned char, bool);                      // _AC
	virtual void setUndeleteFlag(unsigned char);                            // _B0 (weak)
	virtual void setFontUndeleteFlag();                                     // _B4 (weak)
	virtual ~J2DTevBlock2();                                                // _B8

	u16 m_texIndices[2];       // _04
	u16 m_fontNo;              // _08
	J2DTevOrder m_orders[2];   // _0A
	J2DGXColorS10 m_colors[4]; // _12
	u8 m_stageNum;             // _32
	J2DTevStage m_stages[2];   // _33
	// u8 _43;                                  // _43 - padding?
	JUtility::TColor m_kColors[4];           // _44
	u8 m_kColorSels[2];                      // _54
	u8 m_kAlphaSels[2];                      // _56
	J2DTevSwapModeTable m_swapModeTables[4]; // _58
	J2DIndTevStage m_indStages[2];           // _5C
	JUTTexture* m_textures[2];               // _64
	JUTPalette* m_palettes[2];               // _6C
	JUTResFont* m_font;                      // _74
	u8 _78;                                  // _78
};

struct J2DTevBlock4 : J2DTevBlock {
	J2DTevBlock4();

	virtual void initialize();                                              // _08
	virtual void setGX();                                                   // _0C
	virtual void loadTexture(_GXTexMapID, unsigned long);                   // _10
	virtual u32 getType();                                                  // _14 (weak)
	virtual u32 getMaxStage();                                              // _18 (weak)
	virtual void setTexNo(unsigned long, unsigned short);                   // _1C (weak)
	virtual u16 getTexNo(unsigned long) const;                              // _20 (weak)
	virtual void setFontNo(unsigned short);                                 // _24 (weak)
	virtual u16 getFontNo() const;                                          // _28 (weak)
	virtual void setTevOrder(unsigned long, J2DTevOrder);                   // _2C (weak)
	virtual J2DTevOrder* getTevOrder(unsigned long);                        // _30 (weak)
	virtual void setTevColor(unsigned long, J2DGXColorS10);                 // _34 (weak)
	virtual J2DGXColorS10* getTevColor(unsigned long);                      // _38 (weak)
	virtual void setTevKColor(unsigned long, JUtility::TColor);             // _3C (weak)
	virtual JUtility::TColor* getTevKColor(unsigned long);                  // _40 (weak)
	virtual void setTevKColorSel(unsigned long, unsigned char);             // _44 (weak)
	virtual u8 getTevKColorSel(unsigned long);                              // _48 (weak)
	virtual void setTevKAlphaSel(unsigned long, unsigned char);             // _4C (weak)
	virtual u8 getTevKAlphaSel(unsigned long);                              // _50 (weak)
	virtual void setTevStageNum(unsigned char);                             // _54 (weak)
	virtual u8 getTevStageNum() const;                                      // _58 (weak)
	virtual void setTevStage(unsigned long, J2DTevStage);                   // _5C (weak)
	virtual J2DTevStage* getTevStage(unsigned long);                        // _60 (weak)
	virtual void setTevSwapModeInfo(unsigned long, J2DTevSwapModeInfo);     // _64 (weak)
	virtual void setTevSwapModeTable(unsigned long, J2DTevSwapModeTable);   // _68 (weak)
	virtual J2DTevSwapModeTable* getTevSwapModeTable(unsigned long);        // _6C (weak)
	virtual void setIndTevStage(unsigned long, J2DIndTevStage);             // _70 (weak)
	virtual J2DIndTevStage* getIndTevStage(unsigned long);                  // _74 (weak)
	virtual bool insertTexture(unsigned long, const ResTIMG*);              // _78 (weak)
	virtual bool insertTexture(unsigned long, const ResTIMG*, JUTPalette*); // _7C
	virtual bool insertTexture(unsigned long, JUTTexture*);                 // _80
	virtual bool setTexture(unsigned long, const ResTIMG*);                 // _84
	virtual bool setTexture(unsigned long, JUTTexture*);                    // _88
	virtual bool removeTexture(unsigned long);                              // _8C
	virtual bool setFont(ResFONT*);                                         // _90
	virtual bool setFont(JUTFont*);                                         // _94
	virtual bool setPalette(unsigned long, const ResTLUT*);                 // _98
	virtual bool prepareTexture(unsigned char);                             // _9C
	virtual JUTTexture* getTexture(unsigned long);                          // _A0 (weak)
	virtual JUTPalette* getPalette(unsigned long);                          // _A4 (weak)
	virtual JUTFont* getFont();                                             // _A8 (weak)
	virtual void shiftDeleteFlag(unsigned char, bool);                      // _AC
	virtual void setUndeleteFlag(unsigned char);                            // _B0 (weak)
	virtual void setFontUndeleteFlag();                                     // _B4 (weak)
	virtual ~J2DTevBlock4();                                                // _B8

	u16 m_texIndices[4];       // _04
	u16 m_fontNo;              // _0C
	J2DTevOrder m_orders[4];   // _0E
	J2DGXColorS10 m_colors[4]; // _1E
	u8 m_stageNum;             // _3E
	J2DTevStage m_stages[4];   // _3F
	// u8 _5F;                                  // _5F - padding?
	JUtility::TColor m_kColors[4];           // _60
	u8 m_kColorSels[4];                      // _70
	u8 m_kAlphaSels[4];                      // _74
	J2DTevSwapModeTable m_swapModeTables[4]; // _78
	J2DIndTevStage m_indStages[4];           // _7C
	JUTTexture* m_textures[4];               // _8C
	JUTPalette* m_palettes[4];               // _9C
	JUTResFont* m_font;                      // _AC
	u8 _B0;                                  // _B0
};

struct J2DTevBlock8 : J2DTevBlock {
	J2DTevBlock8();

	virtual void initialize();                                              // _08
	virtual void setGX();                                                   // _0C
	virtual void loadTexture(_GXTexMapID, unsigned long);                   // _10
	virtual u32 getType();                                                  // _14 (weak)
	virtual u32 getMaxStage();                                              // _18 (weak)
	virtual void setTexNo(unsigned long, unsigned short);                   // _1C (weak)
	virtual u16 getTexNo(unsigned long) const;                              // _20 (weak)
	virtual void setFontNo(unsigned short);                                 // _24 (weak)
	virtual u16 getFontNo() const;                                          // _28 (weak)
	virtual void setTevOrder(unsigned long, J2DTevOrder);                   // _2C (weak)
	virtual J2DTevOrder* getTevOrder(unsigned long);                        // _30 (weak)
	virtual void setTevColor(unsigned long, J2DGXColorS10);                 // _34 (weak)
	virtual J2DGXColorS10* getTevColor(unsigned long);                      // _38 (weak)
	virtual void setTevKColor(unsigned long, JUtility::TColor);             // _3C (weak)
	virtual JUtility::TColor* getTevKColor(unsigned long);                  // _40 (weak)
	virtual void setTevKColorSel(unsigned long, unsigned char);             // _44 (weak)
	virtual u8 getTevKColorSel(unsigned long);                              // _48 (weak)
	virtual void setTevKAlphaSel(unsigned long, unsigned char);             // _4C (weak)
	virtual u8 getTevKAlphaSel(unsigned long);                              // _50 (weak)
	virtual void setTevStageNum(unsigned char);                             // _54 (weak)
	virtual u8 getTevStageNum() const;                                      // _58 (weak)
	virtual void setTevStage(unsigned long, J2DTevStage);                   // _5C (weak)
	virtual J2DTevStage* getTevStage(unsigned long);                        // _60 (weak)
	virtual void setTevSwapModeInfo(unsigned long, J2DTevSwapModeInfo);     // _64 (weak)
	virtual void setTevSwapModeTable(unsigned long, J2DTevSwapModeTable);   // _68 (weak)
	virtual J2DTevSwapModeTable* getTevSwapModeTable(unsigned long);        // _6C (weak)
	virtual void setIndTevStage(unsigned long, J2DIndTevStage);             // _70 (weak)
	virtual J2DIndTevStage* getIndTevStage(unsigned long);                  // _74 (weak)
	virtual bool insertTexture(unsigned long, const ResTIMG*);              // _78 (weak)
	virtual bool insertTexture(unsigned long, const ResTIMG*, JUTPalette*); // _7C
	virtual bool insertTexture(unsigned long, JUTTexture*);                 // _80
	virtual bool setTexture(unsigned long, const ResTIMG*);                 // _84
	virtual bool setTexture(unsigned long, JUTTexture*);                    // _88
	virtual bool removeTexture(unsigned long);                              // _8C
	virtual bool setFont(ResFONT*);                                         // _90
	virtual bool setFont(JUTFont*);                                         // _94
	virtual bool setPalette(unsigned long, const ResTLUT*);                 // _98
	virtual bool prepareTexture(unsigned char);                             // _9C
	virtual JUTTexture* getTexture(unsigned long);                          // _A0 (weak)
	virtual JUTPalette* getPalette(unsigned long);                          // _A4 (weak)
	virtual JUTFont* getFont();                                             // _A8 (weak)
	virtual void shiftDeleteFlag(unsigned char, bool);                      // _AC
	virtual void setUndeleteFlag(unsigned char);                            // _B0 (weak)
	virtual void setFontUndeleteFlag();                                     // _B4 (weak)
	virtual ~J2DTevBlock8();                                                // _B8

	u16 m_texIndices[8];       // _04
	u16 m_fontNo;              // _14
	J2DTevOrder m_orders[8];   // _16
	J2DGXColorS10 m_colors[4]; // _36
	u8 m_stageNum;             // _56
	J2DTevStage m_stages[8];   // _57
	// u32 : 0;
	JUtility::TColor m_kColors[4];           // _98
	u8 m_kColorSels[8];                      // _A8
	u8 m_kAlphaSels[8];                      // _B0
	J2DTevSwapModeTable m_swapModeTables[4]; // _B8
	J2DIndTevStage m_indStages[8];           // _BC
	JUTTexture* m_textures[8];               // _DC
	JUTPalette* m_palettes[8];               // _FC
	JUTResFont* m_font;                      // _11C
	u8 _120;                                 // _120
	u8 _121;                                 // _121
};

struct J2DTevBlock16 : J2DTevBlock {
	J2DTevBlock16();

	virtual void initialize();                                              // _08
	virtual void setGX();                                                   // _0C
	virtual void loadTexture(_GXTexMapID, unsigned long);                   // _10
	virtual u32 getType();                                                  // _14 (weak)
	virtual u32 getMaxStage();                                              // _18 (weak)
	virtual void setTexNo(unsigned long, unsigned short);                   // _1C (weak)
	virtual u16 getTexNo(unsigned long) const;                              // _20 (weak)
	virtual void setFontNo(unsigned short);                                 // _24 (weak)
	virtual u16 getFontNo() const;                                          // _28 (weak)
	virtual void setTevOrder(unsigned long, J2DTevOrder);                   // _2C (weak)
	virtual J2DTevOrder* getTevOrder(unsigned long);                        // _30 (weak)
	virtual void setTevColor(unsigned long, J2DGXColorS10);                 // _34 (weak)
	virtual J2DGXColorS10* getTevColor(unsigned long);                      // _38 (weak)
	virtual void setTevKColor(unsigned long, JUtility::TColor);             // _3C (weak)
	virtual JUtility::TColor* getTevKColor(unsigned long);                  // _40 (weak)
	virtual void setTevKColorSel(unsigned long, unsigned char);             // _44 (weak)
	virtual u8 getTevKColorSel(unsigned long);                              // _48 (weak)
	virtual void setTevKAlphaSel(unsigned long, unsigned char);             // _4C (weak)
	virtual u8 getTevKAlphaSel(unsigned long);                              // _50 (weak)
	virtual void setTevStageNum(unsigned char);                             // _54 (weak)
	virtual u8 getTevStageNum() const;                                      // _58 (weak)
	virtual void setTevStage(unsigned long, J2DTevStage);                   // _5C (weak)
	virtual J2DTevStage* getTevStage(unsigned long);                        // _60 (weak)
	virtual void setTevSwapModeInfo(unsigned long, J2DTevSwapModeInfo);     // _64 (weak)
	virtual void setTevSwapModeTable(unsigned long, J2DTevSwapModeTable);   // _68 (weak)
	virtual J2DTevSwapModeTable* getTevSwapModeTable(unsigned long);        // _6C (weak)
	virtual void setIndTevStage(unsigned long, J2DIndTevStage);             // _70 (weak)
	virtual J2DIndTevStage* getIndTevStage(unsigned long);                  // _74 (weak)
	virtual bool insertTexture(unsigned long, const ResTIMG*);              // _78 (weak)
	virtual bool insertTexture(unsigned long, const ResTIMG*, JUTPalette*); // _7C
	virtual bool insertTexture(unsigned long, JUTTexture*);                 // _80
	virtual bool setTexture(unsigned long, const ResTIMG*);                 // _84
	virtual bool setTexture(unsigned long, JUTTexture*);                    // _88
	virtual bool removeTexture(unsigned long);                              // _8C
	virtual bool setFont(ResFONT*);                                         // _90
	virtual bool setFont(JUTFont*);                                         // _94
	virtual bool setPalette(unsigned long, const ResTLUT*);                 // _98
	virtual bool prepareTexture(unsigned char);                             // _9C
	virtual JUTTexture* getTexture(unsigned long);                          // _A0 (weak)
	virtual JUTPalette* getPalette(unsigned long);                          // _A4 (weak)
	virtual JUTFont* getFont();                                             // _A8 (weak)
	virtual void shiftDeleteFlag(unsigned char, bool);                      // _AC
	virtual void setUndeleteFlag(unsigned char);                            // _B0 (weak)
	virtual void setFontUndeleteFlag();                                     // _B4 (weak)
	virtual ~J2DTevBlock16();                                               // _B8

	u16 m_texIndices[8];       // _04
	u16 m_fontNo;              // _14
	J2DTevOrder m_orders[16];  // _16
	J2DGXColorS10 m_colors[4]; // _56
	u8 m_stageNum;             // _76
	J2DTevStage m_stages[16];  // _77
	// u32 : 0;
	JUtility::TColor m_kColors[4];           // _F8
	u8 m_kColorSels[16];                     // _108
	u8 m_kAlphaSels[16];                     // _118
	J2DTevSwapModeTable m_swapModeTables[4]; // _128
	J2DIndTevStage m_indStages[16];          // _12C
	JUTTexture* m_textures[8];               // _16C
	JUTPalette* m_palettes[8];               // _18C
	JUTResFont* m_font;                      // _1AC
	u8 _1B0;                                 // _1B0
	u8 _1B1;                                 // _1B1
};

#endif
