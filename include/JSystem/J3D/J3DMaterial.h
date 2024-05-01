#ifndef _JSYSTEM_J3D_J3DMATERIAL_H
#define _JSYSTEM_J3D_J3DMATERIAL_H

#include "JSystem/J3D/J3DTevBlock.h"
#include "JSystem/J3D/J3DMaterialAnm.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/J3D/J3DTexture.h"
#include "JSystem/J3D/J3DTexGenBlock.h"
#include "types.h"

struct J3DAnmColor;
struct J3DAnmTevRegKey;
struct J3DAnmTextureSRTKey;
struct J3DColorBlock;
struct J3DDisplayListObj;
struct J3DIndBlock;
struct J3DJoint;
struct J3DMaterialAnm;
struct J3DPEBlock;
struct J3DShape;
struct J3DTexGenBlock;
struct J3DTexMtxAnm;
struct J3DTexture;
struct JUTNameTab;

static inline void J3DFifoWriteCPCmd(u8 cmd, u32 param) { GX_CP_LOAD_REG(cmd, param); }

static inline void J3DFifoWriteXFCmd(u16 cmd, u16 len)
{
	GX_WRITE_U8(GX_CMD_LOAD_XF_REG);
	GX_WRITE_U16(len - 1);
	GX_WRITE_U16(cmd);
}

struct J3DCurrentMtxInfo {
	u32 mMtxIdxRegA; // _00
	u32 mMtxIdxRegB; // _04
	u32 getMtxIdxRegA() const { return mMtxIdxRegA; }
	u32 getMtxIdxRegB() const { return mMtxIdxRegB; }
};

struct J3DCurrentMtx : public J3DCurrentMtxInfo {
	J3DCurrentMtx()
	{
		mMtxIdxRegA = 0x3CF3CF00;
		mMtxIdxRegB = 0x00F3CF3C;
	}

	void operator=(const J3DCurrentMtxInfo& info)
	{
		mMtxIdxRegA = info.mMtxIdxRegA;
		mMtxIdxRegB = info.mMtxIdxRegB;
	}

	u32 getMtxIdxRegA() const { return mMtxIdxRegA; }
	u32 getMtxIdxRegB() const { return mMtxIdxRegB; }

	inline void load() const
	{
		J3DFifoWriteCPCmd(0x30, ((J3DCurrentMtxInfo*)this)->mMtxIdxRegA); // CP_MATINDEX_A
		J3DFifoWriteCPCmd(0x40, ((J3DCurrentMtxInfo*)this)->mMtxIdxRegB); // CP_MATINDEX_B
		J3DFifoWriteXFCmd(0x1018, 2);
		GXWGFifo.s32 = getMtxIdxRegA();
		GXWGFifo.u32 = getMtxIdxRegB();
	}

	void setCurrentTexMtx(u8 param_1, u8 param_2, u8 param_3, u8 param_4, u8 param_5, u8 param_6, u8 param_7, u8 param_8)
	{
		mMtxIdxRegA = ((param_1 & 0xff) << 6) | (param_2 << 0xc) | (param_3 << 0x12) | (param_4 << 0x18);
		mMtxIdxRegB = (param_5) | param_6 << 6 | param_7 << 0xc | param_8 << 0x12;
	}

	// _00-_08 = J3DCurrentMtxInfo
};

/**
 * @size{0x4C}
 */
struct J3DMaterial {
	J3DMaterial() { initialize(); }

	~J3DMaterial() { }

	virtual void calc(const Mtx);           // _08
	virtual void calcDiffTexMtx(const Mtx); // _0C
	virtual void makeDisplayList();         // _10
	virtual void makeSharedDisplayList();   // _14
	virtual void load();                    // _18
	virtual void loadSharedDL();            // _1C
	virtual void patch();                   // _20
	virtual void diff(u32);                 // _24
	virtual void reset();                   // _28
	virtual void change();                  // _2C

	void calcCurrentMtx();
	static u32 calcSizeColorBlock(u32);
	static u32 calcSizeIndBlock(int);
	static u32 calcSizePEBlock(J3DModelLoaderFlags, u32);
	static u32 calcSizeTexGenBlock(u32);
	static u32 calcSizeTevBlock(int);
	u32 countDLSize();
	static J3DColorBlock* createColorBlock(u32);
	static J3DIndBlock* createIndBlock(int);
	static J3DPEBlock* createPEBlock(u32, u32);
	static J3DTevBlock* createTevBlock(int);
	static J3DTexGenBlock* createTexGenBlock(u32);
	void initialize();
	J3DErrType newSharedDisplayList(u32);
	J3DErrType newSingleSharedDisplayList(u32);
	void setCurrentMtx();

	J3DMaterial* getNext() const { return mNext; }
	J3DShape* getShape() const { return mShape; }
	J3DTevBlock* getTevBlock() const { return mTevBlock; }
	J3DColorBlock* getColorBlock() const { return mColorBlock; }
	J3DTexGenBlock* getTexGenBlock() const { return mTexGenBlock; }
	J3DDisplayListObj* getSharedDisplayListObj() const { return mSharedDLObj; }
	J3DShape* getShape() { return mShape; }
	J3DJoint* getJoint() { return mJoint; }
	u32 getTexGenNum() const { return mTexGenBlock->getTexGenNum(); }
	u8 getTevStageNum() const { return mTevBlock->getTevStageNum(); }
	bool isDrawModeOpaTexEdge() { return (mMaterialMode & 3) == 0; }
	u16 getIndex() { return mIndex; }

