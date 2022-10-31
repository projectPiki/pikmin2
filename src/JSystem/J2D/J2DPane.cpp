#include "JSystem/JSupport/JSUList.h"
#include "types.h"
#include "Dolphin/mtx.h"
#include "JSystem/J2D/J2DPane.h"
#include "JSystem/J2D/J2DAnm.h"
#include "JSystem/J2D/J2DGrafContext.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JSupport/JSUStream.h"
#include "JSystem/JSupport/JSUList.h"

JGeometry::TBox2f J2DPane::static_mBounds(0.0f, 0.0f, 0.0f, 0.0f);
/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_J2DPane_cpp

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804A0678
    lbl_804A0678:
        .4byte lbl_80039544
        .4byte lbl_80039558
        .4byte lbl_80039594
        .4byte lbl_800395CC
        .4byte lbl_80039580
        .4byte lbl_800395BC
        .4byte lbl_800395A8
        .4byte lbl_8003956C
    .global __vt__7J2DPane
    __vt__7J2DPane:
        .4byte 0
        .4byte 0
        .4byte __dt__7J2DPaneFv
        .4byte getTypeID__7J2DPaneCFv
        .4byte move__7J2DPaneFff
        .4byte add__7J2DPaneFff
        .4byte resize__7J2DPaneFff
        .4byte setCullBack__7J2DPaneFb
        .4byte setCullBack__7J2DPaneF11_GXCullMode
        .4byte setAlpha__7J2DPaneFUc
        .4byte setConnectParent__7J2DPaneFb
        .4byte calcMtx__7J2DPaneFv
        .4byte update__7J2DPaneFv
        .4byte drawSelf__7J2DPaneFff
        .4byte drawSelf__7J2DPaneFffPA3_A4_f
        .4byte search__7J2DPaneFUx
        .4byte searchUserInfo__7J2DPaneFUx
        .4byte makeMatrix__7J2DPaneFff
        .4byte makeMatrix__7J2DPaneFffff
        .4byte isUsed__7J2DPaneFPC7ResTIMG
        .4byte isUsed__7J2DPaneFPC7ResFONT
        .4byte clearAnmTransform__7J2DPaneFv
        .4byte rewriteAlpha__7J2DPaneFv
        .4byte setAnimation__7J2DPaneFP10J2DAnmBase
        .4byte setAnimation__7J2DPaneFP15J2DAnmTransform
        .4byte setAnimation__7J2DPaneFP11J2DAnmColor
        .4byte setAnimation__7J2DPaneFP16J2DAnmTexPattern
        .4byte setAnimation__7J2DPaneFP19J2DAnmTextureSRTKey
        .4byte setAnimation__7J2DPaneFP15J2DAnmTevRegKey
        .4byte setAnimation__7J2DPaneFP20J2DAnmVisibilityFull
        .4byte setAnimation__7J2DPaneFP14J2DAnmVtxColor
        .4byte animationTransform__7J2DPaneFPC15J2DAnmTransform
        .4byte setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull
        .4byte setAnimationVF__7J2DPaneFP20J2DAnmVisibilityFull
        .4byte setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor
        .4byte setAnimationVC__7J2DPaneFP14J2DAnmVtxColor
        .4byte animationPane__7J2DPaneFPC15J2DAnmTransform
        .4byte 0

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global static_mBounds__7J2DPane
    static_mBounds__7J2DPane:
        .skip 0x10

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805167C0
    lbl_805167C0:
        .4byte 0x00000000
    .global lbl_805167C4
    lbl_805167C4:
        .float 1.0
    .global lbl_805167C8
    lbl_805167C8:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_805167D0
    lbl_805167D0:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_805167D8
    lbl_805167D8:
        .float 0.5
    .global lbl_805167DC
    lbl_805167DC:
        .4byte 0x3C8EFA35
    .global lbl_805167E0
    lbl_805167E0:
        .4byte 0x437F0000
    .global lbl_805167E4
    lbl_805167E4:
        .4byte 0x43B40000
    .global lbl_805167E8
    lbl_805167E8:
        .4byte 0x477FFF00
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80036AF0
 * Size:	0000C0
 */
