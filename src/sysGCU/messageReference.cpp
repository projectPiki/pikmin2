#include "types.h"

#include "P2JME/TReference.h"
#include "Dolphin/stl.h"

namespace P2JME {

/*
 * --INFO--
 * Address:	8043DB18
 * Size:	000074
 */
char* TReference::do_word(unsigned long arg) const
{
	static u8 frm = 34;
	static char str[256];

	frm++;

	if (arg == 0) {
		return "ƒeƒXƒg";
	}
	sprintf(str, "%d", frm);
	return str;
}

/*
 * --INFO--
 * Address:	8043DB8C
 * Size:	000060
 * TReference::~TReference(){};
 * Weak function. Defined in TReference.h
 */

} // namespace P2JME
