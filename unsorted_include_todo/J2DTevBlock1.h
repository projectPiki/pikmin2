#ifndef _J2DTEVBLOCK1_H
#define _J2DTEVBLOCK1_H

/*
    __vt__12J2DTevBlock1:
    .4byte 0
    .4byte 0
    .4byte initialize__12J2DTevBlock1Fv
    .4byte setGX__12J2DTevBlock1Fv
    .4byte loadTexture__12J2DTevBlock1F11_GXTexMapIDUl
    .4byte getType__12J2DTevBlock1Fv
    .4byte getMaxStage__12J2DTevBlock1Fv
    .4byte setTexNo__12J2DTevBlock1FUlUs
    .4byte getTexNo__12J2DTevBlock1CFUl
    .4byte setFontNo__12J2DTevBlock1FUs
    .4byte getFontNo__12J2DTevBlock1CFv
    .4byte setTevOrder__12J2DTevBlock1FUl11J2DTevOrder
    .4byte getTevOrder__12J2DTevBlock1FUl
    .4byte setTevColor__12J2DTevBlock1FUl13J2DGXColorS10
    .4byte getTevColor__12J2DTevBlock1FUl
    .4byte setTevKColor__12J2DTevBlock1FUlQ28JUtility6TColor
    .4byte getTevKColor__12J2DTevBlock1FUl
    .4byte setTevKColorSel__12J2DTevBlock1FUlUc
    .4byte getTevKColorSel__12J2DTevBlock1FUl
    .4byte setTevKAlphaSel__12J2DTevBlock1FUlUc
    .4byte getTevKAlphaSel__12J2DTevBlock1FUl
    .4byte setTevStageNum__12J2DTevBlock1FUc
    .4byte getTevStageNum__12J2DTevBlock1CFv
    .4byte setTevStage__12J2DTevBlock1FUl11J2DTevStage
    .4byte getTevStage__12J2DTevBlock1FUl
    .4byte setTevSwapModeInfo__12J2DTevBlock1FUl18J2DTevSwapModeInfo
    .4byte setTevSwapModeTable__12J2DTevBlock1FUl19J2DTevSwapModeTable
    .4byte getTevSwapModeTable__12J2DTevBlock1FUl
    .4byte setIndTevStage__12J2DTevBlock1FUl14J2DIndTevStage
    .4byte getIndTevStage__12J2DTevBlock1FUl
    .4byte insertTexture__12J2DTevBlock1FUlPC7ResTIMG
    .4byte insertTexture__12J2DTevBlock1FUlPC7ResTIMGP10JUTPalette
    .4byte insertTexture__12J2DTevBlock1FUlP10JUTTexture
    .4byte setTexture__12J2DTevBlock1FUlPC7ResTIMG
    .4byte setTexture__12J2DTevBlock1FUlP10JUTTexture
    .4byte removeTexture__12J2DTevBlock1FUl
    .4byte setFont__12J2DTevBlock1FP7ResFONT
    .4byte setFont__12J2DTevBlock1FP7JUTFont
    .4byte setPalette__12J2DTevBlock1FUlPC7ResTLUT
    .4byte prepareTexture__12J2DTevBlock1FUc
    .4byte getTexture__12J2DTevBlock1FUl
    .4byte getPalette__12J2DTevBlock1FUl
    .4byte getFont__12J2DTevBlock1Fv
    .4byte shiftDeleteFlag__12J2DTevBlock1FUcb
    .4byte setUndeleteFlag__12J2DTevBlock1FUc
    .4byte setFontUndeleteFlag__12J2DTevBlock1Fv
    .4byte __dt__12J2DTevBlock1Fv
*/

struct J2DTevBlock1 {
	virtual void initialize();                                              // _08
	virtual void setGX();                                                   // _0C
	virtual void loadTexture(_GXTexMapID, unsigned long);                   // _10
	virtual void getType();                                                 // _14 (inline)
	virtual void getMaxStage();                                             // _18 (inline)
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
	virtual void insertTexture(unsigned long, const ResTIMG*, JUTPalette*); // _7C
	virtual void insertTexture(unsigned long, JUTTexture*);                 // _80
	virtual void setTexture(unsigned long, const ResTIMG*);                 // _84
	virtual void setTexture(unsigned long, JUTTexture*);                    // _88
	virtual void removeTexture(unsigned long);                              // _8C
	virtual void setFont(ResFONT*);                                         // _90
	virtual void setFont(JUTFont*);                                         // _94
	virtual void setPalette(unsigned long, const ResTLUT*);                 // _98
	virtual void prepareTexture(unsigned char);                             // _9C
	virtual void getTexture(unsigned long);                                 // _A0 (inline)
	virtual void getPalette(unsigned long);                                 // _A4 (inline)
	virtual void getFont();                                                 // _A8 (inline)
	virtual void shiftDeleteFlag(unsigned char, bool);                      // _AC
	virtual void setUndeleteFlag(unsigned char);                            // _B0 (inline)
	virtual void setFontUndeleteFlag();                                     // _B4 (inline)
	virtual ~J2DTevBlock1();                                                // _B8
};

#endif
