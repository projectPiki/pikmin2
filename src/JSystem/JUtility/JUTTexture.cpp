#include "JSystem/JUtility/JUTTexture.h"
#include "Dolphin/gx.h"
#include "Dolphin/os.h"
#include "JSystem/JUtility/JUTPalette.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/ResTIMG.h"
#include "types.h"

/**
 * @note Address: 0x80032F1C
 * @note Size: 0xF4
 */
JUTTexture::JUTTexture(int sizeX, int sizeY, GXTexFmt textureFormat)
{
	mFlags                  = (mFlags & TEXFLAG_Unk2) | TEXFLAG_Unk1;
	u32 texBufferSize       = GXGetTexBufferSize(sizeX, sizeY, textureFormat, GX_FALSE, 1);
	mImage                  = reinterpret_cast<ResTIMG*>(new (0x20) u8[texBufferSize + 0x20]);
	ResTIMG* img            = mImage;
	img->mTextureFormat     = textureFormat;
	img->mTransparency      = Transparency_0;
	img->mSizeX             = sizeX;
	img->mSizeY             = sizeY;
	img->mWrapS             = GX_CLAMP;
	img->mWrapT             = GX_CLAMP;
	img->mPaletteFormat     = 0;
	img->mColorFormat       = GX_TL_IA8;
	img->mPaletteEntryCount = 0;
	img->mPaletteOffset     = 0;
	img->mIsMIPmapEnabled   = GX_FALSE;
	img->mDoEdgeLOD         = GX_FALSE;
	img->mIsBiasClamp       = GX_FALSE;
	img->mIsMaxAnisotropy   = GX_FALSE;
	img->mMinFilterType     = 1;
	img->mMagFilterType     = 1;
	img->mMinLOD            = 0;
	img->mMaxLOD            = 0;
	img->mTotalImageCount   = 1;
	img->mLODBias           = 0;
	img->mImageDataOffset   = 0x20;
	mEmbPalette             = nullptr;
	storeTIMG(img, (u8)'\0');
	DCFlushRange(mTexData, texBufferSize);
}

/**
 * @note Address: 0x80033010
 * @note Size: 0x74
 */
JUTTexture::~JUTTexture()
{
	if (mFlags & TEXFLAG_Unk1) {
		delete[] mImage;
	}
	if (mFlags & TEXFLAG_Unk2) {
		delete mEmbPalette;
	}
}

/**
 * @note Address: 0x80033084
 * @note Size: 0x1AC
 */
void JUTTexture::storeTIMG(const ResTIMG* img, u8 lutID)
{
	if (img && lutID < 16) {
		mTexInfo = const_cast<ResTIMG*>(img);
		mTexData = (void*)((u32)mTexInfo + mTexInfo->mImageDataOffset);
		if ((u32)mTexInfo->mImageDataOffset == 0) {
			mTexData = (void*)((u32)mTexInfo + 0x20);
		}

		mActivePalette = nullptr;
		mTlut          = GX_TLUT0;
		mWrapS         = mTexInfo->mWrapS;
		mWrapT         = mTexInfo->mWrapT;
		mMinFilter     = mTexInfo->mMinFilterType;
		mMagFilter     = mTexInfo->mMagFilterType;
		mMinLOD        = mTexInfo->mMinLOD;
		mMaxLOD        = mTexInfo->mMaxLOD;
		mLODBias       = mTexInfo->mLODBias;

		u16 paletteCount = mTexInfo->mPaletteEntryCount;
		if (paletteCount == 0) {
			initTexObj();
			return;
		}

		GXTlut tlut;
		if (paletteCount > 0x100) {
			tlut = (GXTlut)(lutID % 4 + 0x10);
		} else {
			tlut = (GXTlut)(lutID);
		}

		if (!mEmbPalette || !(mFlags & TEXFLAG_Unk2)) {
			mEmbPalette = new JUTPalette(tlut, (GXTlutFmt)mTexInfo->mColorFormat, (JUTTransparency)mTexInfo->mTransparency,
			                             mTexInfo->mPaletteEntryCount, (void*)((u32)mTexInfo + mTexInfo->mPaletteOffset));
			mFlags      = (mFlags & TEXFLAG_Unk1) | TEXFLAG_Unk2;
		} else {
			mEmbPalette->storeTLUT(tlut, (GXTlutFmt)mTexInfo->mColorFormat, (JUTTransparency)mTexInfo->mTransparency,
			                       mTexInfo->mPaletteEntryCount, (void*)((u32)mTexInfo + mTexInfo->mPaletteOffset));
		}

		attachPalette(mEmbPalette);
	}
}

/**
 * @note Address: 0x80033230
 * @note Size: 0x34
 */
void JUTTexture::storeTIMG(const ResTIMG* img, JUTPalette* palette)
{
	storeTIMG(img, palette, palette ? (GXTlut)palette->mTlutID : GX_TLUT0);
}

/**
 * @note Address: 0x80033264
 * @note Size: 0x138
 */
