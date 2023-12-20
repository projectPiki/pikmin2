#include "JSystem/JUtility/JUTPalette.h"
#include "Dolphin/os.h"
#include "JSystem/ResTLUT.h"
#include "types.h"

/**
 * @note Address: 0x8002EEC4
 * @note Size: 0x98
 */
void JUTPalette::storeTLUT(GXTlut tlutID, ResTLUT* resource)
{
	if (resource == nullptr) {
		OSErrorLine(35, "JUTTexture: TLUT is NULL\n");
	}
	ResTLUT* addr = reinterpret_cast<ResTLUT*>(&resource->_20);
	mTlutID       = tlutID;
	mTlutFormat   = resource->mFormat;
	mTransparency = resource->mTransparency;
	mNumColors    = resource->mNumColors;
	mColorTable   = addr;
	GXInitTlutObj(&mTlutObj, mColorTable, (GXTlutFmt)mTlutFormat, mNumColors);
}

/**
 * storeTLUT__10JUTPaletteF7_GXTlut10_GXTlutFmt15JUTTransparencyUsPv
 *
 * @note Address: 0x8002EF5C
 * @note Size: 0x40
 */
void JUTPalette::storeTLUT(GXTlut id, GXTlutFmt format, JUTTransparency transparency, u16 p4, void* p5)
{
	mTlutID       = id;
	mTlutFormat   = format;
	mTransparency = transparency;
	mNumColors    = p4;
	mColorTable   = (ResTLUT*)p5;
	GXInitTlutObj(&mTlutObj, mColorTable, (GXTlutFmt)mTlutFormat, mNumColors);
}

/**
 * @note Address: 0x8002EF9C
 * @note Size: 0x44
 */
bool JUTPalette::load()
{
	bool result = (mNumColors != 0);
	if (result) {
		GXLoadTlut(&mTlutObj, (GXTlut)mTlutID);
	}
	return result;
}
