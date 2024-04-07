#ifndef _JSYSTEM_JUT_JUTTEXTURE_H
#define _JSYSTEM_JUT_JUTTEXTURE_H

#include "Dolphin/gx.h"
#include "types.h"
#include "JSystem/ResTIMG.h"
#include "JSystem/J2D/J2DScreen.h"

struct JUTPalette;
struct ResTIMG;

enum TextureFlags {
	TEXFLAG_Unk1 = 0x1,
	TEXFLAG_Unk2 = 0x2,
};

// Size: 0x40
struct JUTTexture : public GXTexObj {
	JUTTexture()
	{
		mFlags &= TEXFLAG_Unk2;
		mEmbPalette = nullptr;
		mTexInfo    = nullptr;
	}

	JUTTexture(int, int, _GXTexFmt);

	inline JUTTexture(const char* resName)
	{
		const ResTIMG* resource = static_cast<ResTIMG*>(J2DScreen::getNameResource(resName));
		mEmbPalette             = nullptr;
		storeTIMG(resource, (u8)0);
		mFlags &= TEXFLAG_Unk2;
	}

	inline JUTTexture(ResTIMG* timg)
	{
		mEmbPalette = nullptr;
		storeTIMG(timg, (u8)0);
		mFlags &= TEXFLAG_Unk2;
	}

	inline JUTTexture(const ResTIMG* timg, u8 p2)
	{
		mEmbPalette = nullptr;
		storeTIMG(timg, p2);
		setCaptureFlag(false);
	}

	~JUTTexture();

	void attachPalette(JUTPalette*);
	void capture(int, int, _GXTexFmt, bool, u8);
	void captureTexture(int, int, int, int, bool, _GXTexFmt, _GXTexFmt);
	void captureDolTexture(void*, int, int, int, int, bool, _GXTexFmt);
	void init();
	void initTexObj();
	void initTexObj(_GXTlut);
	void load(_GXTexMapID);
	void storeTIMG(const ResTIMG*, u8);
	void storeTIMG(const ResTIMG*, JUTPalette*);
	void storeTIMG(const ResTIMG*, JUTPalette*, _GXTlut);

	/** @fabricated */
	inline int getSizeX() const { return mTexInfo->mSizeX; }
	/** @fabricated */
	inline int getSizeY() const { return mTexInfo->mSizeY; }

	const ResTIMG* getTexInfo() const { return mTexInfo; }
	void setCaptureFlag(bool flag) { mFlags &= TEXFLAG_Unk2 | flag; }
	u8 getCaptureFlag() const { return mFlags & TEXFLAG_Unk1; }
	u8 getEmbPaletteDelFlag() const { return mFlags & TEXFLAG_Unk2; }
	u8 getTlutName() const { return mTlut; }

	int getTransparency() { return mTexInfo->mTransparency; }
	u8 getFormat() const { return mTexInfo->mTextureFormat; }

	void setTlutName(u8 tlut) { mTlut = tlut; }

	bool operator==(const JUTTexture& other)
	{
		return mTexInfo == other.mTexInfo && mActivePalette == other.mActivePalette && mWrapS == other.mWrapS && mWrapT == other.mWrapT
		    && mMinFilter == other.mMinFilter && mMagFilter == other.mMagFilter && mMinLOD == other.mMinLOD && mMinLOD == other.mMinLOD
		    && mLODBias == other.mLODBias;
	}
	bool operator!=(const JUTTexture& other) { return !operator==(other); }

	ResTIMG* mTexInfo;          // _20
	void* mTexData;             // _24
	JUTPalette* mEmbPalette;    // _28
	JUTPalette* mActivePalette; // _2C
	u8 mWrapS;                  // _30, GXTexWrapMode
	u8 mWrapT;                  // _31, GXTexWrapMode
	u8 mMinFilter;              // _32
	u8 mMagFilter;              // _33
	u16 mMinLOD;                // _34
	u16 mMaxLOD;                // _36
	s16 mLODBias;               // _38
	u8 mTlut;                   // _3A
	u8 mFlags;                  // _3B
	ResTIMG* mImage;            // _3C
};

#endif
