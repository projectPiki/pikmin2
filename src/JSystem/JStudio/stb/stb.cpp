#include "JStudio/stb.h"
#include "Dolphin/stl.h"
#include "JStudio/object.h"
#include "JStudio/stb-data.h"
#include "JSystem/JGadget/binary.h"
#include "JSystem/JGadget/linklist.h"
#include "std/algorithm.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q37JStudio3stb6TParse
    __vt__Q37JStudio3stb6TParse:
        .4byte 0
        .4byte 0
        .4byte __dt__Q37JStudio3stb6TParseFv
        .4byte parseHeader_next__Q37JStudio3stb6TParseFPPCvPUlUl
        .4byte parseBlock_next__Q37JStudio3stb6TParseFPPCvPUlUl
        .4byte
   parseHeader__Q37JStudio3stb6TParseFRCQ47JStudio3stb4data14TParse_THeaderUl
        .4byte
   parseBlock_block__Q37JStudio3stb6TParseFRCQ47JStudio3stb4data13TParse_TBlockUl
        .4byte
   parseBlock_object__Q37JStudio3stb6TParseFRCQ47JStudio3stb4data20TParse_TBlock_objectUl
    .global __vt__Q37JStudio3stb8TFactory
    __vt__Q37JStudio3stb8TFactory:
        .4byte 0
        .4byte 0
        .4byte __dt__Q37JStudio3stb8TFactoryFv
        .4byte
   create__Q37JStudio3stb8TFactoryFRCQ47JStudio3stb4data20TParse_TBlock_object
        .4byte destroy__Q37JStudio3stb8TFactoryFPQ37JStudio3stb7TObject
    .global __vt__Q37JStudio3stb8TControl
    __vt__Q37JStudio3stb8TControl:
        .4byte 0
        .4byte 0
        .4byte __dt__Q37JStudio3stb8TControlFv
    .global __vt__Q37JStudio3stb15TObject_control
    __vt__Q37JStudio3stb15TObject_control:
        .4byte 0
        .4byte 0
        .4byte __dt__Q37JStudio3stb15TObject_controlFv
        .4byte do_begin__Q37JStudio3stb7TObjectFv
        .4byte do_end__Q37JStudio3stb7TObjectFv
        .4byte do_paragraph__Q37JStudio3stb7TObjectFUlPCvUl
        .4byte do_wait__Q37JStudio3stb7TObjectFUl
        .4byte do_data__Q37JStudio3stb7TObjectFPCvUlPCvUl
    .global __vt__Q37JStudio3stb7TObject
    __vt__Q37JStudio3stb7TObject:
        .4byte 0
        .4byte 0
        .4byte __dt__Q37JStudio3stb7TObjectFv
        .4byte do_begin__Q37JStudio3stb7TObjectFv
        .4byte do_end__Q37JStudio3stb7TObjectFv
        .4byte do_paragraph__Q37JStudio3stb7TObjectFUlPCvUl
        .4byte do_wait__Q37JStudio3stb7TObjectFUl
        .4byte do_data__Q37JStudio3stb7TObjectFPCvUlPCvUl

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global gu32Mask_TSequence_value_signExpansion__Q37JStudio3stb4data
    gu32Mask_TSequence_value_signExpansion__Q37JStudio3stb4data:
        .4byte 0xFF000000
        .4byte 0x00000000
*/

