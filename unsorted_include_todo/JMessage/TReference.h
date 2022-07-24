#ifndef _JMESSAGE_TREFERENCE_H
#define _JMESSAGE_TREFERENCE_H

/*
    __vt__Q28JMessage10TReference:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28JMessage10TReferenceFv
    .4byte do_word__Q28JMessage10TReferenceCFUl
*/

namespace JMessage {
struct TReference {
	virtual ~TReference();                     // _08
	virtual void do_word(unsigned long) const; // _0C
};
} // namespace JMessage

#endif
