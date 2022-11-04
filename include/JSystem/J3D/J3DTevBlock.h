#ifndef _J3DTEVBLOCK_H
#define _J3DTEVBLOCK_H

#include "Dolphin/gx.h"
#include "JSystem/J3D/J3DGXColor.h"
#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

struct J3DTevSwapModeInfo {
	u8 _00;
	u8 _01;
};

struct J3DTevBlock {
	virtual void reset(J3DTevBlock*);          // _08 (weak)
	virtual void load();                       // _0C (weak)
	virtual void diff(u32);                    // _10
	virtual void diffTexNo();                  // _14 (weak)
	virtual void diffTevReg();                 // _18 (weak)
	virtual void diffTexCoordScale();          // _1C (weak)
	virtual void diffTevStage();               // _20 (weak)
	virtual void diffTevStageIndirect();       // _24 (weak)
	virtual void patch();                      // _28 (weak)
	virtual void patchTexNo();                 // _2C (weak)
	virtual void patchTevReg();                // _30 (weak)
	virtual void patchTexNoAndTexCoordScale(); // _34 (weak)
	virtual void ptrToIndex()    = 0;          // _38 (weak)
	virtual void indexToPtr()    = 0;          // _3C (weak)
	virtual JBlockType getType() = 0;          // _40 (weak)
	virtual u32 countDLSize();                 // _44 (weak)
	virtual void setTexNo(u32, const u16*);    // _48 (weak)
	/**
	 * @reifiedAddress{8006A360}
	 * @reifiedFile{JSystem/J3D/J3DMaterialAnm.cpp}
	 */
	virtual void setTexNo(u32, u16) {};                  // _4C (weak)
	virtual u16 getTexNo(u32) const;                     // _50 (weak)
	virtual void setTevOrder(u32, const J3DTevOrder*);   // _54 (weak)
	virtual void setTevOrder(u32, J3DTevOrder);          // _58 (weak)
	virtual J3DTevOrder* getTevOrder(u32);               // _5C (weak)
	virtual void setTevColor(u32, const J3DGXColorS10*); // _60 (weak)
	virtual void setTevColor(u32, J3DGXColorS10);        // _64 (weak)
	/**
	 * @reifiedAddress{8006A358}
	 * @reifiedFile{JSystem/J3D/J3DMaterialAnm.cpp}
	 */
	virtual J3DGXColorS10* getTevColor(u32) { return nullptr; } // _68 (weak)
	virtual void setTevKColor(u32, const J3DGXColor*);          // _6C (weak)
	virtual void setTevKColor(u32, J3DGXColor);                 // _70 (weak)
	/**
	 * @reifiedAddress{8006A350}
	 * @reifiedFile{JSystem/J3D/J3DMaterialAnm.cpp}
	 */
	virtual J3DGXColor* getTevKColor(u32) { return nullptr; } // _74 (weak)
	virtual void setTevKColorSel(u32, const u8*);             // _78 (weak)
	virtual void setTevKColorSel(u32, u8);                    // _7C (weak)
	virtual GXTevKColorSel getTevKColorSel(u32);              // _80 (weak)
	virtual void setTevKAlphaSel(u32, const u8*);             // _84 (weak)
	virtual void setTevKAlphaSel(u32, u8);                    // _88 (weak)
	virtual u8 getTevKAlphaSel(u32);                          // _8C (weak)
	virtual void setTevStageNum(const u8*);                   // _90 (weak)
	virtual void setTevStageNum(u8);                          // _94 (weak)
	/**
	 * @reifiedAddress{800602C8}
	 * @reifiedFile{JSystem/J3D/J3DPacket.cpp}
	 */
	virtual u8 getTevStageNum() const { return 1; };                   // _98 (weak)
	virtual void setTevStage(u32, const J3DTevStage*);                 // _9C (weak)
	virtual void setTevStage(u32, J3DTevStage);                        // _A0 (weak)
	virtual J3DTevStage* getTevStage(u32);                             // _A4 (weak)
	virtual void setTevSwapModeInfo(u32, const J3DTevSwapModeInfo*);   // _A8 (weak)
	virtual void setTevSwapModeInfo(u32, J3DTevSwapModeInfo);          // _AC (weak)
	virtual void setTevSwapModeTable(u32, const J3DTevSwapModeTable*); // _B0 (weak)
	virtual void setTevSwapModeTable(u32, J3DTevSwapModeTable);        // _B4 (weak)
	virtual J3DTevSwapModeTable* getTevSwapModeTable(u32);             // _B8 (weak)
	virtual void setIndTevStage(u32, const J3DIndTevStage*);           // _BC (weak)
	virtual void setIndTevStage(u32, J3DIndTevStage);                  // _C0 (weak)
	virtual J3DIndTevStage* getIndTevStage(u32);                       // _C4 (weak)
	virtual u32 getTexNoOffset() const;                                // _C8 (weak)
	virtual u32 getTevRegOffset() const;                               // _CC (weak)
	virtual void setTexNoOffset(u32);                                  // _D0 (weak)
	virtual void setTevRegOffset(u32);                                 // _D4 (weak)
	virtual ~J3DTevBlock() { }                                         // _D8 (weak)

