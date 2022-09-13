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
	virtual void initialize();                                              // _08 (weak)
	virtual void setGX();                                                   // _0C (weak)
	virtual void loadTexture(_GXTexMapID, unsigned long);                   // _10 (weak)
	virtual void _14() = 0;                                                 // _14
	virtual void _18() = 0;                                                 // _18
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
	virtual void insertTexture(unsigned long, const ResTIMG*, JUTPalette*); // _7C (weak)
	virtual void insertTexture(unsigned long, JUTTexture*);                 // _80 (weak)
	virtual void setTexture(unsigned long, const ResTIMG*);                 // _84 (weak)
	virtual void setTexture(unsigned long, JUTTexture*);                    // _88 (weak)
	virtual void removeTexture(unsigned long);                              // _8C (weak)
	virtual void setFont(ResFONT*);                                         // _90 (weak)
	virtual void setFont(JUTFont*);                                         // _94 (weak)
	virtual void setPalette(unsigned long, const ResTLUT*);                 // _98 (weak)
	virtual void prepareTexture(unsigned char);                             // _9C (weak)
	virtual void getTexture(unsigned long);                                 // _A0
	virtual void getPalette(unsigned long);                                 // _A4
	virtual void getFont();                                                 // _A8 (weak)
	virtual void shiftDeleteFlag(unsigned char, bool);                      // _AC (weak)
	virtual void setUndeleteFlag(unsigned char);                            // _B0 (weak)
	virtual void setFontUndeleteFlag();                                     // _B4 (weak)
	virtual ~J2DTevBlock();                                                 // _B8 (weak)
};

#endif