void JUTTexture::storeTIMG(const ResTIMG* img, JUTPalette* palette, GXTlut tlut)
{
	if (img) {
		mTexInfo = const_cast<ResTIMG*>(img);
		mTexData = (void*)((u32)mTexInfo + mTexInfo->mImageDataOffset);
		if ((u32)mTexInfo->mImageDataOffset == 0) {
			mTexData = (void*)((u32)mTexInfo + 0x20);
		}

		if (mFlags & TEXFLAG_Unk2) {
			delete mEmbPalette;
		}
		mEmbPalette = palette;
		mFlags &= TEXFLAG_Unk1;
		mActivePalette = nullptr;

		if (palette) {
			mTlut = tlut;
			if (tlut != palette->mTlutID) {
				palette->storeTLUT(tlut, (GXTlutFmt)palette->mTlutFormat, (JUTTransparency)palette->mTransparency, palette->mNumColors,
				                   palette->mColorTable);
			}
		}

		mWrapS     = mTexInfo->mWrapS;
		mWrapT     = mTexInfo->mWrapT;
		mMinFilter = mTexInfo->mMinFilterType;
		mMagFilter = mTexInfo->mMagFilterType;
		mMinLOD    = mTexInfo->mMinLOD;
		mMaxLOD    = mTexInfo->mMaxLOD;
		mLODBias   = mTexInfo->mLODBias;
		init();
	}
}

/**
 * @note Address: 0x8003339C
 * @note Size: 0x58
 */
void JUTTexture::attachPalette(JUTPalette* palette)
{
	if (mTexInfo->mPaletteFormat == 0) {
		return;
	}
	if (!palette && mEmbPalette) {
		mActivePalette = mEmbPalette;
	} else {
		mActivePalette = palette;
	}
	initTexObj((GXTlut)mActivePalette->mTlutID);
}

/**
 * @note Address: 0x800333F4
 * @note Size: 0x50
 */
void JUTTexture::init()
{
	if (mTexInfo->mPaletteEntryCount == 0) {
		initTexObj();
	} else if (mEmbPalette) {
		mActivePalette = mEmbPalette;
		initTexObj((GXTlut)mActivePalette->mTlutID);
	}
}

/**
 * @note Address: 0x80033444
 * @note Size: 0xF0
 */
void JUTTexture::initTexObj()
{
	GXBool hasMipMap = mTexInfo->mIsMIPmapEnabled ? GX_TRUE : GX_FALSE;
	u8* image        = (u8*)mTexInfo;

	image += ((mTexInfo->mImageDataOffset) ? mTexInfo->mImageDataOffset : 0x20);

	GXInitTexObj(this, image, mTexInfo->mSizeX, mTexInfo->mSizeY, (GXTexFmt)mTexInfo->mTextureFormat, (GXTexWrapMode)mWrapS,
	             (GXTexWrapMode)mWrapT, hasMipMap);

	GXInitTexObjLOD(this, (GXTexFilter)mMinFilter, (GXTexFilter)mMagFilter, (f32)mMinLOD / 8, (f32)mMaxLOD / 8, mLODBias / 100.0f,
	                mTexInfo->mIsBiasClamp, mTexInfo->mDoEdgeLOD, (GXAnisotropy)mTexInfo->mIsMaxAnisotropy);
}

/**
 * @note Address: 0x80033534
 * @note Size: 0xFC
 */
void JUTTexture::initTexObj(GXTlut tlut)
{
	GXBool hasMipMap = mTexInfo->mIsMIPmapEnabled ? GX_TRUE : GX_FALSE;
	mTlut            = tlut;
	u8* image        = (u8*)mTexInfo;

	image += ((mTexInfo->mImageDataOffset) ? mTexInfo->mImageDataOffset : 0x20);

	GXInitTexObjCI(this, image, mTexInfo->mSizeX, mTexInfo->mSizeY, (GXCITexFmt)mTexInfo->mTextureFormat, (GXTexWrapMode)mWrapS,
	               (GXTexWrapMode)mWrapT, hasMipMap, tlut);

	GXInitTexObjLOD(this, (GXTexFilter)mMinFilter, (GXTexFilter)mMagFilter, (f32)mMinLOD / 8, (f32)mMaxLOD / 8, mLODBias / 100.0f,
	                mTexInfo->mIsBiasClamp, mTexInfo->mDoEdgeLOD, (GXAnisotropy)mTexInfo->mIsMaxAnisotropy);
}

/**
 * @note Address: 0x80033630
 * @note Size: 0x50
 */
void JUTTexture::load(GXTexMapID id)
{
	if (mActivePalette) {
		mActivePalette->load();
	}
	GXLoadTexObj(this, id);
}

/**
 * @note Address: 0x80033680
 * @note Size: 0xC4
 */
void JUTTexture::capture(int x0, int y0, GXTexFmt textureFormat, bool useMIPmap, u8 doClear)
{
	if (!(mFlags & 1)) {
		return;
	}

	if (useMIPmap) {
		GXSetTexCopySrc(x0, y0, mTexInfo->mSizeX << 1, mTexInfo->mSizeY << 1);
	} else {
		GXSetTexCopySrc(x0, y0, mTexInfo->mSizeX, mTexInfo->mSizeY);
	}

	GXSetTexCopyDst(mTexInfo->mSizeX, mTexInfo->mSizeY, textureFormat, useMIPmap);
	GXCopyTex(mTexData, doClear);
	GXPixModeSync();
}
