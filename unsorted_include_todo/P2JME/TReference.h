#ifndef _P2JME_TREFERENCE_H
#define _P2JME_TREFERENCE_H

/*
    __vt__Q25P2JME10TReference:
    .4byte 0
    .4byte 0
    .4byte __dt__Q25P2JME10TReferenceFv
    .4byte do_word__Q25P2JME10TReferenceCFUl
*/

namespace P2JME {
struct TReference {
	virtual ~TReference();                     // _00
	virtual void do_word(unsigned long) const; // _04

	// _00 VTBL
};
} // namespace P2JME

#endif
