#ifndef _J3DTEVBLOCK16_H
#define _J3DTEVBLOCK16_H

/*
    __vt__13J3DTevBlock16:
    .4byte 0
    .4byte 0
    .4byte reset__13J3DTevBlock16FP11J3DTevBlock
    .4byte load__13J3DTevBlock16Fv
    .4byte diff__11J3DTevBlockFUl
    .4byte diffTexNo__13J3DTevBlock16Fv
    .4byte diffTevReg__13J3DTevBlock16Fv
    .4byte diffTexCoordScale__13J3DTevBlock16Fv
    .4byte diffTevStage__13J3DTevBlock16Fv
    .4byte diffTevStageIndirect__13J3DTevBlock16Fv
    .4byte patch__13J3DTevBlock16Fv
    .4byte patchTexNo__13J3DTevBlock16Fv
    .4byte patchTevReg__13J3DTevBlock16Fv
    .4byte patchTexNoAndTexCoordScale__13J3DTevBlock16Fv
    .4byte ptrToIndex__13J3DTevBlock16Fv
    .4byte indexToPtr__13J3DTevBlock16Fv
    .4byte getType__13J3DTevBlock16Fv
    .4byte countDLSize__13J3DTevBlock16Fv
    .4byte setTexNo__13J3DTevBlock16FUlPCUs
    .4byte setTexNo__13J3DTevBlock16FUlUs
    .4byte getTexNo__13J3DTevBlock16CFUl
    .4byte setTevOrder__13J3DTevBlock16FUlPC11J3DTevOrder
    .4byte setTevOrder__13J3DTevBlock16FUl11J3DTevOrder
    .4byte getTevOrder__13J3DTevBlock16FUl
    .4byte setTevColor__13J3DTevBlock16FUlPC13J3DGXColorS10
    .4byte setTevColor__13J3DTevBlock16FUl13J3DGXColorS10
    .4byte getTevColor__13J3DTevBlock16FUl
    .4byte setTevKColor__13J3DTevBlock16FUlPC10J3DGXColor
    .4byte setTevKColor__13J3DTevBlock16FUl10J3DGXColor
    .4byte getTevKColor__13J3DTevBlock16FUl
    .4byte setTevKColorSel__13J3DTevBlock16FUlPCUc
    .4byte setTevKColorSel__13J3DTevBlock16FUlUc
    .4byte getTevKColorSel__13J3DTevBlock16FUl
    .4byte setTevKAlphaSel__13J3DTevBlock16FUlPCUc
    .4byte setTevKAlphaSel__13J3DTevBlock16FUlUc
    .4byte getTevKAlphaSel__13J3DTevBlock16FUl
    .4byte setTevStageNum__13J3DTevBlock16FPCUc
    .4byte setTevStageNum__13J3DTevBlock16FUc
    .4byte getTevStageNum__13J3DTevBlock16CFv
    .4byte setTevStage__13J3DTevBlock16FUlPC11J3DTevStage
    .4byte setTevStage__13J3DTevBlock16FUl11J3DTevStage
    .4byte getTevStage__13J3DTevBlock16FUl
    .4byte setTevSwapModeInfo__13J3DTevBlock16FUlPC18J3DTevSwapModeInfo
    .4byte setTevSwapModeInfo__13J3DTevBlock16FUl18J3DTevSwapModeInfo
    .4byte setTevSwapModeTable__13J3DTevBlock16FUlPC19J3DTevSwapModeTable
    .4byte setTevSwapModeTable__13J3DTevBlock16FUl19J3DTevSwapModeTable
    .4byte getTevSwapModeTable__13J3DTevBlock16FUl
    .4byte setIndTevStage__13J3DTevBlock16FUlPC14J3DIndTevStage
    .4byte setIndTevStage__13J3DTevBlock16FUl14J3DIndTevStage
    .4byte getIndTevStage__13J3DTevBlock16FUl
    .4byte getTexNoOffset__13J3DTevBlock16CFv
    .4byte getTevRegOffset__13J3DTevBlock16CFv
    .4byte setTexNoOffset__11J3DTevBlockFUl
    .4byte setTevRegOffset__13J3DTevBlock16FUl
    .4byte __dt__13J3DTevBlock16Fv
*/

