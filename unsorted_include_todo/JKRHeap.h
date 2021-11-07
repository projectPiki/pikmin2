#ifndef _JKRHEAP_H
#define _JKRHEAP_H

struct JKRHeap {
	virtual ~JKRHeap();                                             // _00
	virtual void callAllDisposer();                                 // _04
	virtual void _08() = 0;                                         // _08
	virtual void _0C() = 0;                                         // _0C
	virtual void dump_sort();                                       // _10
	virtual void _14() = 0;                                         // _14
	virtual void _18() = 0;                                         // _18
	virtual void _1C() = 0;                                         // _1C
	virtual void _20() = 0;                                         // _20
	virtual void _24() = 0;                                         // _24
	virtual void _28() = 0;                                         // _28
	virtual void _2C() = 0;                                         // _2C
	virtual void _30() = 0;                                         // _30
	virtual void _34() = 0;                                         // _34
	virtual void _38() = 0;                                         // _38
	virtual void _3C() = 0;                                         // _3C
	virtual void _40() = 0;                                         // _40
	virtual void do_changeGroupID(unsigned char);                   // _44
	virtual void do_getCurrentGroupId();                            // _48
	virtual void state_register(TState*, unsigned long) const;      // _4C
	virtual void state_compare(const TState&, const TState&) const; // _50
	virtual void state_dump(const TState&) const;                   // _54

	// _00 VTBL
};

#endif
