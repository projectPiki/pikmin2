#include "Game/IconTexture.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JUtility/JUTTexture.h"
#include "JSystem/ResTIMG.h"
#include "LoadResource.h"
#include "P2Macros.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804839F0
    lbl_804839F0:
        .4byte 0x67616D65
        .4byte 0x49636F6E
        .4byte 0x54657874
        .4byte 0x7572652E
        .4byte 0x63707000
    .global lbl_80483A04
    lbl_80483A04:
        .4byte 0x6661696C
        .4byte 0x65642074
        .4byte 0x6F206F70
        .4byte 0x656E205B
        .4byte 0x25735D0A
        .4byte 0x00000000
    .global lbl_80483A1C
    lbl_80483A1C:
        .asciz "P2Assert"
        .skip 3
    .global lbl_80483A28
    lbl_80483A28:
        .asciz "illegal index [%d] [0..%d)\n"

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game11IconTexture3Mgr
    __vt__Q34Game11IconTexture3Mgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game11IconTexture3MgrFv
    .global __vt__Q34Game11IconTexture6Loader
    __vt__Q34Game11IconTexture6Loader:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game11IconTexture6LoaderFv
*/

namespace Game {

/*
 * --INFO--
 * Address:	80233484
 * Size:	000048
 */
IconTexture::Loader::Loader()
    : JKRDisposer()
{
	mArchive = nullptr;
	mNode    = nullptr;
}

/*
 * --INFO--
 * Address:	802334CC
 * Size:	00008C
 */
IconTexture::Loader::~Loader()
{
	if (mArchive) {
		mArchive = nullptr;
	}
	if (mNode) {
		mNode = nullptr;
	}
}

/*
 * --INFO--
 * Address:	80233558
 * Size:	000084
 */
void IconTexture::Loader::loadResource(char* path)
{
	LoadResource::Arg arg(path);
	mNode = gLoadResourceMgr->mountArchive(arg);
	if (mNode) {
		mArchive = mNode->mArchive;
		return;
	}
	JUT_PANICLINE(45, "failed to open [%s]\n", path);
}

/*
 * --INFO--
 * Address:	802335DC
 * Size:	000030
 */
ResTIMG* IconTexture::Loader::getResTIMG(char* path) { return (ResTIMG*)mArchive->getResource(path); }

/*
 * --INFO--
 * Address:	8023360C
 * Size:	000048
 */
IconTexture::Mgr::Mgr()
    : JKRDisposer()
    , mTextures(nullptr)
    , mCount(0)
{
}

/* __dt__Q34Game11IconTexture3MgrFv
 * --INFO--
 * Address:	80233654
 * Size:	00008C
 */
IconTexture::Mgr::~Mgr()
{
	if (mTextures) {
		delete[] mTextures;
		mTextures = nullptr;
	}
	mCount = 0;
}

/*
 * --INFO--
 * Address:	802336E0
 * Size:	000084
 */
void IconTexture::Mgr::create(int count)
{
	P2ASSERTLINE(78, count > 0);
	mTextures = new JUTTexture[count];
	mCount    = count;
}

/*
 * --INFO--
 * Address:	80233764
 * Size:	00008C
 */
void IconTexture::Mgr::setTexture(int index, ResTIMG* resource)
{
	JUT_ASSERTLINE(86, (0 <= index && index < mCount), "illegal index [%d] [0..%d)\n", index, mCount);
	mTextures[index].storeTIMG(resource, (u8)'\0');
}

/*
 * --INFO--
 * Address:	802337F0
 * Size:	00002C
 */
JUTTexture* IconTexture::Mgr::getTexture(int index)
{
	if (0 > index || index >= mCount) {
		return nullptr;
	}
	return &mTextures[index];
}
} // namespace Game