	void indexToPtr_private(u32);

	u32 m_texNoOffset; // _04
};

struct J3DTevBlock1 : public J3DTevBlock {
	inline J3DTevBlock1() { initialize(); }

	virtual void reset(J3DTevBlock*);                        // _08
	virtual void load();                                     // _0C
	virtual void diffTexNo();                                // _14
	virtual void diffTevReg();                               // _18
	virtual void diffTexCoordScale();                        // _1C
	virtual void diffTevStage();                             // _20
	virtual void diffTevStageIndirect();                     // _24
	virtual void patch();                                    // _28
	virtual void patchTexNo();                               // _2C
	virtual void patchTevReg();                              // _30
	virtual void patchTexNoAndTexCoordScale();               // _34
	virtual void ptrToIndex();                               // _38 (weak)
	virtual void indexToPtr();                               // _3C (weak)
	virtual JBlockType getType();                            // _40 (weak)
	virtual u32 countDLSize();                               // _44
	virtual void setTexNo(u32, const u16*);                  // _48 (weak)
	virtual void setTexNo(u32, u16);                         // _4C (weak)
	virtual u16 getTexNo(u32) const;                         // _50 (weak)
	virtual void setTevOrder(u32, const J3DTevOrder*);       // _54 (weak)
	virtual void setTevOrder(u32, J3DTevOrder);              // _58 (weak)
	virtual J3DTevOrder* getTevOrder(u32);                   // _5C (weak)
	virtual void setTevStageNum(const u8*);                  // _90 (weak)
	virtual void setTevStageNum(u8);                         // _94 (weak)
	virtual u8 getTevStageNum() const;                       // _98 (weak)
	virtual void setTevStage(u32, const J3DTevStage*);       // _9C (weak)
	virtual void setTevStage(u32, J3DTevStage);              // _A0 (weak)
	virtual J3DTevStage* getTevStage(u32);                   // _A4 (weak)
	virtual void setIndTevStage(u32, const J3DIndTevStage*); // _BC (weak)
	virtual void setIndTevStage(u32, J3DIndTevStage);        // _C0 (weak)
	virtual J3DIndTevStage* getIndTevStage(u32);             // _C4 (weak)
	virtual u32 getTexNoOffset() const;                      // _C8 (weak)
	virtual ~J3DTevBlock1();                                 // _D8 (weak)

	void initialize();

	u16 m_texIndices[1];           // _08
	J3DTevOrder m_orders[1];       // _0A
	J3DTevStage m_stages[1];       // _0E
	u8 _16[2];                     // _16
	J3DIndTevStage m_indStages[1]; // _18
};

