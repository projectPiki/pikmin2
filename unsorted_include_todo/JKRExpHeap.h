#ifndef _JKREXPHEAP_H
#define _JKREXPHEAP_H

/*
    __vt__10JKRExpHeap:
    .4byte 0
    .4byte 0
    .4byte __dt__10JKRExpHeapFv
    .4byte callAllDisposer__7JKRHeapFv
    .4byte getHeapType__10JKRExpHeapFv
    .4byte check__10JKRExpHeapFv
    .4byte dump_sort__10JKRExpHeapFv
    .4byte dump__10JKRExpHeapFv
    .4byte do_destroy__10JKRExpHeapFv
    .4byte do_alloc__10JKRExpHeapFUli
    .4byte do_free__10JKRExpHeapFPv
    .4byte do_freeAll__10JKRExpHeapFv
    .4byte do_freeTail__10JKRExpHeapFv
    .4byte do_fillFreeArea__10JKRExpHeapFv
    .4byte do_resize__10JKRExpHeapFPvUl
    .4byte do_getSize__10JKRExpHeapFPv
    .4byte do_getFreeSize__10JKRExpHeapFv
    .4byte do_getMaxFreeBlock__10JKRExpHeapFv
    .4byte do_getTotalFreeSize__10JKRExpHeapFv
    .4byte do_changeGroupID__10JKRExpHeapFUc
    .4byte do_getCurrentGroupId__10JKRExpHeapFv
    .4byte state_register__10JKRExpHeapCFPQ27JKRHeap6TStateUl
    .4byte state_compare__10JKRExpHeapCFRCQ27JKRHeap6TStateRCQ27JKRHeap6TState
    .4byte state_dump__7JKRHeapCFRCQ27JKRHeap6TState
*/

struct JKRHeap {
	virtual ~JKRHeap();                                                               // _08
	virtual void callAllDisposer();                                                   // _0C
	virtual void getHeapType();                                                       // _10 (weak)
	virtual void check();                                                             // _14
	virtual void dump_sort();                                                         // _18
	virtual void dump();                                                              // _1C
	virtual void do_destroy();                                                        // _20
	virtual void do_alloc(unsigned long, int);                                        // _24
	virtual void do_free(void*);                                                      // _28
	virtual void do_freeAll();                                                        // _2C
	virtual void do_freeTail();                                                       // _30
	virtual void do_fillFreeArea();                                                   // _34
	virtual void do_resize(void*, unsigned long);                                     // _38
	virtual void do_getSize(void*);                                                   // _3C
	virtual void do_getFreeSize();                                                    // _40
	virtual void do_getMaxFreeBlock();                                                // _44
	virtual void do_getTotalFreeSize();                                               // _48
	virtual void do_changeGroupID(unsigned char);                                     // _4C
	virtual void do_getCurrentGroupId();                                              // _50 (weak)
	virtual void state_register(JKRHeap::TState*, unsigned long) const;               // _54
	virtual void state_compare(const JKRHeap::TState&, const JKRHeap::TState&) const; // _58
	virtual void state_dump(const TState&) const;                                     // _5C
};

struct JKRExpHeap : public JKRHeap {
	virtual ~JKRExpHeap();                                                            // _08
	virtual void getHeapType();                                                       // _10 (weak)
	virtual void check();                                                             // _14
	virtual void dump_sort();                                                         // _18
	virtual void dump();                                                              // _1C
	virtual void do_destroy();                                                        // _20
	virtual void do_alloc(unsigned long, int);                                        // _24
	virtual void do_free(void*);                                                      // _28
	virtual void do_freeAll();                                                        // _2C
	virtual void do_freeTail();                                                       // _30
	virtual void do_fillFreeArea();                                                   // _34
	virtual void do_resize(void*, unsigned long);                                     // _38
	virtual void do_getSize(void*);                                                   // _3C
	virtual void do_getFreeSize();                                                    // _40
	virtual void do_getMaxFreeBlock();                                                // _44
	virtual void do_getTotalFreeSize();                                               // _48
	virtual void do_changeGroupID(unsigned char);                                     // _4C
	virtual void do_getCurrentGroupId();                                              // _50 (weak)
	virtual void state_register(JKRHeap::TState*, unsigned long) const;               // _54
	virtual void state_compare(const JKRHeap::TState&, const JKRHeap::TState&) const; // _58
};

#endif
