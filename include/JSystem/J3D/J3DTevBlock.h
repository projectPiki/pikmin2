#ifndef _J3DTEVBLOCK_H
#define _J3DTEVBLOCK_H

#include "Dolphin/gx.h"
#include "JSystem/J3D/J3DGXColor.h"
#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

struct J3DTevBlock {
	virtual void reset(J3DTevBlock*) { }                                              // _08 (weak)
	virtual void load() { }                                                           // _0C (weak)
	virtual void diff(u32);                                                           // _10
	virtual void diffTexNo() { }                                                      // _14 (weak)
	virtual void diffTevReg() { }                                                     // _18 (weak)
	virtual void diffTexCoordScale() { }                                              // _1C (weak)
	virtual void diffTevStage() { }                                                   // _20 (weak)
	virtual void diffTevStageIndirect() { }                                           // _24 (weak)
	virtual void patch() { }                                                          // _28 (weak)
	virtual void patchTexNo() { }                                                     // _2C (weak)
	virtual void patchTevReg() { }                                                    // _30 (weak)
	virtual void patchTexNoAndTexCoordScale() { }                                     // _34 (weak)
	virtual void ptrToIndex()    = 0;                                                 // _38 (weak)
	virtual void indexToPtr()    = 0;                                                 // _3C (weak)
	virtual JBlockType getType() = 0;                                                 // _40 (weak)
	virtual u32 countDLSize() { return 0; }                                           // _44 (weak)
	virtual void setTexNo(u32 index, const u16* texNo) { }                            // _48 (weak)
	virtual void setTexNo(u32 index, u16 texNo) { }                                   // _4C (weak)
	virtual u16 getTexNo(u32 index) const { return 0xFFFF; }                          // _50 (weak)
	virtual void setTevOrder(u32 index, const J3DTevOrder* order) { }                 // _54 (weak)
	virtual void setTevOrder(u32 index, J3DTevOrder order) { }                        // _58 (weak)
	virtual J3DTevOrder* getTevOrder(u32 index) { return nullptr; }                   // _5C (weak)
	virtual void setTevColor(u32 index, const J3DGXColorS10* color) { }               // _60 (weak)
	virtual void setTevColor(u32 index, J3DGXColorS10 color) { }                      // _64 (weak)
	virtual J3DGXColorS10* getTevColor(u32 index) { return nullptr; }                 // _68 (weak)
	virtual void setTevKColor(u32 index, const J3DGXColor* color) { }                 // _6C (weak)
	virtual void setTevKColor(u32 index, J3DGXColor color) { }                        // _70 (weak)
	virtual J3DGXColor* getTevKColor(u32 index) { return nullptr; }                   // _74 (weak)
	virtual void setTevKColorSel(u32 index, const u8* sel) { }                        // _78 (weak)
	virtual void setTevKColorSel(u32 index, u8 sel) { }                               // _7C (weak)
	virtual GXTevKColorSel getTevKColorSel(u32 index) { return GX_TEV_KCSEL_1; }      // _80 (weak)
	virtual void setTevKAlphaSel(u32 index, const u8* sel) { }                        // _84 (weak)
	virtual void setTevKAlphaSel(u32 index, u8 sel) { }                               // _88 (weak)
	virtual u8 getTevKAlphaSel(u32 index) { return 0; }                               // _8C (weak)
	virtual void setTevStageNum(const u8* stageNum) { }                               // _90 (weak)
	virtual void setTevStageNum(u8 stageNum) { }                                      // _94 (weak)
	virtual u8 getTevStageNum() const { return 1; };                                  // _98 (weak)
	virtual void setTevStage(u32 index, const J3DTevStage* stage) { }                 // _9C (weak)
	virtual void setTevStage(u32 index, J3DTevStage stage) { }                        // _A0 (weak)
	virtual J3DTevStage* getTevStage(u32 index) { return nullptr; }                   // _A4 (weak)
	virtual void setTevSwapModeInfo(u32 index, const J3DTevSwapModeInfo* info) { }    // _A8 (weak)
	virtual void setTevSwapModeInfo(u32 index, J3DTevSwapModeInfo info) { }           // _AC (weak)
	virtual void setTevSwapModeTable(u32 index, const J3DTevSwapModeTable* table) { } // _B0 (weak)
	virtual void setTevSwapModeTable(u32 index, J3DTevSwapModeTable table) { }        // _B4 (weak)
	virtual J3DTevSwapModeTable* getTevSwapModeTable(u32 index) { return nullptr; }   // _B8 (weak)
	virtual void setIndTevStage(u32 index, const J3DIndTevStage* stage) { }           // _BC (weak)
	virtual void setIndTevStage(u32 index, J3DIndTevStage stage) { }                  // _C0 (weak)
	virtual J3DIndTevStage* getIndTevStage(u32 index) { return nullptr; }             // _C4 (weak)
	virtual u32 getTexNoOffset() const { return 0; }                                  // _C8 (weak)
	virtual u32 getTevRegOffset() const { return 0; }                                 // _CC (weak)
	virtual void setTexNoOffset(u32 offset) { mTexNoOffset = offset; }                // _D0 (weak)
	virtual void setTevRegOffset(u32 offset) { }                                      // _D4 (weak)
	virtual ~J3DTevBlock() { }                                                        // _D8 (weak)

