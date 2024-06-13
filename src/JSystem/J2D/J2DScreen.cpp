#include "JSystem/J2D/J2DAnm.h"
#include "JSystem/J2D/J2DManage.h"
#include "JSystem/J2D/J2DMaterial.h"
#include "JSystem/J2D/J2DScreen.h"
#include "JSystem/J2D/J2DWindow.h"
#include "JSystem/J2D/J2DPicture.h"
#include "JSystem/J2D/J2DTextBox.h"
#include "JSystem/J3D/J3DFileBlock.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JKernel/JKRFileLoader.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JSupport/JSUStream.h"
#include "JSystem/JUtility/JUTNameTab.h"
#include "JSystem/JUtility/TColor.h"
#include "JSystem/J2D/J2DGrafContext.h"
#include "JSystem/J2D/J2DMaterialFactory.h"

J2DDataManage* J2DScreen::mDataManage;

/**
 * @note Address: 0x8003F474
 * @note Size: 0xA8
 */
J2DScreen::J2DScreen()
    : J2DPane(nullptr, true, 'root', JGeometry::TBox2f(0.0f, 0.0f, 640.0f, 480.0f))
{
	mAnimPaneIndex = 0xFFFF;
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

/**
 * @note Address: 0x8003F51C
 * @note Size: 0x68
 * __dt__9J2DScreenFv
 */
J2DScreen::~J2DScreen() { clean(); }

/**
 * @note Address: 0x8003F584
 * @note Size: 0xA0
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

/**
 * @note Address: 0x8003F624
 * @note Size: 0x104
 */
bool J2DScreen::set(const char* name, u32 flags, JKRArchive* archive)
{
	void* resource = JKRFileLoader::getGlbResource(name, archive);
	if (resource) {
		size_t resSize = archive->getExpandedResSize(resource);
		JSUMemoryInputStream input(resource, resSize);
		return set(&input, flags);
	}
	return false;
}

/**
 * @note Address: 0x8003F728
 * @note Size: 0x24
 * set__9J2DScreenFP20JSURandomInputStreamUl
 */
bool J2DScreen::set(JSURandomInputStream* stream, u32 flags) { private_set(stream, flags, nullptr); }

/**
 * @note Address: 0x8003F74C
 * @note Size: 0x140
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

/**
 * @note Address: 0x8003F88C
 * @note Size: 0x60
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

/**
 * @note Address: 0x8003F8EC
 * @note Size: 0xFC
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

/**
 * @note Address: 0x8003F9E8
 * @note Size: 0x560
 */
u32 J2DScreen::makeHierarchyPanes(J2DPane* parent, JSURandomInputStream* input, u32 flags, JKRArchive* archive)
{
	J2DPane* currentPane = parent;
	while (true) {
		J2DScrnBlockHeader header;
		input->peek(&header, 8);
		switch (header.mBloBlockType) {
		case 'EXT1':
			input->seek(header.mBlockLength, SEEK_CUR);
			return 1;

		case 'BGN1': {
			input->seek(header.mBlockLength, SEEK_CUR);
			s32 result = makeHierarchyPanes(currentPane, input, flags, archive);
			if (result) {
				return result;
			}
			break;
		}
		case 'END1':
			input->seek(header.mBlockLength, SEEK_CUR);
			return 0;

		case 'TEX1':
			mTexRes = getResReference(input, flags);
			if (!mTexRes) {
				return 2;
			}
			break;
		case 'FNT1':
			mFontRes = getResReference(input, flags);
			if (!mFontRes) {
				return 2;
			}
			break;
		case 'MAT1':
			if (!createMaterial(input, flags, archive)) {
				return 2;
			}
			break;
		default:

			if (!archive) {
				currentPane = createPane(header, input, parent, flags);
			} else {
				currentPane = createPane(header, input, parent, flags, archive);
			}
			if (!currentPane) {
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

/**
 * @note Address: 0x8003FF78
 * @note Size: 0x334
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

/**
 * @note Address: 0x800402AC
 * @note Size: 0x1CC
 */
void J2DScreen::draw(f32 x, f32 y, const J2DGrafContext* graf)
{
	u32 x1, y1, wd, ht;
	if (mIsScissor) {
		GXGetScissor(&x1, &y1, &wd, &ht);
	}

	if (graf) {
		J2DPane::draw(x, y, graf, mIsScissor, true);
	} else {
		J2DOrthoGraph ortho(0.0f, 0.0f, 640.0f, 480.0f, -1.0f, 1.0f);
		ortho.setPort();
		J2DPane::draw(x, y, &ortho, mIsScissor, true);
	}

	if (mIsScissor) {
		GXSetScissor(x1, y1, wd, ht);
	}

	GXSetNumIndStages(0);
	for (int i = 0; i < 16; i++) {
		GXSetTevDirect((GXTevStageID)i);
	}
	GXSetNumTevStages(1);
	GXSetTevOp(GX_TEVSTAGE0, GX_PASSCLR);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
	GXSetVtxDesc(GX_VA_TEX0, GX_NONE);
	GXSetCullMode(GX_CULL_NONE);
	GXSetNumTexGens(0);
	GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, 0, GX_DF_NONE, GX_AF_NONE);
	for (int i = 0; i < 4; i++) {
		GXSetTevSwapModeTable((GXTevSwapSel)i, GX_CH_RED, GX_CH_GREEN, GX_CH_BLUE, GX_CH_ALPHA);
	}
}

/**
 * @note Address: 0x80040478
 * @note Size: 0x40
 */
J2DPane* J2DScreen::search(u64 id) { return (id == 0) ? nullptr : J2DPane::search(id); }

/**
 * @note Address: 0x800404B8
 * @note Size: 0x30
 */
u32 J2DScreen::gather(J2DPane** p1, u64 p2, u64 p3, int p4)
{
	int v1 = 0;
	J2DPane::gather(p1, p2, p3, p4, v1);
	return v1;
}

/**
 * @note Address: 0x800404E8
 * @note Size: 0x40
 */
J2DPane* J2DScreen::searchUserInfo(u64 p1) { return (p1 == 0) ? nullptr : J2DPane::searchUserInfo(p1); }

/**
 * @note Address: 0x80040528
 * @note Size: 0x158
 */
void J2DScreen::drawSelf(f32 x, f32 y, Mtx* mtx)
{
	JUtility::TColor color(mColor);
	u8 alpha = ((color.a * mAlpha) / 255);
	if (!alpha) {
		return;
	}

	color = (color & 0xFFFFFF00) | alpha;
	GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_SET);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);

	f32 zero = 0.0f;
	GXPosition3f32(zero, zero, zero);
	GXColor1u32(color);
	GXPosition3f32(mBounds.getWidth(), zero, zero);
	GXColor1u32(color);
	GXPosition3f32(mBounds.getWidth(), mBounds.getHeight(), zero);
	GXColor1u32(color);
	GXPosition3f32(zero, mBounds.getHeight(), zero);
	GXColor1u32(color);

	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_S16, 0);
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

/**
 * @note Address: 0x80040680
 * @note Size: 0xF4
 */
J2DResReference* J2DScreen::getResReference(JSURandomInputStream* input, u32 flags)
{
	s32 initialPosition = input->getPosition();
	input->skip(4);
	s32 size1, size2;
	size1 = input->readS32();
	input->skip(4);
	size2 = input->readS32();
	input->seek(initialPosition + size2, SEEK_SET);
	size1 = size1 - size2;
	char* data;
	if (flags & (J3DMLF_TevNumShift | J3DMLF_18 | J3DMLF_19 | J3DMLF_20 | J3DMLF_21)) {
		data = new char[size1];
	} else {
		data = new (-4) char[size1];
	}
	if (data) {
		input->read(data, size1);
	}
	return (J2DResReference*)data;
}

/**
 * @note Address: 0x80040774
 * @note Size: 0x2F0
 */
bool J2DScreen::createMaterial(JSURandomInputStream* input, u32 flags, JKRArchive* archive)
{
	int initialPosition = input->getPosition();
	u32 blank[2];
	input->read(blank, 8);
	mMaterialCount = input->readU16();
	input->skip(2);

	if (flags & 0x1f0000) {
		mMaterials = new J2DMaterial[mMaterialCount];
	} else {
		mMaterials = new (-4) J2DMaterial[mMaterialCount];
	}

	J2DMaterialBlock* blocks = (J2DMaterialBlock*)new (-4) u8[blank[1]];
	if (mMaterials && blocks) {
		input->seek(initialPosition, SEEK_SET);
		input->read(blocks, blank[1]);

		J2DMaterialFactory factory(blocks[0]);
		for (u16 i = 0; i < mMaterialCount; i++) {
			factory.create(&mMaterials[i], i, flags, mTexRes, mFontRes, archive);
		}
		if ((flags & 0x1f0000)) {
			ResNTAB* tab = new ResNTAB;
			if (tab) {
				mNameTab = new JUTNameTab(tab);
				delete[] tab;
			}
		}
		delete[] blocks;
		return true;
	}
	delete[] blocks;
	delete[] mMaterials;
	mMaterialCount = 0;
	mMaterials     = nullptr;
	delete[] mTexRes;
	mTexRes = nullptr;
	delete[] mFontRes;
	mFontRes = nullptr;
	if (mNameTab) {
		delete[] mNameTab->mNameTable;
		delete mNameTab;
		mNameTab = nullptr;
	}
	return false;

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

/**
 * @note Address: 0x80040A64
 * @note Size: 0x38
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

/**
 * @note Address: 0x80040A9C
 * @note Size: 0x20
 */
bool J2DScreen::isUsed(const ResTIMG* resource) { return J2DPane::isUsed(resource); }

/**
 * @note Address: 0x80040ABC
 * @note Size: 0x20
 */
bool J2DScreen::isUsed(const ResFONT* resource) { return J2DPane::isUsed(resource); }

/**
 * @note Address: 0x80040ADC
 * @note Size: 0x50
 */
void* J2DScreen::getNameResource(const char* fileName)
{
	void* resource = JKRFileLoader::getGlbResource(fileName, nullptr);
	if (resource == nullptr && mDataManage != nullptr) {
		resource = mDataManage->get(fileName);
	}
	return resource;
}

/**
 * @note Address: 0x80040B2C
 * @note Size: 0x74
 */
void J2DScreen::animation()
{
	animationPane(mTransform);
	for (u16 i = 0; i < mMaterialCount; i++) {
		mMaterials[i].animation();
	}
}

/**
 * @note Address: 0x80040BA0
 * @note Size: 0xA4
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

/**
 * @note Address: 0x80040C44
 * @note Size: 0xBC
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

/**
 * @note Address: 0x80040D00
 * @note Size: 0xA4
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

/**
 * @note Address: 0x80040DA4
 * @note Size: 0xEC
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

/**
 * @note Address: 0x80040E90
 * @note Size: 0x20
 */
void J2DScreen::setAnimation(J2DAnmVtxColor* animation) { J2DPane::setVtxColorAnimation(animation); }

/**
 * @note Address: 0x80040EB0
 * @note Size: 0x20
 */
void J2DScreen::setAnimation(J2DAnmVisibilityFull* animation) { J2DPane::setVisibileAnimation(animation); }

/**
 * @note Address: 0x80040F0C
 * @note Size: 0x20
 */
void J2DScreen::setAnimation(J2DAnmTransform* animation) { J2DPane::setAnimation(animation); }

/**
 * @note Address: 0x80040F2C
 * @note Size: 0x20
 */
void J2DScreen::setAnimation(J2DAnmBase* animation) { J2DPane::setAnimation(animation); }
