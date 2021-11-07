#ifndef _J2DTEVBLOCK1_H
#define _J2DTEVBLOCK1_H

struct J2DTevBlock1 {
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
	virtual ~J2DTevBlock1();                                // _B0

	// _00 VTBL
};

#endif