	void indexToPtr_private(u32);

	// _00 = VTBL
	u32 mTexNoOffset; // _04
};

struct J3DTevBlock1 : public J3DTevBlock {
	inline J3DTevBlock1() { initialize(); }

	virtual void reset(J3DTevBlock*);                                                                   // _08
	virtual void load();                                                                                // _0C
	virtual void diffTexNo();                                                                           // _14
	virtual void diffTevReg();                                                                          // _18
	virtual void diffTexCoordScale();                                                                   // _1C
	virtual void diffTevStage();                                                                        // _20
	virtual void diffTevStageIndirect();                                                                // _24
	virtual void patch();                                                                               // _28
	virtual void patchTexNo();                                                                          // _2C
	virtual void patchTevReg();                                                                         // _30
	virtual void patchTexNoAndTexCoordScale();                                                          // _34
	virtual void ptrToIndex() { }                                                                       // _38 (weak)
	virtual void indexToPtr() { indexToPtr_private(mTexNoOffset); }                                     // _3C (weak)
	virtual JBlockType getType() { return JBT_Tev1; }                                                   // _40 (weak)
	virtual u32 countDLSize();                                                                          // _44
	virtual void setTexNo(u32 index, const u16* texNo) { mTexIndices[index] = *texNo; }                 // _48 (weak)
	virtual void setTexNo(u32 index, u16 texNo) { mTexIndices[index] = texNo; }                         // _4C (weak)
	virtual u16 getTexNo(u32 index) const { return mTexIndices[index]; }                                // _50 (weak)
	virtual void setTevOrder(u32 index, const J3DTevOrder* order) { mOrders[index] = *order; }          // _54 (weak)
	virtual void setTevOrder(u32 index, J3DTevOrder order) { mOrders[index] = order; }                  // _58 (weak)
	virtual J3DTevOrder* getTevOrder(u32 index) { return &mOrders[index]; }                             // _5C (weak)
	virtual void setTevStageNum(const u8* stageNum) { }                                                 // _90 (weak)
	virtual void setTevStageNum(u8 stageNum) { }                                                        // _94 (weak)
	virtual u8 getTevStageNum() const { return 1; }                                                     // _98 (weak)
	virtual void setTevStage(u32 index, const J3DTevStage* stage) { mStages[index] = *stage; }          // _9C (weak)
	virtual void setTevStage(u32 index, J3DTevStage stage) { mStages[index] = stage; }                  // _A0 (weak)
	virtual J3DTevStage* getTevStage(u32 index) { return &mStages[index]; }                             // _A4 (weak)
	virtual void setIndTevStage(u32 index, const J3DIndTevStage* stage) { mIndStages[index] = *stage; } // _BC (weak)
	virtual void setIndTevStage(u32 index, J3DIndTevStage stage) { mIndStages[index] = stage; }         // _C0 (weak)
	virtual J3DIndTevStage* getIndTevStage(u32 index) { return &mIndStages[index]; }                    // _C4 (weak)
	virtual u32 getTexNoOffset() const { return mTexNoOffset; }                                         // _C8 (weak)
	virtual ~J3DTevBlock1() { }                                                                         // _D8 (weak)

	void initialize();

