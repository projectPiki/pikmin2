#include "JSystem/J2D/J2DAnm.h"
#include "JSystem/J2D/J2DMaterial.h"
#include "JSystem/J2D/J2DPane.h"
#include "JSystem/J3D/J3DFileBlock.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JSupport/JSUStream.h"
#include "JSystem/JUT/JUTNameTab.h"
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

/*
 * --INFO--
 * Address:	8003F474
 * Size:	0000A8
 */
J2DScreen::J2DScreen()
    : J2DPane(nullptr, true, 'root', JGeometry::TBox2f(0.0f, 0.0f, 640.0f, 480.0f))
{
	_114            = -1;
	_004            = -1;
	_100            = false;
	m_materialCount = 0;
	m_materials     = nullptr;
	_108            = nullptr;
	_10C            = nullptr;
	m_nameTab       = nullptr;
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
	delete[] m_materials;
	m_materialCount = 0;
	m_materials     = nullptr;
	delete[] _108;
	delete[] _10C;
	delete m_nameTab;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lis      r3, __dt__11J2DMaterialFv@ha
	addi     r4, r3, __dt__11J2DMaterialFv@l
	lwz      r3, 0x104(r31)
	bl       __destroy_new_array
	li       r0, 0
	sth      r0, 0x102(r31)
	stw      r0, 0x104(r31)
	lwz      r3, 0x108(r31)
	bl       __dla__FPv
	li       r0, 0
	stw      r0, 0x108(r31)
	lwz      r3, 0x10c(r31)
	bl       __dla__FPv
	li       r0, 0
	stw      r0, 0x10c(r31)
	lwz      r3, 0x110(r31)
	cmplwi   r3, 0
	beq      lbl_8003F610
	lwz      r3, 4(r3)
	bl       __dla__FPv
	lwz      r3, 0x110(r31)
	cmplwi   r3, 0
	beq      lbl_8003F608
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8003F608:
	li       r0, 0
	stw      r0, 0x110(r31)

lbl_8003F610:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003F624
 * Size:	000104
 */
bool J2DScreen::set(const char*, unsigned long, JKRArchive*)
{
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
bool J2DScreen::set(JSURandomInputStream* stream, unsigned long flags) { private_set(stream, flags, nullptr); }

/*
 * --INFO--
 * Address:	8003F74C
 * Size:	000140
 */
bool J2DScreen::private_set(JSURandomInputStream* stream, unsigned long flags, JKRArchive* archive)
{
	if (!checkSignature(stream)) {
		return false;
	}
	if (!getScreenInformation(stream)) {
		return false;
	}
	int result = makeHierarchyPanes(this, stream, flags, archive);
	if ((flags & 0x1F0000) == 0) {
		clean();
	}
	return (result == 0) ? stream->m_isEOFMaybe : false;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	mr       r29, r6
	stw      r28, 0x10(r1)
	mr       r28, r5
	bl       checkSignature__9J2DScreenFP20JSURandomInputStream
	clrlwi.  r0, r3, 0x18
	bne      lbl_8003F78C
	li       r3, 0
	b        lbl_8003F86C

lbl_8003F78C:
	mr       r3, r30
	mr       r4, r31
	bl       getScreenInformation__9J2DScreenFP20JSURandomInputStream
	clrlwi.  r0, r3, 0x18
	bne      lbl_8003F7A8
	li       r3, 0
	b        lbl_8003F86C

lbl_8003F7A8:
	mr       r3, r30
	mr       r4, r30
	mr       r5, r31
	mr       r6, r28
	mr       r7, r29
	bl
makeHierarchyPanes__9J2DScreenFP7J2DPaneP20JSURandomInputStreamUlP10JKRArchive
	subfic   r4, r3, 2
	addi     r3, r3, -2
	or       r3, r4, r3
	rlwinm.  r0, r28, 0, 0xb, 0xf
	srwi     r29, r3, 0x1f
	bne      lbl_8003F850
	lis      r4, __dt__11J2DMaterialFv@ha
	lwz      r3, 0x104(r30)
	addi     r4, r4, __dt__11J2DMaterialFv@l
	bl       __destroy_new_array
	li       r0, 0
	sth      r0, 0x102(r30)
	stw      r0, 0x104(r30)
	lwz      r3, 0x108(r30)
	bl       __dla__FPv
	li       r0, 0
	stw      r0, 0x108(r30)
	lwz      r3, 0x10c(r30)
	bl       __dla__FPv
	li       r0, 0
	stw      r0, 0x10c(r30)
	lwz      r3, 0x110(r30)
	cmplwi   r3, 0
	beq      lbl_8003F850
	lwz      r3, 4(r3)
	bl       __dla__FPv
	lwz      r3, 0x110(r30)
	cmplwi   r3, 0
	beq      lbl_8003F848
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8003F848:
	li       r0, 0
	stw      r0, 0x110(r30)

lbl_8003F850:
	cmplwi   r29, 0
	beq      lbl_8003F868
	lbz      r0, 4(r31)
	cntlzw   r0, r0
	srwi     r3, r0, 5
	b        lbl_8003F86C

lbl_8003F868:
	li       r3, 0

lbl_8003F86C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
	return (header.m_j3dVersion == 'SCRN' && (header.m_fileVersion == 'blo1' || header.m_fileVersion == 'blo2'));
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	mr       r3, r4
	li       r5, 0x20
	stw      r0, 0x34(r1)
	addi     r4, r1, 8
	bl       read__14JSUInputStreamFPvl
	lwz      r3, 8(r1)
	addis    r0, r3, 0xacbd
	cmplwi   r0, 0x524e
	bne      lbl_8003F8D0
	lwz      r3, 0xc(r1)
	addis    r0, r3, 0x9d94
	cmplwi   r0, 0x6f31
	beq      lbl_8003F8D8
	cmplwi   r0, 0x6f32
	beq      lbl_8003F8D8

lbl_8003F8D0:
	li       r3, 0
	b        lbl_8003F8DC

lbl_8003F8D8:
	li       r3, 1

lbl_8003F8DC:
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003F8EC
 * Size:	0000FC
 */
bool J2DScreen::getScreenInformation(JSURandomInputStream*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	li       r5, 0x10
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r4
	addi     r4, r1, 0x1c
	stw      r30, 0x48(r1)
	mr       r30, r3
	mr       r3, r31
	bl       read__14JSUInputStreamFPvl
	lwz      r3, 0x1c(r1)
	addis    r0, r3, 0xb6b2
	cmplwi   r0, 0x4631
	beq      lbl_8003F930
	li       r3, 0
	b        lbl_8003F9D0

lbl_8003F930:
	lhz      r4, 0x24(r1)
	lis      r5, 0x4330
	lhz      r0, 0x26(r1)
	mr       r3, r30
	stw      r4, 0x34(r1)
	addi     r4, r1, 0xc
	lfs      f3, lbl_80516840@sda21(r2)
	stw      r5, 0x30(r1)
	lfd      f2, lbl_80516850@sda21(r2)
	lfd      f0, 0x30(r1)
	stw      r0, 0x3c(r1)
	fsubs    f1, f0, f2
	stw      r5, 0x38(r1)
	lfd      f0, 0x38(r1)
	stfs     f3, 0xc(r1)
	fsubs    f0, f0, f2
	stfs     f3, 0x10(r1)
	stfs     f1, 0x14(r1)
	stfs     f0, 0x18(r1)
	bl       "place__7J2DPaneFRCQ29JGeometry8TBox2<f>"
	lwz      r0, 0x28(r1)
	stw      r0, 8(r1)
	lbz      r3, 8(r1)
	lbz      r0, 9(r1)
	stb      r3, 0x114(r30)
	lbz      r3, 0xa(r1)
	stb      r0, 0x115(r30)
	lbz      r0, 0xb(r1)
	stb      r3, 0x116(r30)
	stb      r0, 0x117(r30)
	lwz      r4, 0x20(r1)
	cmplwi   r4, 0x10
	ble      lbl_8003F9CC
	mr       r3, r31
	addi     r4, r4, -16
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8003F9CC:
	li       r3, 1

lbl_8003F9D0:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003F9E8
 * Size:	000560
 */
u32 J2DScreen::makeHierarchyPanes(J2DPane*, JSURandomInputStream*, unsigned long, JKRArchive*)
{
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
J2DPane* J2DScreen::createPane(const J2DScrnBlockHeader& header, JSURandomInputStream* stream, J2DPane* parent, unsigned long flags)
{
	return createPane(header, stream, parent, flags, nullptr);
}

/*
 * --INFO--
 * Address:	8003FF78
 * Size:	000334
 */
J2DPane* J2DScreen::createPane(const J2DScrnBlockHeader& header, JSURandomInputStream* stream, J2DPane* parent, unsigned long flags,
                               JKRArchive* archive)
{
	switch (header.m_bloBlockType) {
	case 'PAN1':
		return new J2DPane(parent, stream, 0);
	case 'WIN1':
		return new J2DWindow(parent, stream, archive);
	case 'PIC1':
		return new J2DPicture(parent, stream, archive);
	case 'TBX1':
		return new J2DTextBox(parent, stream, archive);
	case 'PAN2':
		return new J2DPane(parent, stream, 1);
	case 'WIN2':
		if ((flags & 0x1F0000) != 0) {
			return new J2DWindowEx(parent, stream, flags, m_materials);
		}
		return new J2DWindow(parent, stream, m_materials);
	case 'PIC2':
		if ((flags & 0x1F0000) != 0) {
			return new J2DPictureEx(parent, stream, flags, m_materials);
		}
		return new J2DPicture(parent, stream, m_materials);
	case 'TBX2':
		if ((flags & 0x1F0000) != 0) {
			return new J2DTextBoxEx(parent, stream, flags, m_materials);
		}
		return new J2DTextBox(parent, stream, flags, m_materials);
	default: {
		int streamPosition = stream->getPosition();
		int blockLength    = header.m_blockLength;
		J2DPane* pane      = new J2DPane(parent, stream, 0);
		stream->seek(blockLength + streamPosition, SEEK_SET);
		return pane;
	}
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r28, r4
	  lis       r4, 0x5442
	  lwz       r9, 0x0(r28)
	  addi      r0, r4, 0x5831
	  mr        r27, r3
	  cmpw      r9, r0
	  mr        r29, r5
	  mr        r30, r6
	  mr        r31, r7
	  mr        r26, r8
	  beq-      .loc_0x140
	  bge-      .loc_0x88
	  lis       r3, 0x5049
	  addi      r0, r3, 0x4331
	  cmpw      r9, r0
	  beq-      .loc_0x114
	  bge-      .loc_0x78
	  lis       r3, 0x5041
	  addi      r0, r3, 0x4E32
	  cmpw      r9, r0
	  beq-      .loc_0x16C
	  bge-      .loc_0x2C8
	  addi      r0, r3, 0x4E31
	  cmpw      r9, r0
	  bge-      .loc_0xBC
	  b         .loc_0x2C8

	.loc_0x78:
	  addi      r0, r3, 0x4333
	  cmpw      r9, r0
	  bge-      .loc_0x2C8
	  b         .loc_0x1FC

	.loc_0x88:
	  lis       r3, 0x5749
	  addi      r0, r3, 0x4E31
	  cmpw      r9, r0
	  beq-      .loc_0xE8
	  bge-      .loc_0xAC
	  addi      r0, r4, 0x5833
	  cmpw      r9, r0
	  bge-      .loc_0x2C8
	  b         .loc_0x260

	.loc_0xAC:
	  addi      r0, r3, 0x4E33
	  cmpw      r9, r0
	  bge-      .loc_0x2C8
	  b         .loc_0x198

	.loc_0xBC:
	  li        r3, 0x100
	  bl        -0x1C194
	  mr.       r0, r3
	  beq-      .loc_0xE0
	  mr        r4, r30
	  mr        r5, r29
	  li        r6, 0
	  bl        -0x9088
	  mr        r0, r3

	.loc_0xE0:
	  mr        r27, r0
	  b         .loc_0x31C

	.loc_0xE8:
	  li        r3, 0x148
	  bl        -0x1C1C0
	  mr.       r0, r3
	  beq-      .loc_0x10C
	  mr        r4, r30
	  mr        r5, r29
	  mr        r6, r26
	  bl        0x25C0
	  mr        r0, r3

	.loc_0x10C:
	  mr        r27, r0
	  b         .loc_0x31C

	.loc_0x114:
	  li        r3, 0x168
	  bl        -0x1C1EC
	  mr.       r0, r3
	  beq-      .loc_0x138
	  mr        r4, r30
	  mr        r5, r29
	  mr        r6, r26
	  bl        -0x6504
	  mr        r0, r3

	.loc_0x138:
	  mr        r27, r0
	  b         .loc_0x31C

	.loc_0x140:
	  li        r3, 0x138
	  bl        -0x1C218
	  mr.       r0, r3
	  beq-      .loc_0x164
	  mr        r4, r30
	  mr        r5, r29
	  mr        r6, r26
	  bl        0xF18
	  mr        r0, r3

	.loc_0x164:
	  mr        r27, r0
	  b         .loc_0x31C

	.loc_0x16C:
	  li        r3, 0x100
	  bl        -0x1C244
	  mr.       r0, r3
	  beq-      .loc_0x190
	  mr        r4, r30
	  mr        r5, r29
	  li        r6, 0x1
	  bl        -0x9138
	  mr        r0, r3

	.loc_0x190:
	  mr        r27, r0
	  b         .loc_0x31C

	.loc_0x198:
	  rlwinm.   r0,r31,0,11,15
	  beq-      .loc_0x1D0
	  li        r3, 0x180
	  bl        -0x1C278
	  mr.       r0, r3
	  beq-      .loc_0x1C8
	  lwz       r7, 0x104(r27)
	  mr        r4, r30
	  mr        r5, r29
	  mr        r6, r31
	  bl        0x4CFC
	  mr        r0, r3

	.loc_0x1C8:
	  mr        r27, r0
	  b         .loc_0x31C

	.loc_0x1D0:
	  li        r3, 0x148
	  bl        -0x1C2A8
	  mr.       r0, r3
	  beq-      .loc_0x1F4
	  lwz       r6, 0x104(r27)
	  mr        r4, r30
	  mr        r5, r29
	  bl        0x2584
	  mr        r0, r3

	.loc_0x1F4:
	  mr        r27, r0
	  b         .loc_0x31C

	.loc_0x1FC:
	  rlwinm.   r0,r31,0,11,15
	  beq-      .loc_0x234
	  li        r3, 0x1A8
	  bl        -0x1C2DC
	  mr.       r0, r3
	  beq-      .loc_0x22C
	  lwz       r7, 0x104(r27)
	  mr        r4, r30
	  mr        r5, r29
	  mr        r6, r31
	  bl        0x14BF4
	  mr        r0, r3

	.loc_0x22C:
	  mr        r27, r0
	  b         .loc_0x31C

	.loc_0x234:
	  li        r3, 0x168
	  bl        -0x1C30C
	  mr.       r0, r3
	  beq-      .loc_0x258
	  lwz       r6, 0x104(r27)
	  mr        r4, r30
	  mr        r5, r29
	  bl        -0x6558
	  mr        r0, r3

	.loc_0x258:
	  mr        r27, r0
	  b         .loc_0x31C

	.loc_0x260:
	  rlwinm.   r0,r31,0,11,15
	  beq-      .loc_0x298
	  li        r3, 0x148
	  bl        -0x1C340
	  mr.       r0, r3
	  beq-      .loc_0x290
	  lwz       r7, 0x104(r27)
	  mr        r4, r30
	  mr        r5, r29
	  mr        r6, r31
	  bl        0x194A8
	  mr        r0, r3

	.loc_0x290:
	  mr        r27, r0
	  b         .loc_0x31C

	.loc_0x298:
	  li        r3, 0x138
	  bl        -0x1C370
	  mr.       r0, r3
	  beq-      .loc_0x2C0
	  lwz       r7, 0x104(r27)
	  mr        r4, r30
	  mr        r5, r29
	  mr        r6, r31
	  bl        0xE50
	  mr        r0, r3

	.loc_0x2C0:
	  mr        r27, r0
	  b         .loc_0x31C

	.loc_0x2C8:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r28)
	  add       r28, r0, r3
	  li        r3, 0x100
	  bl        -0x1C3BC
	  mr.       r0, r3
	  beq-      .loc_0x308
	  mr        r4, r30
	  mr        r5, r29
	  li        r6, 0
	  bl        -0x92B0
	  mr        r0, r3

	.loc_0x308:
	  mr        r27, r0
	  mr        r3, r29
	  mr        r4, r28
	  li        r5, 0
	  bl        -0x19B88

	.loc_0x31C:
	  mr        r3, r27
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800402AC
 * Size:	0001CC
 */
void J2DScreen::draw(float, float, const J2DGrafContext*)
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
J2DPane* J2DScreen::search(unsigned long long id)
{
	return (id != 0) ? J2DPane::search(id) : nullptr;

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r7, 0
	stw      r0, 0x14(r1)
	xor      r4, r6, r7
	xor      r0, r5, r7
	or.      r0, r4, r0
	bne      lbl_8004049C
	b        lbl_800404A4

lbl_8004049C:
	bl       search__7J2DPaneFUx
	mr       r7, r3

lbl_800404A4:
	lwz      r0, 0x14(r1)
	mr       r3, r7
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800404B8
 * Size:	000030
 */
u32 J2DScreen::gather(J2DPane** p1, unsigned long long p2, unsigned long long p3, int p4)
{
	int v1 = 0;
	J2DPane::gather(p1, p2, p3, p4, v1);
	return v1;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	addi     r10, r1, 8
	stw      r0, 8(r1)
	bl       gather__7J2DPaneFPP7J2DPaneUxUxiRi
	lwz      r0, 0x14(r1)
	lwz      r3, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800404E8
 * Size:	000040
 */
J2DPane* J2DScreen::searchUserInfo(unsigned long long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r7, 0
	stw      r0, 0x14(r1)
	xor      r4, r6, r7
	xor      r0, r5, r7
	or.      r0, r4, r0
	bne      lbl_8004050C
	b        lbl_80040514

lbl_8004050C:
	bl       searchUserInfo__7J2DPaneFUx
	mr       r7, r3

lbl_80040514:
	lwz      r0, 0x14(r1)
	mr       r3, r7
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80040528
 * Size:	000158
 */
void J2DScreen::drawSelf(float, float, float (*)[3][4])
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
void* J2DScreen::getResReference(JSURandomInputStream*, unsigned long)
{
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
bool J2DScreen::createMaterial(JSURandomInputStream*, unsigned long, JKRArchive*)
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
J2DMaterial* J2DScreen::getMaterial(unsigned short)
{
	/*
	lhz      r0, 0x102(r3)
	clrlwi   r4, r4, 0x10
	cmplw    r4, r0
	blt      lbl_80040A7C
	li       r3, 0
	blr

lbl_80040A7C:
	lwz      r3, 0x104(r3)
	cmplwi   r3, 0
	bne      lbl_80040A90
	li       r3, 0
	blr

lbl_80040A90:
	mulli    r0, r4, 0x88
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80040A9C
 * Size:	000020
 */
bool J2DScreen::isUsed(const ResTIMG* resource)
{
	return J2DPane::isUsed(resource);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       isUsed__7J2DPaneFPC7ResTIMG
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80040ABC
 * Size:	000020
 */
bool J2DScreen::isUsed(const ResFONT* resource)
{
	return J2DPane::isUsed(resource);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       isUsed__7J2DPaneFPC7ResFONT
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80040ADC
 * Size:	000050
 */
void* J2DScreen::getNameResource(const char*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	cmplwi   r3, 0
	bne      lbl_80040B18
	lwz      r0, mDataManage__9J2DScreen@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80040B18
	mr       r3, r0
	mr       r4, r31
	bl       get__13J2DDataManageFPCc

lbl_80040B18:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80040B2C
 * Size:	000074
 */
void J2DScreen::animation()
{
	animationPane(m_transform);
	for (u16 i = 0; i < m_materialCount; i++) {
		m_materials[i].animation();
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r12, 0(r3)
	lwz      r4, 0xf8(r3)
	lwz      r12, 0x90(r12)
	mtctr    r12
	bctrl
	li       r31, 0
	b        lbl_80040B78

lbl_80040B60:
	clrlwi   r0, r31, 0x10
	lwz      r3, 0x104(r30)
	mulli    r0, r0, 0x88
	add      r3, r3, r0
	bl       animation__11J2DMaterialFv
	addi     r31, r31, 1

lbl_80040B78:
	lhz      r0, 0x102(r30)
	clrlwi   r3, r31, 0x10
	cmplw    r3, r0
	blt      lbl_80040B60
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80040BA0
 * Size:	0000A4
 */
void J2DScreen::setAnimation(J2DAnmColor* animation)
{
	animation->searchUpdateMaterialID(this);
	for (u16 i = 0; i < animation->_18; i++) {
		if (animation->_1C[i] < m_materialCount) {
			m_materials[animation->_1C[i]].setAnimation(animation);
		}
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	mr       r4, r28
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lhz      r31, 0x18(r29)
	li       r30, 0
	b        lbl_80040C18

lbl_80040BE8:
	lwz      r4, 0x1c(r29)
	rlwinm   r3, r30, 1, 0xf, 0x1e
	lhz      r0, 0x102(r28)
	lhzx     r3, r4, r3
	cmplw    r3, r0
	bge      lbl_80040C14
	mulli    r0, r3, 0x88
	lwz      r3, 0x104(r28)
	mr       r4, r29
	add      r3, r3, r0
	bl       setAnimation__11J2DMaterialFP11J2DAnmColor

lbl_80040C14:
	addi     r30, r30, 1

lbl_80040C18:
	clrlwi   r0, r30, 0x10
	cmplw    r0, r31
	blt      lbl_80040BE8
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80040C44
 * Size:	0000BC
 */
void J2DScreen::setAnimation(J2DAnmTextureSRTKey*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	mr       r4, r28
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lis      r3, 0x55555556@ha
	lhz      r0, 0x14(r29)
	addi     r3, r3, 0x55555556@l
	li       r30, 0
	mulhw    r3, r3, r0
	srwi     r0, r3, 0x1f
	add      r0, r3, r0
	clrlwi   r31, r0, 0x10
	b        lbl_80040CD4

lbl_80040CA4:
	lwz      r4, 0x34(r29)
	rlwinm   r3, r30, 1, 0xf, 0x1e
	lhz      r0, 0x102(r28)
	lhzx     r3, r4, r3
	cmplw    r3, r0
	bge      lbl_80040CD0
	mulli    r0, r3, 0x88
	lwz      r3, 0x104(r28)
	mr       r4, r29
	add      r3, r3, r0
	bl       setAnimation__11J2DMaterialFP19J2DAnmTextureSRTKey

lbl_80040CD0:
	addi     r30, r30, 1

lbl_80040CD4:
	clrlwi   r0, r30, 0x10
	cmplw    r0, r31
	blt      lbl_80040CA4
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80040D00
 * Size:	0000A4
 */
void J2DScreen::setAnimation(J2DAnmTexPattern*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	mr       r4, r28
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lhz      r31, 0x1a(r29)
	li       r30, 0
	b        lbl_80040D78

lbl_80040D48:
	lwz      r4, 0x1c(r29)
	rlwinm   r3, r30, 1, 0xf, 0x1e
	lhz      r0, 0x102(r28)
	lhzx     r3, r4, r3
	cmplw    r3, r0
	bge      lbl_80040D74
	mulli    r0, r3, 0x88
	lwz      r3, 0x104(r28)
	mr       r4, r29
	add      r3, r3, r0
	bl       setAnimation__11J2DMaterialFP16J2DAnmTexPattern

lbl_80040D74:
	addi     r30, r30, 1

lbl_80040D78:
	clrlwi   r0, r30, 0x10
	cmplw    r0, r31
	blt      lbl_80040D48
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80040DA4
 * Size:	0000EC
 */
void J2DScreen::setAnimation(J2DAnmTevRegKey*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	mr       r3, r31
	stw      r29, 0x14(r1)
	mr       r4, r30
	stw      r28, 0x10(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lhz      r29, 0x10(r31)
	li       r28, 0
	b        lbl_80040E1C

lbl_80040DEC:
	lwz      r4, 0x24(r31)
	rlwinm   r3, r28, 1, 0xf, 0x1e
	lhz      r0, 0x102(r30)
	lhzx     r3, r4, r3
	cmplw    r3, r0
	bge      lbl_80040E18
	mulli    r0, r3, 0x88
	lwz      r3, 0x104(r30)
	mr       r4, r31
	add      r3, r3, r0
	bl       setAnimation__11J2DMaterialFP15J2DAnmTevRegKey

lbl_80040E18:
	addi     r28, r28, 1

lbl_80040E1C:
	clrlwi   r0, r28, 0x10
	cmplw    r0, r29
	blt      lbl_80040DEC
	lhz      r29, 0x12(r31)
	li       r28, 0
	b        lbl_80040E64

lbl_80040E34:
	lwz      r4, 0x38(r31)
	rlwinm   r3, r28, 1, 0xf, 0x1e
	lhz      r0, 0x102(r30)
	lhzx     r3, r4, r3
	cmplw    r3, r0
	bge      lbl_80040E60
	mulli    r0, r3, 0x88
	lwz      r3, 0x104(r30)
	mr       r4, r31
	add      r3, r3, r0
	bl       setAnimation__11J2DMaterialFP15J2DAnmTevRegKey

lbl_80040E60:
	addi     r28, r28, 1

lbl_80040E64:
	clrlwi   r0, r28, 0x10
	cmplw    r0, r29
	blt      lbl_80040E34
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80040E90
 * Size:	000020
 */
void J2DScreen::setAnimation(J2DAnmVtxColor*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80040EB0
 * Size:	000020
 */
void J2DScreen::setAnimation(J2DAnmVisibilityFull*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80040ED0
 * Size:	000008
 */
u32 J2DScreen::getTypeID() const { return 0x8; }

/*
 * --INFO--
 * Address:	80040ED8
 * Size:	000034
 */
void J2DScreen::calcMtx()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lfs      f1, 0xd4(r3)
	lwz      r12, 0x44(r12)
	lfs      f2, 0xd8(r3)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80040F0C
 * Size:	000020
 */
void J2DScreen::setAnimation(J2DAnmTransform* animation)
{
	J2DPane::setAnimation(animation);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       setAnimation__7J2DPaneFP15J2DAnmTransform
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80040F2C
 * Size:	000020
 */
void J2DScreen::setAnimation(J2DAnmBase* animation)
{
	J2DPane::setAnimation(animation);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       setAnimation__7J2DPaneFP10J2DAnmBase
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80040F4C
 * Size:	000020
 */
void J2DScreen::clearAnmTransform()
{
	J2DPane::clearAnmTransform();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       clearAnmTransform__7J2DPaneFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80040F6C
 * Size:	000004
 */
void J2DScreen::setAnimationVF(J2DAnmVisibilityFull*) { }

/*
 * --INFO--
 * Address:	80040F70
 * Size:	000004
 */
void J2DScreen::setAnimationVC(J2DAnmVtxColor*) { }
