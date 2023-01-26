#include "JSystem/JUtility/JUTPalette.h"
#include "Dolphin/os.h"
#include "JSystem/ResTLUT.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80474150
    lbl_80474150:
        .asciz "JUTPalette.cpp"
        .skip 1
    .global lbl_80474160
    lbl_80474160:
        .asciz "JUTTexture: TLUT is NULL\n"
        .skip 2
*/

/*
 * --INFO--
 * Address:	8002EEC4
 * Size:	000098
 */
void JUTPalette::storeTLUT(_GXTlut tlutID, ResTLUT* resource)
{
	if (resource == nullptr) {
		OSErrorLine(35, "JUTTexture: TLUT is NULL\n");
	}
	// storeTLUT(tlutID, resource->mFormat, resource->mTransparency,
	// resource->_02, resource->_20);
	u8* v1        = reinterpret_cast<u8*>(&resource->_20);
	mTlutID       = tlutID;
	mTlutFormat   = resource->mFormat;
	mTransparency = resource->mTransparency;
	_14           = resource->_02;
	_10           = v1;
	GXInitTlutObj(&mTlutObj, _10, mTlutFormat, _14);
}

/*
 * storeTLUT__10JUTPaletteF7_GXTlut10_GXTlutFmt15JUTTransparencyUsPv
 *
 * --INFO--
 * Address:	8002EF5C
 * Size:	000040
 */
void JUTPalette::storeTLUT(_GXTlut id, _GXTlutFmt format, JUTTransparency transparency, u16 p4, void* p5)
{
	mTlutID       = id;
	mTlutFormat   = format;
	mTransparency = transparency;
	_14           = p4;
	_10           = (u8*)p5;
	GXInitTlutObj(&mTlutObj, _10, mTlutFormat, _14);
}

/*
 * --INFO--
 * Address:	8002EF9C
 * Size:	000044
 */
bool JUTPalette::load()
{
	bool result = (_14 != 0);
	if (result) {
		GXLoadTlut(&mTlutObj, (_GXTlut)mTlutID);
	}
	return result;
}
