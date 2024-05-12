#ifndef _JSYSTEM_J3D_J3DPACKET_H
#define _JSYSTEM_J3D_J3DPACKET_H

#include "Dolphin/mtx.h"
#include "JSystem/J3D/J3DDisplayListObj.h"
#include "JSystem/J3D/J3DShape.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/JGadget/linklist.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/J3D/J3DDrawBuffer.h"
#include "types.h"

struct J3DTexMtxObj;
struct J3DTexture;
struct J3DMaterialAnm;
struct J3DShapePacket;
struct J3DMtxBuffer;
struct J3DModel;

/*
 * J3DModelDiffFlags is an enumeration that defines different flags for 3D model differences.
 * Each flag represents a different aspect of the model that can be different.
 *
 * J3DMDF_DiffMatColor:     This flag is set if the material color is different. It corresponds to the 1st bit.
 * J3DMDF_DiffLight:        This flag is set if the light settings are different. It corresponds to the 2nd bit.
 * J3DMDF_DiffTexGen:       This flag is set if the TexCoordGen is different. It corresponds to the 13th bit.
 * J3DMDF_Unknown:          This flag is reserved for a flag that isn't yet understood. It corresponds to the 18th bit.
 * J3DMDF_DiffColorReg:     This flag is set if the color registers (TEV) are different. It corresponds to the 25th bit.
 * J3DMDF_DiffKonstColor:   This flag is set if the Konst colors are different. It corresponds to the 26th bit.
 * J3DMDF_DiffTevOrderFull: This flag is set if the full TevOrder (TexMap and TexCoordIdx) is different. It corresponds to the 27th bit.
 * J3DMDF_DiffIndTevStage:  This flag is set if the indirect TevStages are different. It corresponds to the 28th bit.
 * J3DMDF_DiffFog:          This flag is set if the fog settings are different. It corresponds to the 29th bit.
 * J3DMDF_DiffBlend:        This flag is set if the blend settings are different. It corresponds to the 30th bit.
 *
 * The CREATE_DIFF_FLAG macro is used to create a u32 value with specific flags set.
 * It takes four parameters: lightObjNum, texGenNum, texNoNum, and tevStageNum. Each parameter is expected to be a 4-bit value.
 * The parameters are shifted to their respective positions in the u32 value and combined using the bitwise OR operator.
 *
 * lightObjNum: This value is shifted to bits 4 - 7.
 * texGenNum:   This value is shifted to bits 8 - 11.
 * texNoNum:    This value is shifted to bits 16 - 19.
 * tevStageNum: This value is shifted to bits 20 - 23.
 */

enum J3DModelDiffFlags {
	J3DMDF_DiffMatColor     = 0x00000001, // Diff material color
	J3DMDF_DiffLight        = 0x00000002, // Diff light settings
	J3DMDF_DiffTexGen       = 0x00001000, // Diff TexCoordGen
	J3DMDF_Unknown          = 0x00020000,
	J3DMDF_DiffColorReg     = 0x01000000, // Diff color registers (TEV)
	J3DMDF_DiffKonstColor   = 0x02000000, // Diff Konst colors
	J3DMDF_DiffTevOrderFull = 0x04000000, // Diff full TevOrder (TexMap and TexCoordIdx)
	J3DMDF_DiffIndTevStage  = 0x08000000, // Diff indirect TevStages
	J3DMDF_DiffFog          = 0x10000000, // Diff fog settings
	J3DMDF_DiffBlend        = 0x20000000  // Diff blend settings
};

#define CREATE_DIFF_FLAG(lightObjNum, texGenNum, texNoNum, tevStageNum) \
	(((lightObjNum & 0xf) << 4) | ((texGenNum & 0xf) << 8) | ((texNoNum & 0xf) << 16) | ((tevStageNum & 0xf) << 20))