/**
 * @size{0x6C}
 */
struct J3DTevBlock2 : public J3DTevBlock {
	inline J3DTevBlock2() { initialize(); }

	virtual void reset(J3DTevBlock*);                                  // _08
	virtual void load();                                               // _0C
	virtual void diffTexNo();                                          // _14
	virtual void diffTevReg();                                         // _18
	virtual void diffTexCoordScale();                                  // _1C
	virtual void diffTevStage();                                       // _20
	virtual void diffTevStageIndirect();                               // _24
	virtual void patch();                                              // _28
	virtual void patchTexNo();                                         // _2C
	virtual void patchTevReg();                                        // _30
	virtual void patchTexNoAndTexCoordScale();                         // _34
	virtual void ptrToIndex();                                         // _38 (weak)
	virtual void indexToPtr();                                         // _3C (weak)
	virtual JBlockType getType();                                      // _40 (weak)
	virtual u32 countDLSize();                                         // _44
	virtual void setTexNo(u32, const u16*);                            // _48 (weak)
	virtual void setTexNo(u32, u16);                                   // _4C (weak)
	virtual u16 getTexNo(u32) const;                                   // _50 (weak)
	virtual void setTevOrder(u32, const J3DTevOrder*);                 // _54 (weak)
	virtual void setTevOrder(u32, J3DTevOrder);                        // _58 (weak)
	virtual J3DTevOrder* getTevOrder(u32);                             // _5C (weak)
	virtual void setTevColor(u32, const J3DGXColorS10*);               // _60 (weak)
	virtual void setTevColor(u32, J3DGXColorS10);                      // _64 (weak)
	virtual J3DGXColorS10* getTevColor(u32);                           // _68 (weak)
	virtual void setTevKColor(u32, const J3DGXColor*);                 // _6C (weak)
	virtual void setTevKColor(u32, J3DGXColor);                        // _70 (weak)
	virtual J3DGXColor* getTevKColor(u32);                             // _74 (weak)
	virtual void setTevKColorSel(u32, const u8*);                      // _78 (weak)
	virtual void setTevKColorSel(u32, u8);                             // _7C (weak)
	virtual GXTevKColorSel getTevKColorSel(u32);                       // _80 (weak)
	virtual void setTevKAlphaSel(u32, const u8*);                      // _84 (weak)
	virtual void setTevKAlphaSel(u32, u8);                             // _88 (weak)
	virtual u8 getTevKAlphaSel(u32);                                   // _8C (weak)
	virtual void setTevStageNum(const u8*);                            // _90 (weak)
	virtual void setTevStageNum(u8);                                   // _94 (weak)
	virtual u8 getTevStageNum() const;                                 // _98 (weak)
	virtual void setTevStage(u32, const J3DTevStage*);                 // _9C (weak)
	virtual void setTevStage(u32, J3DTevStage);                        // _A0 (weak)
	virtual J3DTevStage* getTevStage(u32);                             // _A4 (weak)
	virtual void setTevSwapModeInfo(u32, const J3DTevSwapModeInfo*);   // _A8 (weak)
	virtual void setTevSwapModeInfo(u32, J3DTevSwapModeInfo);          // _AC (weak)
	virtual void setTevSwapModeTable(u32, const J3DTevSwapModeTable*); // _B0 (weak)
	virtual void setTevSwapModeTable(u32, J3DTevSwapModeTable);        // _B4 (weak)
	virtual J3DTevSwapModeTable* getTevSwapModeTable(u32);             // _B8 (weak)
	virtual void setIndTevStage(u32, const J3DIndTevStage*);           // _BC (weak)
	virtual void setIndTevStage(u32, J3DIndTevStage);                  // _C0 (weak)
	virtual J3DIndTevStage* getIndTevStage(u32);                       // _C4 (weak)
	virtual u32 getTexNoOffset() const;                                // _C8 (weak)
	virtual u32 getTevRegOffset() const;                               // _CC (weak)
	virtual void setTevRegOffset(u32);                                 // _D4 (weak)
	virtual ~J3DTevBlock2();                                           // _D8 (weak)