	// _00     = VTBL
	// _00-_08 = J3DTevBlock
	u16 mTexIndices[1];           // _08
	J3DTevOrder mOrders[1];       // _0A
	J3DTevStage mStages[1];       // _0E
	J3DIndTevStage mIndStages[1]; // _18
};

/**
 * @size{0x6C}
 */
struct J3DTevBlock2 : public J3DTevBlock {
	inline J3DTevBlock2() { initialize(); }

	virtual void reset(J3DTevBlock*);                                                                                        // _08
	virtual void load();                                                                                                     // _0C
	virtual void diffTexNo();                                                                                                // _14
	virtual void diffTevReg();                                                                                               // _18
	virtual void diffTexCoordScale();                                                                                        // _1C
	virtual void diffTevStage();                                                                                             // _20
	virtual void diffTevStageIndirect();                                                                                     // _24
	virtual void patch();                                                                                                    // _28
	virtual void patchTexNo();                                                                                               // _2C
	virtual void patchTevReg();                                                                                              // _30
	virtual void patchTexNoAndTexCoordScale();                                                                               // _34
	virtual void ptrToIndex() { }                                                                                            // _38 (weak)
	virtual void indexToPtr() { indexToPtr_private(mTexNoOffset); }                                                          // _3C (weak)
	virtual JBlockType getType() { return JBT_Tev2; }                                                                        // _40 (weak)
	virtual u32 countDLSize();                                                                                               // _44
	virtual void setTexNo(u32 index, const u16* texNo) { mTexIndices[index] = *texNo; }                                      // _48 (weak)
	virtual void setTexNo(u32 index, u16 texNo) { mTexIndices[index] = texNo; }                                              // _4C (weak)
	virtual u16 getTexNo(u32 index) const { return mTexIndices[index]; }                                                     // _50 (weak)
	virtual void setTevOrder(u32 index, const J3DTevOrder* order) { mOrders[index] = *order; }                               // _54 (weak)
	virtual void setTevOrder(u32 index, J3DTevOrder order) { mOrders[index] = order; }                                       // _58 (weak)
	virtual J3DTevOrder* getTevOrder(u32 index) { return &mOrders[index]; }                                                  // _5C (weak)
	virtual void setTevColor(u32 index, const J3DGXColorS10* color) { mColors[index] = *color; }                             // _60 (weak)
	virtual void setTevColor(u32 index, J3DGXColorS10 color) { mColors[index] = color; }                                     // _64 (weak)
	virtual J3DGXColorS10* getTevColor(u32 index) { return &mColors[index]; }                                                // _68 (weak)
	virtual void setTevKColor(u32 index, const J3DGXColor* color) { mKColors[index] = *color; }                              // _6C (weak)
	virtual void setTevKColor(u32 index, J3DGXColor color) { mKColors[index] = color; }                                      // _70 (weak)
	virtual J3DGXColor* getTevKColor(u32 index) { return &mKColors[index]; }                                                 // _74 (weak)
	virtual void setTevKColorSel(u32 index, const u8* sel) { mKColorSels[index] = *sel; }                                    // _78 (weak)
	virtual void setTevKColorSel(u32 index, u8 sel) { mKColorSels[index] = sel; }                                            // _7C (weak)
	virtual GXTevKColorSel getTevKColorSel(u32 index) { return GXTevKColorSel(mKColorSels[index]); }                         // _80 (weak)
	virtual void setTevKAlphaSel(u32 index, const u8* sel) { mKAlphaSels[index] = *sel; }                                    // _84 (weak)
	virtual void setTevKAlphaSel(u32 index, u8 sel) { mKAlphaSels[index] = sel; }                                            // _88 (weak)
	virtual u8 getTevKAlphaSel(u32 index) { return mKAlphaSels[index]; }                                                     // _8C (weak)
	virtual void setTevStageNum(const u8* stageNum) { mStageNum = *stageNum; }                                               // _90 (weak)
	virtual void setTevStageNum(u8 stageNum) { mStageNum = stageNum; }                                                       // _94 (weak)
	virtual u8 getTevStageNum() const { return mStageNum; }                                                                  // _98 (weak)
	virtual void setTevStage(u32 index, const J3DTevStage* stage) { mStages[index] = *stage; }                               // _9C (weak)
	virtual void setTevStage(u32 index, J3DTevStage stage) { mStages[index] = stage; }                                       // _A0 (weak)
	virtual J3DTevStage* getTevStage(u32 index) { return &mStages[index]; }                                                  // _A4 (weak)
	virtual void setTevSwapModeInfo(u32 index, const J3DTevSwapModeInfo* info) { mStages[index].setTevSwapModeInfo(*info); } // _A8 (weak)
	virtual void setTevSwapModeInfo(u32 index, J3DTevSwapModeInfo info) { mStages[index].setTevSwapModeInfo(info); }         // _AC (weak)
	virtual void setTevSwapModeTable(u32 index, const J3DTevSwapModeTable* table) { mSwapModeTables[index] = *table; }       // _B0 (weak)
	virtual void setTevSwapModeTable(u32 index, J3DTevSwapModeTable table) { mSwapModeTables[index] = table; }               // _B4 (weak)
	virtual J3DTevSwapModeTable* getTevSwapModeTable(u32 index) { return &mSwapModeTables[index]; }                          // _B8 (weak)
	virtual void setIndTevStage(u32 index, const J3DIndTevStage* stage) { mIndStages[index] = *stage; }                      // _BC (weak)
	virtual void setIndTevStage(u32 index, J3DIndTevStage stage) { mIndStages[index] = stage; }                              // _C0 (weak)
	virtual J3DIndTevStage* getIndTevStage(u32 index) { return &mIndStages[index]; }                                         // _C4 (weak)
	virtual u32 getTexNoOffset() const { return mTexNoOffset; }                                                              // _C8 (weak)
	virtual u32 getTevRegOffset() const { return mRegOffset; }                                                               // _CC (weak)
	virtual void setTevRegOffset(u32 offset) { mRegOffset = offset; }                                                        // _D4 (weak)
	virtual ~J3DTevBlock2() { }                                                                                              // _D8 (weak)

