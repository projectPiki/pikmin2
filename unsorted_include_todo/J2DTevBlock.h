#ifndef _J2DTEVBLOCK_H
#define _J2DTEVBLOCK_H

/*
    __vt__11J2DTevBlock:
    .4byte 0
    .4byte 0
    .4byte initialize__11J2DTevBlockFv
    .4byte setGX__11J2DTevBlockFv
    .4byte loadTexture__11J2DTevBlockF11_GXTexMapIDUl
    .4byte 0
    .4byte 0
    .4byte setTexNo__11J2DTevBlockFUlUs
    .4byte getTexNo__11J2DTevBlockCFUl
    .4byte setFontNo__11J2DTevBlockFUs
    .4byte getFontNo__11J2DTevBlockCFv
    .4byte setTevOrder__11J2DTevBlockFUl11J2DTevOrder
    .4byte getTevOrder__11J2DTevBlockFUl
    .4byte setTevColor__11J2DTevBlockFUl13J2DGXColorS10
    .4byte getTevColor__11J2DTevBlockFUl
    .4byte setTevKColor__11J2DTevBlockFUlQ28JUtility6TColor
    .4byte getTevKColor__11J2DTevBlockFUl
    .4byte setTevKColorSel__11J2DTevBlockFUlUc
    .4byte getTevKColorSel__11J2DTevBlockFUl
    .4byte setTevKAlphaSel__11J2DTevBlockFUlUc
    .4byte getTevKAlphaSel__11J2DTevBlockFUl
    .4byte setTevStageNum__11J2DTevBlockFUc
    .4byte getTevStageNum__11J2DTevBlockCFv
    .4byte setTevStage__11J2DTevBlockFUl11J2DTevStage
    .4byte getTevStage__11J2DTevBlockFUl
    .4byte setTevSwapModeInfo__11J2DTevBlockFUl18J2DTevSwapModeInfo
    .4byte setTevSwapModeTable__11J2DTevBlockFUl19J2DTevSwapModeTable
    .4byte getTevSwapModeTable__11J2DTevBlockFUl
    .4byte setIndTevStage__11J2DTevBlockFUl14J2DIndTevStage
    .4byte getIndTevStage__11J2DTevBlockFUl
    .4byte insertTexture__11J2DTevBlockFUlPC7ResTIMG
    .4byte insertTexture__11J2DTevBlockFUlPC7ResTIMGP10JUTPalette
    .4byte insertTexture__11J2DTevBlockFUlP10JUTTexture
    .4byte setTexture__11J2DTevBlockFUlPC7ResTIMG
    .4byte setTexture__11J2DTevBlockFUlP10JUTTexture
    .4byte removeTexture__11J2DTevBlockFUl
    .4byte setFont__11J2DTevBlockFP7ResFONT
    .4byte setFont__11J2DTevBlockFP7JUTFont
    .4byte setPalette__11J2DTevBlockFUlPC7ResTLUT
    .4byte prepareTexture__11J2DTevBlockFUc
    .4byte getTexture__11J2DTevBlockFUl
    .4byte getPalette__11J2DTevBlockFUl
    .4byte getFont__11J2DTevBlockFv
    .4byte shiftDeleteFlag__11J2DTevBlockFUcb
    .4byte setUndeleteFlag__11J2DTevBlockFUc
    .4byte setFontUndeleteFlag__11J2DTevBlockFv
    .4byte __dt__11J2DTevBlockFv
*/

struct J2DTevBlock {
	virtual void initialize();                                            // _00
	virtual void setGX();                                                 // _04
	virtual void loadTexture(_GXTexMapID, unsigned long);                 // _08
	virtual void _0C() = 0;                                               // _0C
	virtual void _10() = 0;                                               // _10
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
	virtual ~J2DTevBlock();                                 // _B0

	// _00 VTBL
};

#endif