	void initialize();

	u16 m_texIndices[2];                     // _08
	J3DTevOrder m_orders[2];                 // _0C
	J3DGXColorS10 _14[4];                    // _14
	u8 m_stageNum;                           // _34
	J3DTevStage m_stages[2];                 // _35
	J3DGXColor _45[4];                       // _45
	u8 m_kColorSels[2];                      // _55
	u8 m_kAlphaSels[2];                      // _57
	J3DTevSwapModeTable m_swapModeTables[4]; // _59
	u8 _5D[3];                               // _5D
	J3DIndTevStage m_indStages[2];           // _60
	u32 m_regOffset;                         // _68
};

/**
 * @size{0x94}
 */
struct J3DTevBlock4 : public J3DTevBlock {
	inline J3DTevBlock4() { initialize(); }

	virtual void reset(J3DTevBlock*);                                  // _08
	virtual void load();                                               // _0C
	virtual void diffTexNo();                                          // _14
	virtual void diffTevReg();                                         // _18
	virtual void diffTexCoordScale();                                  // _1C
	virtual void diffTevStage();                                       // _20
	virtual void diffTevStageIndirect();                               // _24
	virtual void patch();                                              // _28
	virtual void patchTexNo();                                         // _2C
	virtual void patchTevReg();                                        // _30
	virtual void patchTexNoAndTexCoordScale();                         // _34
	virtual void ptrToIndex();                                         // _38 (weak)
	virtual void indexToPtr();                                         // _3C (weak)
	virtual JBlockType getType();                                      // _40 (weak)
	virtual u32 countDLSize();                                         // _44
	virtual void setTexNo(u32, const u16*);                            // _48 (weak)
	virtual void setTexNo(u32, u16);                                   // _4C (weak)
	virtual u16 getTexNo(u32) const;                                   // _50 (weak)
	virtual void setTevOrder(u32, const J3DTevOrder*);                 // _54 (weak)
	virtual void setTevOrder(u32, J3DTevOrder);                        // _58 (weak)
	virtual J3DTevOrder* getTevOrder(u32);                             // _5C (weak)
	virtual void setTevColor(u32, const J3DGXColorS10*);               // _60 (weak)
	virtual void setTevColor(u32, J3DGXColorS10);                      // _64 (weak)
	virtual J3DGXColorS10* getTevColor(u32);                           // _68 (weak)
	virtual void setTevKColor(u32, const J3DGXColor*);                 // _6C (weak)
	virtual void setTevKColor(u32, J3DGXColor);                        // _70 (weak)
	virtual J3DGXColor* getTevKColor(u32);                             // _74 (weak)
	virtual void setTevKColorSel(u32, const u8*);                      // _78 (weak)
	virtual void setTevKColorSel(u32, u8);                             // _7C (weak)
	virtual GXTevKColorSel getTevKColorSel(u32);                       // _80 (weak)
	virtual void setTevKAlphaSel(u32, const u8*);                      // _84 (weak)
	virtual void setTevKAlphaSel(u32, u8);                             // _88 (weak)
	virtual u8 getTevKAlphaSel(u32);                                   // _8C (weak)
	virtual void setTevStageNum(const u8*);                            // _90 (weak)
	virtual void setTevStageNum(u8);                                   // _94 (weak)
	virtual u8 getTevStageNum() const;                                 // _98 (weak)
	virtual void setTevStage(u32, const J3DTevStage*);                 // _9C (weak)
	virtual void setTevStage(u32, J3DTevStage);                        // _A0 (weak)
	virtual J3DTevStage* getTevStage(u32);                             // _A4 (weak)
	virtual void setTevSwapModeInfo(u32, const J3DTevSwapModeInfo*);   // _A8 (weak)
	virtual void setTevSwapModeInfo(u32, J3DTevSwapModeInfo);          // _AC (weak)
	virtual void setTevSwapModeTable(u32, const J3DTevSwapModeTable*); // _B0 (weak)
	virtual void setTevSwapModeTable(u32, J3DTevSwapModeTable);        // _B4 (weak)
	virtual J3DTevSwapModeTable* getTevSwapModeTable(u32);             // _B8 (weak)
	virtual void setIndTevStage(u32, const J3DIndTevStage*);           // _BC (weak)
	virtual void setIndTevStage(u32, J3DIndTevStage);                  // _C0 (weak)
	virtual J3DIndTevStage* getIndTevStage(u32);                       // _C4 (weak)
	virtual u32 getTexNoOffset() const;                                // _C8 (weak)
	virtual u32 getTevRegOffset() const;                               // _CC (weak)
	virtual void setTevRegOffset(u32);                                 // _D4 (weak)
	virtual ~J3DTevBlock4();                                           // _D8 (weak)

