#ifndef _JKREXPHEAP_H
#define _JKREXPHEAP_H

struct JKRHeap {
	virtual void _00() = 0;                       // _00
	virtual void callAllDisposer();               // _04
	virtual void _08() = 0;                       // _08
	virtual void _0C() = 0;                       // _0C
	virtual void _10() = 0;                       // _10
	virtual void _14() = 0;                       // _14
	virtual void _18() = 0;                       // _18
	virtual void _1C() = 0;                       // _1C
	virtual void _20() = 0;                       // _20
	virtual void _24() = 0;                       // _24
	virtual void _28() = 0;                       // _28
	virtual void _2C() = 0;                       // _2C
	virtual void _30() = 0;                       // _30
	virtual void _34() = 0;                       // _34
	virtual void _38() = 0;                       // _38
	virtual void _3C() = 0;                       // _3C
	virtual void _40() = 0;                       // _40
	virtual void _44() = 0;                       // _44
	virtual void _48() = 0;                       // _48
	virtual void _4C() = 0;                       // _4C
	virtual void _50() = 0;                       // _50
	virtual void state_dump(const TState&) const; // _54

	// _00 VTBL
};

struct JKRExpHeap : public JKRHeap {
	virtual ~JKRExpHeap();                                              // _00
	virtual void callAllDisposer();                                     // _04
	virtual void getHeapType();                                         // _08
	virtual void check();                                               // _0C
	virtual void dump_sort();                                           // _10
	virtual void dump();                                                // _14
	virtual void do_destroy();                                          // _18
	virtual void do_alloc(unsigned long, int);                          // _1C
	virtual void do_free(void*);                                        // _20
	virtual void do_freeAll();                                          // _24
	virtual void do_freeTail();                                         // _28
	virtual void do_fillFreeArea();                                     // _2C
	virtual void do_resize(void*, unsigned long);                       // _30
	virtual void do_getSize(void*);                                     // _34
	virtual void do_getFreeSize();                                      // _38
	virtual void do_getMaxFreeBlock();                                  // _3C
	virtual void do_getTotalFreeSize();                                 // _40
	virtual void do_changeGroupID(unsigned char);                       // _44
	virtual void do_getCurrentGroupId();                                // _48
	virtual void state_register(JKRHeap::TState*, unsigned long) const; // _4C
	virtual void state_compare(const JKRHeap::TState&,
	                           const JKRHeap::TState&) const; // _50
	virtual void state_dump(const TState&) const;             // _54

	// _00 VTBL
};

#endif
