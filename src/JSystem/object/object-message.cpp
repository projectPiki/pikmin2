#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q216JStudio_JMessage16TAdaptor_message
    __vt__Q216JStudio_JMessage16TAdaptor_message:
        .4byte 0
        .4byte 0
        .4byte __dt__Q216JStudio_JMessage16TAdaptor_messageFv
        .4byte adaptor_do_prepare__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_begin__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_end__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_update__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectUl
        .4byte
   adaptor_do_data__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectPCvUlPCvUl .4byte
   adaptor_do_MESSAGE__Q216JStudio_JMessage16TAdaptor_messageFQ37JStudio4data15TEOperationDataPCvUl
        .4byte 0
*/

/*
 * --INFO--
 * Address:	80014D24
 * Size:	000038
 */
JStudio_JMessage::TAdaptor_message::TAdaptor_message(JMessage::TControl*)
{
	/*
	lis      r7, __vt__Q27JStudio8TAdaptor@ha
	lis      r6, __vt__Q27JStudio16TAdaptor_message@ha
	addi     r0, r7, __vt__Q27JStudio8TAdaptor@l
	lis      r5, __vt__Q216JStudio_JMessage16TAdaptor_message@ha
	stw      r0, 0(r3)
	li       r7, 0
	addi     r6, r6, __vt__Q27JStudio16TAdaptor_message@l
	addi     r0, r5, __vt__Q216JStudio_JMessage16TAdaptor_message@l
	stw      r7, 4(r3)
	stw      r7, 8(r3)
	stw      r6, 0(r3)
	stw      r0, 0(r3)
	stw      r4, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80014D5C
 * Size:	000060
 */
JStudio_JMessage::TAdaptor_message::~TAdaptor_message()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80014DA0
	lis      r5, __vt__Q216JStudio_JMessage16TAdaptor_message@ha
	li       r4, 0
	addi     r0, r5, __vt__Q216JStudio_JMessage16TAdaptor_message@l
	stw      r0, 0(r30)
	bl       __dt__Q27JStudio16TAdaptor_messageFv
	extsh.   r0, r31
	ble      lbl_80014DA0
	mr       r3, r30
	bl       __dl__FPv

lbl_80014DA0:
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
 * Address:	80014DBC
 * Size:	00003C
 */
void JStudio_JMessage::TAdaptor_message::adaptor_do_MESSAGE(JStudio::data::TEOperationData, const void*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0x19
	  stw       r0, 0x14(r1)
	  beq-      .loc_0x18
	  b         .loc_0x2C

	.loc_0x18:
	  lwz       r0, 0x0(r5)
	  lwz       r3, 0xC(r3)
	  rlwinm    r4,r0,16,16,31
	  rlwinm    r5,r0,0,16,31
	  bl        -0xC768

	.loc_0x2C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
