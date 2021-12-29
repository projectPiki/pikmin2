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
	virtual void initialize();                                            // _00
	virtual void setGX();                                                 // _04
	virtual void loadTexture(_GXTexMapID, unsigned long);                 // _08
	virtual void getType();                                               // _0C
	virtual void getMaxStage();                                           // _10
	virtual void setTexNo(unsigned long, unsigned short);                 // _14
	virtual void getTexNo(unsigned long) const;                           // _18
	virtual void setFontNo(unsigned short);                               // _1C
	virtual void getFontNo() const;                                       // _20
	virtual void setTevOrder(unsigned long, J2DTevOrder);                 // _24
	virtual void getTevOrder(unsigned long);                              // _28
	virtual void setTevColor(unsigned long, J2DGXColorS10);               // _2C
	virtual void getTevColor(unsigned long);                              // _30
	virtual void setTevKColor(unsigned long, JUtility::TColor);           // _34
	virtual void getTevKColor(unsigned long);                             // _38
	virtual void setTevKColorSel(unsigned long, unsigned char);           // _3C
	virtual void getTevKColorSel(unsigned long);                          // _40
	virtual void setTevKAlphaSel(unsigned long, unsigned char);           // _44
	virtual void getTevKAlphaSel(unsigned long);                          // _48
	virtual void setTevStageNum(unsigned char);                           // _4C
	virtual void getTevStageNum() const;                                  // _50
	virtual void setTevStage(unsigned long, J2DTevStage);                 // _54
	virtual void getTevStage(unsigned long);                              // _58
	virtual void setTevSwapModeInfo(unsigned long, J2DTevSwapModeInfo);   // _5C
	virtual void setTevSwapModeTable(unsigned long, J2DTevSwapModeTable); // _60
	virtual void getTevSwapModeTable(unsigned long);                      // _64
	virtual void setIndTevStage(unsigned long, J2DIndTevStage);           // _68
	virtual void getIndTevStage(unsigned long);                           // _6C
	virtual void insertTexture(unsigned long, const ResTIMG*);            // _70
	virtual void insertTexture(unsigned long, const ResTIMG*,
	                           JUTPalette*);                // _74
	virtual void insertTexture(unsigned long, JUTTexture*); // _78
	virtual void setTexture(unsigned long, const ResTIMG*); // _7C
	virtual void setTexture(unsigned long, JUTTexture*);    // _80
	virtual void removeTexture(unsigned long);              // _84
	virtual void setFont(ResFONT*);                         // _88
	virtual void setFont(JUTFont*);                         // _8C
	virtual void setPalette(unsigned long, const ResTLUT*); // _90
	virtual void prepareTexture(unsigned char);             // _94
	virtual void getTexture(unsigned long);                 // _98
	virtual void getPalette(unsigned long);                 // _9C
	virtual void getFont();                                 // _A0
	virtual void shiftDeleteFlag(unsigned char, bool);      // _A4
	virtual void setUndeleteFlag(unsigned char);            // _A8
	virtual void setFontUndeleteFlag();                     // _AC
	virtual ~J2DTevBlock16();                               // _B0

	// _00 VTBL
};

#endif