namespace JStudio {
namespace stb {

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void TObject::toString_status(int a)
{
	// UNUSED FUNCTION
}

/**
 * @warning It's just a guess which param gets assigned to where.
 * --INFO--
 * Address:	........
 * Size:	000048
 */
TObject::TObject(unsigned long p1, void const* id, unsigned long idLength)
    : JStudio::object::TObject_ID(id, idLength)
    , pControl(nullptr)
    , signature(p1)
    , mFlag(0)
    , bSequence_(0)
    , _20(0)
    , pSequence(nullptr)
    , pSequence_next(nullptr)
    , u32Wait_(0)
    , mStatus(STATUS_STILL)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80010278
 * Size:	000070
 */
TObject::TObject(data::TParse_TBlock_object const& block)
    : JStudio::object::TObject_ID((u32*)block.filedata + 3, block.filedata[2])
{
	// idString_0x0      = (u32*)block.filedata + 3;
	// lengthInBytes_0x4 = block.filedata[2]; // should be short 0xa
	_0C.m_prev     = 0;
	_0C.m_next     = 0;
	pControl       = nullptr;
	signature      = block.filedata[1];
	mFlag          = block.filedata[2]; // should be short 0x8
	bSequence_     = false;
	_20            = 0;
	pSequence      = nullptr;
	pSequence_next = nullptr; //(int)iVar2 + (*(u16 *)((int)iVar2 + 10) + 3 &
	                          // 0xfffffffc) + 0xc; this crap
	u32Wait_ = 0;
	mStatus  = STATUS_STILL;
	/*
	lwz      r8, 0(r4)
	lis      r4, __vt__Q37JStudio3stb7TObject@ha
	addi     r0, r4, __vt__Q37JStudio3stb7TObject@l
	li       r5, 0
	lhz      r7, 0xa(r8)
	addi     r6, r8, 0xc
	stw      r6, 0(r3)
	stw      r7, 4(r3)
	stw      r0, 8(r3)
	stw      r5, 0xc(r3)
	stw      r5, 0x10(r3)
	stw      r5, 0x14(r3)
	lwz      r0, 4(r8)
	stw      r0, 0x18(r3)
	lhz      r0, 8(r8)
	sth      r0, 0x1c(r3)
	stb      r5, 0x1e(r3)
	stw      r5, 0x20(r3)
	stw      r5, 0x24(r3)
	lhz      r4, 0xa(r8)
	addi     r0, r4, 3
	rlwinm   r4, r0, 0, 0, 0x1d
	addi     r0, r4, 0xc
	add      r0, r8, r0
	stw      r0, 0x28(r3)
	stw      r5, 0x2c(r3)
	stw      r5, 0x30(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800102E8
 * Size:	000048
 * __dt__Q37JStudio3stb7TObjectFv
 */
TObject::~TObject(void) { }

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void TObject::setFlag_operation(unsigned char, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void TObject::reset(void const*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80010330
 * Size:	000238
 */
bool TObject::forward(unsigned long a1)
{
	bool end = false;
	while (true) {
		if (mFlag & 0x8000) {
			if (mStatus == STATUS_SUSPEND || mStatus == STATUS_WAIT) {
				mStatus = STATUS_INACTIVE;
				if (bSequence_)
					do_end();
			}
			return true;
		}
		if (mStatus == 8) {
			do_begin();
			mStatus = STATUS_WAIT;
		}
		if (pControl != nullptr && 0 < pControl->_54 || 0 < _20)
			break;

		while (true) {
			pSequence = pSequence_next;
			if (pSequence == nullptr) {
				if (bSequence_) {
					if (!end) {
						do_wait(0);
					}
					bSequence_ = false;
					mStatus    = STATUS_END;
					do_end();
				}
				return false;
			}
			if (!bSequence_) {
				bSequence_ = true;
				do_begin();
			}
			mStatus = STATUS_WAIT;
			process_sequence();
			if (u32Wait_ == 0)
				break;
			end             = true;
			int seqstateold = u32Wait_;
			if (a1 < u32Wait_) {
				u32Wait_ -= a1;
				do_wait(a1);
				return true;
			}
			u32Wait_ = 0;
			a1 -= seqstateold;
			do_wait(u32Wait_);
		}
	}
	if (bSequence_) {
		mStatus = STATUS_SUSPEND;
		do_wait(a1);
	}
	return true;

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	li       r29, 0

lbl_80010354:
	lhz      r0, 0x1c(r30)
	rlwinm.  r0, r0, 0, 0x10, 0x10
	beq      lbl_800103BC
	lwz      r0, 0x30(r30)
	cmpwi    r0, 4
	beq      lbl_8001038C
	bge      lbl_80010380
	cmpwi    r0, 2
	beq      lbl_8001038C
	bge      lbl_800103B4
	b        lbl_800103B4

lbl_80010380:
	cmpwi    r0, 8
	beq      lbl_800103B4
	b        lbl_800103B4

lbl_8001038C:
	li       r0, 8
	stw      r0, 0x30(r30)
	lbz      r0, 0x1e(r30)
	cmplwi   r0, 0
	beq      lbl_800103B4
	mr       r3, r30
	lwz      r12, 8(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_800103B4:
	li       r3, 1
	b        lbl_8001054C

lbl_800103BC:
	lwz      r0, 0x30(r30)
	cmpwi    r0, 8
	bne      lbl_800103E4
	mr       r3, r30
	lwz      r12, 8(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r0, 2
	stw      r0, 0x30(r30)

lbl_800103E4:
	lwz      r3, 0x14(r30)
	cmplwi   r3, 0
	beq      lbl_800103FC
	lwz      r0, 0x54(r3)
	cmpwi    r0, 0
	bgt      lbl_80010408

lbl_800103FC:
	lwz      r0, 0x20(r30)
	cmpwi    r0, 0
	ble      lbl_8001043C

lbl_80010408:
	lbz      r0, 0x1e(r30)
	cmplwi   r0, 0
	beq      lbl_80010434
	li       r0, 4
	mr       r3, r30
	stw      r0, 0x30(r30)
	mr       r4, r31
	lwz      r12, 8(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_80010434:
	li       r3, 1
	b        lbl_8001054C

lbl_8001043C:
	lwz      r0, 0x28(r30)
	cmplwi   r0, 0
	stw      r0, 0x24(r30)
	bne      lbl_800104A4
	lbz      r0, 0x1e(r30)
	cmplwi   r0, 0
	beq      lbl_8001049C
	clrlwi.  r0, r29, 0x18
	bne      lbl_80010478
	mr       r3, r30
	li       r4, 0
	lwz      r12, 8(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_80010478:
	li       r3, 0
	li       r0, 1
	stb      r3, 0x1e(r30)
	mr       r3, r30
	stw      r0, 0x30(r30)
	lwz      r12, 8(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8001049C:
	li       r3, 0
	b        lbl_8001054C

lbl_800104A4:
	lbz      r0, 0x1e(r30)
	cmplwi   r0, 0
	bne      lbl_800104CC
	li       r0, 1
	mr       r3, r30
	stb      r0, 0x1e(r30)
	lwz      r12, 8(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_800104CC:
	li       r0, 2
	stw      r0, 0x30(r30)
	lwz      r0, 0x2c(r30)
	cmplwi   r0, 0
	bne      lbl_800104F4
	mr       r3, r30
	bl       process_sequence___Q37JStudio3stb7TObjectFv
	lwz      r0, 0x2c(r30)
	cmplwi   r0, 0
	beq      lbl_80010354

lbl_800104F4:
	lwz      r4, 0x2c(r30)
	li       r29, 1
	cmplw    r31, r4
	blt      lbl_80010528
	li       r0, 0
	mr       r3, r30
	stw      r0, 0x2c(r30)
	subf     r31, r4, r31
	lwz      r12, 8(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	b        lbl_8001043C

lbl_80010528:
	subf     r0, r31, r4
	mr       r3, r30
	stw      r0, 0x2c(r30)
	mr       r4, r31
	lwz      r12, 8(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	li       r3, 1

lbl_8001054C:
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
 * Address:	80010568
 * Size:	000004
 */
void TObject::do_begin(void) { }

/*
 * --INFO--
 * Address:	8001056C
 * Size:	000004
 */
void TObject::do_end(void) { }

/*
 * --INFO--
 * Address:	80010570
 * Size:	000004
 */
void TObject::do_paragraph(unsigned long, void const*, unsigned long) { }

/*
 * --INFO--
 * Address:	80010574
 * Size:	000004
 */
void TObject::do_wait(unsigned long) { }

/*
 * --INFO--
 * Address:	80010578
 * Size:	000004
 */
void TObject::do_data(void const*, unsigned long, void const*, unsigned long) { }

/*
 * --INFO--
 * Address:	8001057C
 * Size:	0001A4
 */
void TObject::process_sequence_(void)
{
	data::TParse_TSequence temp;
	data::TParse_TSequence::TData data;

	temp.stbData = pSequence;
	temp.getData(&data);
	pSequence_next = (void*)data.next;
	if (data.type == 3) {
		if (data.param & 0x800000) {
			data.param |= 0xff000000; // gu32Mask_TSequence_value_signExpansion__Q37JStudio3stb4data;
		}
		pSequence_next = (u8*)pSequence + data.param;
	} else if (data.type == 1) {
		int bitflag = data.param >> 0x10 & 0xff;
		if (bitflag == 2)
			mFlag &= data.param;
		else if (bitflag == 1)
			mFlag |= data.param;
		else if (bitflag == 3)
			mFlag ^= data.param;
	} else if (data.type == 2) {
		u32Wait_ = data.param;
	} else if (data.type == 0x80) {
		while (data.content < data.next) {
			stb::data::TParse_TParagraph para;
			stb::data::TParse_TParagraph::TData data2;
			para.getData(&data2);
			if (data2.type < 0x100) {
				process_paragraph_reserved_(data2.type, data2.content, data2.param);
				data.content = data2.next;
			} else {
				do_paragraph(data2.type, data2.content, data2.param);
				data.content = data2.next;
			}
		}
	} else if (data.type == 4) {
		if (data.param & 0x800000) {
			data.param |= 0xff000000; // gu32Mask_TSequence_value_signExpansion__Q37JStudio3stb4data
		}
		_20 += data.param;
	}
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	addi     r4, r1, 0x20
	stw      r31, 0x3c(r1)
	mr       r31, r3
	addi     r3, r1, 0xc
	stw      r30, 0x38(r1)
	lwz      r0, 0x24(r31)
	stw      r0, 0xc(r1)
	bl
getData__Q47JStudio3stb4data16TParse_TSequenceCFPQ57JStudio3stb4data16TParse_TSequence5TData
	lbz      r0, 0x20(r1)
	lwz      r4, 0x24(r1)
	lwz      r3, 0x28(r1)
	cmpwi    r0, 3
	lwz      r30, 0x2c(r1)
	stw      r30, 0x28(r31)
	beq      lbl_8001065C
	bge      lbl_800105D8
	cmpwi    r0, 1
	beq      lbl_800105F0
	bge      lbl_80010654
	b        lbl_80010708

lbl_800105D8:
	cmpwi    r0, 0x80
	beq      lbl_800106A4
	bge      lbl_80010708
	cmpwi    r0, 5
	bge      lbl_80010708
	b        lbl_80010680

lbl_800105F0:
	rlwinm   r0, r4, 0x10, 0x18, 0x1f
	cmpwi    r0, 2
	beq      lbl_8001062C
	bge      lbl_8001060C
	cmpwi    r0, 1
	bge      lbl_80010618
	b        lbl_80010708

lbl_8001060C:
	cmpwi    r0, 4
	bge      lbl_80010708
	b        lbl_80010640

lbl_80010618:
	lhz      r3, 0x1c(r31)
	clrlwi   r0, r4, 0x10
	or       r0, r3, r0
	sth      r0, 0x1c(r31)
	b        lbl_80010708

lbl_8001062C:
	lhz      r3, 0x1c(r31)
	clrlwi   r0, r4, 0x10
	and      r0, r3, r0
	sth      r0, 0x1c(r31)
	b        lbl_80010708

lbl_80010640:
	lhz      r3, 0x1c(r31)
	clrlwi   r0, r4, 0x10
	xor      r0, r3, r0
	sth      r0, 0x1c(r31)
	b        lbl_80010708

lbl_80010654:
	stw      r4, 0x2c(r31)
	b        lbl_80010708

lbl_8001065C:
	rlwinm.  r0, r4, 0, 8, 8
	mr       r3, r4
	beq      lbl_80010670
	lwz      r0,
gu32Mask_TSequence_value_signExpansion__Q37JStudio3stb4data@sda21(r2) or r3, r4,
r0

lbl_80010670:
	lwz      r0, 0x24(r31)
	add      r0, r0, r3
	stw      r0, 0x28(r31)
	b        lbl_80010708

lbl_80010680:
	rlwinm.  r0, r4, 0, 8, 8
	mr       r3, r4
	beq      lbl_80010694
	lwz      r0,
gu32Mask_TSequence_value_signExpansion__Q37JStudio3stb4data@sda21(r2) or r3, r4,
r0

lbl_80010694:
	lwz      r0, 0x20(r31)
	add      r0, r0, r3
	stw      r0, 0x20(r31)
	b        lbl_80010708

lbl_800106A4:
	li       r0, 0
	stw      r0, 8(r1)
	b        lbl_80010700

lbl_800106B0:
	stw      r3, 8(r1)
	addi     r3, r1, 8
	addi     r4, r1, 0x10
	bl
getData__Q47JStudio3stb4data17TParse_TParagraphCFPQ57JStudio3stb4data17TParse_TParagraph5TData
	lwz      r4, 0x10(r1)
	cmplwi   r4, 0xff
	bgt      lbl_800106E0
	lwz      r5, 0x18(r1)
	mr       r3, r31
	lwz      r6, 0x14(r1)
	bl       process_paragraph_reserved___Q37JStudio3stb7TObjectFUlPCvUl
	b        lbl_800106FC

lbl_800106E0:
	lwz      r12, 8(r31)
	mr       r3, r31
	lwz      r5, 0x18(r1)
	lwz      r12, 0x14(r12)
	lwz      r6, 0x14(r1)
	mtctr    r12
	bctrl

lbl_800106FC:
	lwz      r3, 0x1c(r1)

lbl_80010700:
	cmplw    r3, r30
	blt      lbl_800106B0

lbl_80010708:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80010720
 * Size:	00013C
 * process_paragraph_reserved___Q37JStudio3stb7TObjectFUlPCvUl
 */
void TObject::process_paragraph_reserved_(unsigned long a1, void const* a2, unsigned long a3)
{
	switch (((u8)a1)) {
	case 0x01: {
		int flag   = *(u32*)a2 >> 0x10 & 0xff;
		short flip = *(u16*)a2;
		switch (flip) {
		case 1:
			mFlag |= flip;
			break;
		case 2:
			mFlag &= flip;
			break;
		case 3:
			mFlag ^= flip;
			break;
		}
	} break;
	case 0x02: {
		u32Wait_ = *(u32*)a2;
	} break;
	case 0x03: {
		pSequence_next = (u8*)pSequence + *(u32*)a2;
	} break;
	case 0x80: {
		do_data(0, 0, a2, a3);
	} break;
	case 0x81: {
		int flag = (int)a2 + (*(u16*)((int)a2 + 2) + 3 & 0xfffffffc) + 4;
		do_data((u8*)a2 + 4, (uint)(*(u16*)((int)a2 + 2)), &flag, a3 - (flag - (int)a2));
	} break;
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0x80
	  mr        r8, r5
	  stw       r0, 0x14(r1)
	  mr        r7, r6
	  beq-      .loc_0xDC
	  bge-      .loc_0x44
	  cmpwi     r4, 0x2
	  beq-      .loc_0xBC
	  bge-      .loc_0x38
	  cmpwi     r4, 0x1
	  bge-      .loc_0x54
	  b         .loc_0x12C

	.loc_0x38:
	  cmpwi     r4, 0x4
	  bge-      .loc_0x12C
	  b         .loc_0xC8

	.loc_0x44:
	  cmpwi     r4, 0x82
	  beq-      .loc_0x12C
	  bge-      .loc_0x12C
	  b         .loc_0xFC

	.loc_0x54:
	  lwz       r5, 0x0(r8)
	  rlwinm    r0,r5,16,24,31
	  cmpwi     r0, 0x2
	  beq-      .loc_0x94
	  bge-      .loc_0x74
	  cmpwi     r0, 0x1
	  bge-      .loc_0x80
	  b         .loc_0x12C

	.loc_0x74:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x12C
	  b         .loc_0xA8

	.loc_0x80:
	  lhz       r4, 0x1C(r3)
	  rlwinm    r0,r5,0,16,31
	  or        r0, r4, r0
	  sth       r0, 0x1C(r3)
	  b         .loc_0x12C

	.loc_0x94:
	  lhz       r4, 0x1C(r3)
	  rlwinm    r0,r5,0,16,31
	  and       r0, r4, r0
	  sth       r0, 0x1C(r3)
	  b         .loc_0x12C

	.loc_0xA8:
	  lhz       r4, 0x1C(r3)
	  rlwinm    r0,r5,0,16,31
	  xor       r0, r4, r0
	  sth       r0, 0x1C(r3)
	  b         .loc_0x12C

	.loc_0xBC:
	  lwz       r0, 0x0(r8)
	  stw       r0, 0x2C(r3)
	  b         .loc_0x12C

	.loc_0xC8:
	  lwz       r4, 0x24(r3)
	  lwz       r0, 0x0(r8)
	  add       r0, r4, r0
	  stw       r0, 0x28(r3)
	  b         .loc_0x12C

	.loc_0xDC:
	  lwz       r12, 0x8(r3)
	  mr        r6, r8
	  li        r4, 0
	  li        r5, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x12C

	.loc_0xFC:
	  lhz       r5, 0x2(r8)
	  addi      r4, r8, 0x4
	  lwz       r12, 0x8(r3)
	  addi      r0, r5, 0x3
	  rlwinm    r6,r0,0,0,29
	  lwz       r12, 0x1C(r12)
	  addi      r6, r6, 0x4
	  add       r6, r8, r6
	  sub       r0, r6, r8
	  sub       r7, r7, r0
	  mtctr     r12
	  bctrl

	.loc_0x12C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/**
 * @warning It's just a guess which param gets assigned to where.
 * --INFO--
 * Address:	........
 * Size:	000058
 * __ct__Q37JStudio3stb15TObject_controlFPCvUl
 */
TObject_control::TObject_control(void const* p1, unsigned long p2)
    : TObject(0xFFFFFFFF, p1, p2)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 * __ct__Q37JStudio3stb15TObject_controlFRCQ47JStudio3stb4data20TParse_TBlock_object
 */
TObject_control::TObject_control(data::TParse_TBlock_object const&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8001085C
 * Size:	000094
 * __ct__Q37JStudio3stb8TControlFv
 */
TControl::TControl()
    : _4(0)
    , _8(0)
    , pFactory(nullptr)
    , mObjectContainer()
    , mObject_control(nullptr, 0)
    , _54(0)
{
	mStatus                  = 0;
	mObject_control.pControl = this;
}

/*
 * --INFO--
 * Address:	800108F0
 * Size:	00005C
 * __dt__Q37JStudio3stb15TObject_controlFv
 */
// stb::TObject_control::~TObject_control(void) { }

} // namespace stb
// } // namespace JStudio

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
// void __dt__Q27JGadget37TLinkList<JStudio::stb::TObject, -12> Fv(void)
//{
// UNUSED FUNCTION
//}

// namespace JStudio {

/*
 * --INFO--
 * Address:	8001094C
 * Size:	00009C
 * __dt__Q37JStudio3stb8TControlFv
 */
stb::TControl::~TControl(void) { mObject_control.pControl = nullptr; }

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void stb::TControl::appendObject(JStudio::stb::TObject*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void stb::TControl::removeObject(JStudio::stb::TObject*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void stb::TControl::removeObject_all(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void stb::TControl::destroyObject(JStudio::stb::TObject*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void stb::TControl::destroyObject_all(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800109E8
 * Size:	000094
 */
const JStudio::stb::TObject* stb::TControl::getObject(void const* id, unsigned long length)
{
	JGadget::TLinkList<TObject, -12>::iterator start = mObjectContainer.start();
	JGadget::TLinkList<TObject, -12>::iterator end   = mObjectContainer.end();
	JGadget::TLinkList<TObject, -12>::iterator bob   = std::find_if(start, end, object::TPRObject_ID_equal(id, length));
	return (bob != end) ? &*bob : nullptr;
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	addi     r0, r3, 0x14
	addi     r6, r1, 0x40
	lwz      r7, 0x14(r3)
	addi     r3, r1, 0x30
	stw      r0, 0x14(r1)
	stw      r4, 0x40(r1)
	addi     r4, r1, 0x2c
	stw      r5, 0x44(r1)
	addi     r5, r1, 0x28
	stw      r7, 0x1c(r1)
	stw      r7, 0x18(r1)
	stw      r7, 0x3c(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0x38(r1)
	stw      r0, 0x28(r1)
	stw      r7, 0x2c(r1)
	bl
	"find_if<Q37JGadget37TLinkList<Q37JStudio3stb7TObject,-12>8iterator,Q37JStudio6object18TPRObject_ID_equal>__3stdFQ37JGadget37TLinkList<Q37JStudio3stb7TObject,-12>8iteratorQ37JGadget37TLinkList<Q37JStudio3stb7TObject,-12>8iteratorQ37JStudio6object18TPRObject_ID_equal"
	lwz      r6, 0x30(r1)
	lwz      r5, 0x38(r1)
	stw      r6, 0x34(r1)
	addi     r0, r6, -12
	subf     r4, r5, r6
	subf     r3, r6, r5
	or       r3, r4, r3
	stw      r5, 0x24(r1)
	srawi    r3, r3, 0x1f
	stw      r6, 0x20(r1)
	and      r3, r0, r3
	stw      r5, 0xc(r1)
	stw      r6, 8(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80010A7C
 * Size:	00009C
 */
// void find_if(JGadget::TNodeLinkList::iterator, JGadget::TNodeLinkList::iterator, JStudio::object::TPRObject_ID_equal)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x30(r1)
// 	  mflr      r0
// 	  stw       r0, 0x34(r1)
// 	  stw       r31, 0x2C(r1)
// 	  mr        r31, r6
// 	  stw       r30, 0x28(r1)
// 	  mr        r30, r5
// 	  stw       r29, 0x24(r1)
// 	  mr        r29, r4
// 	  stw       r28, 0x20(r1)
// 	  mr        r28, r3
// 	  b         .loc_0x3C

// 	.loc_0x30:
// 	  lwz       r3, 0x0(r29)
// 	  lwz       r0, 0x0(r3)
// 	  stw       r0, 0x0(r29)

// 	.loc_0x3C:
// 	  lwz       r3, 0x0(r30)
// 	  lwz       r0, 0x0(r29)
// 	  stw       r3, 0x14(r1)
// 	  cmplw     r0, r3
// 	  stw       r0, 0x10(r1)
// 	  stw       r3, 0xC(r1)
// 	  stw       r0, 0x8(r1)
// 	  beq-      .loc_0x74
// 	  lwz       r3, 0x0(r29)
// 	  mr        r4, r31
// 	  subi      r3, r3, 0xC
// 	  bl        -0x95C
// 	  rlwinm.   r0,r3,0,24,31
// 	  beq+      .loc_0x30

// 	.loc_0x74:
// 	  lwz       r0, 0x0(r29)
// 	  stw       r0, 0x0(r28)
// 	  lwz       r0, 0x34(r1)
// 	  lwz       r31, 0x2C(r1)
// 	  lwz       r30, 0x28(r1)
// 	  lwz       r29, 0x24(r1)
// 	  lwz       r28, 0x20(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x30
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void stb::TControl::getObject_index(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void stb::TControl::reset(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80010B18
 * Size:	0000F0
 */
void stb::TControl::forward(unsigned long)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stmw     r25, 0x44(r1)
	mr       r30, r3
	mr       r31, r4
	lwz      r0, 0x40(r3)
	addi     r3, r30, 0x20
	stw      r0, 0x54(r30)
	bl       forward__Q37JStudio3stb7TObjectFUl
	lwz      r0, 0x14(r30)
	addi     r4, r30, 0x14
	stw      r4, 0x24(r1)
	mr       r27, r3
	li       r26, 0xf
	li       r25, 0
	stw      r4, 0x20(r1)
	stw      r4, 0x34(r1)
	stw      r4, 0x30(r1)
	stw      r0, 0x1c(r1)
	stw      r0, 0x18(r1)
	stw      r0, 0x2c(r1)
	stw      r0, 0x28(r1)
	stw      r0, 0x38(r1)
	stw      r4, 0x3c(r1)
	b        lbl_80010BC4

lbl_80010B80:
	lwz      r3, 0x38(r1)
	mr       r4, r31
	li       r29, 0
	lwz      r0, 0(r3)
	addi     r28, r3, -12
	mr       r3, r28
	stw      r0, 0x38(r1)
	bl       forward__Q37JStudio3stb7TObjectFUl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80010BB0
	clrlwi.  r0, r27, 0x18
	beq      lbl_80010BB4

lbl_80010BB0:
	li       r29, 1

lbl_80010BB4:
	lwz      r0, 0x30(r28)
	mr       r27, r29
	and      r26, r26, r0
	or       r25, r25, r0

lbl_80010BC4:
	lwz      r3, 0x3c(r1)
	lwz      r0, 0x38(r1)
	stw      r3, 0x14(r1)
	cmplw    r0, r3
	stw      r0, 0x10(r1)
	stw      r3, 0xc(r1)
	stw      r0, 8(r1)
	bne      lbl_80010B80
	slwi     r0, r25, 0x10
	mr       r3, r27
	or       r0, r26, r0
	stw      r0, 0x1c(r30)
	lmw      r25, 0x44(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80010C08
 * Size:	000048
 * __dt__Q37JStudio3stb8TFactoryFv
 */
stb::TFactory::~TFactory(void) { }

/*
 * --INFO--
 * Address:	80010C50
 * Size:	000008
 */
int stb::TFactory::create(JStudio::stb::data::TParse_TBlock_object const&) { return 0; }

/*
 * --INFO--
 * Address:	80010C58
 * Size:	00003C
 * destroy__Q37JStudio3stb8TFactoryFPQ37JStudio3stb7TObject
 */
void stb::TFactory::destroy(JStudio::stb::TObject* object) { delete object; }

/*
 * --INFO--
 * Address:	80010C94
 * Size:	000020
 * __ct__Q37JStudio3stb6TParseFPQ37JStudio3stb8TControl
 */
stb::TParse::TParse(JStudio::stb::TControl* control)
    : JGadget::binary::TParse_header_block()
    , m_control(control)
{
}

/*
 * --INFO--
 * Address:	80010CB4
 * Size:	000060
 * __dt__Q37JStudio3stb6TParseFv
 */
stb::TParse::~TParse() { }

/*
 * --INFO--
 * Address:	80010D14
 * Size:	0000C8
 */
bool stb::TParse::parseHeader_next(void const** data, unsigned long* blockCount, unsigned long p3)
{
	// const data::TParse_THeader* header = static_cast<const data::TParse_THeader*>(*data);
	// *data                              = static_cast<const void*>(header + 1);
	// *blockCount = header->blockCount;
	const void* header = *data;
	*data              = static_cast<const data::TParse_THeader*>(header) + 1;
	*blockCount        = static_cast<const data::TParse_THeader*>(header)->blockCount;
	if (memcmp(&static_cast<const data::TParse_THeader*>(header)->m_signature, &data::ga4cSignature, sizeof(u32)) != 0) {
		return false;
	}
	// if (header->_04 != 0xFEFF) {
	if (static_cast<const data::TParse_THeader*>(header)->_04 != 0xFEFF) {
		return false;
	}
	// if (header->_06 < 1) {
	if (static_cast<const data::TParse_THeader*>(header)->_06 < 1) {
		return false;
	}
	// if (header->_06 > 3) {
	if (static_cast<const data::TParse_THeader*>(header)->_06 > 3) {
		return false;
	}
	return parseHeader(*static_cast<const data::TParse_THeader*>(header), p3);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r6
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r7, 0(r4)
	stw      r7, 8(r1)
	addi     r0, r7, 0x20
	stw      r0, 0(r4)
	addi     r4, r2, ga4cSignature__Q37JStudio3stb4data@sda21
	lwz      r3, 8(r1)
	lwz      r0, 0xc(r3)
	stw      r0, 0(r5)
	li       r5, 4
	lwz      r3, 8(r1)
	bl       memcmp
	cmpwi    r3, 0
	beq      lbl_80010D6C
	li       r3, 0
	b        lbl_80010DC4

lbl_80010D6C:
	lwz      r3, 8(r1)
	lhz      r0, 4(r3)
	cmplwi   r0, 0xfeff
	beq      lbl_80010D84
	li       r3, 0
	b        lbl_80010DC4

lbl_80010D84:
	lhz      r0, 6(r3)
	cmplwi   r0, 1
	bge      lbl_80010D98
	li       r3, 0
	b        lbl_80010DC4

lbl_80010D98:
	cmplwi   r0, 3
	ble      lbl_80010DA8
	li       r3, 0
	b        lbl_80010DC4

lbl_80010DA8:
	mr       r3, r30
	mr       r5, r31
	lwz      r12, 0(r30)
	addi     r4, r1, 8
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_80010DC4:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80010DDC
 * Size:	000054
 */
bool stb::TParse::parseBlock_next(void const**, unsigned long*, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r7, 0(r4)
	stw      r7, 8(r1)
	lwz      r0, 0(r7)
	add      r0, r7, r0
	stw      r0, 0(r4)
	addi     r4, r1, 8
	lwz      r7, 8(r1)
	lwz      r0, 0(r7)
	stw      r0, 0(r5)
	mr       r5, r6
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
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
 * Address:	80010E30
 * Size:	000008
 */
bool stb::TParse::parseHeader(JStudio::stb::data::TParse_THeader const&, unsigned long) { return true; }

/*
 * --INFO--
 * Address:	80010E38
 * Size:	000038
 */
void stb::TParse::parseBlock_block(JStudio::stb::data::TParse_TBlock const&, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x0(r4)
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80010E70
 * Size:	000154
 */
void stb::TParse::parseBlock_object(data::TParse_TBlock_object const&, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lwz       r6, 0x0(r4)
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r30, r5
	  stw       r29, 0x24(r1)
	  mr        r29, r4
	  lwz       r31, 0x4(r3)
	  lwz       r3, 0x4(r6)
	  addis     r0, r3, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x68
	  lhz       r4, 0xA(r6)
	  li        r0, 0
	  li        r3, 0x1
	  stb       r0, 0x3E(r31)
	  addi      r4, r4, 0x3
	  rlwinm    r4,r4,0,0,29
	  addi      r4, r4, 0xC
	  stw       r0, 0x50(r31)
	  add       r4, r6, r4
	  stw       r4, 0x48(r31)
	  stw       r0, 0x4C(r31)
	  b         .loc_0x138

	.loc_0x68:
	  rlwinm.   r0,r30,0,27,27
	  beq-      .loc_0xBC
	  lhz       r5, 0xA(r6)
	  mr        r3, r31
	  addi      r4, r6, 0xC
	  bl        -0x504
	  cmplwi    r3, 0
	  beq-      .loc_0xBC
	  lwz       r6, 0x0(r29)
	  li        r4, 0
	  lhz       r5, 0xA(r6)
	  stb       r4, 0x1E(r3)
	  addi      r0, r5, 0x3
	  rlwinm    r5,r0,0,0,29
	  addi      r0, r5, 0xC
	  stw       r4, 0x30(r3)
	  add       r0, r6, r0
	  stw       r0, 0x28(r3)
	  stw       r4, 0x2C(r3)
	  li        r3, 0x1
	  b         .loc_0x138

	.loc_0xBC:
	  rlwinm.   r0,r30,0,26,26
	  beq-      .loc_0xCC
	  li        r3, 0x1
	  b         .loc_0x138

	.loc_0xCC:
	  lwz       r3, 0xC(r31)
	  cmplwi    r3, 0
	  bne-      .loc_0xE0
	  li        r3, 0
	  b         .loc_0x138

	.loc_0xE0:
	  lwz       r12, 0x0(r3)
	  mr        r4, r29
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr.       r6, r3
	  bne-      .loc_0x104
	  rlwinm    r3,r30,26,31,31
	  b         .loc_0x138

	.loc_0x104:
	  stw       r31, 0x14(r6)
	  addi      r0, r31, 0x14
	  addi      r3, r1, 0x10
	  addi      r4, r31, 0x10
	  stw       r0, 0xC(r1)
	  addi      r5, r1, 0x14
	  addi      r6, r6, 0xC
	  stw       r0, 0x8(r1)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x18(r1)
	  stw       r0, 0x14(r1)
	  bl        0x16380
	  li        r3, 0x1

	.loc_0x138:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}
} // namespace JStudio