	void initialize();

	// _00     = VTBL
	// _00-_08 = J3DTevBlock
	u16 mTexIndices[2];                     // _08
	J3DTevOrder mOrders[2];                 // _0C
	J3DGXColorS10 mColors[4];               // _14
	u8 mStageNum;                           // _34
	J3DTevStage mStages[2];                 // _35
	J3DGXColor mKColors[4];                 // _45
	u8 mKColorSels[2];                      // _55
	u8 mKAlphaSels[2];                      // _57
	J3DTevSwapModeTable mSwapModeTables[4]; // _59
	J3DIndTevStage mIndStages[2];           // _60
	u32 mRegOffset;                         // _68
};

/**
 * @size{0x94}
 */
struct J3DTevBlock4 : public J3DTevBlock {
	inline J3DTevBlock4() { initialize(); }

	virtual void reset(J3DTevBlock*);                                                                                        // _08
	virtual void load();                                                                                                     // _0C
	virtual void diffTexNo();                                                                                                // _14
	virtual void diffTevReg();                                                                                               // _18
	virtual void diffTexCoordScale();                                                                                        // _1C
	virtual void diffTevStage();                                                                                             // _20
	virtual void diffTevStageIndirect();                                                                                     // _24
	virtual void patch();                                                                                                    // _28
	virtual void patchTexNo();                                                                                               // _2C
	virtual void patchTevReg();                                                                                              // _30
	virtual void patchTexNoAndTexCoordScale();                                                                               // _34
	virtual void ptrToIndex() { }                                                                                            // _38 (weak)
	virtual void indexToPtr() { indexToPtr_private(mTexNoOffset); }                                                          // _3C (weak)
	virtual JBlockType getType() { return JBT_Tev4; }                                                                        // _40 (weak)
	virtual u32 countDLSize();                                                                                               // _44
	virtual void setTexNo(u32 index, const u16* texNo) { mTexIndices[index] = *texNo; }                                      // _48 (weak)
	virtual void setTexNo(u32 index, u16 texNo) { mTexIndices[index] = texNo; }                                              // _4C (weak)
	virtual u16 getTexNo(u32 index) const { return mTexIndices[index]; }                                                     // _50 (weak)
	virtual void setTevOrder(u32 index, const J3DTevOrder* order) { mOrders[index] = *order; }                               // _54 (weak)
	virtual void setTevOrder(u32 index, J3DTevOrder order) { mOrders[index] = order; }                                       // _58 (weak)
	virtual J3DTevOrder* getTevOrder(u32 index) { return &mOrders[index]; }                                                  // _5C (weak)
	virtual void setTevColor(u32 index, const J3DGXColorS10* color) { mColors[index] = *color; }                             // _60 (weak)
	virtual void setTevColor(u32 index, J3DGXColorS10 color) { mColors[index] = color; }                                     // _64 (weak)
	virtual J3DGXColorS10* getTevColor(u32 index) { return &mColors[index]; }                                                // _68 (weak)
	virtual void setTevKColor(u32 index, const J3DGXColor* color) { mKColors[index] = *color; }                              // _6C (weak)
	virtual void setTevKColor(u32 index, J3DGXColor color) { mKColors[index] = color; }                                      // _70 (weak)
	virtual J3DGXColor* getTevKColor(u32 index) { return &mKColors[index]; }                                                 // _74 (weak)
	virtual void setTevKColorSel(u32 index, const u8* sel) { mKColorSels[index] = *sel; }                                    // _78 (weak)
	virtual void setTevKColorSel(u32 index, u8 sel) { mKColorSels[index] = sel; }                                            // _7C (weak)
	virtual GXTevKColorSel getTevKColorSel(u32 index) { return GXTevKColorSel(mKColorSels[index]); }                         // _80 (weak)
	virtual void setTevKAlphaSel(u32 index, const u8* sel) { mKAlphaSels[index] = *sel; }                                    // _84 (weak)
	virtual void setTevKAlphaSel(u32 index, u8 sel) { mKAlphaSels[index] = sel; }                                            // _88 (weak)
	virtual u8 getTevKAlphaSel(u32 index) { return mKAlphaSels[index]; }                                                     // _8C (weak)
	virtual void setTevStageNum(const u8* stageNum) { mStageNum = *stageNum; }                                               // _90 (weak)
	virtual void setTevStageNum(u8 stageNum) { mStageNum = stageNum; }                                                       // _94 (weak)
	virtual u8 getTevStageNum() const { return mStageNum; }                                                                  // _98 (weak)
	virtual void setTevStage(u32 index, const J3DTevStage* stage) { mStages[index] = *stage; }                               // _9C (weak)
	virtual void setTevStage(u32 index, J3DTevStage stage) { mStages[index] = stage; }                                       // _A0 (weak)
	virtual J3DTevStage* getTevStage(u32 index) { return &mStages[index]; }                                                  // _A4 (weak)
	virtual void setTevSwapModeInfo(u32 index, const J3DTevSwapModeInfo* info) { mStages[index].setTevSwapModeInfo(*info); } // _A8 (weak)
	virtual void setTevSwapModeInfo(u32 index, J3DTevSwapModeInfo info) { mStages[index].setTevSwapModeInfo(info); }         // _AC (weak)
	virtual void setTevSwapModeTable(u32 index, const J3DTevSwapModeTable* table) { mSwapModeTables[index] = *table; }       // _B0 (weak)
	virtual void setTevSwapModeTable(u32 index, J3DTevSwapModeTable table) { mSwapModeTables[index] = table; }               // _B4 (weak)
	virtual J3DTevSwapModeTable* getTevSwapModeTable(u32 index) { return &mSwapModeTables[index]; }                          // _B8 (weak)
	virtual void setIndTevStage(u32 index, const J3DIndTevStage* stage) { mIndStages[index] = *stage; }                      // _BC (weak)
	virtual void setIndTevStage(u32 index, J3DIndTevStage stage) { mIndStages[index] = stage; }                              // _C0 (weak)
	virtual J3DIndTevStage* getIndTevStage(u32 index) { return &mIndStages[index]; }                                         // _C4 (weak)
	virtual u32 getTexNoOffset() const { return mTexNoOffset; }                                                              // _C8 (weak)
	virtual u32 getTevRegOffset() const { return mRegOffset; }                                                               // _CC (weak)
	virtual void setTevRegOffset(u32 offset) { mRegOffset = offset; }                                                        // _D4 (weak)
	virtual ~J3DTevBlock4() { }                                                                                              // _D8 (weak)

