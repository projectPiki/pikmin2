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
	virtual void initialize();                                              // _08 (inline)
	virtual void setGX();                                                   // _0C (inline)
	virtual void loadTexture(_GXTexMapID, unsigned long);                   // _10 (inline)
	virtual void _14() = 0;                                                 // _14
	virtual void _18() = 0;                                                 // _18
	virtual void setTexNo(unsigned long, unsigned short);                   // _1C (inline)
	virtual void getTexNo(unsigned long) const;                             // _20 (inline)
	virtual void setFontNo(unsigned short);                                 // _24 (inline)
	virtual void getFontNo() const;                                         // _28 (inline)
	virtual void setTevOrder(unsigned long, J2DTevOrder);                   // _2C (inline)
	virtual void getTevOrder(unsigned long);                                // _30 (inline)
	virtual void setTevColor(unsigned long, J2DGXColorS10);                 // _34 (inline)
	virtual void getTevColor(unsigned long);                                // _38 (inline)
	virtual void setTevKColor(unsigned long, JUtility::TColor);             // _3C (inline)
	virtual void getTevKColor(unsigned long);                               // _40 (inline)
	virtual void setTevKColorSel(unsigned long, unsigned char);             // _44 (inline)
	virtual void getTevKColorSel(unsigned long);                            // _48 (inline)
	virtual void setTevKAlphaSel(unsigned long, unsigned char);             // _4C (inline)
	virtual void getTevKAlphaSel(unsigned long);                            // _50 (inline)
	virtual void setTevStageNum(unsigned char);                             // _54 (inline)
	virtual void getTevStageNum() const;                                    // _58 (inline)
	virtual void setTevStage(unsigned long, J2DTevStage);                   // _5C (inline)
	virtual void getTevStage(unsigned long);                                // _60 (inline)
	virtual void setTevSwapModeInfo(unsigned long, J2DTevSwapModeInfo);     // _64 (inline)
	virtual void setTevSwapModeTable(unsigned long, J2DTevSwapModeTable);   // _68 (inline)
	virtual void getTevSwapModeTable(unsigned long);                        // _6C (inline)
	virtual void setIndTevStage(unsigned long, J2DIndTevStage);             // _70 (inline)
	virtual void getIndTevStage(unsigned long);                             // _74 (inline)
	virtual void insertTexture(unsigned long, const ResTIMG*);              // _78 (inline)
	virtual void insertTexture(unsigned long, const ResTIMG*, JUTPalette*); // _7C (inline)
	virtual void insertTexture(unsigned long, JUTTexture*);                 // _80 (inline)
	virtual void setTexture(unsigned long, const ResTIMG*);                 // _84 (inline)
	virtual void setTexture(unsigned long, JUTTexture*);                    // _88 (inline)
	virtual void removeTexture(unsigned long);                              // _8C (inline)
	virtual void setFont(ResFONT*);                                         // _90 (inline)
	virtual void setFont(JUTFont*);                                         // _94 (inline)
	virtual void setPalette(unsigned long, const ResTLUT*);                 // _98 (inline)
	virtual void prepareTexture(unsigned char);                             // _9C (inline)
	virtual void getTexture(unsigned long);                                 // _A0
	virtual void getPalette(unsigned long);                                 // _A4
	virtual void getFont();                                                 // _A8 (inline)
	virtual void shiftDeleteFlag(unsigned char, bool);                      // _AC (inline)
	virtual void setUndeleteFlag(unsigned char);                            // _B0 (inline)
	virtual void setFontUndeleteFlag();                                     // _B4 (inline)
	virtual ~J2DTevBlock();                                                 // _B8 (inline)
};

#endif
