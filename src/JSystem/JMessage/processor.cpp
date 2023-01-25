#include "JSystem/JMessage.h"
#include "JSystem/JMessage/TControl.h"
#include "JSystem/JMessage/TReference.h"
#include "JSystem/JMessage/TProcessor.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q28JMessage19TRenderingProcessor
    __vt__Q28JMessage19TRenderingProcessor:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28JMessage19TRenderingProcessorFv
        .4byte do_reset__Q28JMessage10TProcessorFv
        .4byte do_character__Q28JMessage10TProcessorFi
        .4byte do_tag__Q28JMessage10TProcessorFUlPCvUl
        .4byte do_systemTagCode__Q28JMessage10TProcessorFUsPCvUl
        .4byte do_select_begin__Q28JMessage10TProcessorFUl
        .4byte do_select_end__Q28JMessage10TProcessorFv
        .4byte do_select_separate__Q28JMessage10TProcessorFv
        .4byte do_reset___Q28JMessage19TRenderingProcessorFPCc
        .4byte do_setBegin_isReady___Q28JMessage10TProcessorCFv
        .4byte do_begin___Q28JMessage19TRenderingProcessorFPCvPCc
        .4byte do_end___Q28JMessage19TRenderingProcessorFv
        .4byte do_tag___Q28JMessage19TRenderingProcessorFUlPCvUl
        .4byte do_systemTagCode___Q28JMessage19TRenderingProcessorFUsPCvUl
        .4byte do_begin__Q28JMessage19TRenderingProcessorFPCvPCc
        .4byte do_end__Q28JMessage19TRenderingProcessorFv
    .global __vt__Q28JMessage18TSequenceProcessor
    __vt__Q28JMessage18TSequenceProcessor:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28JMessage18TSequenceProcessorFv
        .4byte do_reset__Q28JMessage10TProcessorFv
        .4byte do_character__Q28JMessage10TProcessorFi
        .4byte do_tag__Q28JMessage10TProcessorFUlPCvUl
        .4byte do_systemTagCode__Q28JMessage10TProcessorFUsPCvUl
        .4byte do_select_begin__Q28JMessage10TProcessorFUl
        .4byte do_select_end__Q28JMessage10TProcessorFv
        .4byte do_select_separate__Q28JMessage10TProcessorFv
        .4byte do_reset___Q28JMessage18TSequenceProcessorFPCc
        .4byte do_setBegin_isReady___Q28JMessage18TSequenceProcessorCFv
        .4byte do_begin___Q28JMessage18TSequenceProcessorFPCvPCc
        .4byte do_end___Q28JMessage18TSequenceProcessorFv
        .4byte do_tag___Q28JMessage18TSequenceProcessorFUlPCvUl
        .4byte do_systemTagCode___Q28JMessage18TSequenceProcessorFUsPCvUl
        .4byte do_begin__Q28JMessage18TSequenceProcessorFPCvPCc
        .4byte do_end__Q28JMessage18TSequenceProcessorFv
        .4byte do_isReady__Q28JMessage18TSequenceProcessorFv
        .4byte do_jump_isReady__Q28JMessage18TSequenceProcessorFv
        .4byte do_jump__Q28JMessage18TSequenceProcessorFPCvPCc
        .4byte do_branch_query__Q28JMessage18TSequenceProcessorFUs
        .4byte do_branch_queryResult__Q28JMessage18TSequenceProcessorFv
        .4byte do_branch__Q28JMessage18TSequenceProcessorFPCvPCc
    .global __vt__Q28JMessage10TProcessor
    __vt__Q28JMessage10TProcessor:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28JMessage10TProcessorFv
        .4byte do_reset__Q28JMessage10TProcessorFv
        .4byte do_character__Q28JMessage10TProcessorFi
        .4byte do_tag__Q28JMessage10TProcessorFUlPCvUl
        .4byte do_systemTagCode__Q28JMessage10TProcessorFUsPCvUl
        .4byte do_select_begin__Q28JMessage10TProcessorFUl
        .4byte do_select_end__Q28JMessage10TProcessorFv
        .4byte do_select_separate__Q28JMessage10TProcessorFv
        .4byte 0
        .4byte do_setBegin_isReady___Q28JMessage10TProcessorCFv
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q28JMessage10TReference
    __vt__Q28JMessage10TReference:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28JMessage10TReferenceFv
        .4byte do_word__Q28JMessage10TReferenceCFUl
*/

/*
 * --INFO--
 * Address:	80006D0C
 * Size:	000048
 */
JMessage::TReference::~TReference() { }

/*
 * --INFO--
 * Address:	80006D54
 * Size:	000008
 */
char* JMessage::TReference::do_word(unsigned long) const { return 0x0; }

/*
 * --INFO--
 * Address:	80006D5C
 * Size:	000048
 */
JMessage::TProcessor::~TProcessor() { }

/*
 * --INFO--
 * Address:	80006DA4
 * Size:	0000BC
 * setBegin_messageCode__Q28JMessage10TProcessorFUsUs
 */
