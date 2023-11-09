#include "JSystem/J2D/J2DAnm.h"
#include "JSystem/J2D/J2DManage.h"
#include "JSystem/J2D/J2DMaterial.h"
#include "JSystem/J2D/J2DPane.h"
#include "JSystem/J3D/J3DFileBlock.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JKernel/JKRFileLoader.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JSupport/JSUStream.h"
#include "JSystem/JUtility/JUTNameTab.h"
#include "JSystem/JUtility/TColor.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__9J2DScreen
    __vt__9J2DScreen:
        .4byte 0
        .4byte 0
        .4byte __dt__9J2DScreenFv
        .4byte getTypeID__9J2DScreenCFv
        .4byte move__7J2DPaneFff
        .4byte add__7J2DPaneFff
        .4byte resize__7J2DPaneFff
        .4byte setCullBack__7J2DPaneFb
        .4byte setCullBack__7J2DPaneF11_GXCullMode
        .4byte setAlpha__7J2DPaneFUc
        .4byte setConnectParent__7J2DPaneFb
        .4byte calcMtx__9J2DScreenFv
        .4byte update__7J2DPaneFv
        .4byte drawSelf__7J2DPaneFff
        .4byte drawSelf__9J2DScreenFffPA3_A4_f
        .4byte search__9J2DScreenFUx
        .4byte searchUserInfo__9J2DScreenFUx
        .4byte makeMatrix__7J2DPaneFff
        .4byte makeMatrix__7J2DPaneFffff
        .4byte isUsed__9J2DScreenFPC7ResTIMG
        .4byte isUsed__9J2DScreenFPC7ResFONT
        .4byte clearAnmTransform__9J2DScreenFv
        .4byte rewriteAlpha__7J2DPaneFv
        .4byte setAnimation__9J2DScreenFP10J2DAnmBase
        .4byte setAnimation__9J2DScreenFP15J2DAnmTransform
        .4byte setAnimation__9J2DScreenFP11J2DAnmColor
        .4byte setAnimation__9J2DScreenFP16J2DAnmTexPattern
        .4byte setAnimation__9J2DScreenFP19J2DAnmTextureSRTKey
        .4byte setAnimation__9J2DScreenFP15J2DAnmTevRegKey
        .4byte setAnimation__9J2DScreenFP20J2DAnmVisibilityFull
        .4byte setAnimation__9J2DScreenFP14J2DAnmVtxColor
        .4byte animationTransform__7J2DPaneFPC15J2DAnmTransform
        .4byte setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull
        .4byte setAnimationVF__9J2DScreenFP20J2DAnmVisibilityFull
        .4byte setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor
        .4byte setAnimationVC__9J2DScreenFP14J2DAnmVtxColor
        .4byte animationPane__7J2DPaneFPC15J2DAnmTransform
        .4byte
   createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUl
        .4byte
   createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUlP10JKRArchive
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global mDataManage__9J2DScreen
    mDataManage__9J2DScreen:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516840
    lbl_80516840:
        .4byte 0x00000000
    .global lbl_80516844
    lbl_80516844:
        .4byte 0x44200000
    .global lbl_80516848
    lbl_80516848:
        .4byte 0x43F00000
        .4byte 0x00000000
    .global lbl_80516850
    lbl_80516850:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80516858
    lbl_80516858:
        .float -1.0
    .global lbl_8051685C
    lbl_8051685C:
        .float 1.0
*/

J2DDataManage* J2DScreen::mDataManage;

/*
 * --INFO--
 * Address:	8003F474
 * Size:	0000A8
 */
J2DScreen::J2DScreen()
    : J2DPane(nullptr, true, 'root', JGeometry::TBox2f(0.0f, 0.0f, 640.0f, 480.0f))
