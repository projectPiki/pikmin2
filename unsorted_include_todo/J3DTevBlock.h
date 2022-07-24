#ifndef _J3DTEVBLOCK_H
#define _J3DTEVBLOCK_H

/*
    __vt__11J3DTevBlock:
    .4byte 0
    .4byte 0
    .4byte reset__11J3DTevBlockFP11J3DTevBlock
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
    .4byte 0
    .4byte 0
    .4byte 0
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
    .4byte __dt__11J3DTevBlockFv
*/

struct J3DTevBlock {
	virtual void reset(J3DTevBlock*);                                            // _08 (inline)
	virtual void load();                                                         // _0C (inline)
	virtual void diff(unsigned long);                                            // _10
	virtual void diffTexNo();                                                    // _14 (inline)
	virtual void diffTevReg();                                                   // _18 (inline)
	virtual void diffTexCoordScale();                                            // _1C (inline)
	virtual void diffTevStage();                                                 // _20 (inline)
	virtual void diffTevStageIndirect();                                         // _24 (inline)
	virtual void patch();                                                        // _28 (inline)
	virtual void patchTexNo();                                                   // _2C (inline)
	virtual void patchTevReg();                                                  // _30 (inline)
	virtual void patchTexNoAndTexCoordScale();                                   // _34 (inline)
	virtual void _38() = 0;                                                      // _38
	virtual void _3C() = 0;                                                      // _3C
	virtual void _40() = 0;                                                      // _40
	virtual void countDLSize();                                                  // _44 (inline)
	virtual void setTexNo(unsigned long, const unsigned short*);                 // _48 (inline)
	virtual void setTexNo(unsigned long, unsigned short);                        // _4C (inline)
	virtual void getTexNo(unsigned long) const;                                  // _50 (inline)
	virtual void setTevOrder(unsigned long, const J3DTevOrder*);                 // _54 (inline)
	virtual void setTevOrder(unsigned long, J3DTevOrder);                        // _58 (inline)
	virtual void getTevOrder(unsigned long);                                     // _5C (inline)
	virtual void setTevColor(unsigned long, const J3DGXColorS10*);               // _60 (inline)
	virtual void setTevColor(unsigned long, J3DGXColorS10);                      // _64 (inline)
	virtual void getTevColor(unsigned long);                                     // _68 (inline)
	virtual void setTevKColor(unsigned long, const J3DGXColor*);                 // _6C (inline)
	virtual void setTevKColor(unsigned long, J3DGXColor);                        // _70 (inline)
	virtual void getTevKColor(unsigned long);                                    // _74 (inline)
	virtual void setTevKColorSel(unsigned long, const unsigned char*);           // _78 (inline)
	virtual void setTevKColorSel(unsigned long, unsigned char);                  // _7C (inline)
	virtual void getTevKColorSel(unsigned long);                                 // _80 (inline)
	virtual void setTevKAlphaSel(unsigned long, const unsigned char*);           // _84 (inline)
	virtual void setTevKAlphaSel(unsigned long, unsigned char);                  // _88 (inline)
	virtual void getTevKAlphaSel(unsigned long);                                 // _8C (inline)
	virtual void setTevStageNum(const unsigned char*);                           // _90 (inline)
	virtual void setTevStageNum(unsigned char);                                  // _94 (inline)
	virtual void getTevStageNum() const;                                         // _98 (inline)
	virtual void setTevStage(unsigned long, const J3DTevStage*);                 // _9C (inline)
	virtual void setTevStage(unsigned long, J3DTevStage);                        // _A0 (inline)
	virtual void getTevStage(unsigned long);                                     // _A4 (inline)
	virtual void setTevSwapModeInfo(unsigned long, const J3DTevSwapModeInfo*);   // _A8 (inline)
	virtual void setTevSwapModeInfo(unsigned long, J3DTevSwapModeInfo);          // _AC (inline)
	virtual void setTevSwapModeTable(unsigned long, const J3DTevSwapModeTable*); // _B0 (inline)
	virtual void setTevSwapModeTable(unsigned long, J3DTevSwapModeTable);        // _B4 (inline)
	virtual void getTevSwapModeTable(unsigned long);                             // _B8 (inline)
	virtual void setIndTevStage(unsigned long, const J3DIndTevStage*);           // _BC (inline)
	virtual void setIndTevStage(unsigned long, J3DIndTevStage);                  // _C0 (inline)
	virtual void getIndTevStage(unsigned long);                                  // _C4 (inline)
	virtual void getTexNoOffset() const;                                         // _C8 (inline)
	virtual void getTevRegOffset() const;                                        // _CC (inline)
	virtual void setTexNoOffset(unsigned long);                                  // _D0 (inline)
	virtual void setTevRegOffset(unsigned long);                                 // _D4 (inline)
	virtual ~J3DTevBlock();                                                      // _D8 (inline)
};

#endif