	void initialize();

	// _00     = VTBL
	// _00-_08 = J3DTevBlock
	u16 mTexIndices[4];                     // _08
	J3DTevOrder mOrders[4];                 // _10
	u8 mStageNum;                           // _20
	J3DTevStage mStages[4];                 // _21
	u8 _41;                                 // _41
	J3DGXColorS10 mColors[4];               // _42
	J3DGXColor mKColors[4];                 // _62
	u8 mKColorSels[4];                      // _72
	u8 mKAlphaSels[4];                      // _76
	J3DTevSwapModeTable mSwapModeTables[4]; // _7A
	u8 _7E[2];                              // _7E
	J3DIndTevStage mIndStages[4];           // _80
	u32 mRegOffset;                         // _90
};

/**
 * @size{0x174}
 */
struct J3DTevBlock16 : public J3DTevBlock {
	inline J3DTevBlock16() { initialize(); }

	virtual void reset(J3DTevBlock*);                                                                                        // _08
	virtual void load();                                                                                                     // _0C
	virtual void diffTexNo();                                                                                                // _14
	virtual void diffTevReg();                                                                                               // _18
	virtual void diffTexCoordScale();                                                                                        // _1C
	virtual void diffTevStage();                                                                                             // _20
	virtual void diffTevStageIndirect();                                                                                     // _24
	virtual void patch();                                                                                                    // _28
	virtual void patchTexNo();                                                                                               // _2C
	virtual void patchTevReg();                                                                                              // _30
	virtual void patchTexNoAndTexCoordScale();                                                                               // _34
	virtual void ptrToIndex();                                                                                               // _38
	virtual void indexToPtr() { indexToPtr_private(mTexNoOffset); }                                                          // _3C (weak)
	virtual JBlockType getType() { return JBT_Tev16; }                                                                       // _40 (weak)
	virtual u32 countDLSize();                                                                                               // _44
	virtual void setTexNo(u32 index, const u16* texNo) { mTexIndices[index] = *texNo; }                                      // _48 (weak)
	virtual void setTexNo(u32 index, u16 texNo) { mTexIndices[index] = texNo; }                                              // _4C (weak)
	virtual u16 getTexNo(u32 index) const { return mTexIndices[index]; }                                                     // _50 (weak)
	virtual void setTevOrder(u32 index, const J3DTevOrder* order) { mOrders[index] = *order; }                               // _54 (weak)
	virtual void setTevOrder(u32 index, J3DTevOrder order) { mOrders[index] = order; }                                       // _58 (weak)
	virtual J3DTevOrder* getTevOrder(u32 index) { return &mOrders[index]; }                                                  // _5C (weak)
	virtual void setTevColor(u32 index, const J3DGXColorS10* color) { mColors[index] = *color; }                             // _60 (weak)
	virtual void setTevColor(u32 index, J3DGXColorS10 color) { mColors[index] = color; }                                     // _64 (weak)
	virtual J3DGXColorS10* getTevColor(u32 index) { return &mColors[index]; }                                                // _68 (weak)
	virtual void setTevKColor(u32 index, const J3DGXColor* color) { mKColors[index] = *color; }                              // _6C (weak)
	virtual void setTevKColor(u32 index, J3DGXColor color) { mKColors[index] = color; }                                      // _70 (weak)
	virtual J3DGXColor* getTevKColor(u32 index) { return &mKColors[index]; }                                                 // _74 (weak)
	virtual void setTevKColorSel(u32 index, const u8* sel) { mKColorSels[index] = *sel; }                                    // _78 (weak)
	virtual void setTevKColorSel(u32 index, u8 sel) { mKColorSels[index] = sel; }                                            // _7C (weak)
	virtual GXTevKColorSel getTevKColorSel(u32 index) { return GXTevKColorSel(mKColorSels[index]); }                         // _80 (weak)
	virtual void setTevKAlphaSel(u32 index, const u8* sel) { mKAlphaSels[index] = *sel; }                                    // _84 (weak)
	virtual void setTevKAlphaSel(u32 index, u8 sel) { mKAlphaSels[index] = sel; }                                            // _88 (weak)
	virtual u8 getTevKAlphaSel(u32 index) { return mKAlphaSels[index]; }                                                     // _8C (weak)
	virtual void setTevStageNum(const u8* stageNum) { mStageNum = *stageNum; }                                               // _90 (weak)
	virtual void setTevStageNum(u8 stageNum) { mStageNum = stageNum; }                                                       // _94 (weak)
	virtual u8 getTevStageNum() const { return mStageNum; }                                                                  // _98 (weak)
	virtual void setTevStage(u32 index, const J3DTevStage* stage) { mStages[index] = *stage; }                               // _9C (weak)
	virtual void setTevStage(u32 index, J3DTevStage stage) { mStages[index] = stage; }                                       // _A0 (weak)
	virtual J3DTevStage* getTevStage(u32 index) { return &mStages[index]; }                                                  // _A4 (weak)
	virtual void setTevSwapModeInfo(u32 index, const J3DTevSwapModeInfo* info) { mStages[index].setTevSwapModeInfo(*info); } // _A8 (weak)
	virtual void setTevSwapModeInfo(u32 index, J3DTevSwapModeInfo info) { mStages[index].setTevSwapModeInfo(info); }         // _AC (weak)
	virtual void setTevSwapModeTable(u32 index, const J3DTevSwapModeTable* table) { mSwapModeTables[index] = *table; }       // _B0 (weak)
	virtual void setTevSwapModeTable(u32 index, J3DTevSwapModeTable table) { mSwapModeTables[index] = table; }               // _B4 (weak)
	virtual J3DTevSwapModeTable* getTevSwapModeTable(u32 index) { return &mSwapModeTables[index]; }                          // _B8 (weak)
	virtual void setIndTevStage(u32 index, const J3DIndTevStage* stage) { mIndStages[index] = *stage; }                      // _BC (weak)
	virtual void setIndTevStage(u32 index, J3DIndTevStage stage) { mIndStages[index] = stage; }                              // _C0 (weak)
	virtual J3DIndTevStage* getIndTevStage(u32 index) { return &mIndStages[index]; }                                         // _C4 (weak)
	virtual u32 getTexNoOffset() const { return mTexNoOffset; }                                                              // _C8 (weak)
	virtual u32 getTevRegOffset() const { return mRegOffset; }                                                               // _CC (weak)
	virtual void setTevRegOffset(u32 offset) { mRegOffset = offset; }                                                        // _D4 (weak)
	virtual ~J3DTevBlock16() { }                                                                                             // _D8 (weak)