void JMessage::TProcessor::setBegin_messageCode(unsigned short p1, unsigned short p2)
{
	TResource* resource = getResource_groupID(p1);
	u32 datOffset;
	if (resource == nullptr) {
		datOffset = 0;
	} else {
		INF1Block* info = resource->m_INF1;
		if (p2 < info->_08) {
			datOffset = *(u32*)info->_10[p2 * info->_0A];
		} else {
			datOffset = 0;
		}
	}
	if (datOffset != 0) {
		char* dat = (char*)_08->m_DAT1->_00 + datOffset;
		reset_(dat);
		do_begin_(&datOffset, dat);
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       getResource_groupID__Q28JMessage10TProcessorCFUs
	cmplwi   r3, 0
	bne      lbl_80006DD8
	li       r31, 0
	b        lbl_80006E04

lbl_80006DD8:
	lwz      r3, 0xc(r3)
	clrlwi   r4, r30, 0x10
	lhz      r0, 8(r3)
	cmplw    r4, r0
	bge      lbl_80006E00
	lhz      r0, 0xa(r3)
	mullw    r0, r4, r0
	add      r31, r3, r0
	addi     r31, r31, 0x10
	b        lbl_80006E04

lbl_80006E00:
	li       r31, 0

lbl_80006E04:
	cmplwi   r31, 0
	beq      lbl_80006E44
	lwz      r5, 8(r29)
	mr       r3, r29
	lwz      r0, 0(r31)
	lwz      r4, 0x10(r5)
	add      r30, r4, r0
	mr       r4, r30
	bl       reset___Q28JMessage10TProcessorFPCc
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0(r29)
	mr       r5, r30
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl

lbl_80006E44:
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
 * Address:	80006E60
 * Size:	000044
 */
void JMessage::TProcessor::setBegin_messageID(unsigned long p1, unsigned long p2, bool* p3)
{
	u32 code = toMessageCode_messageID(p1, p2, p3);
	if (code != 0xFFFFFFFF) {
		setBegin_messageCode(code);
	}
}

/*
 * --INFO--
 * Address:	80006EA4
 * Size:	0000C0
 * setBegin_messageCode__Q28JMessage10TProcessorFUl
 */
void JMessage::TProcessor::setBegin_messageCode(unsigned long p1)
{
	setBegin_messageCode(p1 >> 0x10, p1 & 0xFFFF);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	srwi     r4, r4, 0x10
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       getResource_groupID__Q28JMessage10TProcessorCFUs
	cmplwi   r3, 0
	bne      lbl_80006EDC
	li       r30, 0
	b        lbl_80006F08

lbl_80006EDC:
	lwz      r4, 0xc(r3)
	clrlwi   r3, r30, 0x10
	lhz      r0, 8(r4)
	cmplw    r3, r0
	bge      lbl_80006F04
	lhz      r0, 0xa(r4)
	mullw    r0, r3, r0
	add      r30, r4, r0
	addi     r30, r30, 0x10
	b        lbl_80006F08

lbl_80006F04:
	li       r30, 0

lbl_80006F08:
	cmplwi   r30, 0
	beq      lbl_80006F48
	lwz      r5, 8(r29)
	mr       r3, r29
	lwz      r0, 0(r30)
	lwz      r4, 0x10(r5)
	add      r31, r4, r0
	mr       r4, r31
	bl       reset___Q28JMessage10TProcessorFPCc
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	mr       r5, r31
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl

lbl_80006F48:
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
 * Address:	........
 * Size:	000038
 * pushCurrent__Q28JMessage10TProcessorFPCc
 */
void JMessage::TProcessor::pushCurrent(const char* p1)
{
	// UNUSED FUNCTION
	if (p1 != nullptr && _10[0] < 4) {
		_10[_10[0] + 1] = (u32)_0C;
		_10[0]++;
		_0C = p1;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 * popCurrent__Q28JMessage10TProcessorFv
 */
const char* JMessage::TProcessor::popCurrent()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80006F64
 * Size:	000080
 */
JMessage::TResource* JMessage::TProcessor::getResource_groupID(unsigned short) const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r7, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 8(r3)
	cmplwi   r3, 0
	beq      lbl_80006FA0
	lwz      r5, 0xc(r3)
	clrlwi   r6, r4, 0x10
	lhz      r0, 0xc(r5)
	cmplw    r6, r0
	bne      lbl_80006FA0
	li       r7, 1

lbl_80006FA0:
	clrlwi.  r0, r7, 0x18
	beq      lbl_80006FAC
	b        lbl_80006FD0

lbl_80006FAC:
	lwz      r3, 4(r31)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	bne      lbl_80006FC4
	li       r3, 0
	b        lbl_80006FCC

lbl_80006FC4:
	addi     r3, r3, 8
	bl       Get_groupID__Q38JMessage18TResourceContainer10TCResourceFUs

lbl_80006FCC:
	stw      r3, 8(r31)

lbl_80006FD0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80006FE4
 * Size:	000150
 */
u32 JMessage::TProcessor::toMessageCode_messageID(unsigned long, unsigned long, bool*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stmw      r26, 0x58(r1)
	  mr        r31, r3
	  lwz       r29, 0x8(r3)
	  mr        r26, r4
	  mr        r27, r5
	  mr        r28, r6
	  cmplwi    r29, 0
	  beq-      .loc_0x58
	  mr        r3, r29
	  bl        -0xC50
	  mr        r4, r3
	  rlwinm    r0,r3,0,16,31
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x58
	  lwz       r3, 0xC(r29)
	  lhz       r0, 0xC(r3)
	  rlwinm    r3,r0,16,0,15
	  rlwimi    r3,r4,0,16,31
	  b         .loc_0x13C

	.loc_0x58:
	  lwz       r3, 0x4(r31)
	  cmplwi    r3, 0
	  bne-      .loc_0x6C
	  li        r3, 0
	  b         .loc_0x70

	.loc_0x6C:
	  lwz       r3, 0x4(r3)

	.loc_0x70:
	  cmplwi    r3, 0
	  bne-      .loc_0x80
	  li        r3, -0x1
	  b         .loc_0x13C

	.loc_0x80:
	  lwzu      r0, 0xC(r3)
	  stw       r3, 0x24(r1)
	  stw       r3, 0x20(r1)
	  stw       r3, 0x3C(r1)
	  stw       r3, 0x38(r1)
	  stw       r3, 0x1C(r1)
	  stw       r3, 0x4C(r1)
	  stw       r3, 0x48(r1)
	  stw       r0, 0x18(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0x34(r1)
	  stw       r0, 0x30(r1)
	  stw       r0, 0x10(r1)
	  stw       r0, 0x44(r1)
	  stw       r0, 0x40(r1)
	  stw       r0, 0x50(r1)
	  stw       r3, 0x54(r1)
	  b         .loc_0x118

	.loc_0xC8:
	  lwz       r30, 0x50(r1)
	  lwz       r0, 0x0(r30)
	  cmplw     r30, r29
	  stw       r0, 0x50(r1)
	  beq-      .loc_0x118
	  mr        r3, r30
	  mr        r4, r26
	  mr        r5, r27
	  mr        r6, r28
	  bl        -0xD0C
	  mr        r4, r3
	  rlwinm    r0,r3,0,16,31
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x118
	  lwz       r3, 0xC(r30)
	  stw       r30, 0x8(r31)
	  lhz       r0, 0xC(r3)
	  rlwinm    r3,r0,16,0,15
	  rlwimi    r3,r4,0,16,31
	  b         .loc_0x13C

	.loc_0x118:
	  lwz       r3, 0x54(r1)
	  lwz       r0, 0x50(r1)
	  stw       r3, 0x2C(r1)
	  cmplw     r0, r3
	  stw       r0, 0x28(r1)
	  stw       r3, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bne+      .loc_0xC8
	  li        r3, -0x1

	.loc_0x13C:
	  lmw       r26, 0x58(r1)
	  lwz       r0, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 * on_select_begin__Q28JMessage10TProcessorFPFPQ28JMessage10TProcessor_PCcPCvPCcUl
 */
unknown JMessage::TProcessor::on_select_begin(OnSelectBeginCallBack* p1, const char* p2, const void* p3, const char* p4, u32 p5)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 * on_select_end__Q28JMessage10TProcessorFv
 */
unknown JMessage::TProcessor::on_select_end()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 * on_select_separate__Q28JMessage10TProcessorFv
 */
unknown JMessage::TProcessor::on_select_separate()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80007134
 * Size:	000004
 */
void JMessage::TProcessor::do_reset() { }

/*
 * --INFO--
 * Address:	80007138
 * Size:	000004
 */
void JMessage::TProcessor::do_character(int) { }

/*
 * --INFO--
 * Address:	8000713C
 * Size:	000008
 */
bool JMessage::TProcessor::do_tag(unsigned long, const void*, unsigned long) { return false; }

/*
 * --INFO--
 * Address:	80007144
 * Size:	000008
 */
bool JMessage::TProcessor::do_systemTagCode(unsigned short, const void*, unsigned long) { return false; }

/*
 * --INFO--
 * Address:	8000714C
 * Size:	000004
 */
void JMessage::TProcessor::do_select_begin(unsigned long) { }

/*
 * --INFO--
 * Address:	80007150
 * Size:	000004
 */
void JMessage::TProcessor::do_select_end() { }

/*
 * --INFO--
 * Address:	80007154
 * Size:	000004
 */
void JMessage::TProcessor::do_select_separate() { }

/*
 * --INFO--
 * Address:	80007158
 * Size:	000064
 * reset___Q28JMessage10TProcessorFPCc
 */
void JMessage::TProcessor::reset_(const char* p1)
{
	_0C    = p1;
	_10[0] = 0;
	_24    = &process_onCharacterEnd_normal_;
	do_reset_(p1);
	do_reset();
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 * on_tag___Q28JMessage10TProcessorFv
 */
unknown JMessage::TProcessor::on_tag_()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800071BC
 * Size:	000008
 */
bool JMessage::TProcessor::do_setBegin_isReady_() const { return true; }

/*
 * --INFO--
 * Address:	800071C4
 * Size:	000260
 * do_tag___Q28JMessage10TProcessorFUlPCvUl
 */
bool JMessage::TProcessor::do_tag_(unsigned long p1, const void* p2, unsigned long p3)
{
	u8 v1  = p1 >> 0x10 & 0xFF;
	u16 v2 = p1 & 0xFFFF;
	switch (v1) {
	case 0xFD:
		pushCurrent(on_message_limited(v2));
		break;
	case 0xF6:
		if (_10[0] < 4) {
			_24 = &process_onCharacterEnd_select_;
			_28 = &process_onSelect_limited_;
			_2C = (char*)p2 + p3;
			_30 = (char*)p2;
			_34 = v2;
			pushCurrent(process_onSelect_limited_(this));
			do_select_begin(v2);
		}
		break;
	case 0xF5:
		if (_10[0] < 4) {
			_24 = &process_onCharacterEnd_select_;
			_28 = &process_onSelect_;
			_2C = (char*)p2 + p3;
			_30 = (char*)p2;
			_34 = v2;
			pushCurrent(process_onSelect_(this));
			do_select_begin(v2);
		}
		break;
	case 0xFF:
		if (do_systemTagCode(v2, p2, p3) == false) {
			do_systemTagCode_(v2, p2, p3);
		}
		break;
	case 0xFE:
		pushCurrent(_04->do_word(v2));
		break;
	default:
		break;
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	rlwinm   r0, r4, 0x10, 0x18, 0x1f
	cmpwi    r0, 0xfd
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	clrlwi   r29, r4, 0x10
	stw      r28, 0x10(r1)
	mr       r28, r6
	beq      lbl_800072B8
	bge      lbl_80007218
	cmpwi    r0, 0xf6
	beq      lbl_800072F8
	bge      lbl_80007404
	cmpwi    r0, 0xf5
	bge      lbl_80007380
	b        lbl_80007404

lbl_80007218:
	cmpwi    r0, 0xff
	beq      lbl_80007228
	bge      lbl_80007404
	b        lbl_80007268

lbl_80007228:
	lwz      r12, 0(r3)
	mr       r4, r29
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80007404
	mr       r3, r30
	mr       r4, r29
	lwz      r12, 0(r30)
	mr       r5, r31
	mr       r6, r28
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	b        lbl_80007404

lbl_80007268:
	lwz      r3, 4(r30)
	mr       r4, r29
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_80007404
	lwz      r0, 0x10(r30)
	cmplwi   r0, 4
	bge      lbl_80007404
	slwi     r0, r0, 2
	lwz      r5, 0xc(r30)
	add      r4, r30, r0
	stw      r5, 0x14(r4)
	lwz      r4, 0x10(r30)
	addi     r0, r4, 1
	stw      r0, 0x10(r30)
	stw      r3, 0xc(r30)
	b        lbl_80007404

lbl_800072B8:
	mr       r4, r29
	bl       on_message_limited__Q28JMessage10TProcessorCFUs
	cmplwi   r3, 0
	beq      lbl_80007404
	lwz      r0, 0x10(r30)
	cmplwi   r0, 4
	bge      lbl_80007404
	slwi     r0, r0, 2
	lwz      r5, 0xc(r30)
	add      r4, r30, r0
	stw      r5, 0x14(r4)
	lwz      r4, 0x10(r30)
	addi     r0, r4, 1
	stw      r0, 0x10(r30)
	stw      r3, 0xc(r30)
	b        lbl_80007404

lbl_800072F8:
	lwz      r0, 0x10(r30)
	cmplwi   r0, 4
	bge      lbl_80007404
	lis      r5,
process_onCharacterEnd_select___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@ha
	lis      r4,
process_onSelect_limited___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@ha
	addi     r5, r5,
process_onCharacterEnd_select___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@l
	add      r0, r31, r28
	stw      r5, 0x24(r30)
	addi     r4, r4,
process_onSelect_limited___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@l
	stw      r4, 0x28(r30)
	stw      r0, 0x2c(r30)
	stw      r31, 0x30(r30)
	stw      r29, 0x34(r30)
	bl
process_onSelect_limited___Q28JMessage10TProcessorFPQ28JMessage10TProcessor
	cmplwi   r3, 0
	beq      lbl_80007364
	lwz      r0, 0x10(r30)
	cmplwi   r0, 4
	bge      lbl_80007364
	slwi     r0, r0, 2
	lwz      r5, 0xc(r30)
	add      r4, r30, r0
	stw      r5, 0x14(r4)
	lwz      r4, 0x10(r30)
	addi     r0, r4, 1
	stw      r0, 0x10(r30)
	stw      r3, 0xc(r30)

lbl_80007364:
	mr       r3, r30
	mr       r4, r29
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80007404

lbl_80007380:
	lwz      r0, 0x10(r30)
	cmplwi   r0, 4
	bge      lbl_80007404
	lis      r5,
process_onCharacterEnd_select___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@ha
	lis      r4,
process_onSelect___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@ha addi r5,
r5,
process_onCharacterEnd_select___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@l
	add      r0, r31, r28
	stw      r5, 0x24(r30)
	addi     r4, r4,
process_onSelect___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@l stw r4,
0x28(r30) stw      r0, 0x2c(r30) stw      r31, 0x30(r30) stw      r29, 0x34(r30)
	bl       process_onSelect___Q28JMessage10TProcessorFPQ28JMessage10TProcessor
	cmplwi   r3, 0
	beq      lbl_800073EC
	lwz      r0, 0x10(r30)
	cmplwi   r0, 4
	bge      lbl_800073EC
	slwi     r0, r0, 2
	lwz      r5, 0xc(r30)
	add      r4, r30, r0
	stw      r5, 0x14(r4)
	lwz      r4, 0x10(r30)
	addi     r0, r4, 1
	stw      r0, 0x10(r30)
	stw      r3, 0xc(r30)

lbl_800073EC:
	mr       r3, r30
	mr       r4, r29
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80007404:
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
 * Address:	80007424
 * Size:	000050
 */
char* JMessage::TProcessor::on_message_limited(unsigned short) const
{
	/*
	lwz      r3, 8(r3)
	clrlwi   r5, r4, 0x10
	lwz      r4, 0xc(r3)
	lhz      r0, 8(r4)
	cmplw    r5, r0
	bge      lbl_80007450
	lhz      r0, 0xa(r4)
	mullw    r0, r5, r0
	add      r4, r4, r0
	addi     r4, r4, 0x10
	b        lbl_80007454

lbl_80007450:
	li       r4, 0

lbl_80007454:
	cmplwi   r4, 0
	bne      lbl_80007464
	li       r3, 0
	blr

lbl_80007464:
	lwz      r3, 0x10(r3)
	lwz      r0, 0(r4)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80007474
 * Size:	0000D0
 * do_systemTagCode___Q28JMessage10TProcessorFUsPCvUl
 */
void JMessage::TProcessor::do_systemTagCode_(unsigned short p1, const void* p2, unsigned long p3)
{
	switch (p1) {
	case 4:
		pushCurrent(_04->do_word(*(u32*)p2));
		break;
	case 5:
		pushCurrent(on_message(*(u32*)p2));
		break;
	case 0:
	case 1:
	case 2:
	case 3:
	default:
		break;
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r4,0,16,31
	  cmpwi     r0, 0x5
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x80
	  bge-      .loc_0xBC
	  cmpwi     r0, 0x4
	  bge-      .loc_0x30
	  b         .loc_0xBC

	.loc_0x30:
	  lwz       r3, 0x4(r31)
	  lwz       r4, 0x0(r5)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0xBC
	  lwz       r0, 0x10(r31)
	  cmplwi    r0, 0x4
	  bge-      .loc_0xBC
	  rlwinm    r0,r0,2,0,29
	  lwz       r5, 0xC(r31)
	  add       r4, r31, r0
	  stw       r5, 0x14(r4)
	  lwz       r4, 0x10(r31)
	  addi      r0, r4, 0x1
	  stw       r0, 0x10(r31)
	  stw       r3, 0xC(r31)
	  b         .loc_0xBC

	.loc_0x80:
	  lwz       r4, 0x0(r5)
	  bl        .loc_0xD0
	  cmplwi    r3, 0
	  beq-      .loc_0xBC
	  lwz       r0, 0x10(r31)
	  cmplwi    r0, 0x4
	  bge-      .loc_0xBC
	  rlwinm    r0,r0,2,0,29
	  lwz       r5, 0xC(r31)
	  add       r4, r31, r0
	  stw       r5, 0x14(r4)
	  lwz       r4, 0x10(r31)
	  addi      r0, r4, 0x1
	  stw       r0, 0x10(r31)
	  stw       r3, 0xC(r31)

	.loc_0xBC:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0xD0:
	*/
}

/*
 * --INFO--
 * Address:	80007544
 * Size:	000020
 * on_message__Q28JMessage10TProcessorCFUl
 */
char* JMessage::TProcessor::on_message(unsigned long p1) const { return getMessageText_messageCode(p1); }

/*
 * --INFO--
 * Address:	80007564
 * Size:	0000EC
 */
char* JMessage::TProcessor::getMessageText_messageCode(unsigned long) const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r6, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 8(r3)
	stw      r30, 8(r1)
	mr       r30, r4
	cmplwi   r3, 0
	beq      lbl_800075A8
	lwz      r4, 0xc(r3)
	srwi     r5, r30, 0x10
	lhz      r0, 0xc(r4)
	cmplw    r5, r0
	bne      lbl_800075A8
	li       r6, 1

lbl_800075A8:
	clrlwi.  r0, r6, 0x18
	beq      lbl_800075B4
	b        lbl_800075DC

lbl_800075B4:
	lwz      r3, 4(r31)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	bne      lbl_800075CC
	li       r3, 0
	b        lbl_800075D8

lbl_800075CC:
	srwi     r4, r30, 0x10
	addi     r3, r3, 8
	bl       Get_groupID__Q38JMessage18TResourceContainer10TCResourceFUs

lbl_800075D8:
	stw      r3, 8(r31)

lbl_800075DC:
	cmplwi   r3, 0
	bne      lbl_800075EC
	li       r4, 0
	b        lbl_80007618

lbl_800075EC:
	lwz      r4, 0xc(r3)
	clrlwi   r3, r30, 0x10
	lhz      r0, 8(r4)
	cmplw    r3, r0
	bge      lbl_80007614
	lhz      r0, 0xa(r4)
	mullw    r0, r3, r0
	add      r4, r4, r0
	addi     r4, r4, 0x10
	b        lbl_80007618

lbl_80007614:
	li       r4, 0

lbl_80007618:
	cmplwi   r4, 0
	bne      lbl_80007628
	li       r3, 0
	b        lbl_80007638

lbl_80007628:
	lwz      r3, 8(r31)
	lwz      r0, 0(r4)
	lwz      r3, 0x10(r3)
	add      r3, r3, r0

lbl_80007638:
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
 * Address:	........
 * Size:	000154
 * process_character___Q28JMessage10TProcessorFv
 */
unknown JMessage::TProcessor::process_character_()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80007650
 * Size:	000060
 */
bool JMessage::TProcessor::process_onCharacterEnd_normal_(JMessage::TProcessor* processor)
{
	u32 offset = processor->_10[0];
	if (offset != 0) {
		processor->_0C = (const char*)processor->_10[offset];
		processor->_10[0]--;
		return true;
	} else {
		processor->do_end_();
		return false;
	}
}

/*
 * --INFO--
 * Address:	800076B0
 * Size:	0000FC
 */
bool JMessage::TProcessor::process_onCharacterEnd_select_(JMessage::TProcessor* processor)
{
	processor->_34--;
	if (processor->_34 != 0) {
		processor->_0C = (const char*)processor->_10[processor->_10[0]];
		processor->_10[0]--;
		char* processedResult = processor->_28(processor);
		if (processedResult != nullptr && processor->_10[0] < 4) {
			processor->_10[processor->_10[0] + 1] = (u32)processor->_0C;
			processor->_10[0]++;
			processor->_0C = processedResult;
		}
		processor->do_select_separate();
		return true;
	} else {
		processor->_24 = &process_onCharacterEnd_normal_;
		processor->_0C = (const char*)processor->_10[processor->_10[0]];
		processor->_10[0]--;
		processor->do_select_end();
		return true;
	}
}

/*
 * --INFO--
 * Address:	800077AC
 * Size:	00001C
 */
char* JMessage::TProcessor::process_onSelect_limited_(JMessage::TProcessor* processor)
{
	u16 next       = *(u16*)processor->_30;
	processor->_30 = (u16*)(processor->_30) + 1;
	return processor->_2C + next;
	/*
	lwz      r5, 0x30(r3)
	lhz      r4, 0(r5)
	addi     r0, r5, 2
	stw      r0, 0x30(r3)
	lwz      r0, 0x2c(r3)
	add      r3, r0, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	800077C8
 * Size:	00001C
 * process_onSelect___Q28JMessage10TProcessorFPQ28JMessage10TProcessor
 */
char* JMessage::TProcessor::process_onSelect_(JMessage::TProcessor* processor)
{
	u32 next       = *(u32*)processor->_30;
	processor->_30 = (u32*)(processor->_30) + 1;
	return processor->_2C + next;
	/*
	lwz      r5, 0x30(r3)
	lwz      r4, 0(r5)
	addi     r0, r5, 4
	stw      r0, 0x30(r3)
	lwz      r0, 0x2c(r3)
	add      r3, r0, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 * toString_status__Q28JMessage18TSequenceProcessorFi
 */
const char* JMessage::TSequenceProcessor::toString_status(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 * toValue_status__Q28JMessage18TSequenceProcessorFPCc
 */
int JMessage::TSequenceProcessor::toValue_status(const char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800077E4
 * Size:	000044
 */
JMessage::TSequenceProcessor::TSequenceProcessor(const JMessage::TReference*, JMessage::TControl*)
{
	/*
	.loc_0x0:
	  lis       r8, 0x804A
	  lis       r7, 0x8000
	  subi      r0, r8, 0x1BF8
	  lis       r6, 0x804A
	  stw       r0, 0x0(r3)
	  li        r8, 0
	  addi      r7, r7, 0x7650
	  subi      r0, r6, 0x1C58
	  stw       r4, 0x4(r3)
	  stw       r8, 0x8(r3)
	  stw       r8, 0xC(r3)
	  stw       r8, 0x10(r3)
	  stw       r7, 0x24(r3)
	  stw       r0, 0x0(r3)
	  stw       r5, 0x38(r3)
	  stw       r8, 0x3C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80007828
 * Size:	00005C
 */
JMessage::TSequenceProcessor::~TSequenceProcessor()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8000786C
	lis      r3, __vt__Q28JMessage18TSequenceProcessor@ha
	addi     r0, r3, __vt__Q28JMessage18TSequenceProcessor@l
	stw      r0, 0(r31)
	beq      lbl_8000785C
	lis      r3, __vt__Q28JMessage10TProcessor@ha
	addi     r0, r3, __vt__Q28JMessage10TProcessor@l
	stw      r0, 0(r31)

lbl_8000785C:
	extsh.   r0, r4
	ble      lbl_8000786C
	mr       r3, r31
	bl       __dl__FPv

lbl_8000786C:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80007884
 * Size:	000278
 */
char* JMessage::TSequenceProcessor::process(const char*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r30, r3
	mr       r31, r4

lbl_8000789C:
	lwz      r0, 0x3c(r30)
	cmpwi    r0, 3
	beq      lbl_800078BC
	bge      lbl_800078B0
	b        lbl_80007984

lbl_800078B0:
	cmpwi    r0, 5
	bge      lbl_80007984
	b        lbl_80007908

lbl_800078BC:
	mr       r3, r30
	bl       on_jump_isReady__Q28JMessage18TSequenceProcessorFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_800078D4
	lwz      r3, 0xc(r30)
	b        lbl_80007AE8

lbl_800078D4:
	li       r0, 2
	mr       r3, r30
	stw      r0, 0x3c(r30)
	lwz      r12, 0x40(r30)
	mtctr    r12
	bctrl
	or.      r4, r3, r3
	beq      lbl_80007984
	lwz      r5, 0x38(r30)
	mr       r3, r30
	lwz      r5, 0x18(r5)
	bl       on_jump__Q28JMessage18TSequenceProcessorFPCvPCc
	b        lbl_80007984

lbl_80007908:
	mr       r3, r30
	bl       on_branch_queryResult__Q28JMessage18TSequenceProcessorFv
	mr       r4, r3
	cmplwi   r4, 0xffff
	ble      lbl_80007948
	cmpwi    r4, -1
	beq      lbl_80007934
	bge      lbl_80007984
	cmpwi    r4, -2
	bge      lbl_8000793C
	b        lbl_80007984

lbl_80007934:
	lwz      r3, 0xc(r30)
	b        lbl_80007AE8

lbl_8000793C:
	li       r0, 2
	stw      r0, 0x3c(r30)
	b        lbl_80007984

lbl_80007948:
	li       r0, 2
	stw      r0, 0x3c(r30)
	lwz      r0, 0x48(r30)
	cmplw    r4, r0
	bge      lbl_80007984
	lwz      r12, 0x40(r30)
	mr       r3, r30
	mtctr    r12
	bctrl
	or.      r4, r3, r3
	beq      lbl_80007984
	lwz      r5, 0x38(r30)
	mr       r3, r30
	lwz      r5, 0x18(r5)
	bl       on_branch__Q28JMessage18TSequenceProcessorFPCvPCc

lbl_80007984:
	lwz      r0, 0xc(r30)
	cmplw    r0, r31
	bne      lbl_800079AC
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	li       r3, 0
	b        lbl_80007AE8

lbl_800079AC:
	mr       r3, r30
	bl       on_isReady__Q28JMessage18TSequenceProcessorFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_800079C4
	lwz      r3, 0xc(r30)
	b        lbl_80007AE8

lbl_800079C4:
	lwz      r7, 0xc(r30)
	lbz      r29, 0(r7)
	cmpwi    r29, 0x1a
	beq      lbl_80007A04
	bge      lbl_80007A78
	cmpwi    r29, 0
	beq      lbl_800079E4
	b        lbl_80007A78

lbl_800079E4:
	lwz      r12, 0x24(r30)
	mr       r3, r30
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80007AD8
	li       r0, 0
	b        lbl_80007ADC

lbl_80007A04:
	lbz      r29, 1(r7)
	addi     r27, r7, 5
	mr       r3, r30
	add      r0, r7, r29
	mr       r5, r27
	stw      r0, 0xc(r30)
	addi     r6, r29, -5
	lbz      r0, 3(r7)
	lwz      r12, 0(r30)
	rlwinm   r28, r0, 8, 0x10, 0x17
	lbz      r4, 2(r7)
	lbz      r0, 4(r7)
	rlwimi   r28, r4, 0x10, 8, 0xf
	lwz      r12, 0x14(r12)
	or       r28, r28, r0
	mr       r4, r28
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80007AD8
	mr       r3, r30
	mr       r4, r28
	lwz      r12, 0(r30)
	mr       r5, r27
	addi     r6, r29, -5
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	b        lbl_80007AD8

lbl_80007A78:
	lwz      r4, 4(r30)
	mr       r3, r29
	lwz      r4, 4(r4)
	lwz      r12, 4(r4)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80007AB4
	lwz      r3, 0xc(r30)
	slwi     r29, r29, 8
	addi     r0, r3, 1
	stw      r0, 0xc(r30)
	lwz      r3, 0xc(r30)
	lbz      r0, 0(r3)
	or       r29, r29, r0

lbl_80007AB4:
	lwz      r5, 0xc(r30)
	mr       r3, r30
	mr       r4, r29
	addi     r0, r5, 1
	stw      r0, 0xc(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_80007AD8:
	li       r0, 1

lbl_80007ADC:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8000789C
	li       r3, 0

lbl_80007AE8:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80007AFC
 * Size:	00002C
 */
bool JMessage::TSequenceProcessor::on_isReady()
{
	return do_isReady();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
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
 * Size:	000014
 * on_jump_register__Q28JMessage18TSequenceProcessorFPFPCQ28JMessage18TSequenceProcessor_PCvUl
 */
unknown JMessage::TSequenceProcessor::on_jump_register(OnJumpRegisterCallBack*, const void*, u32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80007B28
 * Size:	00002C
 */
void JMessage::TSequenceProcessor::on_jump_isReady()
{
	do_jump_isReady();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x4c(r12)
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
 * Address:	80007B54
 * Size:	00009C
 * on_jump__Q28JMessage18TSequenceProcessorFPCvPCc
 */
void JMessage::TSequenceProcessor::on_jump(const void* p1, const char* p2)
{
	_0C    = p2;
	_10[0] = 0;
	_24    = &process_onCharacterEnd_normal_;
	do_reset_(p2);
	do_reset();
	do_jump(p1, p2);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 * on_branch_register__Q28JMessage18TSequenceProcessorFPFPCQ28JMessage18TSequenceProcessorUl_PCvPCvUl
 */
unknown JMessage::TSequenceProcessor::on_branch_register(OnBranchRegisterCallBack*, const void*, const void*, u32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 * on_branch_query__Q28JMessage18TSequenceProcessorFUs
 */
unknown JMessage::TSequenceProcessor::on_branch_query(u16)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80007BF0
 * Size:	00002C
 */
void JMessage::TSequenceProcessor::on_branch_queryResult() { do_branch_queryResult(); }

/*
 * --INFO--
 * Address:	80007C1C
 * Size:	00009C
 * on_branch__Q28JMessage18TSequenceProcessorFPCvPCc
 */
void JMessage::TSequenceProcessor::on_branch(const void* p1, const char* p2)
{
	_0C    = p2;
	_10[0] = 0;
	_24    = &process_onCharacterEnd_normal_;
	do_reset_(p2);
	do_reset();
	do_branch(p1, p2);
}

/*
 * --INFO--
 * Address:	80007CB8
 * Size:	000004
 */
void JMessage::TSequenceProcessor::do_begin(const void*, const char*) { }

/*
 * --INFO--
 * Address:	80007CBC
 * Size:	000004
 */
void JMessage::TSequenceProcessor::do_end() { }

/*
 * --INFO--
 * Address:	80007CC0
 * Size:	000008
 */
bool JMessage::TSequenceProcessor::do_isReady() { return true; }

/*
 * --INFO--
 * Address:	80007CC8
 * Size:	000008
 */
bool JMessage::TSequenceProcessor::do_jump_isReady() { return true; }

/*
 * --INFO--
 * Address:	80007CD0
 * Size:	000004
 */
void JMessage::TSequenceProcessor::do_jump(const void*, const char*) { }

/*
 * --INFO--
 * Address:	80007CD4
 * Size:	000004
 */
void JMessage::TSequenceProcessor::do_branch_query(unsigned short) { }

/*
 * --INFO--
 * Address:	80007CD8
 * Size:	000008
 */
int JMessage::TSequenceProcessor::do_branch_queryResult() { return -0x2; }

/*
 * --INFO--
 * Address:	80007CE0
 * Size:	000004
 */
void JMessage::TSequenceProcessor::do_branch(const void*, const char*) { }

/*
 * --INFO--
 * Address:	80007CE4
 * Size:	00001C
 */
void JMessage::TSequenceProcessor::do_reset_(const char*)
{
	/*
	li       r0, 0
	cmplwi   r4, 0
	stw      r0, 0x3c(r3)
	beqlr
	li       r0, 2
	stw      r0, 0x3c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80007D00
 * Size:	000010
 * do_setBegin_isReady___Q28JMessage18TSequenceProcessorCFv
 */
bool JMessage::TSequenceProcessor::do_setBegin_isReady_() const { return _3C == 0; }

/*
 * --INFO--
 * Address:	80007D10
 * Size:	00002C
 * do_begin___Q28JMessage18TSequenceProcessorFPCvPCc
 */
void JMessage::TSequenceProcessor::do_begin_(const void* p1, const char* p2) { do_begin(p1, p2); }

/*
 * --INFO--
 * Address:	80007D3C
 * Size:	000034
 * do_end___Q28JMessage18TSequenceProcessorFv
 */
void JMessage::TSequenceProcessor::do_end_()
{
	_3C = 1;
	do_end();
}

/*
 * --INFO--
 * Address:	80007D70
 * Size:	000140
 */
bool JMessage::TSequenceProcessor::do_tag_(unsigned long, const void*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  rlwinm    r7,r4,0,16,31
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r4,16,24,31
	  cmpwi     r0, 0xFA
	  beq-      .loc_0x7C
	  bge-      .loc_0x38
	  cmpwi     r0, 0xF8
	  beq-      .loc_0xB4
	  bge-      .loc_0x94
	  cmpwi     r0, 0xF7
	  bge-      .loc_0xF0
	  b         .loc_0x12C

	.loc_0x38:
	  cmpwi     r0, 0xFC
	  beq-      .loc_0x48
	  bge-      .loc_0x12C
	  b         .loc_0x64

	.loc_0x48:
	  li        r0, 0x3
	  lis       r4, 0x8000
	  stw       r0, 0x3C(r3)
	  addi      r0, r4, 0x7F14
	  stw       r0, 0x40(r3)
	  stw       r7, 0x44(r3)
	  b         .loc_0x130

	.loc_0x64:
	  lis       r4, 0x8000
	  addi      r0, r4, 0x7FE4
	  stw       r0, 0x40(r3)
	  stw       r5, 0x44(r3)
	  stw       r7, 0x48(r3)
	  b         .loc_0x130

	.loc_0x7C:
	  lis       r4, 0x8001
	  subi      r0, r4, 0x7FAC
	  stw       r0, 0x40(r3)
	  stw       r5, 0x44(r3)
	  stw       r7, 0x48(r3)
	  b         .loc_0x130

	.loc_0x94:
	  li        r0, 0x4
	  mr        r4, r7
	  stw       r0, 0x3C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x130

	.loc_0xB4:
	  lis       r4, 0x8000
	  addi      r6, r5, 0x2
	  addi      r0, r4, 0x7FE4
	  lhz       r5, 0x0(r5)
	  stw       r0, 0x40(r3)
	  li        r0, 0x4
	  mr        r4, r7
	  stw       r6, 0x44(r3)
	  stw       r5, 0x48(r3)
	  stw       r0, 0x3C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x130

	.loc_0xF0:
	  lis       r4, 0x8001
	  addi      r6, r5, 0x2
	  subi      r0, r4, 0x7FAC
	  lhz       r5, 0x0(r5)
	  stw       r0, 0x40(r3)
	  li        r0, 0x4
	  mr        r4, r7
	  stw       r6, 0x44(r3)
	  stw       r5, 0x48(r3)
	  stw       r0, 0x3C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x130

	.loc_0x12C:
	  bl        -0xCD8

	.loc_0x130:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80007EB0
 * Size:	000064
 * do_systemTagCode___Q28JMessage18TSequenceProcessorFUsPCvUl
 */
void JMessage::TSequenceProcessor::do_systemTagCode_(unsigned short p1, const void* p2, unsigned long p3)
{
	switch (p1) {
	case 6:
		_3C = 3;
		_40 = &process_onJump_;
		_44 = *(u32*)p2;
		break;
	case 0:
	case 1:
	case 2:
	case 3:
		break;
	case 4:
	case 5:
	default:
		TProcessor::do_systemTagCode_(p1, p2, p3);
		break;
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r4,0,16,31
	  cmpwi     r0, 0x6
	  beq-      .loc_0x30
	  bge-      .loc_0x50
	  cmpwi     r0, 0x4
	  bge-      .loc_0x50
	  cmpwi     r0, 0
	  bge-      .loc_0x54
	  b         .loc_0x50

	.loc_0x30:
	  li        r0, 0x3
	  lis       r4, 0x8000
	  stw       r0, 0x3C(r3)
	  addi      r0, r4, 0x7F80
	  lwz       r4, 0x0(r5)
	  stw       r0, 0x40(r3)
	  stw       r4, 0x44(r3)
	  b         .loc_0x54

	.loc_0x50:
	  bl        -0xA8C

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 * process_setMessageIndex_reserved___Q28JMessage18TSequenceProcessorFUs
 */
unknown JMessage::TSequenceProcessor::process_setMessageIndex_reserved_(u16)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 * process_setMessageCode___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessorUsUs
 */
unknown JMessage::TSequenceProcessor::process_setMessageCode_(const TSequenceProcessor*, u16, u16)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80007F14
 * Size:	00006C
 */
void JMessage::TSequenceProcessor::process_onJump_limited_(const JMessage::TSequenceProcessor*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lwz       r4, 0x8(r3)
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x44(r3)
	  stw       r31, 0xC(r1)
	  rlwinm    r6,r0,0,16,31
	  lwz       r4, 0xC(r4)
	  cmplwi    r6, 0xFF00
	  lhz       r5, 0xC(r4)
	  blt-      .loc_0x34
	  li        r3, 0
	  b         .loc_0x58

	.loc_0x34:
	  lwz       r31, 0x38(r3)
	  mr        r4, r3
	  mr        r3, r31
	  bl        0x900
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x54
	  li        r3, 0
	  b         .loc_0x58

	.loc_0x54:
	  lwz       r3, 0x14(r31)

	.loc_0x58:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80007F80
 * Size:	000064
 * process_onJump___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessor
 */
void* JMessage::TSequenceProcessor::process_onJump_(const JMessage::TSequenceProcessor* processor)
{
	u16 v1 = processor->_44 & 0xFFFF;
	if (v1 >= 0xFF00) {
		return nullptr;
	}
	return processor->_38->setMessageCode_inSequence_(processor, processor->_44 >> 0x10, v1) ? processor->_38->_14 : nullptr;
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x44(r3)
	  stw       r31, 0xC(r1)
	  rlwinm    r6,r0,0,16,31
	  cmplwi    r6, 0xFF00
	  blt-      .loc_0x28
	  li        r3, 0
	  b         .loc_0x50

	.loc_0x28:
	  lwz       r31, 0x38(r3)
	  mr        r4, r3
	  rlwinm    r5,r0,16,16,31
	  mr        r3, r31
	  bl        0x89C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x4C
	  li        r3, 0
	  b         .loc_0x50

	.loc_0x4C:
	  lwz       r3, 0x14(r31)

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80007FE4
 * Size:	000070
 */
void JMessage::TSequenceProcessor::process_onBranch_limited_(const JMessage::TSequenceProcessor*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lwz       r5, 0x44(r3)
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r4,1,0,30
	  lwz       r4, 0x8(r3)
	  stw       r31, 0xC(r1)
	  lhzx      r6, r5, r0
	  lwz       r4, 0xC(r4)
	  cmplwi    r6, 0xFF00
	  lhz       r5, 0xC(r4)
	  blt-      .loc_0x38
	  li        r3, 0
	  b         .loc_0x5C

	.loc_0x38:
	  lwz       r31, 0x38(r3)
	  mr        r4, r3
	  mr        r3, r31
	  bl        0x82C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x58
	  li        r3, 0
	  b         .loc_0x5C

	.loc_0x58:
	  lwz       r3, 0x14(r31)

	.loc_0x5C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80008054
 * Size:	00006C
 */
void JMessage::TSequenceProcessor::process_onBranch_(const JMessage::TSequenceProcessor*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r4,2,0,29
	  lwz       r4, 0x44(r3)
	  stw       r31, 0xC(r1)
	  lwzx      r0, r4, r0
	  rlwinm    r6,r0,0,16,31
	  cmplwi    r6, 0xFF00
	  blt-      .loc_0x30
	  li        r3, 0
	  b         .loc_0x58

	.loc_0x30:
	  lwz       r31, 0x38(r3)
	  mr        r4, r3
	  rlwinm    r5,r0,16,16,31
	  mr        r3, r31
	  bl        0x7C0
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x54
	  li        r3, 0
	  b         .loc_0x58

	.loc_0x54:
	  lwz       r3, 0x14(r31)

	.loc_0x58:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800080C0
 * Size:	00003C
 */
JMessage::TRenderingProcessor::TRenderingProcessor(const JMessage::TReference*)
{
	/*
	lis      r7, __vt__Q28JMessage10TProcessor@ha
	lis      r6,
	process_onCharacterEnd_normal___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@ha
	addi     r0, r7, __vt__Q28JMessage10TProcessor@l
	lis      r5, __vt__Q28JMessage19TRenderingProcessor@ha
	stw      r0, 0(r3)
	li       r7, 0
	addi     r6, r6,
	process_onCharacterEnd_normal___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@l
	addi     r0, r5, __vt__Q28JMessage19TRenderingProcessor@l
	stw      r4, 4(r3)
	stw      r7, 8(r3)
	stw      r7, 0xc(r3)
	stw      r7, 0x10(r3)
	stw      r6, 0x24(r3)
	stw      r0, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800080FC
 * Size:	00005C
 */
JMessage::TRenderingProcessor::~TRenderingProcessor()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80008140
	lis      r3, __vt__Q28JMessage19TRenderingProcessor@ha
	addi     r0, r3, __vt__Q28JMessage19TRenderingProcessor@l
	stw      r0, 0(r31)
	beq      lbl_80008130
	lis      r3, __vt__Q28JMessage10TProcessor@ha
	addi     r0, r3, __vt__Q28JMessage10TProcessor@l
	stw      r0, 0(r31)

lbl_80008130:
	extsh.   r0, r4
	ble      lbl_80008140
	mr       r3, r31
	bl       __dl__FPv

lbl_80008140:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80008158
 * Size:	000174
 */
void JMessage::TRenderingProcessor::process(const char*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r30, r3
	mr       r31, r4

lbl_80008170:
	lwz      r7, 0xc(r30)
	cmplw    r7, r31
	bne      lbl_80008198
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	li       r3, 0
	b        lbl_800082B8

lbl_80008198:
	lbz      r29, 0(r7)
	cmpwi    r29, 0x1a
	beq      lbl_800081D4
	bge      lbl_80008248
	cmpwi    r29, 0
	beq      lbl_800081B4
	b        lbl_80008248

lbl_800081B4:
	lwz      r12, 0x24(r30)
	mr       r3, r30
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_800082A8
	li       r0, 0
	b        lbl_800082AC

lbl_800081D4:
	lbz      r29, 1(r7)
	addi     r27, r7, 5
	mr       r3, r30
	add      r0, r7, r29
	mr       r5, r27
	stw      r0, 0xc(r30)
	addi     r6, r29, -5
	lbz      r0, 3(r7)
	lwz      r12, 0(r30)
	rlwinm   r28, r0, 8, 0x10, 0x17
	lbz      r4, 2(r7)
	lbz      r0, 4(r7)
	rlwimi   r28, r4, 0x10, 8, 0xf
	lwz      r12, 0x14(r12)
	or       r28, r28, r0
	mr       r4, r28
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_800082A8
	mr       r3, r30
	mr       r4, r28
	lwz      r12, 0(r30)
	mr       r5, r27
	addi     r6, r29, -5
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	b        lbl_800082A8

lbl_80008248:
	lwz      r4, 4(r30)
	mr       r3, r29
	lwz      r4, 4(r4)
	lwz      r12, 4(r4)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80008284
	lwz      r3, 0xc(r30)
	slwi     r29, r29, 8
	addi     r0, r3, 1
	stw      r0, 0xc(r30)
	lwz      r3, 0xc(r30)
	lbz      r0, 0(r3)
	or       r29, r29, r0

lbl_80008284:
	lwz      r5, 0xc(r30)
	mr       r3, r30
	mr       r4, r29
	addi     r0, r5, 1
	stw      r0, 0xc(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_800082A8:
	li       r0, 1

lbl_800082AC:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80008170
	li       r3, 0

lbl_800082B8:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800082CC
 * Size:	000004
 */
void JMessage::TRenderingProcessor::do_begin(const void*, const char*) { }

/*
 * --INFO--
 * Address:	800082D0
 * Size:	000004
 */
void JMessage::TRenderingProcessor::do_end() { }

/*
 * --INFO--
 * Address:	800082D4
 * Size:	000004
 */
void JMessage::TRenderingProcessor::do_reset_(const char*) { }

/*
 * --INFO--
 * Address:	800082D8
 * Size:	00002C
 * do_begin___Q28JMessage19TRenderingProcessorFPCvPCc
 */
void JMessage::TRenderingProcessor::do_begin_(const void* p1, const char* p2) { do_begin(p1, p2); }

/*
 * --INFO--
 * Address:	80008304
 * Size:	00002C
 * do_end___Q28JMessage19TRenderingProcessorFv
 */
void JMessage::TRenderingProcessor::do_end_() { do_end(); }

/*
 * --INFO--
 * Address:	80008330
 * Size:	000034
 * do_tag___Q28JMessage19TRenderingProcessorFUlPCvUl
 */
bool JMessage::TRenderingProcessor::do_tag_(unsigned long p1, const void* p2, unsigned long p3)
{
	u8 v1 = p1 >> 0x10 & 0xFF;
	if ((0xFC < v1) || (v1 < 0xF7)) {
		TProcessor::do_tag_(p1, p2, p3);
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r4,16,24,31
	  cmpwi     r0, 0xFD
	  bge-      .loc_0x20
	  cmpwi     r0, 0xF7
	  bge-      .loc_0x24

	.loc_0x20:
	  bl        -0x118C

	.loc_0x24:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80008364
 * Size:	000040
 */
void JMessage::TRenderingProcessor::do_systemTagCode_(unsigned short, const void*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r4,0,16,31
	  cmpwi     r0, 0x6
	  beq-      .loc_0x30
	  bge-      .loc_0x2C
	  cmpwi     r0, 0x4
	  bge-      .loc_0x2C
	  cmpwi     r0, 0
	  bge-      .loc_0x30

	.loc_0x2C:
	  bl        -0xF1C

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
