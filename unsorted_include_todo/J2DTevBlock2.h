#ifndef _J2DTEVBLOCK2_H
#define _J2DTEVBLOCK2_H

/*
    __vt__12J2DTevBlock2:
    .4byte 0
    .4byte 0
    .4byte initialize__12J2DTevBlock2Fv
    .4byte setGX__12J2DTevBlock2Fv
    .4byte loadTexture__12J2DTevBlock2F11_GXTexMapIDUl
    .4byte getType__12J2DTevBlock2Fv
    .4byte getMaxStage__12J2DTevBlock2Fv
    .4byte setTexNo__12J2DTevBlock2FUlUs
    .4byte getTexNo__12J2DTevBlock2CFUl
    .4byte setFontNo__12J2DTevBlock2FUs
    .4byte getFontNo__12J2DTevBlock2CFv
    .4byte setTevOrder__12J2DTevBlock2FUl11J2DTevOrder
    .4byte getTevOrder__12J2DTevBlock2FUl
    .4byte setTevColor__12J2DTevBlock2FUl13J2DGXColorS10
    .4byte getTevColor__12J2DTevBlock2FUl
    .4byte setTevKColor__12J2DTevBlock2FUlQ28JUtility6TColor
    .4byte getTevKColor__12J2DTevBlock2FUl
    .4byte setTevKColorSel__12J2DTevBlock2FUlUc
    .4byte getTevKColorSel__12J2DTevBlock2FUl
    .4byte setTevKAlphaSel__12J2DTevBlock2FUlUc
    .4byte getTevKAlphaSel__12J2DTevBlock2FUl
    .4byte setTevStageNum__12J2DTevBlock2FUc
    .4byte getTevStageNum__12J2DTevBlock2CFv
    .4byte setTevStage__12J2DTevBlock2FUl11J2DTevStage
    .4byte getTevStage__12J2DTevBlock2FUl
    .4byte setTevSwapModeInfo__12J2DTevBlock2FUl18J2DTevSwapModeInfo
    .4byte setTevSwapModeTable__12J2DTevBlock2FUl19J2DTevSwapModeTable
    .4byte getTevSwapModeTable__12J2DTevBlock2FUl
    .4byte setIndTevStage__12J2DTevBlock2FUl14J2DIndTevStage
    .4byte getIndTevStage__12J2DTevBlock2FUl
    .4byte insertTexture__12J2DTevBlock2FUlPC7ResTIMG
    .4byte insertTexture__12J2DTevBlock2FUlPC7ResTIMGP10JUTPalette
    .4byte insertTexture__12J2DTevBlock2FUlP10JUTTexture
    .4byte setTexture__12J2DTevBlock2FUlPC7ResTIMG
    .4byte setTexture__12J2DTevBlock2FUlP10JUTTexture
    .4byte removeTexture__12J2DTevBlock2FUl
    .4byte setFont__12J2DTevBlock2FP7ResFONT
    .4byte setFont__12J2DTevBlock2FP7JUTFont
    .4byte setPalette__12J2DTevBlock2FUlPC7ResTLUT
    .4byte prepareTexture__12J2DTevBlock2FUc
    .4byte getTexture__12J2DTevBlock2FUl
    .4byte getPalette__12J2DTevBlock2FUl
    .4byte getFont__12J2DTevBlock2Fv
    .4byte shiftDeleteFlag__12J2DTevBlock2FUcb
    .4byte setUndeleteFlag__12J2DTevBlock2FUc
    .4byte setFontUndeleteFlag__12J2DTevBlock2Fv
    .4byte __dt__12J2DTevBlock2Fv
*/

struct J2DTevBlock2 {
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
	virtual ~J2DTevBlock2();                                // _B0

	// _00 VTBL
};

#endif
