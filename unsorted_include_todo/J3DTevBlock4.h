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
	virtual void reset(J3DTevBlock*);                                            // _08
	virtual void load();                                                         // _0C
	virtual void diff(unsigned long);                                            // _10
	virtual void diffTexNo();                                                    // _14
	virtual void diffTevReg();                                                   // _18
	virtual void diffTexCoordScale();                                            // _1C
	virtual void diffTevStage();                                                 // _20
	virtual void diffTevStageIndirect();                                         // _24
	virtual void patch();                                                        // _28
	virtual void patchTexNo();                                                   // _2C
	virtual void patchTevReg();                                                  // _30
	virtual void patchTexNoAndTexCoordScale();                                   // _34
	virtual void ptrToIndex();                                                   // _38 (inline)
	virtual void indexToPtr();                                                   // _3C (inline)
	virtual void getType();                                                      // _40 (inline)
	virtual void countDLSize();                                                  // _44
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
};

struct J3DTevBlock4 : public J3DTevBlock {
	virtual void reset(J3DTevBlock*);                                            // _08
	virtual void load();                                                         // _0C
	virtual void diffTexNo();                                                    // _14
	virtual void diffTevReg();                                                   // _18
	virtual void diffTexCoordScale();                                            // _1C
	virtual void diffTevStage();                                                 // _20
	virtual void diffTevStageIndirect();                                         // _24
	virtual void patch();                                                        // _28
	virtual void patchTexNo();                                                   // _2C
	virtual void patchTevReg();                                                  // _30
	virtual void patchTexNoAndTexCoordScale();                                   // _34
	virtual void ptrToIndex();                                                   // _38 (inline)
	virtual void indexToPtr();                                                   // _3C (inline)
	virtual void getType();                                                      // _40 (inline)
	virtual void countDLSize();                                                  // _44
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
	virtual void setTevRegOffset(unsigned long);                                 // _D4 (inline)
	virtual ~J3DTevBlock4();                                                     // _D8 (inline)
};

#endif
