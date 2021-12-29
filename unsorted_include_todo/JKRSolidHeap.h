#ifndef _JKRSOLIDHEAP_H
#define _JKRSOLIDHEAP_H

/*
    __vt__12JKRSolidHeap:
    .4byte 0
    .4byte 0
    .4byte __dt__12JKRSolidHeapFv
    .4byte callAllDisposer__7JKRHeapFv
    .4byte getHeapType__12JKRSolidHeapFv
    .4byte check__12JKRSolidHeapFv
    .4byte dump_sort__7JKRHeapFv
    .4byte dump__12JKRSolidHeapFv
    .4byte do_destroy__12JKRSolidHeapFv
    .4byte do_alloc__12JKRSolidHeapFUli
    .4byte do_free__12JKRSolidHeapFPv
    .4byte do_freeAll__12JKRSolidHeapFv
    .4byte do_freeTail__12JKRSolidHeapFv
    .4byte do_fillFreeArea__12JKRSolidHeapFv
    .4byte do_resize__12JKRSolidHeapFPvUl
    .4byte do_getSize__12JKRSolidHeapFPv
    .4byte do_getFreeSize__12JKRSolidHeapFv
    .4byte do_getMaxFreeBlock__12JKRSolidHeapFv
    .4byte do_getTotalFreeSize__12JKRSolidHeapFv
    .4byte do_changeGroupID__7JKRHeapFUc
    .4byte do_getCurrentGroupId__7JKRHeapFv
    .4byte state_register__12JKRSolidHeapCFPQ27JKRHeap6TStateUl
    .4byte state_compare__12JKRSolidHeapCFRCQ27JKRHeap6TStateRCQ27JKRHeap6TState
    .4byte state_dump__7JKRHeapCFRCQ27JKRHeap6TState
*/

struct JKRHeap {
	virtual ~JKRHeap();                                                 // _00
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

struct JKRSolidHeap : public JKRHeap {
	virtual ~JKRSolidHeap();                                            // _00
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
