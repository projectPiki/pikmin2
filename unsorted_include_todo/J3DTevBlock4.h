#ifndef _J3DTEVBLOCK4_H
#define _J3DTEVBLOCK4_H

/*
    __vt__12J3DTevBlock4:
    .4byte 0
    .4byte 0
    .4byte reset__12J3DTevBlock4FP11J3DTevBlock
    .4byte load__12J3DTevBlock4Fv
    .4byte diff__11J3DTevBlockFUl
    .4byte diffTexNo__12J3DTevBlock4Fv
    .4byte diffTevReg__12J3DTevBlock4Fv
    .4byte diffTexCoordScale__12J3DTevBlock4Fv
    .4byte diffTevStage__12J3DTevBlock4Fv
    .4byte diffTevStageIndirect__12J3DTevBlock4Fv
    .4byte patch__12J3DTevBlock4Fv
    .4byte patchTexNo__12J3DTevBlock4Fv
    .4byte patchTevReg__12J3DTevBlock4Fv
    .4byte patchTexNoAndTexCoordScale__12J3DTevBlock4Fv
    .4byte ptrToIndex__12J3DTevBlock4Fv
    .4byte indexToPtr__12J3DTevBlock4Fv
    .4byte getType__12J3DTevBlock4Fv
    .4byte countDLSize__12J3DTevBlock4Fv
    .4byte setTexNo__12J3DTevBlock4FUlPCUs
    .4byte setTexNo__12J3DTevBlock4FUlUs
    .4byte getTexNo__12J3DTevBlock4CFUl
    .4byte setTevOrder__12J3DTevBlock4FUlPC11J3DTevOrder
    .4byte setTevOrder__12J3DTevBlock4FUl11J3DTevOrder
    .4byte getTevOrder__12J3DTevBlock4FUl
    .4byte setTevColor__12J3DTevBlock4FUlPC13J3DGXColorS10
    .4byte setTevColor__12J3DTevBlock4FUl13J3DGXColorS10
    .4byte getTevColor__12J3DTevBlock4FUl
    .4byte setTevKColor__12J3DTevBlock4FUlPC10J3DGXColor
    .4byte setTevKColor__12J3DTevBlock4FUl10J3DGXColor
    .4byte getTevKColor__12J3DTevBlock4FUl
    .4byte setTevKColorSel__12J3DTevBlock4FUlPCUc
    .4byte setTevKColorSel__12J3DTevBlock4FUlUc
    .4byte getTevKColorSel__12J3DTevBlock4FUl
    .4byte setTevKAlphaSel__12J3DTevBlock4FUlPCUc
    .4byte setTevKAlphaSel__12J3DTevBlock4FUlUc
    .4byte getTevKAlphaSel__12J3DTevBlock4FUl
    .4byte setTevStageNum__12J3DTevBlock4FPCUc
    .4byte setTevStageNum__12J3DTevBlock4FUc
    .4byte getTevStageNum__12J3DTevBlock4CFv
    .4byte setTevStage__12J3DTevBlock4FUlPC11J3DTevStage
    .4byte setTevStage__12J3DTevBlock4FUl11J3DTevStage
    .4byte getTevStage__12J3DTevBlock4FUl
    .4byte setTevSwapModeInfo__12J3DTevBlock4FUlPC18J3DTevSwapModeInfo
    .4byte setTevSwapModeInfo__12J3DTevBlock4FUl18J3DTevSwapModeInfo
    .4byte setTevSwapModeTable__12J3DTevBlock4FUlPC19J3DTevSwapModeTable
    .4byte setTevSwapModeTable__12J3DTevBlock4FUl19J3DTevSwapModeTable
    .4byte getTevSwapModeTable__12J3DTevBlock4FUl
    .4byte setIndTevStage__12J3DTevBlock4FUlPC14J3DIndTevStage
    .4byte setIndTevStage__12J3DTevBlock4FUl14J3DIndTevStage
    .4byte getIndTevStage__12J3DTevBlock4FUl
    .4byte getTexNoOffset__12J3DTevBlock4CFv
    .4byte getTevRegOffset__12J3DTevBlock4CFv
    .4byte setTexNoOffset__11J3DTevBlockFUl
    .4byte setTevRegOffset__12J3DTevBlock4FUl
    .4byte __dt__12J3DTevBlock4Fv
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

struct J3DTevBlock4 : public J3DTevBlock {
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
	virtual ~J3DTevBlock4();                                              // _D0

	// _00 VTBL
};

#endif