	J3DMaterialAnm* getMaterialAnm() const
	{
		if ((u32)mMaterialAnm < 0xC0000000) {
			return mMaterialAnm;
		} else {
			return nullptr;
		}
	}
	J3DNBTScale* getNBTScale() const { return mTexGenBlock->getNBTScale(); }
	u16 getTexNo(u32 idx) const { return mTevBlock->getTexNo(idx); }

	void setTevColor(u32 i, const J3DGXColorS10* i_color) { mTevBlock->setTevColor(i, i_color); }
	void setTevKColor(u32 i, const J3DGXColor* i_color) { mTevBlock->setTevKColor(i, i_color); }
	void setMaterialAnm(J3DMaterialAnm* i_anm) { mMaterialAnm = i_anm; }

	// unused?
	void makeDisplayList_private(J3DDisplayListObj* obj);
	void copy(J3DMaterial* other);

	// VTBL _00
	J3DMaterial* mNext;              // _04
	J3DShape* mShape;                // _08
	J3DJoint* mJoint;                // _0C
	u32 mMaterialMode;               // _10
	u16 mIndex;                      // _14
	u32 mInvalid;                    // _18
	u8 _1C[4];                       // _1C
	u32 mDiffFlag;                   // _20
	J3DColorBlock* mColorBlock;      // _24
	J3DTexGenBlock* mTexGenBlock;    // _28
	J3DTevBlock* mTevBlock;          // _2C
	J3DIndBlock* mIndBlock;          // _30
	J3DPEBlock* mPEBlock;            // _34
	J3DMaterial* mOrigMaterial;      // _38
	J3DMaterialAnm* mMaterialAnm;    // _3C
	J3DCurrentMtx mCurrentMtx;       // _40
	J3DDisplayListObj* mSharedDLObj; // _48
};

/**
 * m*Block are all the *Null variants of their respective types.
 * @size{0x4C}
 */
struct J3DLockedMaterial : public J3DMaterial {
	inline J3DLockedMaterial()
	    : J3DMaterial()
	{
		initialize();
	}

	virtual void calc(const f32 (*)[4]);  // _08
	virtual void makeDisplayList();       // _10
	virtual void makeSharedDisplayList(); // _14
	virtual void load();                  // _18
	virtual void loadSharedDL();          // _1C
	virtual void patch();                 // _20
	virtual void diff(u32);               // _24
	virtual void reset();                 // _28
	virtual void change();                // _2C

	void initialize();

	// _00     = VTBL
	// _00-_4C = J3DMaterial
};

/**
 * mTexGenBlock and mTevBlock are the *Patched variants of their respective
 * types.
 * @size{0x4C}
 */
struct J3DPatchedMaterial : public J3DMaterial {
	J3DPatchedMaterial() { initialize(); }

	virtual void makeDisplayList();       // _10
	virtual void makeSharedDisplayList(); // _14
	virtual void load();                  // _18
	virtual void loadSharedDL();          // _1C
	virtual void reset();                 // _28
	virtual void change();                // _2C

	void initialize();

	// _00     = VTBL
	// _00-_4C = J3DMaterial
};

/**
 * @size{0x20}
 */
struct J3DMaterialTable {
	J3DMaterialTable();

	virtual ~J3DMaterialTable(); // _08

	void clear();

	J3DErrType allocTexMtxAnimator(J3DAnmTextureSRTKey*, J3DTexMtxAnm**);
	J3DErrType entryTexMtxAnimator(J3DAnmTextureSRTKey*);
	bool removeTexMtxAnimator(J3DAnmTextureSRTKey*);

	J3DErrType allocTevRegAnimator(J3DAnmTevRegKey*, J3DTevColorAnm**, J3DTevKColorAnm**);
	J3DErrType entryTevRegAnimator(J3DAnmTevRegKey*);
	bool removeTevRegAnimator(J3DAnmTevRegKey*);

	J3DErrType entryMatColorAnimator(J3DAnmColor*);

	J3DMaterial* getMaterialNodePointer(u16 idx) const { return mMaterials[idx]; }
	J3DTexture* getTexture() const { return mTextures; }
	JUTNameTab* getTextureName() const { return mTextureNames; }
	JUTNameTab* getMaterialName() const { return mMaterialNames; }
	u16 getMaterialNum() const { return mMaterialNum; }
	bool isLocked() const { return _1C == 1; }
	void setTexture(J3DTexture* tex) { mTextures = tex; }

	// VTBL _00
	u16 mMaterialNum;              // _04
	u16 mUniqueMaterialNum;        // _06
	J3DMaterial** mMaterials;      // _08
	JUTNameTab* mMaterialNames;    // _0C
	J3DMaterial* mUniqueMaterials; // _10
	J3DTexture* mTextures;         // _14
	JUTNameTab* mTextureNames;     // _18
	u16 _1C;                       // _1C
};

#endif