// : J2DPane(nullptr, true, 'root', JGeometry::TBox2f(JGeometry::TVec2f(0.0f), 640.0f, 480.0f))
// : J2DPane(nullptr, true, 'root', JGeometry::TBox2f(0.0f, 0.0f, JGeometry::TVec2f(640.0f, 480.0f)))
{
	mColor.set(0xFFFFFFFF);
	_004           = 0xFFFF;
	mIsScissor     = false;
	mMaterialCount = 0;
	mMaterials     = nullptr;
	mTexRes        = nullptr;
	mFontRes       = nullptr;
	mNameTab       = nullptr;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lfs      f2, lbl_80516840@sda21(r2)
	lis      r4, 0x726F6F74@ha
	stw      r0, 0x34(r1)
	addi     r8, r4, 0x726F6F74@l
	lfs      f1, lbl_80516844@sda21(r2)
	addi     r9, r1, 0x10
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lfs      f0, lbl_80516848@sda21(r2)
	li       r4, 0
	stfs     f2, 8(r1)
	li       r5, 1
	li       r7, 0
	stfs     f2, 0xc(r1)
	stfs     f2, 0x10(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       "__ct__7J2DPaneFP7J2DPanebUxRCQ29JGeometry8TBox2<f>"
	lis      r4, __vt__9J2DScreen@ha
	lis      r3, 0x0000FFFF@ha
	addi     r0, r4, __vt__9J2DScreen@l
	li       r5, -1
	stw      r0, 0(r31)
	addi     r4, r3, 0x0000FFFF@l
	li       r0, 0
	mr       r3, r31
	stw      r5, 0x114(r31)
	sth      r4, 4(r31)
	stb      r0, 0x100(r31)
	sth      r0, 0x102(r31)
	stw      r0, 0x104(r31)
	stw      r0, 0x108(r31)
	stw      r0, 0x10c(r31)
	stw      r0, 0x110(r31)
	lwz      r31, 0x2c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003F51C
 * Size:	000068
 * __dt__9J2DScreenFv
 */
J2DScreen::~J2DScreen() { clean(); }

/*
 * --INFO--
 * Address:	8003F584
 * Size:	0000A0
 */
void J2DScreen::clean()
{
	delete[] mMaterials;
	mMaterialCount = 0;
	mMaterials     = nullptr;
	delete[] mTexRes;
	mTexRes = nullptr;
	delete[] mFontRes;
	mFontRes = nullptr;
	if (mNameTab) {
		mNameTab->clearResNameTable();
		delete mNameTab;
		mNameTab = nullptr;
	}
}

/*
 * --INFO--
 * Address:	8003F624
 * Size:	000104
 */
bool J2DScreen::set(const char* name, u32 flags, JKRArchive* archive)
{
	void* resource = JKRFileLoader::getGlbResource(name, archive);
	if (resource) {
		size_t resSize = archive->getExpandedResSize(resource);
		JSUMemoryInputStream input;
		input.setBuffer(resource, resSize);
		return set(&input, flags);
	}
	return false;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r6
	stw      r29, 0x24(r1)
	mr       r29, r5
	stw      r28, 0x20(r1)
	mr       r28, r3
	mr       r3, r4
	mr       r4, r30
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	or.      r31, r3, r3
	beq      lbl_8003F704
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r5, __vt__10JSUIosBase@ha
	li       r6, 0
	addi     r0, r5, __vt__10JSUIosBase@l
	lis      r4, __vt__14JSUInputStream@ha
	stw      r0, 8(r1)
	addi     r0, r4, __vt__14JSUInputStream@l
	lis      r5, __vt__20JSURandomInputStream@ha
	lis      r4, __vt__20JSUMemoryInputStream@ha
	stw      r0, 8(r1)
	addi     r0, r5, __vt__20JSURandomInputStream@l
	addi     r7, r1, 8
	mr       r5, r3
	stw      r0, 8(r1)
	addi     r0, r4, __vt__20JSUMemoryInputStream@l
	mr       r3, r7
	mr       r4, r31
	stb      r6, 0xc(r1)
	stw      r0, 8(r1)
	bl       setBuffer__20JSUMemoryInputStreamFPCvl
	mr       r3, r28
	mr       r5, r29
	addi     r4, r1, 8
	bl       set__9J2DScreenFP20JSURandomInputStreamUl
	lis      r4, __vt__20JSUMemoryInputStream@ha
	mr       r31, r3
	addi     r0, r4, __vt__20JSUMemoryInputStream@l
	addi     r3, r1, 8
	lis      r4, __vt__20JSURandomInputStream@ha
	stw      r0, 8(r1)
	addi     r0, r4, __vt__20JSURandomInputStream@l
	stw      r0, 8(r1)
	li       r4, 0
	bl       __dt__14JSUInputStreamFv
	mr       r3, r31
	b        lbl_8003F708

lbl_8003F704:
	li       r3, 0

lbl_8003F708:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003F728
 * Size:	000024
 * set__9J2DScreenFP20JSURandomInputStreamUl
 */
bool J2DScreen::set(JSURandomInputStream* stream, u32 flags) { private_set(stream, flags, nullptr); }

/*
 * --INFO--
 * Address:	8003F74C
 * Size:	000140
 */
bool J2DScreen::private_set(JSURandomInputStream* stream, u32 flags, JKRArchive* archive)
{
	if (!checkSignature(stream)) {
		return false;
	}
	if (!getScreenInformation(stream)) {
		return false;
	}
	bool result = makeHierarchyPanes(this, stream, flags, archive) != 2;
	if ((flags & 0x1F0000) == 0) {
		clean();
	}
	return (result != false) ? stream->mIsEOFMaybe == 0 : false;
}

/*
 * --INFO--
 * Address:	8003F88C
 * Size:	000060
 */
bool J2DScreen::checkSignature(JSURandomInputStream* stream)
{
	J3DFileHeader header;
	stream->read(&header, sizeof(header));
	if (header.mJ3dVersion != 'SCRN' || !(header.mFileVersion == 'blo1' || header.mFileVersion == 'blo2')) {
		return false;
	}
	return true;
}

/*
 * --INFO--
 * Address:	8003F8EC
 * Size:	0000FC
 */
bool J2DScreen::getScreenInformation(JSURandomInputStream* input)
{
	J2DScreenInfoBlock info;
	input->read(&info, sizeof(info));
	if (info.mBloBlockType != 'INF1') {
		return false;
	}
	JGeometry::TBox2f box;
	box.i.x = 0.0f;
	box.i.y = 0.0f;
	box.f.x = info.mWidth;
	box.f.y = info.mHeight;
	place(box);
	mColor = JUtility::TColor(info.mColor);
	if (sizeof(info) < info.mBlockLength) {
		input->skip(info.mBlockLength - sizeof(info));
	}
	return true;
}

/*
 * --INFO--
 * Address:	8003F9E8
 * Size:	000560
 */
u32 J2DScreen::makeHierarchyPanes(J2DPane* parent, JSURandomInputStream* input, u32 flags, JKRArchive* archive)
{
	J2DScrnBlockHeader header;
	J2DPane* currentPane = parent;
	while (true) {
		input->peek(&header, sizeof(header));
		switch (header.mBloBlockType) {
		case 'EXT1':
			input->seek(header.mBlockLength, SEEK_CUR);
			return 1;
			break;
		case 'BGN1': {
			input->seek(header.mBlockLength, SEEK_CUR);
			u32 result = makeHierarchyPanes(currentPane, input, flags, archive);
			if (result != 0) {
				return result;
			}
			break;
		}
		case 'END1':
			input->seek(header.mBlockLength, SEEK_CUR);
			return 0;
			break;
		case 'TEX1':
			mTexRes = getResReference(input, flags);
			if (mTexRes == nullptr) {
				return 2;
			}
			break;
		case 'FNT1':
			mFontRes = getResReference(input, flags);
			if (mFontRes == nullptr) {
				return 2;
			}
			break;
		case 'MAT1':
			if (!createMaterial(input, flags, archive)) {
				return 2;
			}
			break;
		default:
			if (archive == nullptr) {
				currentPane = createPane(header, input, parent, flags);
			} else {
				currentPane = createPane(header, input, parent, flags, archive);
			}
			if (currentPane == nullptr) {
				return 2;
			}
			break;
		}
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stmw      r21, 0x24(r1)
	  mr        r27, r4
	  lis       r4, 0x464E
	  mr        r28, r3
	  mr        r29, r5
	  mr        r30, r6
	  mr        r31, r7
	  mr        r25, r27
	  addi      r26, r4, 0x5431

	.loc_0x30:
	  mr        r3, r29
	  addi      r4, r1, 0x18
	  li        r5, 0x8
	  bl        -0x193D8
	  lwz       r4, 0x18(r1)
	  cmpw      r4, r26
	  beq-      .loc_0x49C
	  bge-      .loc_0x8C
	  lis       r3, 0x454E
	  addi      r0, r3, 0x4431
	  cmpw      r4, r0
	  beq-      .loc_0x460
	  bge-      .loc_0x78
	  lis       r3, 0x4247
	  addi      r0, r3, 0x4E31
	  cmpw      r4, r0
	  beq-      .loc_0xCC
	  b         .loc_0x4E4

	.loc_0x78:
	  lis       r3, 0x4558
	  addi      r0, r3, 0x5431
	  cmpw      r4, r0
	  beq-      .loc_0xB4
	  b         .loc_0x4E4

	.loc_0x8C:
	  lis       r3, 0x5445
	  addi      r0, r3, 0x5831
	  cmpw      r4, r0
	  beq-      .loc_0x478
	  bge-      .loc_0x4E4
	  lis       r3, 0x4D41
	  addi      r0, r3, 0x5431
	  cmpw      r4, r0
	  beq-      .loc_0x4C0
	  b         .loc_0x4E4

	.loc_0xB4:
	  lwz       r4, 0x1C(r1)
	  mr        r3, r29
	  li        r5, 0x1
	  bl        -0x193A0
	  li        r3, 0x1
	  b         .loc_0x54C

	.loc_0xCC:
	  lwz       r4, 0x1C(r1)
	  mr        r3, r29
	  li        r5, 0x1
	  bl        -0x193B8
	  lis       r3, 0x464E
	  mr        r22, r25
	  addi      r24, r3, 0x5431

	.loc_0xE8:
	  mr        r3, r29
	  addi      r4, r1, 0x10
	  li        r5, 0x8
	  bl        -0x19490
	  lwz       r4, 0x10(r1)
	  cmpw      r4, r24
	  beq-      .loc_0x3A4
	  bge-      .loc_0x144
	  lis       r3, 0x454E
	  addi      r0, r3, 0x4431
	  cmpw      r4, r0
	  beq-      .loc_0x368
	  bge-      .loc_0x130
	  lis       r3, 0x4247
	  addi      r0, r3, 0x4E31
	  cmpw      r4, r0
	  beq-      .loc_0x184
	  b         .loc_0x3EC

	.loc_0x130:
	  lis       r3, 0x4558
	  addi      r0, r3, 0x5431
	  cmpw      r4, r0
	  beq-      .loc_0x16C
	  b         .loc_0x3EC

	.loc_0x144:
	  lis       r3, 0x5445
	  addi      r0, r3, 0x5831
	  cmpw      r4, r0
	  beq-      .loc_0x380
	  bge-      .loc_0x3EC
	  lis       r3, 0x4D41
	  addi      r0, r3, 0x5431
	  cmpw      r4, r0
	  beq-      .loc_0x3C8
	  b         .loc_0x3EC

	.loc_0x16C:
	  lwz       r4, 0x14(r1)
	  mr        r3, r29
	  li        r5, 0x1
	  bl        -0x19458
	  li        r3, 0x1
	  b         .loc_0x454

	.loc_0x184:
	  lwz       r4, 0x14(r1)
	  mr        r3, r29
	  li        r5, 0x1
	  bl        -0x19470
	  lis       r3, 0x464E
	  mr        r21, r22
	  addi      r23, r3, 0x5431

	.loc_0x1A0:
	  mr        r3, r29
	  addi      r4, r1, 0x8
	  li        r5, 0x8
	  bl        -0x19548
	  lwz       r4, 0x8(r1)
	  cmpw      r4, r23
	  beq-      .loc_0x2AC
	  bge-      .loc_0x1FC
	  lis       r3, 0x454E
	  addi      r0, r3, 0x4431
	  cmpw      r4, r0
	  beq-      .loc_0x270
	  bge-      .loc_0x1E8
	  lis       r3, 0x4247
	  addi      r0, r3, 0x4E31
	  cmpw      r4, r0
	  beq-      .loc_0x23C
	  b         .loc_0x2F4

	.loc_0x1E8:
	  lis       r3, 0x4558
	  addi      r0, r3, 0x5431
	  cmpw      r4, r0
	  beq-      .loc_0x224
	  b         .loc_0x2F4

	.loc_0x1FC:
	  lis       r3, 0x5445
	  addi      r0, r3, 0x5831
	  cmpw      r4, r0
	  beq-      .loc_0x288
	  bge-      .loc_0x2F4
	  lis       r3, 0x4D41
	  addi      r0, r3, 0x5431
	  cmpw      r4, r0
	  beq-      .loc_0x2D0
	  b         .loc_0x2F4

	.loc_0x224:
	  lwz       r4, 0xC(r1)
	  mr        r3, r29
	  li        r5, 0x1
	  bl        -0x19510
	  li        r3, 0x1
	  b         .loc_0x35C

	.loc_0x23C:
	  lwz       r4, 0xC(r1)
	  mr        r3, r29
	  li        r5, 0x1
	  bl        -0x19528
	  mr        r3, r28
	  mr        r4, r21
	  mr        r5, r29
	  mr        r6, r30
	  mr        r7, r31
	  bl        .loc_0x0
	  cmpwi     r3, 0
	  beq+      .loc_0x1A0
	  b         .loc_0x35C

	.loc_0x270:
	  lwz       r4, 0xC(r1)
	  mr        r3, r29
	  li        r5, 0x1
	  bl        -0x1955C
	  li        r3, 0
	  b         .loc_0x35C

	.loc_0x288:
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  bl        0xA04
	  cmplwi    r3, 0
	  stw       r3, 0x108(r28)
	  bne+      .loc_0x1A0
	  li        r3, 0x2
	  b         .loc_0x35C

	.loc_0x2AC:
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  bl        0x9E0
	  cmplwi    r3, 0
	  stw       r3, 0x10C(r28)
	  bne+      .loc_0x1A0
	  li        r3, 0x2
	  b         .loc_0x35C

	.loc_0x2D0:
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  mr        r6, r31
	  bl        0xAAC
	  rlwinm.   r0,r3,0,24,31
	  bne+      .loc_0x1A0
	  li        r3, 0x2
	  b         .loc_0x35C

	.loc_0x2F4:
	  cmplwi    r31, 0
	  bne-      .loc_0x324
	  mr        r3, r28
	  mr        r5, r29
	  lwz       r12, 0x0(r28)
	  mr        r6, r22
	  mr        r7, r30
	  addi      r4, r1, 0x8
	  lwz       r12, 0x94(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x34C

	.loc_0x324:
	  mr        r3, r28
	  mr        r5, r29
	  lwz       r12, 0x0(r28)
	  mr        r6, r22
	  mr        r7, r30
	  mr        r8, r31
	  lwz       r12, 0x98(r12)
	  addi      r4, r1, 0x8
	  mtctr     r12
	  bctrl

	.loc_0x34C:
	  cmplwi    r3, 0
	  mr        r21, r3
	  bne+      .loc_0x1A0
	  li        r3, 0x2

	.loc_0x35C:
	  cmpwi     r3, 0
	  beq+      .loc_0xE8
	  b         .loc_0x454

	.loc_0x368:
	  lwz       r4, 0x14(r1)
	  mr        r3, r29
	  li        r5, 0x1
	  bl        -0x19654
	  li        r3, 0
	  b         .loc_0x454

	.loc_0x380:
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  bl        0x90C
	  cmplwi    r3, 0
	  stw       r3, 0x108(r28)
	  bne+      .loc_0xE8
	  li        r3, 0x2
	  b         .loc_0x454

	.loc_0x3A4:
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  bl        0x8E8
	  cmplwi    r3, 0
	  stw       r3, 0x10C(r28)
	  bne+      .loc_0xE8
	  li        r3, 0x2
	  b         .loc_0x454

	.loc_0x3C8:
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  mr        r6, r31
	  bl        0x9B4
	  rlwinm.   r0,r3,0,24,31
	  bne+      .loc_0xE8
	  li        r3, 0x2
	  b         .loc_0x454

	.loc_0x3EC:
	  cmplwi    r31, 0
	  bne-      .loc_0x41C
	  mr        r3, r28
	  mr        r5, r29
	  lwz       r12, 0x0(r28)
	  mr        r6, r25
	  mr        r7, r30
	  addi      r4, r1, 0x10
	  lwz       r12, 0x94(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x444

	.loc_0x41C:
	  mr        r3, r28
	  mr        r5, r29
	  lwz       r12, 0x0(r28)
	  mr        r6, r25
	  mr        r7, r30
	  mr        r8, r31
	  lwz       r12, 0x98(r12)
	  addi      r4, r1, 0x10
	  mtctr     r12
	  bctrl

	.loc_0x444:
	  cmplwi    r3, 0
	  mr        r22, r3
	  bne+      .loc_0xE8
	  li        r3, 0x2

	.loc_0x454:
	  cmpwi     r3, 0
	  beq+      .loc_0x30
	  b         .loc_0x54C

	.loc_0x460:
	  lwz       r4, 0x1C(r1)
	  mr        r3, r29
	  li        r5, 0x1
	  bl        -0x1974C
	  li        r3, 0
	  b         .loc_0x54C

	.loc_0x478:
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  bl        0x814
	  cmplwi    r3, 0
	  stw       r3, 0x108(r28)
	  bne+      .loc_0x30
	  li        r3, 0x2
	  b         .loc_0x54C

	.loc_0x49C:
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  bl        0x7F0
	  cmplwi    r3, 0
	  stw       r3, 0x10C(r28)
	  bne+      .loc_0x30
	  li        r3, 0x2
	  b         .loc_0x54C

	.loc_0x4C0:
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  mr        r6, r31
	  bl        0x8BC
	  rlwinm.   r0,r3,0,24,31
	  bne+      .loc_0x30
	  li        r3, 0x2
	  b         .loc_0x54C

	.loc_0x4E4:
	  cmplwi    r31, 0
	  bne-      .loc_0x514
	  mr        r3, r28
	  mr        r5, r29
	  lwz       r12, 0x0(r28)
	  mr        r6, r27
	  mr        r7, r30
	  addi      r4, r1, 0x18
	  lwz       r12, 0x94(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x53C

	.loc_0x514:
	  mr        r3, r28
	  mr        r5, r29
	  lwz       r12, 0x0(r28)
	  mr        r6, r27
	  mr        r7, r30
	  mr        r8, r31
	  lwz       r12, 0x98(r12)
	  addi      r4, r1, 0x18
	  mtctr     r12
	  bctrl

	.loc_0x53C:
	  cmplwi    r3, 0
	  mr        r25, r3
	  bne+      .loc_0x30
	  li        r3, 0x2

	.loc_0x54C:
	  lmw       r21, 0x24(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003FF48
 * Size:	000030
 */
// J2DPane* J2DScreen::createPane(const J2DScrnBlockHeader& header, JSURandomInputStream* input, J2DPane* parent, u32 flags)
// {
// 	return createPane(header, input, parent, flags, nullptr);
// }

/*
 * --INFO--
 * Address:	8003FF78
 * Size:	000334
 */
J2DPane* J2DScreen::createPane(const J2DScrnBlockHeader& header, JSURandomInputStream* input, J2DPane* parent, u32 flags,
                               JKRArchive* archive)
{
	// can't just do direct returns here...
	J2DPane* pane;
	switch (header.mBloBlockType) {
	case 'PAN1':
		pane = new J2DPane(parent, input, 0);
		break;
	case 'WIN1':
		pane = new J2DWindow(parent, input, archive);
		break;
	case 'PIC1':
		pane = new J2DPicture(parent, input, archive);
		break;
	case 'TBX1':
		pane = new J2DTextBox(parent, input, archive);
		break;
	case 'PAN2':
		pane = new J2DPane(parent, input, 1);
		break;
	case 'WIN2':
		if ((flags & 0x1F0000) != 0) {
			pane = new J2DWindowEx(parent, input, flags, mMaterials);
			break;
		}
		pane = new J2DWindow(parent, input, mMaterials);
		break;
	case 'PIC2':
		if ((flags & 0x1F0000) != 0) {
			pane = new J2DPictureEx(parent, input, flags, mMaterials);
			break;
		}
		pane = new J2DPicture(parent, input, mMaterials);
		break;
	case 'TBX2':
		if ((flags & 0x1F0000) != 0) {
			pane = new J2DTextBoxEx(parent, input, flags, mMaterials);
			break;
		}
		pane = new J2DTextBox(parent, input, flags, mMaterials);
		break;
	default: {
		int targetPosition = input->getPosition() + header.mBlockLength;
		pane               = new J2DPane(parent, input, 0);
		input->seek(targetPosition, SEEK_SET);
		break;
	}
	}
	return pane;
}

/*
 * --INFO--
 * Address:	800402AC
 * Size:	0001CC
 */
void J2DScreen::draw(f32, f32, const J2DGrafContext*)
{
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	stw      r0, 0x124(r1)
	stfd     f31, 0x110(r1)
	psq_st   f31, 280(r1), 0, qr0
	stfd     f30, 0x100(r1)
	psq_st   f30, 264(r1), 0, qr0
	stw      r31, 0xfc(r1)
	stw      r30, 0xf8(r1)
	mr       r30, r3
	fmr      f30, f1
	lbz      r0, 0x100(r3)
	fmr      f31, f2
	mr       r31, r4
	cmplwi   r0, 0
	beq      lbl_80040300
	addi     r3, r1, 0x14
	addi     r4, r1, 0x10
	addi     r5, r1, 0xc
	addi     r6, r1, 8
	bl       GXGetScissor

lbl_80040300:
	cmplwi   r31, 0
	beq      lbl_80040328
	fmr      f1, f30
	lbz      r5, 0x100(r30)
	fmr      f2, f31
	mr       r3, r30
	mr       r4, r31
	li       r6, 1
	bl       draw__7J2DPaneFffPC14J2DGrafContextbb
	b        lbl_80040384

lbl_80040328:
	lfs      f1, lbl_80516840@sda21(r2)
	addi     r3, r1, 0x18
	lfs      f3, lbl_80516844@sda21(r2)
	fmr      f2, f1
	lfs      f4, lbl_80516848@sda21(r2)
	lfs      f5, lbl_80516858@sda21(r2)
	lfs      f6, lbl_8051685C@sda21(r2)
	bl       __ct__13J2DOrthoGraphFffffff
	addi     r3, r1, 0x18
	bl       setPort__13J2DOrthoGraphFv
	fmr      f1, f30
	lbz      r5, 0x100(r30)
	fmr      f2, f31
	mr       r3, r30
	addi     r4, r1, 0x18
	li       r6, 1
	bl       draw__7J2DPaneFffPC14J2DGrafContextbb
	lis      r4, __vt__13J2DOrthoGraph@ha
	lis      r3, __vt__14J2DGrafContext@ha
	addi     r0, r4, __vt__13J2DOrthoGraph@l
	stw      r0, 0x18(r1)
	addi     r0, r3, __vt__14J2DGrafContext@l
	stw      r0, 0x18(r1)

lbl_80040384:
	lbz      r0, 0x100(r30)
	cmplwi   r0, 0
	beq      lbl_800403A4
	lwz      r3, 0x14(r1)
	lwz      r4, 0x10(r1)
	lwz      r5, 0xc(r1)
	lwz      r6, 8(r1)
	bl       GXSetScissor

lbl_800403A4:
	li       r3, 0
	bl       GXSetNumIndStages
	li       r31, 0

lbl_800403B0:
	mr       r3, r31
	bl       GXSetTevDirect
	addi     r31, r31, 1
	cmpwi    r31, 0x10
	blt      lbl_800403B0
	li       r3, 1
	bl       GXSetNumTevStages
	li       r3, 0
	li       r4, 4
	bl       GXSetTevOp
	li       r3, 0
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 4
	bl       GXSetTevOrder
	li       r3, 0xd
	li       r4, 0
	bl       GXSetVtxDesc
	li       r3, 0
	bl       GXSetCullMode
	li       r3, 0
	bl       GXSetNumTexGens
	li       r3, 4
	li       r4, 0
	li       r5, 0
	li       r6, 1
	li       r7, 0
	li       r8, 0
	li       r9, 2
	bl       GXSetChanCtrl
	li       r31, 0

lbl_8004042C:
	mr       r3, r31
	li       r4, 0
	li       r5, 1
	li       r6, 2
	li       r7, 3
	bl       GXSetTevSwapModeTable
	addi     r31, r31, 1
	cmpwi    r31, 4
	blt      lbl_8004042C
	psq_l    f31, 280(r1), 0, qr0
	lfd      f31, 0x110(r1)
	psq_l    f30, 264(r1), 0, qr0
	lfd      f30, 0x100(r1)
	lwz      r31, 0xfc(r1)
	lwz      r0, 0x124(r1)
	lwz      r30, 0xf8(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/*
 * --INFO--
 * Address:	80040478
 * Size:	000040
 */
J2DPane* J2DScreen::search(u64 id) { return (id == 0) ? nullptr : J2DPane::search(id); }

/*
 * --INFO--
 * Address:	800404B8
 * Size:	000030
 */
u32 J2DScreen::gather(J2DPane** p1, u64 p2, u64 p3, int p4)
{
	int v1 = 0;
	J2DPane::gather(p1, p2, p3, p4, v1);
	return v1;
}

/*
 * --INFO--
 * Address:	800404E8
 * Size:	000040
 */
J2DPane* J2DScreen::searchUserInfo(u64 p1) { return (p1 == 0) ? nullptr : J2DPane::searchUserInfo(p1); }

/*
 * --INFO--
 * Address:	80040528
 * Size:	000158
 */
void J2DScreen::drawSelf(f32, f32, Mtx*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lis      r3, 0x80808081@ha
	lwz      r4, 0x114(r31)
	addi     r3, r3, 0x80808081@l
	lbz      r0, 0xb2(r31)
	stw      r4, 0xc(r1)
	lbz      r5, 0xf(r1)
	mullw    r0, r5, r0
	mulhw    r3, r3, r0
	add      r0, r3, r0
	srawi    r0, r0, 7
	srwi     r3, r0, 0x1f
	add      r0, r0, r3
	clrlwi.  r0, r0, 0x18
	beq      lbl_8004066C
	rlwimi   r4, r0, 0, 0x18, 0x1f
	li       r3, 1
	stw      r4, 8(r1)
	li       r4, 4
	li       r5, 5
	li       r6, 0xf
	lbz      r9, 8(r1)
	lbz      r8, 9(r1)
	lbz      r7, 0xa(r1)
	lbz      r0, 0xb(r1)
	stb      r9, 0xc(r1)
	stb      r8, 0xd(r1)
	stb      r7, 0xe(r1)
	stb      r0, 0xf(r1)
	bl       GXSetBlendMode
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0x80
	li       r4, 0
	li       r5, 4
	bl       GXBegin
	lfs      f4, lbl_80516840@sda21(r2)
	lis      r8, 0xCC008000@ha
	lwz      r0, 0xc(r1)
	li       r3, 0
	stfs     f4, 0xCC008000@l(r8)
	li       r4, 9
	li       r5, 1
	li       r6, 3
	stfs     f4, -0x8000(r8)
	li       r7, 0
	stfs     f4, -0x8000(r8)
	stw      r0, -0x8000(r8)
	lfs      f1, 0x28(r31)
	lfs      f0, 0x20(r31)
	fsubs    f0, f1, f0
	stfs     f0, -0x8000(r8)
	stfs     f4, -0x8000(r8)
	stfs     f4, -0x8000(r8)
	stw      r0, -0x8000(r8)
	lfs      f1, 0x28(r31)
	lfs      f0, 0x20(r31)
	lfs      f3, 0x2c(r31)
	lfs      f2, 0x24(r31)
	fsubs    f0, f1, f0
	fsubs    f1, f3, f2
	stfs     f0, -0x8000(r8)
	stfs     f1, -0x8000(r8)
	stfs     f4, -0x8000(r8)
	stw      r0, -0x8000(r8)
	lfs      f1, 0x2c(r31)
	lfs      f0, 0x24(r31)
	fsubs    f0, f1, f0
	stfs     f4, -0x8000(r8)
	stfs     f0, -0x8000(r8)
	stfs     f4, -0x8000(r8)
	stw      r0, -0x8000(r8)
	bl       GXSetVtxAttrFmt

lbl_8004066C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80040680
 * Size:	0000F4
 */
J2DResReference* J2DScreen::getResReference(JSURandomInputStream* input, u32 flags)
{
	int initialPosition = input->getPosition();
	input->skip(4);
	int v1;
	input->read(&v1, 4);
	input->skip(4);
	int v2;
	input->read(&v2, 4);
	input->seek(initialPosition + v2, SEEK_SET);
	long byteCount = v1 - v2;
	J2DResReference* data;
	if (flags & (J3DMLF_17 | J3DMLF_18 | J3DMLF_19 | J3DMLF_20 | J3DMLF_21)) {
		data = new J2DResReference[byteCount];
	} else {
		data = new (-4) J2DResReference[byteCount];
	}
	if (data) {
		input->read(data, byteCount);
	}
	return data;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r27, r4
	mr       r28, r5
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	mr       r3, r27
	lwz      r12, 0(r27)
	li       r4, 4
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r27
	addi     r4, r1, 0xc
	li       r5, 4
	bl       read__14JSUInputStreamFPvl
	mr       r3, r27
	lwz      r29, 0xc(r1)
	lwz      r12, 0(r27)
	li       r4, 4
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r27
	addi     r4, r1, 8
	li       r5, 4
	bl       read__14JSUInputStreamFPvl
	lwz      r30, 8(r1)
	mr       r3, r27
	li       r5, 0
	add      r4, r31, r30
	bl       seek__20JSURandomInputStreamFl17JSUStreamSeekFrom
	rlwinm.  r0, r28, 0, 0xb, 0xf
	subf     r29, r30, r29
	beq      lbl_80040734
	mr       r3, r29
	bl       __nwa__FUl
	mr       r4, r3
	b        lbl_80040744

lbl_80040734:
	mr       r3, r29
	li       r4, -4
	bl       __nwa__FUli
	mr       r4, r3

lbl_80040744:
	cmplwi   r4, 0
	mr       r30, r4
	beq      lbl_8004075C
	mr       r3, r27
	mr       r5, r29
	bl       read__14JSUInputStreamFPvl

lbl_8004075C:
	mr       r3, r30
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80040774
 * Size:	0002F0
 */
bool J2DScreen::createMaterial(JSURandomInputStream* input, u32 flags, JKRArchive* archive)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stmw      r25, 0x74(r1)
	  mr        r25, r4
	  mr        r31, r3
	  mr        r26, r5
	  mr        r3, r25
	  mr        r27, r6
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  mr        r3, r25
	  mr        r29, r0
	  addi      r4, r1, 0xC
	  li        r5, 0x8
	  bl        -0x1A3E8
	  mr        r3, r25
	  addi      r4, r1, 0x8
	  li        r5, 0x2
	  bl        -0x1A3F8
	  lhz       r0, 0x8(r1)
	  mr        r3, r25
	  li        r4, 0x2
	  sth       r0, 0x102(r31)
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r30,r26,0,11,15
	  beq-      .loc_0xB8
	  lhz       r28, 0x102(r31)
	  mulli     r3, r28, 0x88
	  addi      r3, r3, 0x10
	  bl        -0x1C858
	  lis       r4, 0x8005
	  lis       r5, 0x8005
	  addi      r4, r4, 0x1EA4
	  mr        r7, r28
	  addi      r5, r5, 0x2188
	  li        r6, 0x88
	  bl        0x811D0
	  stw       r3, 0x104(r31)
	  b         .loc_0xEC

	.loc_0xB8:
	  lhz       r28, 0x102(r31)
	  li        r4, -0x4
	  mulli     r3, r28, 0x88
	  addi      r3, r3, 0x10
	  bl        -0x1C844
	  lis       r4, 0x8005
	  lis       r5, 0x8005
	  addi      r4, r4, 0x1EA4
	  mr        r7, r28
	  addi      r5, r5, 0x2188
	  li        r6, 0x88
	  bl        0x81198
	  stw       r3, 0x104(r31)

	.loc_0xEC:
	  lwz       r3, 0x10(r1)
	  li        r4, -0x4
	  bl        -0x1C870
	  lwz       r0, 0x104(r31)
	  mr        r28, r3
	  cmplwi    r0, 0
	  beq-      .loc_0x258
	  cmplwi    r28, 0
	  beq-      .loc_0x258
	  mr        r3, r25
	  mr        r4, r29
	  li        r5, 0
	  bl        -0x1A188
	  lwz       r5, 0x10(r1)
	  mr        r3, r25
	  mr        r4, r28
	  bl        -0x1A4CC
	  mr        r4, r28
	  addi      r3, r1, 0x14
	  bl        0x12A3C
	  li        r25, 0
	  b         .loc_0x170

	.loc_0x144:
	  rlwinm    r5,r25,0,16,31
	  lwz       r4, 0x104(r31)
	  mulli     r0, r5, 0x88
	  lwz       r7, 0x108(r31)
	  lwz       r8, 0x10C(r31)
	  mr        r6, r26
	  mr        r9, r27
	  addi      r3, r1, 0x14
	  add       r4, r4, r0
	  bl        0x12BD0
	  addi      r25, r25, 0x1

	.loc_0x170:
	  lhz       r0, 0x102(r31)
	  rlwinm    r3,r25,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0x144
	  cmplwi    r30, 0
	  beq-      .loc_0x248
	  lbz       r0, 0x15(r28)
	  lbz       r3, 0x14(r28)
	  rlwinm    r0,r0,16,0,15
	  lbz       r4, 0x16(r28)
	  rlwimi    r0,r3,24,0,7
	  lbz       r5, 0x17(r28)
	  rlwimi    r0,r4,8,16,23
	  or        r0, r5, r0
	  add       r25, r28, r0
	  lhz       r0, 0x0(r25)
	  rlwinm    r0,r0,2,0,29
	  add       r3, r25, r0
	  lhz       r4, 0x2(r3)
	  b         .loc_0x1C4

	.loc_0x1C0:
	  addi      r4, r4, 0x1

	.loc_0x1C4:
	  rlwinm    r3,r4,0,16,31
	  lbzx      r0, r25, r3
	  extsb.    r0, r0
	  bne+      .loc_0x1C0
	  addi      r26, r3, 0x1
	  rlwinm    r3,r26,0,16,31
	  bl        -0x1C9A4
	  mr.       r27, r3
	  beq-      .loc_0x258
	  rlwinm    r0,r26,0,16,31
	  li        r5, 0
	  b         .loc_0x204

	.loc_0x1F4:
	  rlwinm    r4,r5,0,16,31
	  addi      r5, r5, 0x1
	  lbzx      r3, r25, r4
	  stbx      r3, r27, r4

	.loc_0x204:
	  rlwinm    r3,r5,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0x1F4
	  li        r3, 0x10
	  bl        -0x1CAE4
	  mr.       r0, r3
	  beq-      .loc_0x22C
	  mr        r4, r27
	  bl        -0x11C8C
	  mr        r0, r3

	.loc_0x22C:
	  stw       r0, 0x110(r31)
	  lwz       r0, 0x110(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x248
	  mr        r3, r27
	  bl        -0x1C8DC
	  b         .loc_0x258

	.loc_0x248:
	  mr        r3, r28
	  bl        -0x1C8E8
	  li        r3, 0x1
	  b         .loc_0x2DC

	.loc_0x258:
	  mr        r3, r28
	  bl        -0x1C8F8
	  lis       r4, 0x8005
	  lwz       r3, 0x104(r31)
	  addi      r4, r4, 0x2188
	  bl        0x80D68
	  li        r0, 0
	  sth       r0, 0x102(r31)
	  stw       r0, 0x104(r31)
	  lwz       r3, 0x108(r31)
	  bl        -0x1C91C
	  li        r0, 0
	  stw       r0, 0x108(r31)
	  lwz       r3, 0x10C(r31)
	  bl        -0x1C92C
	  li        r0, 0
	  stw       r0, 0x10C(r31)
	  lwz       r3, 0x110(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x2D8
	  lwz       r3, 0x4(r3)
	  bl        -0x1C948
	  lwz       r3, 0x110(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x2D0
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2D0:
	  li        r0, 0
	  stw       r0, 0x110(r31)

	.loc_0x2D8:
	  li        r3, 0

	.loc_0x2DC:
	  lmw       r25, 0x74(r1)
	  lwz       r0, 0x94(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80040A64
 * Size:	000038
 */
J2DMaterial* J2DScreen::getMaterial(u16 index)
{
	if (index >= mMaterialCount) {
		return nullptr;
	}
	if (mMaterials == nullptr) {
		return nullptr;
	}
	return mMaterials + index;
}

/*
 * --INFO--
 * Address:	80040A9C
 * Size:	000020
 */
bool J2DScreen::isUsed(const ResTIMG* resource) { return J2DPane::isUsed(resource); }

/*
 * --INFO--
 * Address:	80040ABC
 * Size:	000020
 */
bool J2DScreen::isUsed(const ResFONT* resource) { return J2DPane::isUsed(resource); }

/*
 * --INFO--
 * Address:	80040ADC
 * Size:	000050
 */
void* J2DScreen::getNameResource(const char* name)
{
	void* resource = JKRFileLoader::getGlbResource(name, nullptr);
	if (resource == nullptr && mDataManage != nullptr) {
		resource = mDataManage->get(name);
	}
	return resource;
}

/*
 * --INFO--
 * Address:	80040B2C
 * Size:	000074
 */
void J2DScreen::animation()
{
	animationPane(mTransform);
	for (u16 i = 0; i < mMaterialCount; i++) {
		mMaterials[i].animation();
	}
}

/*
 * --INFO--
 * Address:	80040BA0
 * Size:	0000A4
 */
void J2DScreen::setAnimation(J2DAnmColor* animation)
{
	animation->searchUpdateMaterialID(this);
	u16 count = animation->getUpdateMaterialNum();
	for (u16 i = 0; i < count; i++) {
		if (animation->getUpdateMaterialID(i) < mMaterialCount) {
			mMaterials[animation->getUpdateMaterialID(i)].setAnimation(animation);
		}
	}
}

/*
 * --INFO--
 * Address:	80040C44
 * Size:	0000BC
 */
void J2DScreen::setAnimation(J2DAnmTextureSRTKey* animation)
{
	animation->searchUpdateMaterialID(this);
	u16 count = animation->getUpdateMaterialNum();
	for (u16 i = 0; i < count; i++) {
		if (animation->getUpdateMaterialID(i) < mMaterialCount) {
			mMaterials[animation->getUpdateMaterialID(i)].setAnimation(animation);
		}
	}
}

/*
 * --INFO--
 * Address:	80040D00
 * Size:	0000A4
 */
void J2DScreen::setAnimation(J2DAnmTexPattern* animation)
{
	animation->searchUpdateMaterialID(this);
	u16 count = animation->getUpdateMaterialNum();
	for (u16 i = 0; i < count; i++) {
		if (animation->getUpdateMaterialID(i) < mMaterialCount) {
			mMaterials[animation->getUpdateMaterialID(i)].setAnimation(animation);
		}
	}
}

/*
 * --INFO--
 * Address:	80040DA4
 * Size:	0000EC
 */
void J2DScreen::setAnimation(J2DAnmTevRegKey* animation)
{
	animation->searchUpdateMaterialID(this);
	u16 count = animation->getCRegUpdateMaterialNum();
	for (u16 i = 0; i < count; i++) {
		if (animation->getCRegUpdateMaterialID(i) < mMaterialCount) {
			mMaterials[animation->getCRegUpdateMaterialID(i)].setAnimation(animation);
		}
	}
	count = animation->getKRegUpdateMaterialNum();
	for (u16 i = 0; i < count; i++) {
		if (animation->getKRegUpdateMaterialID(i) < mMaterialCount) {
			mMaterials[animation->getKRegUpdateMaterialID(i)].setAnimation(animation);
		}
	}
}

/*
 * --INFO--
 * Address:	80040E90
 * Size:	000020
 */
void J2DScreen::setAnimation(J2DAnmVtxColor* animation) { J2DPane::setVtxColorAnimation(animation); }

/*
 * --INFO--
 * Address:	80040EB0
 * Size:	000020
 */
void J2DScreen::setAnimation(J2DAnmVisibilityFull* animation) { J2DPane::setVisibileAnimation(animation); }

/*
 * --INFO--
 * Address:	80040F0C
 * Size:	000020
 */
void J2DScreen::setAnimation(J2DAnmTransform* animation) { J2DPane::setAnimation(animation); }

/*
 * --INFO--
 * Address:	80040F2C
 * Size:	000020
 */
void J2DScreen::setAnimation(J2DAnmBase* animation) { J2DPane::setAnimation(animation); }