J2DPane::J2DPane()
    : m_tree(this)
    , m_transform(nullptr)
    , m_bloBlockType('PAN1')
    , m_isVisible(true)
    , m_tag(0)
    , m_messageID(0)
    , _020(0.0f, 0.0f, 0.0f, 0.0f)
{
	initiate();
	changeUseTrans(nullptr);
	calcMtx();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, __vt__7J2DPane@ha
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__7J2DPane@l
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r31, r30, 0xdc
	stw      r0, 0(r3)
	mr       r3, r31
	bl       initiate__10JSUPtrListFv
	mr       r4, r30
	addi     r3, r31, 0xc
	bl       __ct__10JSUPtrLinkFPv
	li       r4, 0
	lis      r3, 0x50414E31@ha
	stw      r4, 0xf8(r30)
	addi     r3, r3, 0x50414E31@l
	li       r0, 1
	lfs      f0, lbl_805167C0@sda21(r2)
	stw      r3, 8(r30)
	mr       r3, r30
	stb      r0, 0xb0(r30)
	stw      r4, 0x14(r30)
	stw      r4, 0x10(r30)
	stw      r4, 0x1c(r30)
	stw      r4, 0x18(r30)
	stfs     f0, 0x20(r30)
	stfs     f0, 0x24(r30)
	stfs     f0, 0x28(r30)
	stfs     f0, 0x2c(r30)
	bl       initiate__7J2DPaneFv
	mr       r3, r30
	li       r4, 0
	bl       changeUseTrans__7J2DPaneFP7J2DPane
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80036BB0
 * Size:	000040
 */
void J2DPane::calcMtx()
{
	if (m_tree.getList()) {
		makeMatrix(_0D4.x, _0D4.y);
	}
}

/*
 * --INFO--
 * Address:	80036BF0
 * Size:	00003C
 */
void J2DPane::makeMatrix(float f1, float f2) { makeMatrix(f1, f2, -_020.i.x, -_020.i.y); }

/*
 * --INFO--
 * Address:	80036C2C
 * Size:	000088
 */
void J2DPane::initiate()
{
	_004 = 0xFFFF;
	_0B8 = 0.0f;
	_0BC = 0.0f;
	_0C0 = 0.0f;
	m_anchorPoint.set(0.0f, 0.0f);
	m_basePosition      = POS_TOP_LEFT;
	m_rotationAxisMaybe = 122; // 0x7A
	m_scale.x           = 1.0f;
	m_scale.y           = 1.0f;
	m_cullMode          = 0;
	m_alpha             = 0xFF;
	_0B4                = true;
	_0B3                = 0xFF;
	_0B5                = 0;
	calcMtx();
}

/*
 * __ct__7J2DPaneFP7J2DPanebUxRCQ29JGeometry8TBox2<f>
 * --INFO--
 * Address:	80036CB4
 * Size:	000088
 */
J2DPane::J2DPane(J2DPane* parent, bool isVisible, u64 tag, const JGeometry::TBox2f& box)
    : m_tree(this)
    , m_transform(nullptr)
{
	initialize(parent, isVisible, tag, box);
}

/*
 * --INFO--
 * Address:	80036D3C
 * Size:	000120
 */
void J2DPane::initialize(J2DPane* parent, bool isVisible, u64 tag, const JGeometry::TBox2f& box)
{
	m_bloBlockType = 'PAN1';
	m_isVisible    = isVisible;
	m_tag          = tag;
	m_messageID    = 0;
	_020           = box;
	if (parent) {
		// JSUPtrLink* link = m_tree.m_list.m_head;
		JSUPtrLink* link = m_tree.getList()->getFirstLink();
		if (link) {
			// link = &m_tree.m_link; // Could this be getting m_value?
			link = m_tree.getFirstLink(); // Could this be getting m_value?
		}
		parent->m_tree.m_list->append(link);
	}
	initiate();
	changeUseTrans(parent);
	calcMtx();
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r6, 0x5041
	  lfs       f3, 0x0(r9)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  lfs       f2, 0x4(r9)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  lfs       f1, 0x8(r9)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  addi      r3, r6, 0x4E31
	  lfs       f0, 0xC(r9)
	  stw       r3, 0x8(r30)
	  stb       r5, 0xB0(r30)
	  stw       r8, 0x14(r30)
	  stw       r7, 0x10(r30)
	  stw       r0, 0x1C(r30)
	  stw       r0, 0x18(r30)
	  stfs      f3, 0x20(r30)
	  stfs      f2, 0x24(r30)
	  stfs      f1, 0x28(r30)
	  stfs      f0, 0x2C(r30)
	  beq-      .loc_0x78
	  addic.    r4, r30, 0xDC
	  beq-      .loc_0x70
	  addi      r4, r4, 0xC

	.loc_0x70:
	  addi      r3, r31, 0xDC
	  bl        -0x104CC

	.loc_0x78:
	  lis       r3, 0x1
	  lfs       f1, -0x7BA0(r2)
	  subi      r0, r3, 0x1
	  li        r6, 0
	  sth       r0, 0x4(r30)
	  li        r5, 0x7A
	  lfs       f0, -0x7B9C(r2)
	  li        r4, 0xFF
	  stfs      f1, 0xB8(r30)
	  li        r0, 0x1
	  mr        r3, r30
	  stfs      f1, 0xBC(r30)
	  stfs      f1, 0xC0(r30)
	  stfs      f1, 0xC4(r30)
	  stfs      f1, 0xC8(r30)
	  stb       r6, 0xB7(r30)
	  stb       r5, 0xB6(r30)
	  stfs      f0, 0xCC(r30)
	  stfs      f0, 0xD0(r30)
	  stb       r6, 0xB1(r30)
	  stb       r4, 0xB2(r30)
	  stb       r0, 0xB4(r30)
	  stb       r4, 0xB3(r30)
	  stb       r6, 0xB5(r30)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x5FC
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * __ct__7J2DPaneFUxRCQ29JGeometry8TBox2<f>
 * --INFO--
 * Address:	80036E5C
 * Size:	000078
 */
J2DPane::J2DPane(u64 tag, const JGeometry::TBox2f& box)
    : m_tree(this)
    , m_transform(nullptr)
{
	initialize(tag, box);
}

/*
 * --INFO--
 * Address:	80036ED4
 * Size:	0000F4
 * initialize__7J2DPaneFUxRCQ29JGeometry8TBox2<f>
 */
void J2DPane::initialize(u64 tag, const JGeometry::TBox2f& box)
{
	initialize(nullptr, true, tag, box);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r8, 0x50414E31@ha
	li       r10, 1
	stw      r0, 0x14(r1)
	addi     r0, r8, 0x50414E31@l
	lis      r4, 0x0000FFFF@ha
	li       r9, 0
	stw      r31, 0xc(r1)
	addi     r8, r4, 0x0000FFFF@l
	lfs      f5, 0(r7)
	li       r4, 0x7a
	stw      r0, 8(r3)
	li       r0, 0xff
	lfs      f4, 4(r7)
	mr       r31, r3
	stb      r10, 0xb0(r3)
	lfs      f3, 8(r7)
	stw      r6, 0x14(r3)
	lfs      f2, 0xc(r7)
	stw      r5, 0x10(r3)
	lfs      f1, lbl_805167C0@sda21(r2)
	stw      r9, 0x1c(r3)
	lfs      f0, lbl_805167C4@sda21(r2)
	stw      r9, 0x18(r3)
	stfs     f5, 0x20(r3)
	stfs     f4, 0x24(r3)
	stfs     f3, 0x28(r3)
	stfs     f2, 0x2c(r3)
	sth      r8, 4(r3)
	stfs     f1, 0xb8(r3)
	stfs     f1, 0xbc(r3)
	stfs     f1, 0xc0(r3)
	stfs     f1, 0xc4(r3)
	stfs     f1, 0xc8(r3)
	stb      r9, 0xb7(r3)
	stb      r4, 0xb6(r3)
	stfs     f0, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	stb      r9, 0xb1(r3)
	stb      r0, 0xb2(r3)
	stb      r10, 0xb4(r3)
	stb      r0, 0xb3(r3)
	stb      r9, 0xb5(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	li       r4, 0
	bl       changeUseTrans__7J2DPaneFP7J2DPane
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * __ct__7J2DPaneFP7J2DPaneP20JSURandomInputStreamUc
 * --INFO--
 * Address:	80036FC8
 * Size:	000120
 */
J2DPane::J2DPane(J2DPane* parent, JSURandomInputStream* input, u8 version)
    : m_tree(this)
    , m_transform(nullptr)
{
	if (version == 0) {
		J2DScrnBlockHeader header;
		int position = input->getPosition();
		input->read(&header, sizeof(J2DScrnBlockHeader));
		m_bloBlockType = header.m_bloBlockType;
		makePaneStream(parent, input);
		input->seek(position + header.m_blockLength, SEEK_SET);
	} else {
		J2DScrnBlockHeader header;
		int position = input->getPosition();
		input->peek(&header, sizeof(J2DScrnBlockHeader));
		m_bloBlockType = header.m_bloBlockType;
		makePaneExStream(parent, input);
		input->seek(position + header.m_blockLength, SEEK_SET);
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r7, __vt__7J2DPane@ha
	stw      r0, 0x34(r1)
	addi     r0, r7, __vt__7J2DPane@l
	stmw     r27, 0x1c(r1)
	mr       r27, r3
	addi     r28, r27, 0xdc
	mr       r29, r4
	mr       r30, r5
	mr       r31, r6
	stw      r0, 0(r3)
	mr       r3, r28
	bl       initiate__10JSUPtrListFv
	mr       r4, r27
	addi     r3, r28, 0xc
	bl       __ct__10JSUPtrLinkFPv
	li       r3, 0
	clrlwi.  r0, r31, 0x18
	stw      r3, 0xf8(r27)
	bne      lbl_80037078
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	mr       r3, r30
	addi     r4, r1, 0x10
	li       r5, 8
	bl       read__14JSUInputStreamFPvl
	lwz      r0, 0x10(r1)
	mr       r3, r27
	mr       r4, r29
	mr       r5, r30
	stw      r0, 8(r27)
	lwz      r0, 0x14(r1)
	add      r31, r31, r0
	bl       makePaneStream__7J2DPaneFP7J2DPaneP20JSURandomInputStream
	mr       r3, r30
	mr       r4, r31
	li       r5, 0
	bl       seek__20JSURandomInputStreamFl17JSUStreamSeekFrom
	b        lbl_800370D0

lbl_80037078:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	mr       r3, r30
	addi     r4, r1, 8
	li       r5, 8
	bl       peek__20JSURandomInputStreamFPvl
	lwz      r0, 8(r1)
	mr       r3, r27
	mr       r4, r29
	mr       r5, r30
	stw      r0, 8(r27)
	lwz      r0, 0xc(r1)
	add      r31, r31, r0
	bl       makePaneExStream__7J2DPaneFP7J2DPaneP20JSURandomInputStream
	mr       r3, r30
	mr       r4, r31
	li       r5, 0
	bl       seek__20JSURandomInputStreamFl17JSUStreamSeekFrom

lbl_800370D0:
	mr       r3, r27
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	800370E8
 * Size:	000340
 */
void J2DPane::makePaneStream(J2DPane* parent, JSURandomInputStream* input)
{
	u8 valuesRemaining;
	input->read(&valuesRemaining, 1);
	input->read(&m_isVisible, 1);
	input->skip(2);
	u32 tag;
	input->read(&tag, 4);
	m_tag = tag;
	// JGeometry::TBox2<short> box()
	JGeometry::TVec2<s16> shortTopLeft;
	JGeometry::TVec2<s16> shortSize;
	JGeometry::TVec2f topLeft;
	JGeometry::TVec2f bottomRight;
	input->read(&shortTopLeft.x, 2);
	topLeft.x = shortTopLeft.x;
	input->read(&shortTopLeft.y, 2);
	topLeft.y = shortTopLeft.y;
	input->read(&shortSize.x, 2);
	bottomRight.x = topLeft.x + shortSize.x;
	input->read(&shortSize.y, 2);
	bottomRight.y = topLeft.y + shortSize.y;
	_020.set(topLeft, bottomRight);
	valuesRemaining -= 6;
	_0B8 = 0.0f;
	_0BC = 0.0f;
	_0C0 = 0.0f;
	if (valuesRemaining != 0) {
		u16 v1;
		input->read(&v1, 2);
		_0C0 = v1;
		valuesRemaining--;
	}
	if (valuesRemaining != 0) {
		u8 basePosition;
		input->read(&basePosition, 1);
		m_basePosition = (J2DBasePosition)basePosition;
		valuesRemaining--;
	} else {
		m_basePosition = POS_TOP_LEFT;
	}
	m_rotationAxisMaybe = 0x7A;
	m_alpha             = 0xFF;
	if (valuesRemaining != 0) {
		u8 alpha;
		input->read(&alpha, 1);
		m_alpha = alpha;
		valuesRemaining--;
	}
	_0B4 = true;
	if (valuesRemaining != 0) {
		u8 v2;
		input->read(&v2, 1);
		_0B4 = v2;
		valuesRemaining--;
	}
	input->align(4);
	if (parent) {
		JSULink<J2DPane>* link = m_tree.getList()->getFirst();
		if (link) {
			link = m_tree.getFirst();
		}
		parent->m_tree.getList()->append(link);
	}
	m_cullMode  = 0;
	_0B3        = 0xFF;
	_0B5        = 0;
	_004        = -1;
	m_scale.x   = 1.0f;
	m_scale.y   = 1.0f;
	m_messageID = 0;
	changeUseTrans(parent);
	calcMtx();
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	stw      r29, 0x44(r1)
	mr       r31, r5
	mr       r29, r3
	mr       r30, r4
	addi     r4, r1, 0xb
	mr       r3, r31
	li       r5, 1
	bl       read__14JSUInputStreamFPvl
	mr       r3, r31
	addi     r4, r29, 0xb0
	li       r5, 1
	bl       read__14JSUInputStreamFPvl
	mr       r3, r31
	li       r4, 2
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	addi     r4, r1, 0x18
	li       r5, 4
	bl       read__14JSUInputStreamFPvl
	lwz      r5, 0x18(r1)
	li       r0, 0
	mr       r3, r31
	addi     r4, r1, 0x14
	stw      r5, 0x14(r29)
	li       r5, 2
	stw      r0, 0x10(r29)
	bl       read__14JSUInputStreamFPvl
	lha      r4, 0x14(r1)
	lis      r0, 0x4330
	stw      r0, 0x20(r1)
	mr       r3, r31
	xoris    r0, r4, 0x8000
	lfd      f1, lbl_805167C8@sda21(r2)
	stw      r0, 0x24(r1)
	addi     r4, r1, 0x12
	li       r5, 2
	lfd      f0, 0x20(r1)
	fsubs    f31, f0, f1
	bl       read__14JSUInputStreamFPvl
	lha      r4, 0x12(r1)
	lis      r0, 0x4330
	stw      r0, 0x28(r1)
	mr       r3, r31
	xoris    r0, r4, 0x8000
	lfd      f1, lbl_805167C8@sda21(r2)
	stw      r0, 0x2c(r1)
	addi     r4, r1, 0x10
	li       r5, 2
	lfd      f0, 0x28(r1)
	fsubs    f30, f0, f1
	bl       read__14JSUInputStreamFPvl
	lha      r4, 0x10(r1)
	lis      r0, 0x4330
	stw      r0, 0x30(r1)
	mr       r3, r31
	xoris    r0, r4, 0x8000
	lfd      f1, lbl_805167C8@sda21(r2)
	stw      r0, 0x34(r1)
	addi     r4, r1, 0xe
	li       r5, 2
	lfd      f0, 0x30(r1)
	fsubs    f0, f0, f1
	fadds    f29, f31, f0
	bl       read__14JSUInputStreamFPvl
	lha      r3, 0xe(r1)
	lis      r0, 0x4330
	stw      r0, 0x38(r1)
	xoris    r0, r3, 0x8000
	lfd      f2, lbl_805167C8@sda21(r2)
	stw      r0, 0x3c(r1)
	lfs      f0, lbl_805167C0@sda21(r2)
	lfd      f1, 0x38(r1)
	stfs     f31, 0x20(r29)
	fsubs    f1, f1, f2
	stfs     f30, 0x24(r29)
	fadds    f1, f30, f1
	stfs     f29, 0x28(r29)
	stfs     f1, 0x2c(r29)
	lbz      r3, 0xb(r1)
	addi     r0, r3, -6
	stb      r0, 0xb(r1)
	stfs     f0, 0xb8(r29)
	stfs     f0, 0xbc(r29)
	stfs     f0, 0xc0(r29)
	lbz      r0, 0xb(r1)
	cmplwi   r0, 0
	beq      lbl_800372B8
	mr       r3, r31
	addi     r4, r1, 0xc
	li       r5, 2
	bl       read__14JSUInputStreamFPvl
	lhz      r3, 0xc(r1)
	lis      r0, 0x4330
	stw      r0, 0x38(r1)
	lfd      f1, lbl_805167D0@sda21(r2)
	stw      r3, 0x3c(r1)
	lfd      f0, 0x38(r1)
	fsubs    f0, f0, f1
	stfs     f0, 0xc0(r29)
	lbz      r3, 0xb(r1)
	addi     r0, r3, -1
	stb      r0, 0xb(r1)

lbl_800372B8:
	lbz      r0, 0xb(r1)
	cmplwi   r0, 0
	beq      lbl_800372EC
	mr       r3, r31
	addi     r4, r1, 0xa
	li       r5, 1
	bl       read__14JSUInputStreamFPvl
	lbz      r0, 0xa(r1)
	stb      r0, 0xb7(r29)
	lbz      r3, 0xb(r1)
	addi     r0, r3, -1
	stb      r0, 0xb(r1)
	b        lbl_800372F4

lbl_800372EC:
	li       r0, 0
	stb      r0, 0xb7(r29)

lbl_800372F4:
	li       r3, 0x7a
	li       r0, 0xff
	stb      r3, 0xb6(r29)
	stb      r0, 0xb2(r29)
	lbz      r0, 0xb(r1)
	cmplwi   r0, 0
	beq      lbl_80037334
	mr       r3, r31
	addi     r4, r1, 9
	li       r5, 1
	bl       read__14JSUInputStreamFPvl
	lbz      r0, 9(r1)
	stb      r0, 0xb2(r29)
	lbz      r3, 0xb(r1)
	addi     r0, r3, -1
	stb      r0, 0xb(r1)

lbl_80037334:
	li       r0, 1
	stb      r0, 0xb4(r29)
	lbz      r0, 0xb(r1)
	cmplwi   r0, 0
	beq      lbl_80037378
	mr       r3, r31
	addi     r4, r1, 8
	li       r5, 1
	bl       read__14JSUInputStreamFPvl
	lbz      r3, 8(r1)
	neg      r0, r3
	or       r0, r0, r3
	srwi     r0, r0, 0x1f
	stb      r0, 0xb4(r29)
	lbz      r3, 0xb(r1)
	addi     r0, r3, -1
	stb      r0, 0xb(r1)

lbl_80037378:
	mr       r3, r31
	li       r4, 4
	bl       align__20JSURandomInputStreamFl
	cmplwi   r30, 0
	beq      lbl_800373A0
	addic.   r4, r29, 0xdc
	beq      lbl_80037398
	addi     r4, r4, 0xc

lbl_80037398:
	addi     r3, r30, 0xdc
	bl       append__10JSUPtrListFP10JSUPtrLink

lbl_800373A0:
	li       r5, 0
	lis      r3, 0x0000FFFF@ha
	stb      r5, 0xb1(r29)
	li       r4, 0xff
	addi     r0, r3, 0x0000FFFF@l
	lfs      f0, lbl_805167C4@sda21(r2)
	stb      r4, 0xb3(r29)
	mr       r3, r29
	mr       r4, r30
	stb      r5, 0xb5(r29)
	sth      r0, 4(r29)
	stfs     f0, 0xcc(r29)
	stfs     f0, 0xd0(r29)
	stw      r5, 0x1c(r29)
	stw      r5, 0x18(r29)
	bl       changeUseTrans__7J2DPaneFP7J2DPane
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r0, 0x84(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	80037428
 * Size:	0001BC
 */
void J2DPane::changeUseTrans(J2DPane* parent)
{
	JGeometry::TVec2f v1(0.0f, 0.0f);
	if (m_basePosition % 3 == 1) {
		v1.x = (_020.f.x - _020.i.x) * 0.5f;
	} else if (m_basePosition % 3 == 2) {
		v1.x = (_020.f.x - _020.i.x);
		// } else {
		// 	v1.x = 0.0f;
	}
	if (m_basePosition / 3 == 1) {
		v1.y = (_020.f.y - _020.i.y) * 0.5f;
	} else if (m_basePosition / 3 == 2) {
		v1.y = (_020.f.y - _020.i.y);
		// } else {
		// 	v1.y = 0.0f;
	}
	_0D4 = _020.i;
	_0D4.add(v1);
	m_anchorPoint = v1;
	v1.set(-_0D4.x, -_0D4.y);
	_020.addPos(v1);
	if (parent == nullptr) {
		return;
	}
	v1.set(parent->_020.getWidth(), parent->_020.getHeight());
	if (m_basePosition % 3 == 1) {
		_0D4.x = -(v1.x * 0.5f - _0D4.x);
	} else if (m_basePosition % 3 == 2) {
		_0D4.x = _0D4.x - v1.x;
	}
	if (m_basePosition / 3 == 1) {
		_0D4.y = -(v1.y * 0.5f - _0D4.y);
	} else if (m_basePosition / 3 == 2) {
		_0D4.y = _0D4.y - v1.y;
	}
	/*
	lis      r5, 0x55555556@ha
	lbz      r6, 0xb7(r3)
	addi     r0, r5, 0x55555556@l
	lfs      f3, lbl_805167C0@sda21(r2)
	mulhw    r5, r0, r6
	fmr      f4, f3
	srwi     r0, r5, 0x1f
	add      r0, r5, r0
	mulli    r0, r0, 3
	subf     r0, r0, r6
	cmpwi    r0, 1
	bne      lbl_80037470
	lfs      f2, 0x28(r3)
	lfs      f1, 0x20(r3)
	lfs      f0, lbl_805167D8@sda21(r2)
	fsubs    f1, f2, f1
	fmuls    f3, f1, f0
	b        lbl_80037484

lbl_80037470:
	cmpwi    r0, 2
	bne      lbl_80037484
	lfs      f1, 0x28(r3)
	lfs      f0, 0x20(r3)
	fsubs    f3, f1, f0

lbl_80037484:
	lis      r5, 0x55555556@ha
	addi     r0, r5, 0x55555556@l
	mulhw    r5, r0, r6
	srwi     r0, r5, 0x1f
	add      r0, r5, r0
	cmpwi    r0, 1
	bne      lbl_800374B8
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x24(r3)
	lfs      f0, lbl_805167D8@sda21(r2)
	fsubs    f1, f2, f1
	fmuls    f4, f1, f0
	b        lbl_800374CC

lbl_800374B8:
	cmpwi    r0, 2
	bne      lbl_800374CC
	lfs      f1, 0x2c(r3)
	lfs      f0, 0x24(r3)
	fsubs    f4, f1, f0

lbl_800374CC:
	lfs      f0, 0x20(r3)
	cmplwi   r4, 0
	fadds    f0, f0, f3
	stfs     f0, 0xd4(r3)
	lfs      f0, 0x24(r3)
	fadds    f0, f0, f4
	stfs     f0, 0xd8(r3)
	stfs     f3, 0xc4(r3)
	stfs     f4, 0xc8(r3)
	lfs      f0, 0xd4(r3)
	lfs      f1, 0xd8(r3)
	fneg     f2, f0
	lfs      f0, 0x20(r3)
	fneg     f1, f1
	fadds    f0, f0, f2
	stfs     f0, 0x20(r3)
	lfs      f0, 0x24(r3)
	fadds    f0, f0, f1
	stfs     f0, 0x24(r3)
	lfs      f0, 0x28(r3)
	fadds    f0, f0, f2
	stfs     f0, 0x28(r3)
	lfs      f0, 0x2c(r3)
	fadds    f0, f0, f1
	stfs     f0, 0x2c(r3)
	beqlr
	lis      r5, 0x55555556@ha
	lbz      r6, 0xb7(r4)
	addi     r0, r5, 0x55555556@l
	lfs      f3, 0x28(r4)
	mulhw    r5, r0, r6
	lfs      f2, 0x20(r4)
	lfs      f1, 0x2c(r4)
	lfs      f0, 0x24(r4)
	fsubs    f2, f3, f2
	fsubs    f3, f1, f0
	srwi     r0, r5, 0x1f
	add      r0, r5, r0
	mulli    r0, r0, 3
	subf     r0, r0, r6
	cmpwi    r0, 1
	bne      lbl_80037588
	lfs      f1, lbl_805167D8@sda21(r2)
	lfs      f0, 0xd4(r3)
	fnmsubs  f0, f2, f1, f0
	stfs     f0, 0xd4(r3)
	b        lbl_8003759C

lbl_80037588:
	cmpwi    r0, 2
	bne      lbl_8003759C
	lfs      f0, 0xd4(r3)
	fsubs    f0, f0, f2
	stfs     f0, 0xd4(r3)

lbl_8003759C:
	lis      r4, 0x55555556@ha
	addi     r0, r4, 0x55555556@l
	mulhw    r4, r0, r6
	srwi     r0, r4, 0x1f
	add      r0, r4, r0
	cmpwi    r0, 1
	bne      lbl_800375CC
	lfs      f1, lbl_805167D8@sda21(r2)
	lfs      f0, 0xd8(r3)
	fnmsubs  f0, f3, f1, f0
	stfs     f0, 0xd8(r3)
	blr

lbl_800375CC:
	cmpwi    r0, 2
	bnelr
	lfs      f0, 0xd8(r3)
	fsubs    f0, f0, f3
	stfs     f0, 0xd8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800375E4
 * Size:	0000E0
 */
J2DPane::~J2DPane()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	or.      r29, r3, r3
	beq      lbl_800376A4
	lis      r3, __vt__7J2DPane@ha
	addi     r0, r3, __vt__7J2DPane@l
	stw      r0, 0(r29)
	lwz      r31, 0xdc(r29)
	cmplwi   r31, 0
	beq      lbl_8003765C
	addi     r31, r31, -12
	b        lbl_8003765C

lbl_80037628:
	lwz      r4, 0x18(r31)
	cmplwi   r4, 0
	beq      lbl_80037638
	addi     r4, r4, -12

lbl_80037638:
	lwz      r3, 0xc(r31)
	mr       r31, r4
	cmplwi   r3, 0
	beq      lbl_8003765C
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8003765C:
	cmplwi   r31, 0
	bne      lbl_80037628
	addic.   r0, r29, 0xdc
	beq      lbl_80037694
	addic.   r0, r29, 0xe8
	beq      lbl_80037680
	addi     r3, r29, 0xe8
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_80037680:
	addic.   r0, r29, 0xdc
	beq      lbl_80037694
	addi     r3, r29, 0xdc
	li       r4, 0
	bl       __dt__10JSUPtrListFv

lbl_80037694:
	extsh.   r0, r30
	ble      lbl_800376A4
	mr       r3, r29
	bl       __dl__FPv

lbl_800376A4:
	lwz      r0, 0x24(r1)
	mr       r3, r29
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800376C4
 * Size:	0000B8
 */
u32 J2DPane::appendChild(J2DPane* child)
{
	if (child == nullptr) {
		return 0;
	}
	J2DPane* oldParent = child->getParentPane();
	// JSUPtrLink* link   = child->m_tree.m_list.m_head;
	// if (link) {
	// 	link = &child->m_tree.m_link;
	// }
	// bool appendResult = m_tree.m_list.append(link);
	// if (appendResult && oldParent == nullptr) {
	// 	child->add(_020.minX, _020.minY);
	// 	calcMtx();
	// }
	// return appendResult;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	or.      r29, r4, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	bne      lbl_800376F4
	li       r3, 0
	b        lbl_8003775C

lbl_800376F4:
	mr       r3, r29
	bl       getParentPane__7J2DPaneFv
	addic.   r4, r29, 0xdc
	mr       r31, r3
	beq      lbl_8003770C
	addi     r4, r4, 0xc

lbl_8003770C:
	addi     r3, r28, 0xdc
	bl       append__10JSUPtrListFP10JSUPtrLink
	clrlwi.  r0, r3, 0x18
	mr       r30, r3
	beq      lbl_80037758
	cmplwi   r31, 0
	bne      lbl_80037758
	mr       r3, r29
	lfs      f1, 0x20(r28)
	lwz      r12, 0(r29)
	lfs      f2, 0x24(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_80037758:
	mr       r3, r30

lbl_8003775C:
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
 * Address:	8003777C
 * Size:	0000B8
 */
u32 J2DPane::prependChild(J2DPane*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	or.      r29, r4, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	bne      lbl_800377AC
	li       r3, 0
	b        lbl_80037814

lbl_800377AC:
	mr       r3, r29
	bl       getParentPane__7J2DPaneFv
	addic.   r4, r29, 0xdc
	mr       r31, r3
	beq      lbl_800377C4
	addi     r4, r4, 0xc

lbl_800377C4:
	addi     r3, r28, 0xdc
	bl       prepend__10JSUPtrListFP10JSUPtrLink
	clrlwi.  r0, r3, 0x18
	mr       r30, r3
	beq      lbl_80037810
	cmplwi   r31, 0
	bne      lbl_80037810
	mr       r3, r29
	lfs      f1, 0x20(r28)
	lwz      r12, 0(r29)
	lfs      f2, 0x24(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_80037810:
	mr       r3, r30

lbl_80037814:
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
 * Address:	........
 * Size:	0000DC
 */
void J2DPane::insertChild(J2DPane*, J2DPane*) { }

/*
 * --INFO--
 * Address:	80037834
 * Size:	0000A4
 */
u32 J2DPane::removeChild(J2DPane*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	or.      r30, r4, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	bne      lbl_80037860
	li       r3, 0
	b        lbl_800378BC

lbl_80037860:
	addic.   r4, r30, 0xdc
	beq      lbl_8003786C
	addi     r4, r4, 0xc

lbl_8003786C:
	addi     r3, r29, 0xdc
	bl       remove__10JSUPtrListFP10JSUPtrLink
	clrlwi.  r0, r3, 0x18
	mr       r31, r3
	beq      lbl_800378B8
	mr       r3, r30
	lfs      f1, 0x20(r29)
	lwz      r12, 0(r30)
	lfs      f0, 0x24(r29)
	fneg     f1, f1
	lwz      r12, 0x14(r12)
	fneg     f2, f0
	mtctr    r12
	bctrl
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_800378B8:
	mr       r3, r31

lbl_800378BC:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800378D8
 * Size:	000658
 */
void J2DPane::draw(float, float, const J2DGrafContext*, bool, bool)
{
	/*
	stwu     r1, -0x180(r1)
	mflr     r0
	stw      r0, 0x184(r1)
	stfd     f31, 0x170(r1)
	psq_st   f31, 376(r1), 0, qr0
	stfd     f30, 0x160(r1)
	psq_st   f30, 360(r1), 0, qr0
	stmw     r14, 0x118(r1)
	clrlwi.  r0, r6, 0x18
	fmr      f30, f1
	fmr      f31, f2
	mr       r28, r3
	mr       r29, r4
	mr       r30, r5
	li       r31, 0
	beq      lbl_80037928
	lbz      r0, 0xb0(r28)
	cmplwi   r0, 0
	beq      lbl_80037928
	li       r31, 1

lbl_80037928:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 1
	beq      lbl_80037948
	li       r30, 0

lbl_80037948:
	lwz      r3, 0xec(r28)
	li       r14, 0
	cmplwi   r3, 0
	beq      lbl_8003795C
	lwz      r14, 0xc(r3)

lbl_8003795C:
	lfs      f1, 0x28(r28)
	li       r0, 0
	lfs      f0, 0x20(r28)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8003798C
	lfs      f1, 0x2c(r28)
	lfs      f0, 0x24(r28)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8003798C
	li       r0, 1

lbl_8003798C:
	clrlwi.  r0, r0, 0x18
	beq      lbl_80037F0C
	lwz      r4, 0x20(r28)
	clrlwi.  r0, r31, 0x18
	lwz      r3, 0x24(r28)
	stw      r4, 0x30(r28)
	stw      r3, 0x34(r28)
	lwz      r3, 0x28(r28)
	lwz      r0, 0x2c(r28)
	stw      r3, 0x38(r28)
	stw      r0, 0x3c(r28)
	lfs      f1, 0xd4(r28)
	lfs      f0, 0x30(r28)
	lfs      f2, 0xd8(r28)
	fadds    f0, f0, f1
	stfs     f0, 0x30(r28)
	lfs      f0, 0x34(r28)
	fadds    f0, f0, f2
	stfs     f0, 0x34(r28)
	lfs      f0, 0x38(r28)
	fadds    f0, f0, f1
	stfs     f0, 0x38(r28)
	lfs      f0, 0x3c(r28)
	fadds    f0, f0, f2
	stfs     f0, 0x3c(r28)
	beq      lbl_80037A28
	lwz      r4, 0x20(r28)
	mr       r3, r28
	lwz      r0, 0x24(r28)
	stw      r4, 0x40(r28)
	stw      r0, 0x44(r28)
	lwz      r4, 0x28(r28)
	lwz      r0, 0x2c(r28)
	stw      r4, 0x48(r28)
	stw      r0, 0x4c(r28)
	lwz      r12, 0(r28)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl

lbl_80037A28:
	cmplwi   r14, 0
	beq      lbl_80037B5C
	lfs      f2, 0x30(r14)
	addi     r3, r14, 0x80
	lfs      f1, 0x20(r14)
	addi     r4, r28, 0x50
	lfs      f0, 0x30(r28)
	addi     r5, r28, 0x80
	fsubs    f3, f2, f1
	lfs      f2, 0x34(r14)
	lfs      f1, 0x24(r14)
	fadds    f0, f0, f3
	fsubs    f1, f2, f1
	stfs     f0, 0x30(r28)
	lfs      f0, 0x34(r28)
	fadds    f0, f0, f1
	stfs     f0, 0x34(r28)
	lfs      f0, 0x38(r28)
	fadds    f0, f0, f3
	stfs     f0, 0x38(r28)
	lfs      f0, 0x3c(r28)
	fadds    f0, f0, f1
	stfs     f0, 0x3c(r28)
	bl       PSMTXConcat
	clrlwi.  r0, r31, 0x18
	beq      lbl_80037BE4
	clrlwi.  r0, r30, 0x18
	beq      lbl_80037B18
	lwz      r3, 0x30(r28)
	lwz      r0, 0x34(r28)
	stw      r3, 0x40(r28)
	stw      r0, 0x44(r28)
	lwz      r3, 0x38(r28)
	lwz      r0, 0x3c(r28)
	stw      r3, 0x48(r28)
	stw      r0, 0x4c(r28)
	lfs      f0, 0x40(r28)
	lfs      f1, 0x40(r14)
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bne      lbl_80037AD0
	stfs     f1, 0x40(r28)

lbl_80037AD0:
	lfs      f0, 0x44(r28)
	lfs      f1, 0x44(r14)
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bne      lbl_80037AE8
	stfs     f1, 0x44(r28)

lbl_80037AE8:
	lfs      f0, 0x48(r28)
	lfs      f1, 0x48(r14)
	fcmpo    cr0, f0, f1
	cror     2, 1, 2
	bne      lbl_80037B00
	stfs     f1, 0x48(r28)

lbl_80037B00:
	lfs      f0, 0x4c(r28)
	lfs      f1, 0x4c(r14)
	fcmpo    cr0, f0, f1
	cror     2, 1, 2
	bne      lbl_80037B18
	stfs     f1, 0x4c(r28)

lbl_80037B18:
	lbz      r0, 0xb2(r28)
	stb      r0, 0xb3(r28)
	lbz      r0, 0xb4(r28)
	cmplwi   r0, 0
	beq      lbl_80037BE4
	lbz      r4, 0xb2(r28)
	lis      r3, 0x80808081@ha
	lbz      r0, 0xb3(r14)
	addi     r3, r3, 0x80808081@l
	mullw    r0, r4, r0
	mulhw    r3, r3, r0
	add      r0, r3, r0
	srawi    r0, r0, 7
	srwi     r3, r0, 0x1f
	add      r0, r0, r3
	stb      r0, 0xb3(r28)
	b        lbl_80037BE4

lbl_80037B5C:
	lfs      f0, 0x30(r28)
	mr       r3, r28
	fadds    f0, f0, f30
	stfs     f0, 0x30(r28)
	lfs      f0, 0x34(r28)
	fadds    f0, f0, f31
	stfs     f0, 0x34(r28)
	lfs      f0, 0x38(r28)
	fadds    f0, f0, f30
	stfs     f0, 0x38(r28)
	lfs      f0, 0x3c(r28)
	fadds    f0, f0, f31
	stfs     f0, 0x3c(r28)
	lwz      r12, 0(r28)
	lfs      f1, 0xd4(r28)
	lfs      f0, 0xd8(r28)
	lwz      r12, 0x44(r12)
	fadds    f1, f1, f30
	fadds    f2, f0, f31
	mtctr    r12
	bctrl
	addi     r3, r28, 0x50
	addi     r4, r28, 0x80
	bl       PSMTXCopy
	lwz      r3, 0x30(r28)
	lwz      r0, 0x34(r28)
	stw      r3, 0x40(r28)
	stw      r0, 0x44(r28)
	lwz      r3, 0x38(r28)
	lwz      r0, 0x3c(r28)
	stw      r3, 0x48(r28)
	stw      r0, 0x4c(r28)
	lbz      r0, 0xb2(r28)
	stb      r0, 0xb3(r28)

lbl_80037BE4:
	lfs      f0, lbl_805167C0@sda21(r2)
	clrlwi.  r0, r31, 0x18
	stfs     f0, 8(r1)
	stfs     f0, 0xc(r1)
	stfs     f0, 0x10(r1)
	stfs     f0, 0x14(r1)
	beq      lbl_80037C18
	clrlwi.  r0, r30, 0x18
	beq      lbl_80037C18
	mr       r3, r29
	addi     r4, r1, 8
	addi     r5, r28, 0x40
	bl
"scissorBounds__13J2DOrthoGraphFPQ29JGeometry8TBox2<f>PCQ29JGeometry8TBox2<f>"

lbl_80037C18:
	clrlwi.  r0, r31, 0x18
	beq      lbl_80037EC4
	lfs      f1, 0x48(r28)
	li       r0, 0
	lfs      f0, 0x40(r28)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80037C50
	lfs      f1, 0x4c(r28)
	lfs      f0, 0x44(r28)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80037C50
	li       r0, 1

lbl_80037C50:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80037C60
	clrlwi.  r0, r30, 0x18
	bne      lbl_80037EC4

lbl_80037C60:
	lwz      r15, 0x88(r29)
	lis      r3, __vt__14J2DGrafContext@ha
	addi     r16, r3, __vt__14J2DGrafContext@l
	lwz      r0, 0x80(r29)
	stw      r15, 0x110(r1)
	lwz      r15, 0x8c(r29)
	stw      r0, 0x98(r1)
	lwz      r0, 0x110(r1)
	stw      r15, 0xd4(r1)
	lwz      r15, 0x90(r29)
	stw      r0, 0xa0(r1)
	lwz      r0, 0xd4(r1)
	stw      r15, 0xd8(r1)
	lwz      r15, 0x94(r29)
	stw      r0, 0xa4(r1)
	lwz      r0, 0xd8(r1)
	stw      r15, 0xdc(r1)
	lwz      r15, 0x98(r29)
	stw      r0, 0xa8(r1)
	lwz      r0, 0xdc(r1)
	stw      r15, 0xe0(r1)
	lwz      r15, 0x9c(r29)
	stw      r0, 0xac(r1)
	lwz      r0, 0xe0(r1)
	stw      r15, 0xe4(r1)
	lwz      r15, 0xa0(r29)
	stw      r0, 0xb0(r1)
	lwz      r0, 0xe4(r1)
	stw      r15, 0xe8(r1)
	lwz      r15, 0xa4(r29)
	stw      r0, 0xb4(r1)
	lwz      r0, 0xe8(r1)
	stw      r15, 0xec(r1)
	lwz      r15, 0xa8(r29)
	stw      r0, 0xb8(r1)
	lwz      r0, 0xec(r1)
	stw      r15, 0xf0(r1)
	lwz      r15, 0xac(r29)
	stw      r0, 0xbc(r1)
	lwz      r0, 0xf0(r1)
	stw      r15, 0xf4(r1)
	lhz      r15, 0xb0(r29)
	stw      r0, 0xc0(r1)
	lwz      r0, 0xf4(r1)
	stw      r15, 0xf8(r1)
	lbz      r15, 0xb2(r29)
	stw      r0, 0xc4(r1)
	lwz      r0, 0xf8(r1)
	stw      r15, 0xfc(r1)
	lhz      r15, 0xb3(r29)
	sth      r0, 0xc8(r1)
	lwz      r0, 0xfc(r1)
	stw      r15, 0x100(r1)
	lbz      r15, 0xb5(r29)
	stb      r0, 0xca(r1)
	lwz      r0, 0x100(r1)
	stw      r15, 0x104(r1)
	lhz      r15, 0xb6(r29)
	sth      r0, 0xcb(r1)
	lwz      r0, 0x104(r1)
	stw      r15, 0x108(r1)
	lbz      r15, 0xb8(r29)
	stb      r0, 0xcd(r1)
	lwz      r0, 0x108(r1)
	lfs      f9, 4(r29)
	lfs      f8, 8(r29)
	lfs      f7, 0xc(r29)
	lfs      f6, 0x10(r29)
	lfs      f5, 0x14(r29)
	lfs      f4, 0x18(r29)
	lfs      f3, 0x1c(r29)
	lfs      f2, 0x20(r29)
	lwz      r17, 0x24(r29)
	lwz      r18, 0x28(r29)
	lwz      r19, 0x2c(r29)
	lwz      r20, 0x30(r29)
	lbz      r21, 0x34(r29)
	lfs      f1, 0x38(r29)
	lfs      f0, 0x3c(r29)
	lwz      r22, 0x40(r29)
	lwz      r23, 0x44(r29)
	lwz      r24, 0x48(r29)
	lwz      r25, 0x4c(r29)
	lwz      r26, 0x50(r29)
	lwz      r27, 0x54(r29)
	lwz      r12, 0x58(r29)
	lwz      r11, 0x5c(r29)
	lwz      r10, 0x60(r29)
	lwz      r9, 0x64(r29)
	lwz      r8, 0x68(r29)
	lwz      r7, 0x6c(r29)
	lwz      r6, 0x70(r29)
	lwz      r5, 0x74(r29)
	lwz      r4, 0x78(r29)
	lwz      r3, 0x7c(r29)
	lwz      r14, 0x84(r29)
	sth      r0, 0xce(r1)
	mr       r0, r15
	stw      r15, 0x10c(r1)
	stw      r16, 0x18(r1)
	stfs     f9, 0x1c(r1)
	stfs     f8, 0x20(r1)
	stfs     f7, 0x24(r1)
	stfs     f6, 0x28(r1)
	stfs     f5, 0x2c(r1)
	stfs     f4, 0x30(r1)
	stfs     f3, 0x34(r1)
	stfs     f2, 0x38(r1)
	stw      r17, 0x3c(r1)
	stw      r18, 0x40(r1)
	stw      r19, 0x44(r1)
	stw      r20, 0x48(r1)
	stb      r21, 0x4c(r1)
	stfs     f1, 0x50(r1)
	stfs     f0, 0x54(r1)
	stw      r22, 0x58(r1)
	stw      r23, 0x5c(r1)
	stw      r24, 0x60(r1)
	stw      r25, 0x64(r1)
	stw      r26, 0x68(r1)
	stw      r27, 0x6c(r1)
	stw      r12, 0x70(r1)
	stw      r11, 0x74(r1)
	stw      r10, 0x78(r1)
	stw      r9, 0x7c(r1)
	stw      r8, 0x80(r1)
	stw      r7, 0x84(r1)
	stw      r6, 0x88(r1)
	stw      r5, 0x8c(r1)
	stw      r4, 0x90(r1)
	stw      r3, 0x94(r1)
	stw      r14, 0x9c(r1)
	stb      r0, 0xd0(r1)
	clrlwi.  r0, r30, 0x18
	beq      lbl_80037E90
	addi     r3, r1, 0x18
	addi     r4, r1, 8
	bl       "scissor__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
	addi     r3, r1, 0x18
	bl       setScissor__14J2DGrafContextFv

lbl_80037E90:
	lbz      r3, 0xb1(r28)
	bl       GXSetCullMode
	lwz      r12, 0(r28)
	fmr      f1, f30
	fmr      f2, f31
	mr       r3, r28
	lwz      r12, 0x38(r12)
	addi     r4, r1, 0x98
	mtctr    r12
	bctrl
	lis      r3, __vt__14J2DGrafContext@ha
	addi     r0, r3, __vt__14J2DGrafContext@l
	stw      r0, 0x18(r1)

lbl_80037EC4:
	lwz      r14, 0xdc(r28)
	cmplwi   r14, 0
	beq      lbl_80037F04
	addi     r14, r14, -12
	b        lbl_80037F04

lbl_80037ED8:
	lfs      f1, lbl_805167C0@sda21(r2)
	mr       r4, r29
	lwz      r3, 0xc(r14)
	mr       r5, r30
	fmr      f2, f1
	mr       r6, r31
	bl       draw__7J2DPaneFffPC14J2DGrafContextbb
	lwz      r14, 0x18(r14)
	cmplwi   r14, 0
	beq      lbl_80037F04
	addi     r14, r14, -12

lbl_80037F04:
	cmplwi   r14, 0
	bne      lbl_80037ED8

lbl_80037F0C:
	psq_l    f31, 376(r1), 0, qr0
	lfd      f31, 0x170(r1)
	psq_l    f30, 360(r1), 0, qr0
	lfd      f30, 0x160(r1)
	lmw      r14, 0x118(r1)
	lwz      r0, 0x184(r1)
	mtlr     r0
	addi     r1, r1, 0x180
	blr
	*/
}

/*
 * --INFO--
 * Address:	80037F30
 * Size:	000004
 */
void J2DPane::drawSelf(float, float, float (*)[3][4]) { }

/*
 * --INFO--
 * Address:	80037F34
 * Size:	000004
 */
void J2DPane::rewriteAlpha() { }

/*
 * --INFO--
 * Address:	80037F38
 * Size:	000248
 */
void J2DPane::place(const JGeometry::TBox2f&)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stfd     f29, 0x20(r1)
	psq_st   f29, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	lfs      f1, lbl_805167C0@sda21(r2)
	lfs      f0, 0x20(r3)
	fcmpu    cr0, f1, f0
	bne      lbl_80037F94
	lfs      f2, 0(r4)
	lfs      f0, 8(r4)
	stfs     f1, 8(r1)
	fsubs    f0, f0, f2
	stfs     f2, 0xd4(r30)
	stfs     f0, 0x10(r1)
	b        lbl_80037FEC

lbl_80037F94:
	lfs      f0, 0x28(r30)
	fcmpu    cr0, f1, f0
	bne      lbl_80037FC0
	lfs      f2, 8(r4)
	lfs      f0, 0(r4)
	stfs     f1, 0x10(r1)
	fsubs    f0, f2, f0
	stfs     f2, 0xd4(r30)
	fneg     f0, f0
	stfs     f0, 8(r1)
	b        lbl_80037FEC

lbl_80037FC0:
	lfs      f0, 8(r4)
	lfs      f3, 0(r4)
	lfs      f1, lbl_805167D8@sda21(r2)
	fsubs    f2, f0, f3
	fadds    f0, f3, f0
	fmuls    f2, f2, f1
	fmuls    f0, f0, f1
	fneg     f1, f2
	stfs     f2, 0x10(r1)
	stfs     f0, 0xd4(r30)
	stfs     f1, 8(r1)

lbl_80037FEC:
	lfs      f1, lbl_805167C0@sda21(r2)
	lfs      f0, 0x24(r30)
	fcmpu    cr0, f1, f0
	bne      lbl_80038018
	lfs      f2, 4(r4)
	lfs      f0, 0xc(r4)
	stfs     f1, 0xc(r1)
	fsubs    f0, f0, f2
	stfs     f2, 0xd8(r30)
	stfs     f0, 0x14(r1)
	b        lbl_80038070

lbl_80038018:
	lfs      f0, 0x2c(r30)
	fcmpu    cr0, f1, f0
	bne      lbl_80038044
	lfs      f2, 0xc(r4)
	lfs      f0, 4(r4)
	stfs     f1, 0x14(r1)
	fsubs    f0, f2, f0
	stfs     f2, 0xd8(r30)
	fneg     f0, f0
	stfs     f0, 0xc(r1)
	b        lbl_80038070

lbl_80038044:
	lfs      f0, 0xc(r4)
	lfs      f3, 4(r4)
	lfs      f1, lbl_805167D8@sda21(r2)
	fsubs    f2, f0, f3
	fadds    f0, f3, f0
	fmuls    f2, f2, f1
	fmuls    f0, f0, f1
	fneg     f1, f2
	stfs     f2, 0x14(r1)
	stfs     f0, 0xd8(r30)
	stfs     f1, 0xc(r1)

lbl_80038070:
	lfs      f3, 8(r1)
	mr       r3, r30
	lfs      f2, 0x20(r30)
	lfs      f1, 0xc(r1)
	lfs      f0, 0x24(r30)
	fsubs    f30, f3, f2
	fsubs    f29, f1, f0
	bl       getFirstChildPane__7J2DPaneFv
	lfs      f31, lbl_805167C0@sda21(r2)
	mr       r31, r3
	b        lbl_800380E4

lbl_8003809C:
	lfs      f0, 0xd4(r31)
	fcmpu    cr0, f31, f30
	fadds    f0, f0, f30
	stfs     f0, 0xd4(r31)
	lfs      f0, 0xd8(r31)
	fadds    f0, f0, f29
	stfs     f0, 0xd8(r31)
	bne      lbl_800380C4
	fcmpu    cr0, f31, f29
	beq      lbl_800380D8

lbl_800380C4:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_800380D8:
	mr       r3, r31
	bl       getNextChildPane__7J2DPaneFv
	mr       r31, r3

lbl_800380E4:
	cmplwi   r31, 0
	bne      lbl_8003809C
	lwz      r4, 8(r1)
	mr       r3, r30
	lwz      r0, 0xc(r1)
	stw      r4, 0x20(r30)
	lwz      r4, 0x10(r1)
	stw      r0, 0x24(r30)
	lwz      r0, 0x14(r1)
	stw      r4, 0x28(r30)
	stw      r0, 0x2c(r30)
	bl       getParentPane__7J2DPaneFv
	cmplwi   r3, 0
	beq      lbl_8003813C
	lfs      f1, 0xd4(r30)
	lfs      f0, 0x20(r3)
	fadds    f0, f1, f0
	stfs     f0, 0xd4(r30)
	lfs      f1, 0xd8(r30)
	lfs      f0, 0x24(r3)
	fadds    f0, f1, f0
	stfs     f0, 0xd8(r30)

lbl_8003813C:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	psq_l    f29, 40(r1), 0, qr0
	lfd      f29, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x54(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80038180
 * Size:	000054
 */
void J2DPane::move(float x, float y)
{
	// place(JGeometry::TBox2f(JGeometry::TVec2f(x + (_020.maxX - _020.minX), y + (_020.maxY - _020.minY)), JGeometry::TVec2f(x, y)));
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	addi     r4, r1, 8
	lfs      f5, 0x28(r3)
	lfs      f4, 0x20(r3)
	lfs      f3, 0x2c(r3)
	lfs      f0, 0x24(r3)
	fsubs    f4, f5, f4
	fsubs    f0, f3, f0
	stfs     f1, 8(r1)
	fadds    f1, f1, f4
	stfs     f2, 0xc(r1)
	fadds    f0, f2, f0
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	bl       "place__7J2DPaneFRCQ29JGeometry8TBox2<f>"
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800381D4
 * Size:	000044
 */
void J2DPane::add(float x, float y)
{
	// _0D4[0] = _0D4[0] + x;
	// _0D4[1] = _0D4[1] + y;
	_0D4.add(JGeometry::TVec2f(x, y));
	calcMtx();
}

/*
 * --INFO--
 * Address:	80038218
 * Size:	000108
 */
void J2DPane::resize(float, float)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	fmr      f30, f1
	lfs      f3, 0x20(r3)
	fmr      f31, f2
	stfs     f3, 8(r1)
	lfs      f2, 0x24(r3)
	stfs     f2, 0xc(r1)
	lfs      f1, 0x28(r3)
	stfs     f1, 0x10(r1)
	lfs      f0, 0x2c(r3)
	stfs     f0, 0x14(r1)
	lfs      f5, 0xd8(r3)
	lfs      f4, 0xd4(r3)
	fadds    f2, f2, f5
	fadds    f3, f3, f4
	fadds    f1, f1, f4
	fadds    f0, f0, f5
	stfs     f2, 0xc(r1)
	stfs     f3, 8(r1)
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	bl       getParentPane__7J2DPaneFv
	cmplwi   r3, 0
	beq      lbl_800382D8
	lfs      f0, 0x24(r3)
	lfs      f1, 0x20(r3)
	fneg     f5, f0
	lfs      f2, 0xc(r1)
	lfs      f0, 0x14(r1)
	fneg     f4, f1
	lfs      f3, 8(r1)
	lfs      f1, 0x10(r1)
	fadds    f3, f3, f4
	fadds    f2, f2, f5
	fadds    f1, f1, f4
	fadds    f0, f0, f5
	stfs     f3, 8(r1)
	stfs     f2, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)

lbl_800382D8:
	lfs      f1, 8(r1)
	mr       r3, r31
	lfs      f0, 0xc(r1)
	addi     r4, r1, 8
	fadds    f1, f1, f30
	fadds    f0, f0, f31
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	bl       "place__7J2DPaneFRCQ29JGeometry8TBox2<f>"
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r0, 0x44(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80038320
 * Size:	0000E0
 */
JGeometry::TBox2f* J2DPane::getBounds()
{
	static_mBounds = _020;
	static_mBounds.addPos(_0D4);
	// static_mBounds  = _020.addingPos(_0D4);
	J2DPane* parent = getParentPane();
	if (parent != nullptr) {
		static_mBounds.addPos(-parent->_020.i.x, -parent->_020.i.y);
	}
	return &static_mBounds;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, static_mBounds__7J2DPane@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r5, static_mBounds__7J2DPane@l
	lwz      r4, 0x20(r3)
	lwz      r0, 0x24(r3)
	stw      r4, 0(r31)
	stw      r0, 4(r31)
	lfs      f3, 0(r31)
	lwz      r4, 0x28(r3)
	lwz      r0, 0x2c(r3)
	lfs      f2, 4(r31)
	stw      r4, 8(r31)
	stw      r0, 0xc(r31)
	lfs      f1, 8(r31)
	lfs      f4, 0xd4(r3)
	lfs      f5, 0xd8(r3)
	lfs      f0, 0xc(r31)
	fadds    f3, f3, f4
	fadds    f2, f2, f5
	fadds    f1, f1, f4
	fadds    f0, f0, f5
	stfs     f3, 0(r31)
	stfs     f2, 4(r31)
	stfs     f1, 8(r31)
	stfs     f0, 0xc(r31)
	bl       getParentPane__7J2DPaneFv
	cmplwi   r3, 0
	beq      lbl_800383E4
	lfs      f0, 0x24(r3)
	lis      r4, static_mBounds__7J2DPane@ha
	lfs      f1, 0x20(r3)
	addi     r3, r4, static_mBounds__7J2DPane@l
	fneg     f5, f0
	lfs      f2, 4(r31)
	lfs      f0, 0xc(r31)
	fneg     f4, f1
	lfs      f3, 0(r3)
	lfs      f1, 8(r31)
	fadds    f3, f3, f4
	fadds    f2, f2, f5
	fadds    f1, f1, f4
	fadds    f0, f0, f5
	stfs     f3, 0(r3)
	stfs     f2, 4(r31)
	stfs     f1, 8(r31)
	stfs     f0, 0xc(r31)

lbl_800383E4:
	lwz      r0, 0x14(r1)
	lis      r3, static_mBounds__7J2DPane@ha
	addi     r3, r3, static_mBounds__7J2DPane@l
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80038400
 * Size:	000030
 */
void J2DPane::rotate(float anchorX, float anchorY, J2DRotateAxis axis, float f4)
{
	m_anchorPoint.x     = anchorX;
	m_anchorPoint.y     = anchorY;
	m_rotationAxisMaybe = (u8)axis;
	rotate(f4);
}

/*
 * --INFO--
 * Address:	80038430
 * Size:	000058
 * rotate__7J2DPaneFf
 * TODO: Can't verify this with genasm.sh
 */
void J2DPane::rotate(float f1)
{
	if (m_rotationAxisMaybe == 0x78) {
		_0B8 = f1;
	} else {
		if (m_rotationAxisMaybe == 0x79) {
			_0BC = f1;
		} else {
			_0C0 = f1;
		}
	}
	calcMtx();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lbz      r0, 0xb6(r3)
	extsb    r0, r0
	cmpwi    r0, 0x78
	bne      lbl_80038454
	stfs     f1, 0xb8(r3)
	b        lbl_80038468

lbl_80038454:
	cmpwi    r0, 0x79
	bne      lbl_80038464
	stfs     f1, 0xbc(r3)
	b        lbl_80038468

lbl_80038464:
	stfs     f1, 0xc0(r3)

lbl_80038468:
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
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
 * Address:	........
 * Size:	000030
 */
float J2DPane::getRotate() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80038488
 * Size:	00007C
 */
void J2DPane::clip(const JGeometry::TBox2<float>& box)
{
	if (_040 <= box.i.x + _030) {
		_040 = box.i.x + _030;
	}
	if (_044 <= box.i.y + _034) {
		_044 = box.i.y + _034;
	}
	if (_048 > box.f.x + _030) {
		_048 = box.f.x + _030;
	}
	if (_04C > box.f.y + _034) {
		_04C = box.f.y + _034;
	}
	/*
	lfs      f2, 0(r4)
	lfs      f1, 0x30(r3)
	lfs      f4, 8(r4)
	fadds    f2, f2, f1
	lfs      f0, 0x40(r3)
	lfs      f3, 4(r4)
	fadds    f4, f4, f1
	lfs      f1, 0x34(r3)
	lfs      f5, 0xc(r4)
	fcmpo    cr0, f0, f2
	fadds    f3, f3, f1
	fadds    f5, f5, f1
	cror     2, 0, 2
	bne      lbl_800384C4
	stfs     f2, 0x40(r3)

lbl_800384C4:
	lfs      f0, 0x44(r3)
	fcmpo    cr0, f0, f3
	cror     2, 0, 2
	bne      lbl_800384D8
	stfs     f3, 0x44(r3)

lbl_800384D8:
	lfs      f0, 0x48(r3)
	fcmpo    cr0, f0, f4
	cror     2, 1, 2
	bne      lbl_800384EC
	stfs     f4, 0x48(r3)

lbl_800384EC:
	lfs      f0, 0x4c(r3)
	fcmpo    cr0, f0, f5
	cror     2, 1, 2
	bnelr
	stfs     f5, 0x4c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80038504
 * Size:	0000B0
 */
J2DPane* J2DPane::search(u64)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r6
	lwz      r0, 0x10(r3)
	lwz      r4, 0x14(r3)
	xor      r0, r30, r0
	xor      r4, r29, r4
	or.      r0, r4, r0
	bne      lbl_80038540
	b        lbl_80038598

lbl_80038540:
	lwz      r31, 0xdc(r3)
	cmplwi   r31, 0
	beq      lbl_8003858C
	addi     r31, r31, -12
	b        lbl_8003858C

lbl_80038554:
	lwz      r3, 0xc(r31)
	mr       r6, r29
	mr       r5, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_8003857C
	b        lbl_80038598

lbl_8003857C:
	lwz      r31, 0x18(r31)
	cmplwi   r31, 0
	beq      lbl_8003858C
	addi     r31, r31, -12

lbl_8003858C:
	cmplwi   r31, 0
	bne      lbl_80038554
	li       r3, 0

lbl_80038598:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800385B4
 * Size:	000310
 */
void J2DPane::gather(J2DPane** gatheredPanes, u64 minID, u64 maxID, int gatheredLimit, int& gatheredCount)
{
	if (minID <= m_tag && m_tag <= maxID) {
		if (gatheredCount < gatheredLimit) {
			gatheredPanes[gatheredCount] = this;
		}
		gatheredCount++;
	}

	for (JSUTreeIterator<J2DPane> iterator(m_tree.getFirstChild()); iterator != m_tree.getEndChild(); ++iterator) {
		iterator->gather(gatheredPanes, minID, maxID, gatheredLimit, gatheredCount);
	}
}

/*
 * @generated{getNextChild__17JSUTree<7J2DPane>CFv}
 * --INFO--
 * Address:	800388C4
 * Size:	000014
 */
// template <> J2DPane* JSUTree<J2DPane>::getNextChild() const
// {
// 	/*
// 	lwz      r3, 0x18(r3)
// 	cmplwi   r3, 0
// 	beqlr
// 	addi     r3, r3, -12
// 	blr
// 	*/
// }

/*
 * @generated{__ne__25JSUTreeIterator<7J2DPane>CFPC17JSUTree<7J2DPane>}
 * --INFO--
 * Address:	800388D8
 * Size:	000018
 */
// template <>
// bool JSUTreeIterator<J2DPane>::operator!=(const JSUTree<J2DPane>*) const
// {
// 	/*
// 	lwz      r0, 0(r3)
// 	subf     r3, r0, r4
// 	subf     r0, r4, r0
// 	or       r0, r3, r0
// 	srwi     r3, r0, 0x1f
// 	blr
// 	*/
// }

/*
 * @generated{getEndChild__17JSUTree<7J2DPane>CFv}
 * --INFO--
 * Address:	800388F0
 * Size:	000008
 */
// template <> J2DPane* JSUTree<J2DPane>::getEndChild() const { return nullptr; }

/*
 * @generated{__pp__25JSUTreeIterator<7J2DPane>Fv}
 * --INFO--
 * Address:	800388F8
 * Size:	00001C
 */
// template <> void JSUTreeIterator<J2DPane>::operator++()
// {
// 	/*
// 	lwz      r4, 0(r3)
// 	lwz      r4, 0x18(r4)
// 	cmplwi   r4, 0
// 	beq      lbl_8003890C
// 	addi     r4, r4, -12

// lbl_8003890C:
// 	stw      r4, 0(r3)
// 	blr
// 	*/
// }

/*
 * @generated{__ct__25JSUTreeIterator<7J2DPane>FP17JSUTree<7J2DPane>}
 * --INFO--
 * Address:	80038914
 * Size:	000008
 */
// template <> JSUTreeIterator<J2DPane>::JSUTreeIterator(JSUTree<J2DPane>* a1)
// {
// 	// Generated from stw r4, 0x0(r3)
// 	m_tree = a1;
// }

/*
 * @generated{__rf__25JSUTreeIterator<7J2DPane>CFv}
 * --INFO--
 * Address:	8003891C
 * Size:	00000C
 */
// template <> J2DPane* JSUTreeIterator<J2DPane>::operator->() const
// {
// 	/*
// 	lwz      r3, 0(r3)
// 	lwz      r3, 0xc(r3)
// 	blr
// 	*/
// }

/*
 * @generated{getFirstChild__17JSUTree<7J2DPane>CFv}
 * --INFO--
 * Address:	80038928
 * Size:	000014
 */
// template <> J2DPane* JSUTree<J2DPane>::getFirstChild() const
// {
// 	/*
// 	lwz      r3, 0(r3)
// 	cmplwi   r3, 0
// 	beqlr
// 	addi     r3, r3, -12
// 	blr
// 	*/
// }

/*
 * @generated{getObject__17JSUTree<7J2DPane>CFv}
 * --INFO--
 * Address:	8003893C
 * Size:	000008
 */
// template <> J2DPane* JSUTree<J2DPane>::getObject() const
// {
// 	/*
// 	lwz      r3, 0xc(r3)
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80038944
 * Size:	0000B0
 */
J2DPane* J2DPane::searchUserInfo(u64 id)
{
	if (id == m_messageID) {
		return this;
	}
	for (JSUTreeIterator<J2DPane> iterator(m_tree.getFirstChild()); iterator != nullptr; iterator++) {
		J2DPane* results = iterator->searchUserInfo(id);
		if (results != nullptr) {
			return results;
		}
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000310
 */
void J2DPane::gatherUserInfo(J2DPane**, u64, u64, int, int&)
{
	// UNUSED FUNCTIOM
}

/*
 * --INFO--
 * Address:	800389F4
 * Size:	000088
 */
bool J2DPane::isUsed(const ResTIMG* resource)
{
	for (JSUTreeIterator<J2DPane> iterator(m_tree.getFirstChild()); iterator != nullptr; iterator++) {
		if (iterator->isUsed(resource)) {
			return true;
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	80038A7C
 * Size:	000088
 * isUsed__7J2DPaneFPC7ResFONT
 */
bool J2DPane::isUsed(const ResFONT* resource)
{
	for (JSUTreeIterator<J2DPane> iterator(m_tree.getFirstChild()); iterator != nullptr; iterator++) {
		if (iterator->isUsed(resource)) {
			return true;
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	80038B04
 * Size:	000140
 */
void J2DPane::makeMatrix(float f1, float f2, float f3, float f4)
{
	Mtx mtx6;
	Mtx trans;
	Mtx mtx4;
	Mtx mtx3;
	Mtx mtx2;
	Mtx mtx1;
	float x = m_anchorPoint.x - f3;
	float y = m_anchorPoint.y - f4;
	PSMTXTrans(trans, -x, -y, 0.0f);
	PSMTXRotRad(mtx1, 0x78, _0B8 * 0.01745329f);
	PSMTXRotRad(mtx2, 0x79, _0BC * 0.01745329f);
	PSMTXRotRad(mtx3, 0x7A, _0C0 * 0.01745329f);
	PSMTXConcat(mtx3, mtx1, mtx6);
	PSMTXConcat(mtx2, mtx6, mtx4);
	PSMTXScaleApply(trans, _050, m_scale.x, m_scale.y, 1.0f);
	PSMTXConcat(mtx4, _050, mtx6);
	PSMTXTransApply(mtx6, _050, f1 + x, f2 + y, 0.0f);

	/*
	stwu     r1, -0x170(r1)
	mflr     r0
	stw      r0, 0x174(r1)
	stfd     f31, 0x160(r1)
	psq_st   f31, 360(r1), 0, qr0
	stfd     f30, 0x150(r1)
	psq_st   f30, 344(r1), 0, qr0
	stfd     f29, 0x140(r1)
	psq_st   f29, 328(r1), 0, qr0
	stfd     f28, 0x130(r1)
	psq_st   f28, 312(r1), 0, qr0
	stw      r31, 0x12c(r1)
	mr       r31, r3
	fmr      f28, f1
	lfs      f1, 0xc4(r3)
	fmr      f29, f2
	lfs      f0, 0xc8(r3)
	addi     r3, r1, 0x38
	fsubs    f31, f1, f3
	fsubs    f30, f0, f4
	lfs      f3, lbl_805167C0@sda21(r2)
	fneg     f1, f31
	fneg     f2, f30
	bl       PSMTXTrans
	lfs      f1, lbl_805167DC@sda21(r2)
	addi     r3, r1, 0xf8
	lfs      f0, 0xb8(r31)
	li       r4, 0x78
	fmuls    f1, f1, f0
	bl       PSMTXRotRad
	lfs      f1, lbl_805167DC@sda21(r2)
	addi     r3, r1, 0xc8
	lfs      f0, 0xbc(r31)
	li       r4, 0x79
	fmuls    f1, f1, f0
	bl       PSMTXRotRad
	lfs      f0, 0xc0(r31)
	addi     r3, r1, 0x98
	lfs      f1, lbl_805167DC@sda21(r2)
	li       r4, 0x7a
	fneg     f0, f0
	fmuls    f1, f1, f0
	bl       PSMTXRotRad
	addi     r3, r1, 0x98
	addi     r4, r1, 0xf8
	addi     r5, r1, 8
	bl       PSMTXConcat
	addi     r3, r1, 0xc8
	addi     r4, r1, 8
	addi     r5, r1, 0x68
	bl       PSMTXConcat
	lfs      f1, 0xcc(r31)
	addi     r3, r1, 0x38
	lfs      f2, 0xd0(r31)
	addi     r4, r31, 0x50
	lfs      f3, lbl_805167C4@sda21(r2)
	bl       PSMTXScaleApply
	addi     r3, r1, 0x68
	addi     r4, r31, 0x50
	addi     r5, r1, 8
	bl       PSMTXConcat
	fadds    f1, f28, f31
	lfs      f3, lbl_805167C0@sda21(r2)
	fadds    f2, f29, f30
	addi     r3, r1, 8
	addi     r4, r31, 0x50
	bl       PSMTXTransApply
	psq_l    f31, 360(r1), 0, qr0
	lfd      f31, 0x160(r1)
	psq_l    f30, 344(r1), 0, qr0
	lfd      f30, 0x150(r1)
	psq_l    f29, 328(r1), 0, qr0
	lfd      f29, 0x140(r1)
	psq_l    f28, 312(r1), 0, qr0
	lfd      f28, 0x130(r1)
	lwz      r0, 0x174(r1)
	lwz      r31, 0x12c(r1)
	mtlr     r0
	addi     r1, r1, 0x170
	blr
	*/
}

/*
 * --INFO--
 * Address:	80038C44
 * Size:	000078
 */
void J2DPane::setCullBack(GXCullMode cullMode)
{
	m_cullMode = cullMode;
	for (JSUTreeIterator<J2DPane> iterator(m_tree.getFirstChild()); iterator != nullptr; iterator++) {
		iterator->setCullBack(cullMode);
	}
}

/*
 * --INFO--
 * Address:	80038CBC
 * Size:	0000F0
 */
void J2DPane::setBasePosition(J2DBasePosition base)
{
	m_basePosition      = base;
	m_rotationAxisMaybe = 122; // 0x7A
	m_anchorPoint.x     = 0.0f;
	if (base % 3 == 1) {
		m_anchorPoint.x = (_020.f.x - _020.i.x) * 0.5f;
	} else {
		if (base % 3 == 2) {
			m_anchorPoint.x = _020.f.x - _020.i.x;
		}
	}
	m_anchorPoint.y = 0.0f;
	if (base / 3 == 1) {
		m_anchorPoint.y = (_020.f.y - _020.i.y) * 0.5f;
	} else {
		if (base / 3 == 2) {
			m_anchorPoint.y = _020.f.y - _020.i.y;
		}
	}
	calcMtx();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, 0x55555556@ha
	lfs      f0, lbl_805167C0@sda21(r2)
	stw      r0, 0x14(r1)
	addi     r0, r5, 0x55555556@l
	mulhw    r5, r0, r4
	stb      r4, 0xb7(r3)
	li       r0, 0x7a
	stb      r0, 0xb6(r3)
	srwi     r0, r5, 0x1f
	stfs     f0, 0xc4(r3)
	add      r0, r5, r0
	mulli    r0, r0, 3
	subf     r0, r0, r4
	cmpwi    r0, 1
	bne      lbl_80038D1C
	lfs      f2, 0x28(r3)
	lfs      f1, 0x20(r3)
	lfs      f0, lbl_805167D8@sda21(r2)
	fsubs    f1, f2, f1
	fmuls    f0, f1, f0
	stfs     f0, 0xc4(r3)
	b        lbl_80038D34

lbl_80038D1C:
	cmpwi    r0, 2
	bne      lbl_80038D34
	lfs      f1, 0x28(r3)
	lfs      f0, 0x20(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0xc4(r3)

lbl_80038D34:
	lis      r5, 0x55555556@ha
	lfs      f0, lbl_805167C0@sda21(r2)
	addi     r0, r5, 0x55555556@l
	mulhw    r4, r0, r4
	stfs     f0, 0xc8(r3)
	srwi     r0, r4, 0x1f
	add      r0, r4, r0
	cmpwi    r0, 1
	bne      lbl_80038D74
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x24(r3)
	lfs      f0, lbl_805167D8@sda21(r2)
	fsubs    f1, f2, f1
	fmuls    f0, f1, f0
	stfs     f0, 0xc8(r3)
	b        lbl_80038D8C

lbl_80038D74:
	cmpwi    r0, 2
	bne      lbl_80038D8C
	lfs      f1, 0x2c(r3)
	lfs      f0, 0x24(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0xc8(r3)

lbl_80038D8C:
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
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
 * Address:	80038DAC
 * Size:	0001E4
 */
void J2DPane::setInfluencedAlpha(bool, bool)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	clrlwi.  r0, r5, 0x18
	mr       r30, r3
	mr       r31, r4
	beq      lbl_80038F5C
	lbz      r4, 0xb4(r30)
	clrlwi   r0, r31, 0x18
	cmplw    r4, r0
	beq      lbl_80038F5C
	bl       getParentPane__7J2DPaneFv
	lfd      f30, lbl_805167D0@sda21(r2)
	li       r28, 0xff
	lfs      f31, lbl_805167E0@sda21(r2)
	lis      r29, 0x4330
	b        lbl_80038E6C

lbl_80038E10:
	lbz      r5, 0xb2(r3)
	cmplwi   r5, 0
	bne      lbl_80038E24
	li       r28, 0
	b        lbl_80038E74

lbl_80038E24:
	clrlwi   r4, r28, 0x18
	lbz      r0, 0xb4(r3)
	stw      r4, 0xc(r1)
	cmplwi   r0, 0
	stw      r29, 8(r1)
	lfd      f0, 8(r1)
	stw      r5, 0x14(r1)
	fsubs    f1, f0, f30
	stw      r29, 0x10(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f30
	fmuls    f0, f1, f0
	fdivs    f0, f0, f31
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r28, 0x1c(r1)
	beq      lbl_80038E74
	bl       getParentPane__7J2DPaneFv

lbl_80038E6C:
	cmplwi   r3, 0
	bne      lbl_80038E10

lbl_80038E74:
	clrlwi.  r0, r31, 0x18
	beq      lbl_80038F0C
	clrlwi.  r5, r28, 0x18
	bne      lbl_80038EA0
	mr       r3, r30
	li       r4, 0
	lwz      r12, 0(r30)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	b        lbl_80038F5C

lbl_80038EA0:
	lbz      r4, 0xb2(r30)
	lis      r0, 0x4330
	stw      r0, 0x18(r1)
	mr       r3, r30
	lfd      f2, lbl_805167D0@sda21(r2)
	stw      r4, 0x1c(r1)
	lfs      f3, lbl_805167E0@sda21(r2)
	lfd      f0, 0x18(r1)
	stw      r5, 0x14(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x10(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fdivs    f0, f1, f0
	fmuls    f0, f3, f0
	fcmpo    cr0, f0, f3
	ble      lbl_80038EEC
	li       r4, 0xff
	b        lbl_80038EF8

lbl_80038EEC:
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r4, 0xc(r1)

lbl_80038EF8:
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	b        lbl_80038F5C

lbl_80038F0C:
	lbz      r4, 0xb2(r30)
	clrlwi   r5, r28, 0x18
	lis      r0, 0x4330
	mr       r3, r30
	mullw    r4, r5, r4
	lwz      r12, 0(r30)
	stw      r0, 0x18(r1)
	lfd      f2, lbl_805167C8@sda21(r2)
	lfs      f0, lbl_805167E0@sda21(r2)
	lwz      r12, 0x24(r12)
	xoris    r0, r4, 0x8000
	stw      r0, 0x1c(r1)
	lfd      f1, 0x18(r1)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r4, 0x14(r1)
	mtctr    r12
	bctrl

lbl_80038F5C:
	stb      r31, 0xb4(r30)
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r0, 0x54(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80038F90
 * Size:	000008
 */
void J2DPane::setAlpha(u8 alpha) { m_alpha = alpha; }

/*
 * --INFO--
 * Address:	80038F98
 * Size:	0000D8
 */
JGeometry::TVec3f J2DPane::getGlbVtx(u8) const
{
	/*
	clrlwi   r6, r5, 0x18
	stwu     r1, -0x20(r1)
	cmplwi   r6, 4
	blt      lbl_80038FD4
	lfs      f0, lbl_805167C0@sda21(r2)
	stfs     f0, 8(r1)
	stfs     f0, 0xc(r1)
	lwz      r0, 8(r1)
	stfs     f0, 0x10(r1)
	lwz      r4, 0xc(r1)
	stw      r0, 0(r3)
	lwz      r0, 0x10(r1)
	stw      r4, 4(r3)
	stw      r0, 8(r3)
	b        lbl_80039068

lbl_80038FD4:
	clrlwi.  r0, r5, 0x1f
	beq      lbl_80038FE4
	lfs      f6, 0x28(r4)
	b        lbl_80038FE8

lbl_80038FE4:
	lfs      f6, 0x20(r4)

lbl_80038FE8:
	rlwinm.  r0, r6, 0, 0x1e, 0x1e
	beq      lbl_80038FF8
	lfs      f7, 0x2c(r4)
	b        lbl_80038FFC

lbl_80038FF8:
	lfs      f7, 0x24(r4)

lbl_80038FFC:
	lfs      f0, 0x84(r4)
	lfs      f1, 0x94(r4)
	fmuls    f4, f7, f0
	lfs      f5, 0x80(r4)
	lfs      f0, 0xa4(r4)
	fmuls    f2, f7, f1
	lfs      f3, 0x90(r4)
	fmadds   f4, f6, f5, f4
	lfs      f5, 0x8c(r4)
	fmuls    f0, f7, f0
	lfs      f1, 0xa0(r4)
	fmadds   f2, f6, f3, f2
	fadds    f4, f5, f4
	lfs      f3, 0x9c(r4)
	fmadds   f0, f6, f1, f0
	lfs      f1, 0xac(r4)
	fadds    f2, f3, f2
	stfs     f4, 8(r1)
	fadds    f0, f1, f0
	lwz      r0, 8(r1)
	stfs     f2, 0xc(r1)
	stfs     f0, 0x10(r1)
	lwz      r4, 0xc(r1)
	stw      r0, 0(r3)
	lwz      r0, 0x10(r1)
	stw      r4, 4(r3)
	stw      r0, 8(r3)

lbl_80039068:
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80039070
 * Size:	000038
 */
J2DPane* J2DPane::getFirstChildPane()
{
	if (m_tree.getFirstChild() == nullptr) {
		return nullptr;
	}
	return m_tree.getFirstChild()->getObject();
}

/*
 * --INFO--
 * Address:	800390A8
 * Size:	000038
 */
J2DPane* J2DPane::getNextChildPane()
{
	if (m_tree.getNextChild() == nullptr) {
		return nullptr;
	}
	return m_tree.getNextChild()->getObject();
	// the following works too:
	// return (m_tree.getNextChild() == nullptr) ? nullptr : m_tree.getNextChild()->getObject();
}

/*
 * --INFO--
 * Address:	800390E0
 * Size:	00001C
 */
J2DPane* J2DPane::getParentPane() { return (m_tree.getParent() == nullptr) ? nullptr : m_tree.getParent()->getObject(); }

/*
 * --INFO--
 * Address:	800390FC
 * Size:	00020C
 */
void J2DPane::makePaneExStream(J2DPane*, JSURandomInputStream*)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	mr       r31, r4
	stw      r30, 0x58(r1)
	mr       r30, r3
	stw      r29, 0x54(r1)
	mr       r29, r5
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	addi     r4, r1, 8
	li       r5, 0x48
	bl       read__14JSUInputStreamFPvl
	lhz      r0, 0x12(r1)
	lis      r3, 0x55555556@ha
	li       r4, 0x7a
	sth      r0, 4(r30)
	addi     r0, r3, 0x55555556@l
	lbz      r5, 0x14(r1)
	neg      r3, r5
	or       r3, r3, r5
	srwi     r3, r3, 0x1f
	stb      r3, 0xb0(r30)
	lwz      r3, 0x18(r1)
	lwz      r5, 0x1c(r1)
	stw      r5, 0x14(r30)
	stw      r3, 0x10(r30)
	lwz      r3, 0x20(r1)
	lwz      r5, 0x24(r1)
	stw      r5, 0x1c(r30)
	stw      r3, 0x18(r30)
	lfs      f0, 0x30(r1)
	stfs     f0, 0xcc(r30)
	lfs      f0, 0x34(r1)
	stfs     f0, 0xd0(r30)
	lfs      f0, 0x38(r1)
	stfs     f0, 0xb8(r30)
	lfs      f0, 0x3c(r1)
	stfs     f0, 0xbc(r30)
	lfs      f0, 0x40(r1)
	stfs     f0, 0xc0(r30)
	lfs      f0, 0x44(r1)
	stfs     f0, 0xd4(r30)
	lfs      f0, 0x48(r1)
	stfs     f0, 0xd8(r30)
	stb      r4, 0xb6(r30)
	lbz      r4, 0x15(r1)
	mulhw    r3, r0, r4
	srwi     r0, r3, 0x1f
	add      r0, r3, r0
	mulli    r0, r0, 3
	subf.    r0, r0, r4
	bne      lbl_800391F0
	lfs      f0, lbl_805167C0@sda21(r2)
	stfs     f0, 0xc4(r30)
	b        lbl_80039214

lbl_800391F0:
	cmpwi    r0, 1
	bne      lbl_8003920C
	lfs      f1, 0x28(r1)
	lfs      f0, lbl_805167D8@sda21(r2)
	fmuls    f0, f1, f0
	stfs     f0, 0xc4(r30)
	b        lbl_80039214

lbl_8003920C:
	lfs      f0, 0x28(r1)
	stfs     f0, 0xc4(r30)

lbl_80039214:
	lis      r3, 0x55555556@ha
	lbz      r0, 0x15(r1)
	addi     r3, r3, 0x55555556@l
	mulhw    r3, r3, r0
	srwi     r0, r3, 0x1f
	add.     r0, r3, r0
	bne      lbl_8003923C
	lfs      f0, lbl_805167C0@sda21(r2)
	stfs     f0, 0xc8(r30)
	b        lbl_80039260

lbl_8003923C:
	cmpwi    r0, 1
	bne      lbl_80039258
	lfs      f1, 0x2c(r1)
	lfs      f0, lbl_805167D8@sda21(r2)
	fmuls    f0, f1, f0
	stfs     f0, 0xc8(r30)
	b        lbl_80039260

lbl_80039258:
	lfs      f0, 0x2c(r1)
	stfs     f0, 0xc8(r30)

lbl_80039260:
	lfs      f5, 0xc4(r30)
	li       r3, 0xff
	lfs      f4, 0xc8(r30)
	cmplwi   r31, 0
	fneg     f1, f5
	lfs      f3, 0x2c(r1)
	lfs      f2, 0x28(r1)
	fneg     f0, f4
	fsubs    f3, f3, f4
	li       r0, 0
	stfs     f1, 0x20(r30)
	fsubs    f1, f2, f5
	stfs     f0, 0x24(r30)
	stfs     f1, 0x28(r30)
	stfs     f3, 0x2c(r30)
	lbz      r4, 0x15(r1)
	stb      r4, 0xb7(r30)
	stb      r3, 0xb2(r30)
	stb      r0, 0xb4(r30)
	beq      lbl_800392C4
	addic.   r4, r30, 0xdc
	beq      lbl_800392BC
	addi     r4, r4, 0xc

lbl_800392BC:
	addi     r3, r31, 0xdc
	bl       append__10JSUPtrListFP10JSUPtrLink

lbl_800392C4:
	li       r4, 0
	li       r0, 0xff
	stb      r4, 0xb1(r30)
	mr       r3, r30
	stb      r0, 0xb3(r30)
	stb      r4, 0xb5(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80039308
 * Size:	0000B8
 */
s16 J2DPane::J2DCast_F32_to_S16(f32, u8)
{
	/*
	clrlwi   r0, r3, 0x18
	stwu     r1, -0x20(r1)
	cmplwi   r0, 0xf
	blt      lbl_80039320
	li       r3, 0
	b        lbl_800393B8

lbl_80039320:
	lfs      f0, lbl_805167C0@sda21(r2)
	fmr      f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80039334
	fneg     f3, f1

lbl_80039334:
	clrlwi   r0, r3, 0x18
	li       r3, 1
	slw      r0, r3, r0
	lis      r4, 0x4330
	xoris    r0, r0, 0x8000
	lis      r3, 0x00008000@ha
	stw      r0, 0xc(r1)
	addi     r0, r3, 0x00008000@l
	lfd      f2, lbl_805167C8@sda21(r2)
	stw      r4, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r3, 0x14(r1)
	cmpw     r3, r0
	blt      lbl_80039398
	lfs      f0, lbl_805167C0@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80039390
	li       r3, -32768
	b        lbl_800393B8

lbl_80039390:
	li       r3, 0x7fff
	b        lbl_800393B8

lbl_80039398:
	lfs      f0, lbl_805167C0@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_800393B4
	nor      r3, r3, r3
	addi     r0, r3, 1
	extsh    r3, r0
	b        lbl_800393B8

lbl_800393B4:
	extsh    r3, r3

lbl_800393B8:
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800393C0
 * Size:	00014C
 */
void* J2DPane::getPointer(JSURandomInputStream*, u32, JKRArchive*)
{
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	stw      r0, 0x124(r1)
	li       r0, 0
	stw      r31, 0x11c(r1)
	stw      r30, 0x118(r1)
	or.      r30, r6, r6
	stw      r29, 0x114(r1)
	mr       r29, r5
	stw      r28, 0x110(r1)
	mr       r28, r4
	stb      r0, 8(r1)
	bne      lbl_80039464
	lwz      r0, mDataManage__9J2DScreen@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80039410
	addi     r3, r1, 8
	li       r6, 0
	bl       getResource__15JUTResReferenceFP14JSUInputStreamUlP10JKRArchive
	b        lbl_800394EC

lbl_80039410:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	mr       r4, r28
	mr       r5, r29
	addi     r3, r1, 8
	li       r6, 0
	bl       getResource__15JUTResReferenceFP14JSUInputStreamUlP10JKRArchive
	cmplwi   r3, 0
	bne      lbl_800394EC
	mr       r3, r28
	mr       r4, r31
	li       r5, 0
	bl       seek__20JSURandomInputStreamFl17JSUStreamSeekFrom
	lwz      r3, mDataManage__9J2DScreen@sda21(r13)
	mr       r4, r28
	bl       get__13J2DDataManageFP14JSUInputStream
	b        lbl_800394EC

lbl_80039464:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	addi     r3, r1, 8
	bl       getResource__15JUTResReferenceFP14JSUInputStreamUlP10JKRArchive
	cmplwi   r3, 0
	bne      lbl_800394BC
	mr       r3, r28
	mr       r4, r31
	li       r5, 0
	bl       seek__20JSURandomInputStreamFl17JSUStreamSeekFrom
	mr       r4, r28
	mr       r5, r29
	addi     r3, r1, 8
	li       r6, 0
	bl       getResource__15JUTResReferenceFP14JSUInputStreamUlP10JKRArchive

lbl_800394BC:
	cmplwi   r3, 0
	bne      lbl_800394EC
	lwz      r0, mDataManage__9J2DScreen@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800394EC
	mr       r3, r28
	mr       r4, r31
	li       r5, 0
	bl       seek__20JSURandomInputStreamFl17JSUStreamSeekFrom
	lwz      r3, mDataManage__9J2DScreen@sda21(r13)
	mr       r4, r28
	bl       get__13J2DDataManageFP14JSUInputStream

lbl_800394EC:
	lwz      r0, 0x124(r1)
	lwz      r31, 0x11c(r1)
	lwz      r30, 0x118(r1)
	lwz      r29, 0x114(r1)
	lwz      r28, 0x110(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003950C
 * Size:	0000D0
 * setAnimation__7J2DPaneFP10J2DAnmBase
 */
void J2DPane::setAnimation(J2DAnmBase* animation)
{
	if (animation == nullptr) {
		return;
	}
	switch (animation->m_type) {
	case J2DANM_TRANSFORM:
		setAnimation((J2DAnmTransform*)animation);
		break;
	case J2DANM_COLOR:
		setAnimation((J2DAnmColor*)animation);
		break;
	case J2DANM_VERTEX_COLOR:
		setAnimation((J2DAnmVtxColor*)animation);
		break;
	case J2DANM_TEXTURE_SRT_KEY:
		setAnimation((J2DAnmTextureSRTKey*)animation);
		break;
	case J2DANM_TEXTURE_PATTERN:
		setAnimation((J2DAnmTexPattern*)animation);
		break;
	case J2DANM_VISIBILITY_FULL:
		setAnimation((J2DAnmVisibilityFull*)animation);
		break;
	case J2DANM_TEV_REG_KEY:
		setAnimation((J2DAnmTevRegKey*)animation);
		break;
	case J2DANM_UNKNOWN_3:
		break;
	}
}

/*
 * --INFO--
 * Address:	800395DC
 * Size:	000004
 */
void J2DPane::setAnimation(J2DAnmTevRegKey*) { }

/*
 * --INFO--
 * Address:	800395E0
 * Size:	000004
 */
void J2DPane::setAnimation(J2DAnmVisibilityFull*) { }

/*
 * --INFO--
 * Address:	800395E4
 * Size:	000004
 */
void J2DPane::setAnimation(J2DAnmTexPattern*) { }

/*
 * --INFO--
 * Address:	800395E8
 * Size:	000004
 */
void J2DPane::setAnimation(J2DAnmTextureSRTKey*) { }

/*
 * --INFO--
 * Address:	800395EC
 * Size:	000004
 */
void J2DPane::setAnimation(J2DAnmVtxColor*) { }

/*
 * --INFO--
 * Address:	800395F0
 * Size:	000004
 */
void J2DPane::setAnimation(J2DAnmColor*) { }

/*
 * --INFO--
 * Address:	800395F4
 * Size:	000008
 */
void J2DPane::setAnimation(J2DAnmTransform* animation) { m_transform = animation; }

/*
 * --INFO--
 * Address:	800395FC
 * Size:	000038
 */
void J2DPane::animationTransform()
{
	if (m_transform != nullptr) {
		animationTransform(m_transform);
	}
}

/*
 * --INFO--
 * Address:	80039634
 * Size:	00007C
 */
void J2DPane::clearAnmTransform()
{
	setAnimation((J2DAnmTransform*)nullptr);
	for (JSUTreeIterator<J2DPane> iterator(m_tree.getFirstChild()); iterator != nullptr; iterator++) {
		iterator->clearAnmTransform();
	}
}

/*
 * --INFO--
 * Address:	800396B0
 * Size:	0000A0
 * animationTransform__7J2DPaneFPC15J2DAnmTransform
 */
const J2DAnmTransform* J2DPane::animationTransform(const J2DAnmTransform* animation)
{
	if (m_transform != nullptr) {
		animation = m_transform;
	}
	for (JSUTreeIterator<J2DPane> iterator(m_tree.getFirstChild()); iterator != nullptr; iterator++) {
		iterator->animationTransform(animation);
	}
	updateTransform(animation);
	return animation;
}

/*
 * --INFO--
 * Address:	80039750
 * Size:	000088
 */
void J2DPane::setVisibileAnimation(J2DAnmVisibilityFull* animation)
{
	setAnimationVF(animation);
	for (JSUTreeIterator<J2DPane> iterator(m_tree.getFirstChild()); iterator != nullptr; iterator++) {
		iterator->setVisibileAnimation(animation);
	}
}

/*
 * --INFO--
 * Address:	800397D8
 * Size:	00002C
 */
void J2DPane::setAnimationVF(J2DAnmVisibilityFull* animationVF) { setAnimation(animationVF); }

/*
 * --INFO--
 * Address:	80039804
 * Size:	000088
 */
void J2DPane::setVtxColorAnimation(J2DAnmVtxColor* animation)
{
	setAnimationVC(animation);
	for (JSUTreeIterator<J2DPane> iterator(m_tree.getFirstChild()); iterator != nullptr; iterator++) {
		iterator->setVtxColorAnimation(animation);
	}
}

/*
 * --INFO--
 * Address:	8003988C
 * Size:	00002C
 */
void J2DPane::setAnimationVC(J2DAnmVtxColor* animationVC) { setAnimation(animationVC); }

/*
 * --INFO--
 * Address:	800398B8
 * Size:	0000A0
 */
const J2DAnmTransform* J2DPane::animationPane(const J2DAnmTransform* animation)
{
	if (m_transform != nullptr) {
		animation = m_transform;
	}
	for (JSUTreeIterator<J2DPane> iterator(m_tree.getFirstChild()); iterator != nullptr; iterator++) {
		iterator->animationPane(animation);
	}
	updateTransform(animation);
	return animation;
}

/*
 * --INFO--
 * Address:	80039958
 * Size:	000108
 */
void J2DPane::updateTransform(const J2DAnmTransform*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	lhz      r0, 4(r3)
	cmplwi   r0, 0xffff
	beq      lbl_80039A4C
	cmplwi   r4, 0
	beq      lbl_80039A4C
	mr       r3, r4
	mr       r4, r0
	lwz      r12, 0(r3)
	addi     r5, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	lis      r0, 0x4330
	stw      r0, 0x28(r1)
	mr       r3, r31
	lfd      f2, lbl_805167D0@sda21(r2)
	stfs     f0, 0xcc(r31)
	lfs      f3, lbl_805167E4@sda21(r2)
	lfs      f0, 0x10(r1)
	lfs      f1, lbl_805167E8@sda21(r2)
	stfs     f0, 0xd0(r31)
	lha      r4, 0x14(r1)
	stw      r0, 0x30(r1)
	clrlwi   r4, r4, 0x10
	stw      r4, 0x2c(r1)
	lfd      f0, 0x28(r1)
	stw      r0, 0x38(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f3, f0
	fdivs    f0, f0, f1
	stfs     f0, 0xb8(r31)
	lha      r0, 0x18(r1)
	clrlwi   r0, r0, 0x10
	stw      r0, 0x34(r1)
	lfd      f0, 0x30(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f3, f0
	fdivs    f0, f0, f1
	stfs     f0, 0xbc(r31)
	lha      r0, 0x16(r1)
	clrlwi   r0, r0, 0x10
	stw      r0, 0x3c(r1)
	lfd      f0, 0x38(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f3, f0
	fdivs    f0, f0, f1
	stfs     f0, 0xc0(r31)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0xd4(r31)
	lfs      f0, 0x24(r1)
	stfs     f0, 0xd8(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_80039A4C:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80039A60
 * Size:	000004
 */
void J2DAnmTransform::getTransform(u16, J3DTransformInfo*) const { }

/*
 * --INFO--
 * Address:	80039A64
 * Size:	000008
 */
u32 J2DPane::getTypeID() const { return 0x10; }

/*
 * --INFO--
 * Address:	80039A6C
 * Size:	00003C
 * setCullBack__7J2DPaneFb
 */
void J2DPane::setCullBack(bool p1)
{
	setCullBack((GXCullMode)(p1 ? 0 : 2));
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	clrlwi.  r0, r4, 0x18
	li       r4, 0
	beq      lbl_80039A88
	li       r4, 2

lbl_80039A88:
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
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
 * Address:	80039AA8
 * Size:	000010
 */
bool J2DPane::setConnectParent(bool connectParent)
{
	_0B5 = 0;
	return false;
}

/*
 * --INFO--
 * Address:	80039AB8
 * Size:	000004
 */
void J2DPane::update() { }

/*
 * --INFO--
 * Address:	80039ABC
 * Size:	000004
 */
void J2DPane::drawSelf(float, float) { }

/*
 * --INFO--
 * Address:	80039AC0
 * Size:	00001C
 */
void __sinit_J2DPane_cpp(void)
{
	/*
	lfs      f0, lbl_805167C0@sda21(r2)
	lis      r3, static_mBounds__7J2DPane@ha
	stfsu    f0, static_mBounds__7J2DPane@l(r3)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	stfs     f0, 0xc(r3)
	blr
	*/
}
