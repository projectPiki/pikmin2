#ifndef _J2DTEVBLOCK16_H
#define _J2DTEVBLOCK16_H

/*
    __vt__13J2DTevBlock16:
    .4byte 0
    .4byte 0
    .4byte initialize__13J2DTevBlock16Fv
    .4byte setGX__13J2DTevBlock16Fv
    .4byte loadTexture__13J2DTevBlock16F11_GXTexMapIDUl
    .4byte getType__13J2DTevBlock16Fv
    .4byte getMaxStage__13J2DTevBlock16Fv
    .4byte setTexNo__13J2DTevBlock16FUlUs
    .4byte getTexNo__13J2DTevBlock16CFUl
    .4byte setFontNo__13J2DTevBlock16FUs
    .4byte getFontNo__13J2DTevBlock16CFv
    .4byte setTevOrder__13J2DTevBlock16FUl11J2DTevOrder
    .4byte getTevOrder__13J2DTevBlock16FUl
    .4byte setTevColor__13J2DTevBlock16FUl13J2DGXColorS10
    .4byte getTevColor__13J2DTevBlock16FUl
    .4byte setTevKColor__13J2DTevBlock16FUlQ28JUtility6TColor
    .4byte getTevKColor__13J2DTevBlock16FUl
    .4byte setTevKColorSel__13J2DTevBlock16FUlUc
    .4byte getTevKColorSel__13J2DTevBlock16FUl
    .4byte setTevKAlphaSel__13J2DTevBlock16FUlUc
    .4byte getTevKAlphaSel__13J2DTevBlock16FUl
    .4byte setTevStageNum__13J2DTevBlock16FUc
    .4byte getTevStageNum__13J2DTevBlock16CFv
    .4byte setTevStage__13J2DTevBlock16FUl11J2DTevStage
    .4byte getTevStage__13J2DTevBlock16FUl
    .4byte setTevSwapModeInfo__13J2DTevBlock16FUl18J2DTevSwapModeInfo
    .4byte setTevSwapModeTable__13J2DTevBlock16FUl19J2DTevSwapModeTable
    .4byte getTevSwapModeTable__13J2DTevBlock16FUl
    .4byte setIndTevStage__13J2DTevBlock16FUl14J2DIndTevStage
    .4byte getIndTevStage__13J2DTevBlock16FUl
    .4byte insertTexture__13J2DTevBlock16FUlPC7ResTIMG
    .4byte insertTexture__13J2DTevBlock16FUlPC7ResTIMGP10JUTPalette
    .4byte insertTexture__13J2DTevBlock16FUlP10JUTTexture
    .4byte setTexture__13J2DTevBlock16FUlPC7ResTIMG
    .4byte setTexture__13J2DTevBlock16FUlP10JUTTexture
    .4byte removeTexture__13J2DTevBlock16FUl
    .4byte setFont__13J2DTevBlock16FP7ResFONT
    .4byte setFont__13J2DTevBlock16FP7JUTFont
    .4byte setPalette__13J2DTevBlock16FUlPC7ResTLUT
    .4byte prepareTexture__13J2DTevBlock16FUc
    .4byte getTexture__13J2DTevBlock16FUl
    .4byte getPalette__13J2DTevBlock16FUl
    .4byte getFont__13J2DTevBlock16Fv
    .4byte shiftDeleteFlag__13J2DTevBlock16FUcb
    .4byte setUndeleteFlag__13J2DTevBlock16FUc
    .4byte setFontUndeleteFlag__13J2DTevBlock16Fv
    .4byte __dt__13J2DTevBlock16Fv
*/

struct J2DTevBlock16 {
	virtual void initialize();                                              // _08
	virtual void setGX();                                                   // _0C
	virtual void loadTexture(_GXTexMapID, unsigned long);                   // _10
	virtual void getType();                                                 // _14 (weak)
	virtual void getMaxStage();                                             // _18 (weak)
	virtual void setTexNo(unsigned long, unsigned short);                   // _1C (weak)
	virtual void getTexNo(unsigned long) const;                             // _20 (weak)
	virtual void setFontNo(unsigned short);                                 // _24 (weak)
	virtual void getFontNo() const;                                         // _28 (weak)
	virtual void setTevOrder(unsigned long, J2DTevOrder);                   // _2C (weak)
	virtual void getTevOrder(unsigned long);                                // _30 (weak)
	virtual void setTevColor(unsigned long, J2DGXColorS10);                 // _34 (weak)
	virtual void getTevColor(unsigned long);                                // _38 (weak)
	virtual void setTevKColor(unsigned long, JUtility::TColor);             // _3C (weak)
	virtual void getTevKColor(unsigned long);                               // _40 (weak)
	virtual void setTevKColorSel(unsigned long, unsigned char);             // _44 (weak)
	virtual void getTevKColorSel(unsigned long);                            // _48 (weak)
	virtual void setTevKAlphaSel(unsigned long, unsigned char);             // _4C (weak)
	virtual void getTevKAlphaSel(unsigned long);                            // _50 (weak)
	virtual void setTevStageNum(unsigned char);                             // _54 (weak)
	virtual void getTevStageNum() const;                                    // _58 (weak)
	virtual void setTevStage(unsigned long, J2DTevStage);                   // _5C (weak)
	virtual void getTevStage(unsigned long);                                // _60 (weak)
	virtual void setTevSwapModeInfo(unsigned long, J2DTevSwapModeInfo);     // _64 (weak)
	virtual void setTevSwapModeTable(unsigned long, J2DTevSwapModeTable);   // _68 (weak)
	virtual void getTevSwapModeTable(unsigned long);                        // _6C (weak)
	virtual void setIndTevStage(unsigned long, J2DIndTevStage);             // _70 (weak)
	virtual void getIndTevStage(unsigned long);                             // _74 (weak)
	virtual void insertTexture(unsigned long, const ResTIMG*);              // _78 (weak)
	virtual void insertTexture(unsigned long, const ResTIMG*, JUTPalette*); // _7C
	virtual void insertTexture(unsigned long, JUTTexture*);                 // _80
	virtual void setTexture(unsigned long, const ResTIMG*);                 // _84
	virtual void setTexture(unsigned long, JUTTexture*);                    // _88
	virtual void removeTexture(unsigned long);                              // _8C
	virtual void setFont(ResFONT*);                                         // _90
	virtual void setFont(JUTFont*);                                         // _94
	virtual void setPalette(unsigned long, const ResTLUT*);                 // _98
	virtual void prepareTexture(unsigned char);                             // _9C
	virtual void getTexture(unsigned long);                                 // _A0 (weak)
	virtual void getPalette(unsigned long);                                 // _A4 (weak)
	virtual void getFont();                                                 // _A8 (weak)
	virtual void shiftDeleteFlag(unsigned char, bool);                      // _AC
	virtual void setUndeleteFlag(unsigned char);                            // _B0 (weak)
	virtual void setFontUndeleteFlag();                                     // _B4 (weak)
	virtual ~J2DTevBlock16();                                               // _B8
};

#endif
