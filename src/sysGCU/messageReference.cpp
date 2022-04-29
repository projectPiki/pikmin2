#include "types.h"

#include "P2JME/TReference.h"
#include "Dolphin/stl.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q25P2JME10TReference
    __vt__Q25P2JME10TReference:
        .4byte 0
        .4byte 0
        .4byte __dt__Q25P2JME10TReferenceFv
        .4byte do_word__Q25P2JME10TReferenceCFUl

    .section .sbss # 0x80514D80 - 0x80516360
    .global frm$674
    frm$674:
        .skip 0x1
    .global init$675
    init$675:
        .skip 0x7

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805208E8
    lbl_805208E8:
        .4byte 0x83658358
        .4byte 0x83670000
    .global lbl_805208F0
    lbl_805208F0:
        .asciz "%d"
        .skip 1
*/

extern char str_673[256]; // should be static to TReference::do_word

namespace P2JME {

/*
 * --INFO--
 * Address:	8043DB18
 * Size:	000074
 */
char* TReference::do_word(unsigned long arg) const
{
	static u8 frm = 34;
	// static char str[256]; what it should be

	frm++;

	if (arg == 0) {
		return "ƒeƒXƒg";
	}
	sprintf(str_673, "%d", frm);
	return str_673;
}

/*
 * --INFO--
 * Address:	8043DB8C
 * Size:	000060
 * TReference::~TReference(){};
 * Weak function. Defined in TReference.h
 */

} // namespace P2JME
