#ifndef _P2JME_TREFERENCE_H
#define _P2JME_TREFERENCE_H

namespace P2JME {
struct TReference {
	virtual ~TReference();                     // _00
	virtual void do_word(unsigned long) const; // _04

	// _00 VTBL
};
} // namespace P2JME

#endif