inline u32 getDiffFlag_LightObjNum(u32 diffFlags) { return (diffFlags & 0xf0) >> 4; }
inline u32 getDiffFlag_TexGenNum(u32 diffFlags) { return (diffFlags & 0xf00) >> 8; }
inline u32 getDiffFlag_TexNoNum(u32 diffFlags) { return (diffFlags & 0xf0000) >> 16; }
inline u32 getDiffFlag_TevStageNum(u32 diffFlags) { return (diffFlags & 0xf00000) >> 20; }

inline int calcDifferedBufferSize_TexMtxSize(int diffFlags) { return diffFlags * 53; }
inline int calcDifferedBufferSize_TexGenSize(int diffFlags) { return diffFlags * 61 + 10; }
inline int calcDifferedBufferSize_TexNoSize(int diffFlags) { return diffFlags * 55; }
inline u32 calcDifferedBufferSize_TexNoAndTexCoordScaleSize(u32 diffFlags)
{
	u32 res = diffFlags * 55;
	res += ((diffFlags + 1) >> 1) * 55;
	return res;
}
inline int calcDifferedBufferSize_TevStageSize(int diffFlags) { return diffFlags * 10; }
inline int calcDifferedBufferSize_TevStageDirectSize(int diffFlags) { return diffFlags * 5; }

struct J3DTexMtxObj {
	J3DTexMtxObj(u16 i)
	{
		mTexMtx    = new Mtx[i];
		mEffectMtx = new Mtx44[i];
		mTexGenNum = i;
	}
	Mtx& getMtx(u16 idx) { return mTexMtx[idx]; }
	Mtx44& getEffectMtx(u16 idx) { return mEffectMtx[idx]; }
	u16 getNumTexMtx() { return mTexGenNum; }

	Mtx* mTexMtx;      // _00, array of Mtxs
	Mtx44* mEffectMtx; // _04
	u16 mTexGenNum;    // _08
};

// TODO: Could this use TLinkList?
struct J3DPacket {
	inline J3DPacket()
	    : mNextPacket(nullptr)
	    , mChildPacket(nullptr)
	    , mUserArea(0)
	{
	}

	virtual bool entry(J3DDrawBuffer*); // _08
	virtual void draw() { }             // _0C (weak)
	virtual ~J3DPacket() { }            // _10 (weak)

	void addChildPacket(J3DPacket*);

	J3DPacket* getNextPacket() const { return mNextPacket; }
	void setNextPacket(J3DPacket* i_packet) { mNextPacket = i_packet; }

	void drawClear()
	{
		mNextPacket  = nullptr;
		mChildPacket = nullptr;
	}

	void setUserArea(u32 area) { mUserArea = area; }

	// _00 = VTBL
	J3DPacket* mNextPacket;  // _04
	J3DPacket* mChildPacket; // _08
	u32 mUserArea;           // _0C
};

struct J3DDrawPacket : public J3DPacket {
	enum DrawPacketFlags {
		J3DDP_IsLocked = 0x1,
	};

	J3DDrawPacket();

	virtual void draw();      // _0C
	virtual ~J3DDrawPacket(); // _10

	J3DErrType newDisplayList(u32);
	J3DErrType newSingleDisplayList(u32);

	bool checkFlag(u32 flag) const { return mFlags & flag; }
	void onFlag(u32 flag) { mFlags |= flag; }
	void offFlag(u32 flag) { mFlags &= ~flag; }
	void lock() { onFlag(J3DDP_IsLocked); }
	void unlock() { offFlag(J3DDP_IsLocked); }
	J3DTexMtxObj* getTexMtxObj() const { return mTexMtxObj; }
	bool isLocked() const { return checkFlag(J3DDP_IsLocked); }
	J3DDisplayListObj* getDisplayListObj() const { return mDisplayList; }

	void beginPatch() { mDisplayList->beginPatch(); }
	void endPatch() { mDisplayList->endPatch(); }