	void initialize();

	u16 m_texIndices[4];                     // _08
	J3DTevOrder m_orders[4];                 // _10
	u8 m_stageNum;                           // _20
	J3DTevStage m_stages[4];                 // _21
	u8 _41;                                  // _41
	J3DGXColorS10 _42[4];                    // _42
	J3DGXColor _62[4];                       // _62
	u8 _72[0x8];                             // _72
	J3DTevSwapModeTable m_swapModeTables[4]; // _7A
	u8 _7E[2];                               // _7E
	J3DIndTevStage m_indStages[4];           // _80
	u32 m_regOffset;                         // _90
};

/**
 * @size{0x174}
 */
struct J3DTevBlock16 : public J3DTevBlock {
	inline J3DTevBlock16() { initialize(); }

	virtual void reset(J3DTevBlock*);                    // _08
	virtual void load();                                 // _0C
	virtual void diffTexNo();                            // _14
	virtual void diffTevReg();                           // _18
	virtual void diffTexCoordScale();                    // _1C
	virtual void diffTevStage();                         // _20
	virtual void diffTevStageIndirect();                 // _24
	virtual void patch();                                // _28
	virtual void patchTexNo();                           // _2C
	virtual void patchTevReg();                          // _30
	virtual void patchTexNoAndTexCoordScale();           // _34
	virtual void ptrToIndex();                           // _38
	virtual void indexToPtr();                           // _3C (weak)
	virtual JBlockType getType();                        // _40 (weak)
	virtual u32 countDLSize();                           // _44
	virtual void setTexNo(u32, const u16*);              // _48 (weak)
	virtual void setTexNo(u32, u16);                     // _4C (weak)
	virtual u16 getTexNo(u32) const;                     // _50 (weak)
	virtual void setTevOrder(u32, const J3DTevOrder*);   // _54 (weak)
	virtual void setTevOrder(u32, J3DTevOrder);          // _58 (weak)
	virtual J3DTevOrder* getTevOrder(u32);               // _5C (weak)
	virtual void setTevColor(u32, const J3DGXColorS10*); // _60 (weak)
	virtual void setTevColor(u32, J3DGXColorS10);        // _64 (weak)
	/**
	 * @reifiedAddress{8006A358}
	 * @reifiedFile{JSystem/J3D/J3DMaterialAnm.cpp}
	 */
	virtual J3DGXColorS10* getTevColor(u32);           // _68 (weak)
	virtual void setTevKColor(u32, const J3DGXColor*); // _6C (weak)
	virtual void setTevKColor(u32, J3DGXColor);        // _70 (weak)
	/**
	 * @reifiedAddress{8006A350}
	 * @reifiedFile{JSystem/J3D/J3DMaterialAnm.cpp}
	 */
	virtual J3DGXColor* getTevKColor(u32);                             // _74 (weak)
	virtual void setTevKColorSel(u32, const u8*);                      // _78 (weak)
	virtual void setTevKColorSel(u32, u8);                             // _7C (weak)
	virtual GXTevKColorSel getTevKColorSel(u32);                       // _80 (weak)
	virtual void setTevKAlphaSel(u32, const u8*);                      // _84 (weak)
	virtual void setTevKAlphaSel(u32, u8);                             // _88 (weak)
	virtual u8 getTevKAlphaSel(u32);                                   // _8C (weak)
	virtual void setTevStageNum(const u8*);                            // _90 (weak)
	virtual void setTevStageNum(u8);                                   // _94 (weak)
	virtual u8 getTevStageNum() const;                                 // _98 (weak)
	virtual void setTevStage(u32, const J3DTevStage*);                 // _9C (weak)
	virtual void setTevStage(u32, J3DTevStage);                        // _A0 (weak)
	virtual J3DTevStage* getTevStage(u32);                             // _A4 (weak)
	virtual void setTevSwapModeInfo(u32, const J3DTevSwapModeInfo*);   // _A8 (weak)
	virtual void setTevSwapModeInfo(u32, J3DTevSwapModeInfo);          // _AC (weak)
	virtual void setTevSwapModeTable(u32, const J3DTevSwapModeTable*); // _B0 (weak)
	virtual void setTevSwapModeTable(u32, J3DTevSwapModeTable);        // _B4 (weak)
	virtual J3DTevSwapModeTable* getTevSwapModeTable(u32);             // _B8 (weak)
	virtual void setIndTevStage(u32, const J3DIndTevStage*);           // _BC (weak)
	virtual void setIndTevStage(u32, J3DIndTevStage);                  // _C0 (weak)
	virtual J3DIndTevStage* getIndTevStage(u32);                       // _C4 (weak)
	virtual u32 getTexNoOffset() const;                                // _C8 (weak)
	virtual u32 getTevRegOffset() const;                               // _CC (weak)
	virtual void setTevRegOffset(u32);                                 // _D4 (weak)
	virtual ~J3DTevBlock16();                                          // _D8 (weak)