	void initialize();

	// _00     = VTBL
	// _00-_08 = J3DTevBlock
	u16 mTexIndices[8];                     // _08
	J3DTevOrder mOrders[16];                // _18
	u8 mStageNum;                           // _58
	J3DTevStage mStages[16];                // _59
	u8 _D9;                                 // _D9
	J3DGXColorS10 mColors[4];               // _DA
	J3DGXColor mKColors[4];                 // _FA
	u8 mKColorSels[0x10];                   // _10A
	u8 mKAlphaSels[0x10];                   // _11A
	J3DTevSwapModeTable mSwapModeTables[4]; // _12A
	u8 _12E[2];                             // _12E
	J3DIndTevStage mIndStages[16];          // _130
	u32 mRegOffset;                         // _170
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

	virtual void reset(J3DTevBlock*) { }                            // _08 (weak)
	virtual void ptrToIndex() { }                                   // _38 (weak)
	virtual void indexToPtr() { indexToPtr_private(mTexNoOffset); } // _3C (weak)
	virtual JBlockType getType() { return JBT_TevNull; }            // _40 (weak)
	virtual ~J3DTevBlockNull() { }                                  // _D8 (weak)

	void initialize();

	// _00     = VTBL
	// _00-_08 = J3DTevBlock
};

/**
 * @size{0xD8}
 */