struct J3DTevBlock {
	virtual void reset(J3DTevBlock*);                                  // _00
	virtual void load();                                               // _04
	virtual void diff(unsigned long);                                  // _08
	virtual void diffTexNo();                                          // _0C
	virtual void diffTevReg();                                         // _10
	virtual void diffTexCoordScale();                                  // _14
	virtual void diffTevStage();                                       // _18
	virtual void diffTevStageIndirect();                               // _1C
	virtual void patch();                                              // _20
	virtual void patchTexNo();                                         // _24
	virtual void patchTevReg();                                        // _28
	virtual void patchTexNoAndTexCoordScale();                         // _2C
	virtual void ptrToIndex();                                         // _30
	virtual void indexToPtr();                                         // _34
	virtual void getType();                                            // _38
	virtual void countDLSize();                                        // _3C
	virtual void setTexNo(unsigned long, const unsigned short*);       // _40
	virtual void setTexNo(unsigned long, unsigned short);              // _44
	virtual void getTexNo(unsigned long) const;                        // _48
	virtual void setTevOrder(unsigned long, const J3DTevOrder*);       // _4C
	virtual void setTevOrder(unsigned long, J3DTevOrder);              // _50
	virtual void getTevOrder(unsigned long);                           // _54
	virtual void setTevColor(unsigned long, const J3DGXColorS10*);     // _58
	virtual void setTevColor(unsigned long, J3DGXColorS10);            // _5C
	virtual void getTevColor(unsigned long);                           // _60
	virtual void setTevKColor(unsigned long, const J3DGXColor*);       // _64
	virtual void setTevKColor(unsigned long, J3DGXColor);              // _68
	virtual void getTevKColor(unsigned long);                          // _6C
	virtual void setTevKColorSel(unsigned long, const unsigned char*); // _70
	virtual void setTevKColorSel(unsigned long, unsigned char);        // _74
	virtual void getTevKColorSel(unsigned long);                       // _78
	virtual void setTevKAlphaSel(unsigned long, const unsigned char*); // _7C
	virtual void setTevKAlphaSel(unsigned long, unsigned char);        // _80
	virtual void getTevKAlphaSel(unsigned long);                       // _84
	virtual void setTevStageNum(const unsigned char*);                 // _88
	virtual void setTevStageNum(unsigned char);                        // _8C
	virtual void getTevStageNum() const;                               // _90
	virtual void setTevStage(unsigned long, const J3DTevStage*);       // _94
	virtual void setTevStage(unsigned long, J3DTevStage);              // _98
	virtual void getTevStage(unsigned long);                           // _9C
	virtual void setTevSwapModeInfo(unsigned long,
	                                const J3DTevSwapModeInfo*);         // _A0
	virtual void setTevSwapModeInfo(unsigned long, J3DTevSwapModeInfo); // _A4
	virtual void setTevSwapModeTable(unsigned long,
	                                 const J3DTevSwapModeTable*);         // _A8
	virtual void setTevSwapModeTable(unsigned long, J3DTevSwapModeTable); // _AC
	virtual void getTevSwapModeTable(unsigned long);                      // _B0
	virtual void setIndTevStage(unsigned long, const J3DIndTevStage*);    // _B4
	virtual void setIndTevStage(unsigned long, J3DIndTevStage);           // _B8
	virtual void getIndTevStage(unsigned long);                           // _BC
	virtual void getTexNoOffset() const;                                  // _C0
	virtual void getTevRegOffset() const;                                 // _C4
	virtual void setTexNoOffset(unsigned long);                           // _C8

	// _00 VTBL
};

struct J3DTevBlock16 : public J3DTevBlock {
	virtual void reset(J3DTevBlock*);                                  // _00
	virtual void load();                                               // _04
	virtual void diff(unsigned long);                                  // _08
	virtual void diffTexNo();                                          // _0C
	virtual void diffTevReg();                                         // _10
	virtual void diffTexCoordScale();                                  // _14
	virtual void diffTevStage();                                       // _18
	virtual void diffTevStageIndirect();                               // _1C
	virtual void patch();                                              // _20
	virtual void patchTexNo();                                         // _24
	virtual void patchTevReg();                                        // _28
	virtual void patchTexNoAndTexCoordScale();                         // _2C
	virtual void ptrToIndex();                                         // _30
	virtual void indexToPtr();                                         // _34
	virtual void getType();                                            // _38
	virtual void countDLSize();                                        // _3C
	virtual void setTexNo(unsigned long, const unsigned short*);       // _40
	virtual void setTexNo(unsigned long, unsigned short);              // _44
	virtual void getTexNo(unsigned long) const;                        // _48
	virtual void setTevOrder(unsigned long, const J3DTevOrder*);       // _4C
	virtual void setTevOrder(unsigned long, J3DTevOrder);              // _50
	virtual void getTevOrder(unsigned long);                           // _54
	virtual void setTevColor(unsigned long, const J3DGXColorS10*);     // _58
	virtual void setTevColor(unsigned long, J3DGXColorS10);            // _5C
	virtual void getTevColor(unsigned long);                           // _60
	virtual void setTevKColor(unsigned long, const J3DGXColor*);       // _64
	virtual void setTevKColor(unsigned long, J3DGXColor);              // _68
	virtual void getTevKColor(unsigned long);                          // _6C
	virtual void setTevKColorSel(unsigned long, const unsigned char*); // _70
	virtual void setTevKColorSel(unsigned long, unsigned char);        // _74
	virtual void getTevKColorSel(unsigned long);                       // _78
	virtual void setTevKAlphaSel(unsigned long, const unsigned char*); // _7C
	virtual void setTevKAlphaSel(unsigned long, unsigned char);        // _80
	virtual void getTevKAlphaSel(unsigned long);                       // _84
	virtual void setTevStageNum(const unsigned char*);                 // _88
	virtual void setTevStageNum(unsigned char);                        // _8C
	virtual void getTevStageNum() const;                               // _90
	virtual void setTevStage(unsigned long, const J3DTevStage*);       // _94
	virtual void setTevStage(unsigned long, J3DTevStage);              // _98
	virtual void getTevStage(unsigned long);                           // _9C
	virtual void setTevSwapModeInfo(unsigned long,
	                                const J3DTevSwapModeInfo*);         // _A0
	virtual void setTevSwapModeInfo(unsigned long, J3DTevSwapModeInfo); // _A4
	virtual void setTevSwapModeTable(unsigned long,
	                                 const J3DTevSwapModeTable*);         // _A8
	virtual void setTevSwapModeTable(unsigned long, J3DTevSwapModeTable); // _AC
	virtual void getTevSwapModeTable(unsigned long);                      // _B0
	virtual void setIndTevStage(unsigned long, const J3DIndTevStage*);    // _B4
	virtual void setIndTevStage(unsigned long, J3DIndTevStage);           // _B8
	virtual void getIndTevStage(unsigned long);                           // _BC
	virtual void getTexNoOffset() const;                                  // _C0
	virtual void getTevRegOffset() const;                                 // _C4
	virtual void setTexNoOffset(unsigned long);                           // _C8
	virtual void setTevRegOffset(unsigned long);                          // _CC
	virtual ~J3DTevBlock16();                                             // _D0

	// _00 VTBL
};

#endif
