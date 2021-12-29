#ifndef _J3DTEVBLOCKNULL_H
#define _J3DTEVBLOCKNULL_H

/*
    __vt__15J3DTevBlockNull:
    .4byte 0
    .4byte 0
    .4byte reset__15J3DTevBlockNullFP11J3DTevBlock
    .4byte load__11J3DTevBlockFv
    .4byte diff__11J3DTevBlockFUl
    .4byte diffTexNo__11J3DTevBlockFv
    .4byte diffTevReg__11J3DTevBlockFv
    .4byte diffTexCoordScale__11J3DTevBlockFv
    .4byte diffTevStage__11J3DTevBlockFv
    .4byte diffTevStageIndirect__11J3DTevBlockFv
    .4byte patch__11J3DTevBlockFv
    .4byte patchTexNo__11J3DTevBlockFv
    .4byte patchTevReg__11J3DTevBlockFv
    .4byte patchTexNoAndTexCoordScale__11J3DTevBlockFv
    .4byte ptrToIndex__15J3DTevBlockNullFv
    .4byte indexToPtr__15J3DTevBlockNullFv
    .4byte getType__15J3DTevBlockNullFv
    .4byte countDLSize__11J3DTevBlockFv
    .4byte setTexNo__11J3DTevBlockFUlPCUs
    .4byte setTexNo__11J3DTevBlockFUlUs
    .4byte getTexNo__11J3DTevBlockCFUl
    .4byte setTevOrder__11J3DTevBlockFUlPC11J3DTevOrder
    .4byte setTevOrder__11J3DTevBlockFUl11J3DTevOrder
    .4byte getTevOrder__11J3DTevBlockFUl
    .4byte setTevColor__11J3DTevBlockFUlPC13J3DGXColorS10
    .4byte setTevColor__11J3DTevBlockFUl13J3DGXColorS10
    .4byte getTevColor__11J3DTevBlockFUl
    .4byte setTevKColor__11J3DTevBlockFUlPC10J3DGXColor
    .4byte setTevKColor__11J3DTevBlockFUl10J3DGXColor
    .4byte getTevKColor__11J3DTevBlockFUl
    .4byte setTevKColorSel__11J3DTevBlockFUlPCUc
    .4byte setTevKColorSel__11J3DTevBlockFUlUc
    .4byte getTevKColorSel__11J3DTevBlockFUl
    .4byte setTevKAlphaSel__11J3DTevBlockFUlPCUc
    .4byte setTevKAlphaSel__11J3DTevBlockFUlUc
    .4byte getTevKAlphaSel__11J3DTevBlockFUl
    .4byte setTevStageNum__11J3DTevBlockFPCUc
    .4byte setTevStageNum__11J3DTevBlockFUc
    .4byte getTevStageNum__11J3DTevBlockCFv
    .4byte setTevStage__11J3DTevBlockFUlPC11J3DTevStage
    .4byte setTevStage__11J3DTevBlockFUl11J3DTevStage
    .4byte getTevStage__11J3DTevBlockFUl
    .4byte setTevSwapModeInfo__11J3DTevBlockFUlPC18J3DTevSwapModeInfo
    .4byte setTevSwapModeInfo__11J3DTevBlockFUl18J3DTevSwapModeInfo
    .4byte setTevSwapModeTable__11J3DTevBlockFUlPC19J3DTevSwapModeTable
    .4byte setTevSwapModeTable__11J3DTevBlockFUl19J3DTevSwapModeTable
    .4byte getTevSwapModeTable__11J3DTevBlockFUl
    .4byte setIndTevStage__11J3DTevBlockFUlPC14J3DIndTevStage
    .4byte setIndTevStage__11J3DTevBlockFUl14J3DIndTevStage
    .4byte getIndTevStage__11J3DTevBlockFUl
    .4byte getTexNoOffset__11J3DTevBlockCFv
    .4byte getTevRegOffset__11J3DTevBlockCFv
    .4byte setTexNoOffset__11J3DTevBlockFUl
    .4byte setTevRegOffset__11J3DTevBlockFUl
    .4byte __dt__15J3DTevBlockNullFv
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
	virtual void setTevRegOffset(unsigned long);                          // _CC

	// _00 VTBL
};

struct J3DTevBlockNull : public J3DTevBlock {
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
	virtual ~J3DTevBlockNull();                                           // _D0

	// _00 VTBL
};

#endif
