#ifndef _J3DTEVBLOCKPATCHED_H
#define _J3DTEVBLOCKPATCHED_H

struct J3DTevBlock {
	virtual void _00() = 0;                                            // _00
	virtual void _04() = 0;                                            // _04
	virtual void diff(unsigned long);                                  // _08
	virtual void _0C() = 0;                                            // _0C
	virtual void _10() = 0;                                            // _10
	virtual void _14() = 0;                                            // _14
	virtual void _18() = 0;                                            // _18
	virtual void _1C() = 0;                                            // _1C
	virtual void _20() = 0;                                            // _20
	virtual void _24() = 0;                                            // _24
	virtual void _28() = 0;                                            // _28
	virtual void _2C() = 0;                                            // _2C
	virtual void _30() = 0;                                            // _30
	virtual void _34() = 0;                                            // _34
	virtual void _38() = 0;                                            // _38
	virtual void _3C() = 0;                                            // _3C
	virtual void _40() = 0;                                            // _40
	virtual void _44() = 0;                                            // _44
	virtual void _48() = 0;                                            // _48
	virtual void _4C() = 0;                                            // _4C
	virtual void _50() = 0;                                            // _50
	virtual void _54() = 0;                                            // _54
	virtual void _58() = 0;                                            // _58
	virtual void _5C() = 0;                                            // _5C
	virtual void _60() = 0;                                            // _60
	virtual void _64() = 0;                                            // _64
	virtual void _68() = 0;                                            // _68
	virtual void _6C() = 0;                                            // _6C
	virtual void _70() = 0;                                            // _70
	virtual void _74() = 0;                                            // _74
	virtual void _78() = 0;                                            // _78
	virtual void setTevKAlphaSel(unsigned long, const unsigned char*); // _7C
	virtual void setTevKAlphaSel(unsigned long, unsigned char);        // _80
	virtual void getTevKAlphaSel(unsigned long);                       // _84
	virtual void _88() = 0;                                            // _88
	virtual void _8C() = 0;                                            // _8C
	virtual void _90() = 0;                                            // _90
	virtual void _94() = 0;                                            // _94
	virtual void _98() = 0;                                            // _98
	virtual void _9C() = 0;                                            // _9C
	virtual void setTevSwapModeInfo(unsigned long,
	                                const J3DTevSwapModeInfo*);         // _A0
	virtual void setTevSwapModeInfo(unsigned long, J3DTevSwapModeInfo); // _A4
	virtual void setTevSwapModeTable(unsigned long,
	                                 const J3DTevSwapModeTable*);         // _A8
	virtual void setTevSwapModeTable(unsigned long, J3DTevSwapModeTable); // _AC
	virtual void getTevSwapModeTable(unsigned long);                      // _B0
	virtual void _B4() = 0;                                               // _B4
	virtual void _B8() = 0;                                               // _B8
	virtual void _BC() = 0;                                               // _BC
	virtual void _C0() = 0;                                               // _C0
	virtual void _C4() = 0;                                               // _C4
	virtual void setTexNoOffset(unsigned long);                           // _C8

	// _00 VTBL
};

struct J3DTevBlockPatched : public J3DTevBlock {
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
	virtual ~J3DTevBlockPatched();                                        // _D0

	// _00 VTBL
};

#endif