	// _00     = VTBL
	// _00-_10 = J3DPacket
	u32 mFlags;                      // _10
	u8 _14[0xC];                     // _14, unknown
	J3DDisplayListObj* mDisplayList; // _20
	J3DTexMtxObj* mTexMtxObj;        // _24
};

// STRIPPED STRUCT - needed to generate weak functions, info taken from Wind Waker
struct J3DCallBackPacket : public J3DPacket {
	typedef void (*CallBack)(J3DCallBackPacket* pPacket, u32 timing);

	J3DCallBackPacket()
	    : mCallBack(nullptr)
	{
	}

	virtual void draw();             // _0C
	virtual ~J3DCallBackPacket() { } // _10 (weak)

	// _00     = VTBL
	// _00-_10 = J3DPacket
	CallBack mCallBack; // _10
};

/**
 * @size{0x3C}
 */
struct J3DShapePacket : public J3DDrawPacket {
	J3DShapePacket();

	virtual void draw();       // _0C
	virtual ~J3DShapePacket(); // _10

	J3DErrType newDifferedDisplayList(u32 displayListFlag);
	J3DErrType newDifferedTexMtx(J3DTexDiffFlag);
	int calcDifferedBufferSize(u32);
	void drawFast();
	void prepareDraw() const;

	void setShape(J3DShape* pShape) { mShape = pShape; }
	void setModel(J3DModel* pModel) { mModel = pModel; }
	void setMtxBuffer(J3DMtxBuffer* pMtxBuffer) { mMtxBuffer = pMtxBuffer; }
	void setBaseMtxPtr(Mtx* pMtx) { mBaseMtxPtr = pMtx; }

	J3DShape* getShape() const { return mShape; }
	J3DModel* getModel() const { return mModel; }
	Mtx* getBaseMtxPtr() const { return mBaseMtxPtr; }

	// _00     = VTBL
	// _00-_28 = J3DDrawPacket
	J3DShape* mShape;         // _28
	J3DMtxBuffer* mMtxBuffer; // _2C
	Mtx* mBaseMtxPtr;         // _30
	u32 mDiffFlag;            // _34
	J3DModel* mModel;         // _38
};

/**
 * @size{0x40}
 */
struct J3DMatPacket : public J3DDrawPacket {
	enum MatPacketFlags {
		J3DMP_IsChanged = 0x80000000,
	};

	J3DMatPacket();

	virtual bool entry(J3DDrawBuffer* buffer)
	{
		sortFunc func = J3DDrawBuffer::sortFuncTable[buffer->mSortType];
		return (buffer->*func)(this);
	} // _08 (weak)
	virtual void draw();     // _0C
	virtual ~J3DMatPacket(); // _10

	void addShapePacket(J3DShapePacket*);
	void beginDiff();
	u32 endDiff();
	bool isSame(J3DMatPacket*) const;

	J3DMaterial* getMaterial() const { return mMaterial; }
	J3DShapePacket* getShapePacket() const { return mShapePacket; }
	void setShapePacket(J3DShapePacket* packet) { mShapePacket = packet; }
	void setInitShapePacket(J3DShapePacket* packet) { mInitShapePacket = packet; }
	bool isChanged() const { return mDiffFlag & J3DMP_IsChanged; }
	void setMaterialAnmID(J3DMaterialAnm* materialAnm) { mMaterialAnm = materialAnm; }
	bool isEnabled_Diff() const { return mInitShapePacket->getDisplayListObj() != nullptr; }

	// _00     = VTBL
	// _00-_28 = J3DDrawPacket
	J3DShapePacket* mInitShapePacket; // _28
	J3DShapePacket* mShapePacket;     // _2C
	J3DMaterial* mMaterial;           // _30
	u32 mDiffFlag;                    // _34
	J3DTexture* mTexture;             // _38
	J3DMaterialAnm* mMaterialAnm;     // _3C
};

#endif