	void initialize();

	u16 m_texIndices[8];                     // _08
	J3DTevOrder m_orders[16];                // _18
	u8 m_stageNum;                           // _58
	J3DTevStage m_stages[16];                // _59
	u8 _D9;                                  // _D9
	J3DGXColorS10 _DA[4];                    // _DA
	J3DGXColor _FA[4];                       // _FA
	u8 _10A[0x20];                           // _10A
	J3DTevSwapModeTable m_swapModeTables[4]; // _12A
	u8 _12E[2];                              // _12E
	J3DIndTevStage m_indStages[16];          // _130
	u32 m_regOffset;                         // _170
};

/**
 * @size{0x8}
 */
struct J3DTevBlockNull : public J3DTevBlock {
	inline J3DTevBlockNull()
	    : J3DTevBlock()
	{
		initialize();
	}

	/**
	 * @reifiedAddress{8006F4B0}
	 * @reifiedFile{JSystem/J3D/J3DMaterialFactory.cpp}
	 */
	virtual void reset(J3DTevBlock*) {}; // _08 (weak)
	/**
	 * @reifiedAddress{8006F4B4}
	 * @reifiedFile{JSystem/J3D/J3DMaterialFactory.cpp}
	 */
	virtual void ptrToIndex() {}; // _38 (weak)
	/**
	 * @reifiedAddress{8006F4B8}
	 * @reifiedFile{JSystem/J3D/J3DMaterialFactory.cpp}
	 */
	virtual void indexToPtr() { indexToPtr_private(m_texNoOffset); }; // _3C (weak)
	/**
	 * @reifiedAddress{8006F4DC}
	 * @reifiedFile{JSystem/J3D/J3DMaterialFactory.cpp}
	 */
	virtual JBlockType getType() { return JBT_TevNull; } // _40 (weak)
	/**
	 * @reifiedAddress{8006F4E8}
	 * @reifiedFile{JSystem/J3D/J3DMaterialFactory.cpp}
	 */
	virtual ~J3DTevBlockNull() {}; // _D8 (weak)