struct J3DTevBlockPatched : public J3DTevBlock {
	J3DTevBlockPatched() { initialize(); }

	virtual void reset(J3DTevBlock*);                                                                   // _08
	virtual void load() { }                                                                             // _0C (weak)
	virtual void diffTexNo();                                                                           // _14
	virtual void diffTevReg();                                                                          // _18
	virtual void diffTexCoordScale();                                                                   // _1C
	virtual void diffTevStage();                                                                        // _20
	virtual void diffTevStageIndirect();                                                                // _24
	virtual void patch();                                                                               // _28
	virtual void patchTexNo();                                                                          // _2C
	virtual void patchTevReg();                                                                         // _30
	virtual void patchTexNoAndTexCoordScale();                                                          // _34
	virtual void ptrToIndex();                                                                          // _38
	virtual void indexToPtr() { indexToPtr_private(mTexNoOffset); }                                     // _3C (weak)
	virtual JBlockType getType() { return JBT_TevPatched; }                                             // _40 (weak)
	virtual u32 countDLSize();                                                                          // _44
	virtual void setTexNo(u32 index, const u16* texNo) { mTexIndices[index] = *texNo; }                 // _48 (weak)
	virtual void setTexNo(u32 index, u16 texNo) { mTexIndices[index] = texNo; }                         // _4C (weak)
	virtual u16 getTexNo(u32 index) const { return mTexIndices[index]; }                                // _50 (weak)
	virtual void setTevOrder(u32 index, const J3DTevOrder* order) { mOrders[index] = *order; }          // _54 (weak)
	virtual void setTevOrder(u32 index, J3DTevOrder order) { mOrders[index] = order; }                  // _58 (weak)
	virtual J3DTevOrder* getTevOrder(u32 index) { return &mOrders[index]; }                             // _5C (weak)
	virtual void setTevColor(u32 index, const J3DGXColorS10* color) { mColors[index] = *color; }        // _60 (weak)
	virtual void setTevColor(u32 index, J3DGXColorS10 color) { mColors[index] = color; }                // _64 (weak)
	virtual J3DGXColorS10* getTevColor(u32 index) { return &mColors[index]; }                           // _68 (weak)
	virtual void setTevKColor(u32 index, const J3DGXColor* color) { mKColors[index] = *color; }         // _6C (weak)
	virtual void setTevKColor(u32 index, J3DGXColor color) { mKColors[index] = color; }                 // _70 (weak)
	virtual J3DGXColor* getTevKColor(u32 index) { return &mKColors[index]; }                            // _74 (weak)
	virtual void setTevKColorSel(u32 index, const u8* sel) { mKColorSels[index] = *sel; }               // _78 (weak)
	virtual void setTevKColorSel(u32 index, u8 sel) { mKColorSels[index] = sel; }                       // _7C (weak)
	virtual GXTevKColorSel getTevKColorSel(u32 index) { return GXTevKColorSel(mKColorSels[index]); }    // _80 (weak)
	virtual void setTevStageNum(const u8* stageNum) { mStageNum = *stageNum; }                          // _90 (weak)
	virtual void setTevStageNum(u8 stageNum) { mStageNum = stageNum; }                                  // _94 (weak)
	virtual u8 getTevStageNum() const { return mStageNum; }                                             // _98 (weak)
	virtual void setTevStage(u32 index, const J3DTevStage* stage) { mStages[index] = *stage; }          // _9C (weak)
	virtual void setTevStage(u32 index, J3DTevStage stage) { mStages[index] = stage; }                  // _A0 (weak)
	virtual J3DTevStage* getTevStage(u32 index) { return &mStages[index]; }                             // _A4 (weak)
	virtual void setIndTevStage(u32 index, const J3DIndTevStage* stage) { mIndStages[index] = *stage; } // _BC (weak)
	virtual void setIndTevStage(u32 index, J3DIndTevStage stage) { mIndStages[index] = stage; }         // _C0 (weak)
	virtual J3DIndTevStage* getIndTevStage(u32 index) { return &mIndStages[index]; }                    // _C4 (weak)
	virtual u32 getTexNoOffset() const { return mTexNoOffset; }                                         // _C8 (weak)
	virtual u32 getTevRegOffset() const { return mRegOffset; }                                          // _CC (weak)
	virtual void setTevRegOffset(u32 offset) { mRegOffset = offset; }                                   // _D4 (weak)
	virtual ~J3DTevBlockPatched() { }                                                                   // _D8 (weak)

	void initialize();

	// _00     = VTBL
	// _00-_08 = J3DTevBlock
	u16 mTexIndices[8];           // _08
	J3DTevOrder mOrders[8];       // _18
	J3DTevStage mStages[8];       // _38
	J3DIndTevStage mIndStages[8]; // _78
	J3DGXColorS10 mColors[4];     // _98
	J3DGXColor mKColors[4];       // _B8
	u8 mKColorSels[8];            // _C8
	u8 mStageNum;                 // _D0
	u32 mRegOffset;               // _D4
};

void loadTexNo(u32, const u16&);
bool isTexNoReg(void*);
u16 getTexNoReg(void*);

#endif
