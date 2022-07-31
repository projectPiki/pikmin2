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
	virtual void reset(J3DTevBlock*);                                            // _08 (weak)
	virtual void load();                                                         // _0C (weak)
	virtual void diff(unsigned long);                                            // _10
	virtual void diffTexNo();                                                    // _14 (weak)
	virtual void diffTevReg();                                                   // _18 (weak)
	virtual void diffTexCoordScale();                                            // _1C (weak)
	virtual void diffTevStage();                                                 // _20 (weak)
	virtual void diffTevStageIndirect();                                         // _24 (weak)
	virtual void patch();                                                        // _28 (weak)
	virtual void patchTexNo();                                                   // _2C (weak)
	virtual void patchTevReg();                                                  // _30 (weak)
	virtual void patchTexNoAndTexCoordScale();                                   // _34 (weak)
	virtual void ptrToIndex();                                                   // _38 (weak)
	virtual void indexToPtr();                                                   // _3C (weak)
	virtual void getType();                                                      // _40 (weak)
	virtual void countDLSize();                                                  // _44 (weak)
	virtual void setTexNo(unsigned long, const unsigned short*);                 // _48 (weak)
	virtual void setTexNo(unsigned long, unsigned short);                        // _4C (weak)
	virtual void getTexNo(unsigned long) const;                                  // _50 (weak)
	virtual void setTevOrder(unsigned long, const J3DTevOrder*);                 // _54 (weak)
	virtual void setTevOrder(unsigned long, J3DTevOrder);                        // _58 (weak)
	virtual void getTevOrder(unsigned long);                                     // _5C (weak)
	virtual void setTevColor(unsigned long, const J3DGXColorS10*);               // _60 (weak)
	virtual void setTevColor(unsigned long, J3DGXColorS10);                      // _64 (weak)
	virtual void getTevColor(unsigned long);                                     // _68 (weak)
	virtual void setTevKColor(unsigned long, const J3DGXColor*);                 // _6C (weak)
	virtual void setTevKColor(unsigned long, J3DGXColor);                        // _70 (weak)
	virtual void getTevKColor(unsigned long);                                    // _74 (weak)
	virtual void setTevKColorSel(unsigned long, const unsigned char*);           // _78 (weak)
	virtual void setTevKColorSel(unsigned long, unsigned char);                  // _7C (weak)
	virtual void getTevKColorSel(unsigned long);                                 // _80 (weak)
	virtual void setTevKAlphaSel(unsigned long, const unsigned char*);           // _84 (weak)
	virtual void setTevKAlphaSel(unsigned long, unsigned char);                  // _88 (weak)
	virtual void getTevKAlphaSel(unsigned long);                                 // _8C (weak)
	virtual void setTevStageNum(const unsigned char*);                           // _90 (weak)
	virtual void setTevStageNum(unsigned char);                                  // _94 (weak)
	virtual void getTevStageNum() const;                                         // _98 (weak)
	virtual void setTevStage(unsigned long, const J3DTevStage*);                 // _9C (weak)
	virtual void setTevStage(unsigned long, J3DTevStage);                        // _A0 (weak)
	virtual void getTevStage(unsigned long);                                     // _A4 (weak)
	virtual void setTevSwapModeInfo(unsigned long, const J3DTevSwapModeInfo*);   // _A8 (weak)
	virtual void setTevSwapModeInfo(unsigned long, J3DTevSwapModeInfo);          // _AC (weak)
	virtual void setTevSwapModeTable(unsigned long, const J3DTevSwapModeTable*); // _B0 (weak)
	virtual void setTevSwapModeTable(unsigned long, J3DTevSwapModeTable);        // _B4 (weak)
	virtual void getTevSwapModeTable(unsigned long);                             // _B8 (weak)
	virtual void setIndTevStage(unsigned long, const J3DIndTevStage*);           // _BC (weak)
	virtual void setIndTevStage(unsigned long, J3DIndTevStage);                  // _C0 (weak)
	virtual void getIndTevStage(unsigned long);                                  // _C4 (weak)
	virtual void getTexNoOffset() const;                                         // _C8 (weak)
	virtual void getTevRegOffset() const;                                        // _CC (weak)
	virtual void setTexNoOffset(unsigned long);                                  // _D0 (weak)
	virtual void setTevRegOffset(unsigned long);                                 // _D4 (weak)
};

struct J3DTevBlockNull : public J3DTevBlock {
	virtual void reset(J3DTevBlock*); // _08 (weak)
	virtual void ptrToIndex();        // _38 (weak)
	virtual void indexToPtr();        // _3C (weak)
	virtual void getType();           // _40 (weak)
	virtual ~J3DTevBlockNull();       // _D8 (weak)

	void initialize();
};

#endif
