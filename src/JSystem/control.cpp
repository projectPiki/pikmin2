#include "JSystem/JMessage.h"
#include "types.h"
#include "JSystem/JMessage/TProcessor.h"
#include "JSystem/JMessage/TResource.h"
#include "JSystem/JMessage/TControl.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q28JMessage8TControl
    __vt__Q28JMessage8TControl:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28JMessage8TControlFv
        .4byte 0
*/

namespace JMessage {

/*
 * --INFO--
 * Address:	800083A4
 * Size:	000044
 */
TControl::TControl()
{
	_04 = 0;
	_08 = 0;
	_0C = 0xFFFF;
	_0E = 0xFFFF;
	_10 = 0;
	_14 = 0;
	_18 = 0;
	_1C = 0;
	_20 = 0;
	_24 = 0;
}

/*
 * --INFO--
 * Address:	800083E8
 * Size:	000048
 */
TControl::~TControl() { }

/*
 * --INFO--
 * Address:	80008430
 * Size:	000068
 */
void TControl::reset()
{
	_14 = 0;
	_18 = 0;
	_1C = 0;
	_20 = 0;
	_24 = 0;

	if (_04) {
		_04->reset_(0);
	}

	if (_08) {
		_08->reset_(0);
	}
}

/*
 * --INFO--
 * Address:	80008498
 * Size:	000088
 */
bool TControl::update()
{
	bool checkVars = (_18 && _04);

	if (!checkVars) {
		return false;
	}

	_1C = ((TSequenceProcessor*)_04)->process(0);

	if (_1C == 0) {
		_18 = 0;
		return false;
	}
	return true;
}

/*
 * --INFO--
 * Address:	80008520
 * Size:	00015C
 */
void TControl::render(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	li       r3, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	lwz      r28, 0x20(r31)
	cmplwi   r28, 0
	beq      lbl_80008560
	lwz      r0, 8(r31)
	cmplwi   r0, 0
	beq      lbl_80008560
	li       r3, 1

lbl_80008560:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8000865C
	lwz      r30, 8(r31)
	mr       r4, r28
	lwz      r29, 0x14(r31)
	lwz      r0, 0x10(r31)
	mr       r3, r30
	stw      r0, 8(r30)
	bl       reset___Q28JMessage10TProcessorFPCc
	mr       r3, r30
	mr       r4, r29
	lwz      r12, 0(r30)
	mr       r5, r28
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r31)
	addi     r5, r31, 0x28
	lwz      r0, 0x24(r31)
	addi     r6, r3, 0x14
	stw      r0, 0x10(r3)
	lwz      r0, 0x24(r31)
	slwi     r0, r0, 2
	add      r3, r31, r0
	addi     r4, r3, 0x28
	addi     r3, r4, 3
	subf     r3, r5, r3
	cmplw    r5, r4
	srwi     r3, r3, 2
	bge      lbl_80008650
	rlwinm.  r0, r3, 0x1d, 3, 0x1f
	mtctr    r0
	beq      lbl_80008638

lbl_800085E4:
	lwz      r0, 0(r5)
	stw      r0, 0(r6)
	lwz      r0, 4(r5)
	stw      r0, 4(r6)
	lwz      r0, 8(r5)
	stw      r0, 8(r6)
	lwz      r0, 0xc(r5)
	stw      r0, 0xc(r6)
	lwz      r0, 0x10(r5)
	stw      r0, 0x10(r6)
	lwz      r0, 0x14(r5)
	stw      r0, 0x14(r6)
	lwz      r0, 0x18(r5)
	stw      r0, 0x18(r6)
	lwz      r0, 0x1c(r5)
	addi     r5, r5, 0x20
	stw      r0, 0x1c(r6)
	addi     r6, r6, 0x20
	bdnz     lbl_800085E4
	andi.    r3, r3, 7
	beq      lbl_80008650

lbl_80008638:
	mtctr    r3

lbl_8000863C:
	lwz      r0, 0(r5)
	addi     r5, r5, 4
	stw      r0, 0(r6)
	addi     r6, r6, 4
	bdnz     lbl_8000863C

lbl_80008650:
	lwz      r3, 8(r31)
	lwz      r4, 0x1c(r31)
	bl       process__Q28JMessage19TRenderingProcessorFPCc

lbl_8000865C:
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
 * Address:	8000867C
 * Size:	0000DC
 */
bool TControl::setMessageCode(u16 idx1, u16 idx2)
{
	TProcessor* proc1;
	void* voidPtr;

	TProcessor* processor = (_04) ? _04 : _08;

	if (!setMessageCode_inSequence_(processor, idx1, idx2)) {
		return false;
	}

	char* ptr      = _18;
	bool checkVars = (ptr && _04);

	if (checkVars) {
		proc1      = _04;
		voidPtr    = _14;
		proc1->_08 = _10;
		proc1->reset_(ptr);
		proc1->do_begin_(voidPtr, ptr);
	}

	return true;
}

/*
 * --INFO--
 * Address:	80008758
 * Size:	0000FC
 * setMessageID__Q28JMessage8TControlFUlUlPb
 */
bool TControl::setMessageID(u32 p1, u32 p2, bool* p3)
{
	TProcessor* proc1;
	void* voidPtr;

	TProcessor* processor = (_04 != nullptr) ? _04 : _08;

	u32 msgCode = processor->toMessageCode_messageID(p1, p2, p3);
	if (msgCode == 0xFFFFFFFF) {
		return false;
	}
	if (!setMessageCode_inSequence_(processor, msgCode >> 0x10, (u16)msgCode)) {
		return false;
	}

	char* ptr      = _18;
	bool checkVars = (ptr && _04);

	if (checkVars) {
		proc1      = _04;
		voidPtr    = _14;
		proc1->_08 = _10;
		proc1->reset_(ptr);
		proc1->do_begin_(voidPtr, ptr);
	}

	return true;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	beq      lbl_80008788
	b        lbl_8000878C

lbl_80008788:
	lwz      r30, 8(r28)

lbl_8000878C:
	mr       r3, r30
	bl       toMessageCode_messageID__Q28JMessage10TProcessorCFUlUlPb
	mr       r6, r3
	addis    r0, r6, 1
	cmplwi   r0, 0xffff
	bne      lbl_800087AC
	li       r3, 0
	b        lbl_80008834

lbl_800087AC:
	srwi     r5, r6, 0x10
	mr       r3, r28
	mr       r4, r30
	clrlwi   r6, r6, 0x10
	bl
setMessageCode_inSequence___Q28JMessage8TControlFPCQ28JMessage10TProcessorUsUs
	clrlwi.  r0, r3, 0x18
	bne      lbl_800087D0
	li       r3, 0
	b        lbl_80008834

lbl_800087D0:
	lwz      r29, 0x18(r28)
	li       r3, 0
	cmplwi   r29, 0
	beq      lbl_800087F0
	lwz      r0, 4(r28)
	cmplwi   r0, 0
	beq      lbl_800087F0
	li       r3, 1

lbl_800087F0:
	clrlwi.  r0, r3, 0x18
	beq      lbl_80008830
	lwz      r31, 4(r28)
	mr       r4, r29
	lwz      r30, 0x14(r28)
	lwz      r0, 0x10(r28)
	mr       r3, r31
	stw      r0, 8(r31)
	bl       reset___Q28JMessage10TProcessorFPCc
	mr       r3, r31
	mr       r4, r30
	lwz      r12, 0(r31)
	mr       r5, r29
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl

lbl_80008830:
	li       r3, 1

lbl_80008834:
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
 * Address:	80008854
 * Size:	0000E8
 * setMessageCode_inSequence___Q28JMessage8TControlFPCQ28JMessage10TProcessorUsUs
 */
bool TControl::setMessageCode_inSequence_(TProcessor const* processor, unsigned short resID, unsigned short msgID)
{
	char* v1;
	TResource* resource = processor->getResource_groupID(resID);
	if (resource == nullptr) {
		v1 = nullptr;
	} else {
		INF1Block* inf1 = resource->m_INF1;
		if (msgID < inf1->_08) {
			v1 = inf1->_10[msgID * inf1->_0A];
		} else {
			v1 = nullptr;
		}
	}
	_14 = v1;
	if (_14 == nullptr) {
		return false;
	}
	_0C = resID;
	_0E = msgID;
	_10 = processor->_08;
	_18 = (char*)_10->m_DAT1 + *_14;
	_20 = _18;
	_24 = 0;
	return true;
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  mr        r30, r6
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  stw       r28, 0x10(r1)
	  mr        r28, r4
	  mr        r3, r28
	  mr        r4, r29
	  bl        -0x1924
	  cmplwi    r3, 0
	  bne-      .loc_0x48
	  li        r3, 0
	  b         .loc_0x74

	.loc_0x48:
	  lwz       r3, 0xC(r3)
	  rlwinm    r4,r30,0,16,31
	  lhz       r0, 0x8(r3)
	  cmplw     r4, r0
	  bge-      .loc_0x70
	  lhz       r0, 0xA(r3)
	  mullw     r0, r4, r0
	  add       r3, r3, r0
	  addi      r3, r3, 0x10
	  b         .loc_0x74

	.loc_0x70:
	  li        r3, 0

	.loc_0x74:
	  stw       r3, 0x14(r31)
	  lwz       r0, 0x14(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x8C
	  li        r3, 0
	  b         .loc_0xC8

	.loc_0x8C:
	  sth       r29, 0xC(r31)
	  li        r0, 0
	  lwz       r4, 0x8(r28)
	  li        r3, 0x1
	  sth       r30, 0xE(r31)
	  stw       r4, 0x10(r31)
	  lwz       r5, 0x10(r31)
	  lwz       r4, 0x14(r31)
	  lwz       r5, 0x10(r5)
	  lwz       r4, 0x0(r4)
	  add       r4, r5, r4
	  stw       r4, 0x18(r31)
	  lwz       r4, 0x18(r31)
	  stw       r4, 0x20(r31)
	  stw       r0, 0x24(r31)

	.loc_0xC8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

} // namespace JMessage