	void initialize();
};

/**
 * @size{0xD8}
 */
struct J3DTevBlockPatched : public J3DTevBlock {
	virtual void reset(J3DTevBlock*);                        // _08
	virtual void load();                                     // _0C (weak)
	virtual void diffTexNo();                                // _14
	virtual void diffTevReg();                               // _18
	virtual void diffTexCoordScale();                        // _1C
	virtual void diffTevStage();                             // _20
	virtual void diffTevStageIndirect();                     // _24
	virtual void patch();                                    // _28
	virtual void patchTexNo();                               // _2C
	virtual void patchTevReg();                              // _30
	virtual void patchTexNoAndTexCoordScale();               // _34
	virtual void ptrToIndex();                               // _38
	virtual void indexToPtr();                               // _3C (weak)
	virtual JBlockType getType();                            // _40 (weak)
	virtual u32 countDLSize();                               // _44
	virtual void setTexNo(u32, const u16*);                  // _48 (weak)
	virtual void setTexNo(u32, u16);                         // _4C (weak)
	virtual u16 getTexNo(u32) const;                         // _50 (weak)
	virtual void setTevOrder(u32, const J3DTevOrder*);       // _54 (weak)
	virtual void setTevOrder(u32, J3DTevOrder);              // _58 (weak)
	virtual J3DTevOrder* getTevOrder(u32);                   // _5C (weak)
	virtual void setTevColor(u32, const J3DGXColorS10*);     // _60 (weak)
	virtual void setTevColor(u32, J3DGXColorS10);            // _64 (weak)
	virtual J3DGXColorS10* getTevColor(u32);                 // _68 (weak)
	virtual void setTevKColor(u32, const J3DGXColor*);       // _6C (weak)
	virtual void setTevKColor(u32, J3DGXColor);              // _70 (weak)
	virtual J3DGXColor* getTevKColor(u32);                   // _74 (weak)
	virtual void setTevKColorSel(u32, const u8*);            // _78 (weak)
	virtual void setTevKColorSel(u32, u8);                   // _7C (weak)
	virtual GXTevKColorSel getTevKColorSel(u32);             // _80 (weak)
	virtual void setTevStageNum(const u8*);                  // _90 (weak)
	virtual void setTevStageNum(u8);                         // _94 (weak)
	virtual u8 getTevStageNum() const;                       // _98 (weak)
	virtual void setTevStage(u32, const J3DTevStage*);       // _9C (weak)
	virtual void setTevStage(u32, J3DTevStage);              // _A0 (weak)
	virtual J3DTevStage* getTevStage(u32);                   // _A4 (weak)
	virtual void setIndTevStage(u32, const J3DIndTevStage*); // _BC (weak)
	virtual void setIndTevStage(u32, J3DIndTevStage);        // _C0 (weak)
	virtual J3DIndTevStage* getIndTevStage(u32);             // _C4 (weak)
	virtual u32 getTexNoOffset() const;                      // _C8 (weak)
	virtual u32 getTevRegOffset() const;                     // _CC (weak)
	virtual void setTevRegOffset(u32);                       // _D4 (weak)
	virtual ~J3DTevBlockPatched();                           // _D8 (weak)

	void initialize();

	u16 m_texIndices[8];           // _08
	J3DTevOrder m_orders[8];       // _18
	J3DTevStage m_stages[8];       // _38
	J3DIndTevStage m_indStages[8]; // _78
	J3DGXColorS10 _98[4];          // _98
	J3DGXColor _B8[4];             // _B8
	u8 _C8[0x8];                   // _C8
	u8 m_stageNum;                 // _D0
	u32 m_regOffset;               // _D4
};

#endif
