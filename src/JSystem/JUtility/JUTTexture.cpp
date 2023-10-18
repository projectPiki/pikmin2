#include "JSystem/JUtility/JUTTexture.h"
#include "Dolphin/gx.h"
#include "Dolphin/os.h"
#include "JSystem/JUtility/JUTPalette.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/ResTIMG.h"
#include "types.h"

/*
 * --INFO--
 * Address:	80032F1C
 * Size:	0000F4
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
	img->mLutFormat         = GX_TL_IA8;
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

/*
 * --INFO--
 * Address:	80033010
 * Size:	000074
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

/*
 * --INFO--
 * Address:	80033084
 * Size:	0001AC
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
			mEmbPalette = new JUTPalette(tlut, (GXTlutFmt)mTexInfo->mLutFormat, (JUTTransparency)mTexInfo->mTransparency,
			                             mTexInfo->mPaletteEntryCount, (void*)((u32)mTexInfo + mTexInfo->mPaletteOffset));
			mFlags      = (mFlags & TEXFLAG_Unk1) | TEXFLAG_Unk2;
		} else {
			mEmbPalette->storeTLUT(tlut, (GXTlutFmt)mTexInfo->mLutFormat, (JUTTransparency)mTexInfo->mTransparency,
			                       mTexInfo->mPaletteEntryCount, (void*)((u32)mTexInfo + mTexInfo->mPaletteOffset));
		}

		attachPalette(mEmbPalette);
	}
}

/*
 * --INFO--
 * Address:	80033230
 * Size:	000034
 */
void JUTTexture::storeTIMG(const ResTIMG* img, JUTPalette* palette)
{
	storeTIMG(img, palette, palette ? (GXTlut)palette->mTlutID : GX_TLUT0);
}

/*
 * --INFO--
 * Address:	80033264
 * Size:	000138
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

/*
 * --INFO--
 * Address:	8003339C
 * Size:	000058
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

/*
 * --INFO--
 * Address:	800333F4
 * Size:	000050
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

/*
 * --INFO--
 * Address:	80033444
 * Size:	0000F0
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

/*
 * --INFO--
 * Address:	80033534
 * Size:	0000FC
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

/*
 * --INFO--
 * Address:	80033630
 * Size:	000050
 */
void JUTTexture::load(GXTexMapID id)
{
	if (mActivePalette) {
		mActivePalette->load();
	}
	GXLoadTexObj(this, id);
}

/*
 * --INFO--
 * Address:	80033680
 * Size:	0000C4
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
