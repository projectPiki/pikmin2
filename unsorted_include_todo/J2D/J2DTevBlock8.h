#ifndef _J2DTEVBLOCK8_H
#define _J2DTEVBLOCK8_H

/*
    __vt__12J2DTevBlock8:
    .4byte 0
    .4byte 0
    .4byte initialize__12J2DTevBlock8Fv
    .4byte setGX__12J2DTevBlock8Fv
    .4byte loadTexture__12J2DTevBlock8F11_GXTexMapIDUl
    .4byte getType__12J2DTevBlock8Fv
    .4byte getMaxStage__12J2DTevBlock8Fv
    .4byte setTexNo__12J2DTevBlock8FUlUs
    .4byte getTexNo__12J2DTevBlock8CFUl
    .4byte setFontNo__12J2DTevBlock8FUs
    .4byte getFontNo__12J2DTevBlock8CFv
    .4byte setTevOrder__12J2DTevBlock8FUl11J2DTevOrder
    .4byte getTevOrder__12J2DTevBlock8FUl
    .4byte setTevColor__12J2DTevBlock8FUl13J2DGXColorS10
    .4byte getTevColor__12J2DTevBlock8FUl
    .4byte setTevKColor__12J2DTevBlock8FUlQ28JUtility6TColor
    .4byte getTevKColor__12J2DTevBlock8FUl
    .4byte setTevKColorSel__12J2DTevBlock8FUlUc
    .4byte getTevKColorSel__12J2DTevBlock8FUl
    .4byte setTevKAlphaSel__12J2DTevBlock8FUlUc
    .4byte getTevKAlphaSel__12J2DTevBlock8FUl
    .4byte setTevStageNum__12J2DTevBlock8FUc
    .4byte getTevStageNum__12J2DTevBlock8CFv
    .4byte setTevStage__12J2DTevBlock8FUl11J2DTevStage
    .4byte getTevStage__12J2DTevBlock8FUl
    .4byte setTevSwapModeInfo__12J2DTevBlock8FUl18J2DTevSwapModeInfo
    .4byte setTevSwapModeTable__12J2DTevBlock8FUl19J2DTevSwapModeTable
    .4byte getTevSwapModeTable__12J2DTevBlock8FUl
    .4byte setIndTevStage__12J2DTevBlock8FUl14J2DIndTevStage
    .4byte getIndTevStage__12J2DTevBlock8FUl
    .4byte insertTexture__12J2DTevBlock8FUlPC7ResTIMG
    .4byte insertTexture__12J2DTevBlock8FUlPC7ResTIMGP10JUTPalette
    .4byte insertTexture__12J2DTevBlock8FUlP10JUTTexture
    .4byte setTexture__12J2DTevBlock8FUlPC7ResTIMG
    .4byte setTexture__12J2DTevBlock8FUlP10JUTTexture
    .4byte removeTexture__12J2DTevBlock8FUl
    .4byte setFont__12J2DTevBlock8FP7ResFONT
    .4byte setFont__12J2DTevBlock8FP7JUTFont
    .4byte setPalette__12J2DTevBlock8FUlPC7ResTLUT
    .4byte prepareTexture__12J2DTevBlock8FUc
    .4byte getTexture__12J2DTevBlock8FUl
    .4byte getPalette__12J2DTevBlock8FUl
    .4byte getFont__12J2DTevBlock8Fv
    .4byte shiftDeleteFlag__12J2DTevBlock8FUcb
    .4byte setUndeleteFlag__12J2DTevBlock8FUc
    .4byte setFontUndeleteFlag__12J2DTevBlock8Fv
    .4byte __dt__12J2DTevBlock8Fv
*/

struct J2DTevBlock8 {
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
	virtual ~J2DTevBlock8();                                                // _B8

	J2DTevBlock8();
};

#endif
