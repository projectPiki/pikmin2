#ifndef _JSTUDIO_TOBJECT_H
#define _JSTUDIO_TOBJECT_H

/*
    __vt__Q27JStudio7TObject:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte do_begin__Q27JStudio7TObjectFv
    .4byte do_end__Q27JStudio7TObjectFv
    .4byte 0
    .4byte do_wait__Q27JStudio7TObjectFUl
    .4byte do_data__Q27JStudio7TObjectFPCvUlPCvUl
*/

namespace JStudio {
struct TObject {
	virtual void _08() = 0;                                                       // _08
	virtual void do_begin();                                                      // _0C
	virtual void do_end();                                                        // _10
	virtual void _14() = 0;                                                       // _14
	virtual void do_wait(unsigned long);                                          // _18
	virtual void do_data(const void*, unsigned long, const void*, unsigned long); // _1C
};
} // namespace JStudio

#endif
