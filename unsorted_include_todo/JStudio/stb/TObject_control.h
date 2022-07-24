#ifndef _JSTUDIO_STB_TOBJECT_CONTROL_H
#define _JSTUDIO_STB_TOBJECT_CONTROL_H

/*
    __vt__Q37JStudio3stb15TObject_control:
    .4byte 0
    .4byte 0
    .4byte __dt__Q37JStudio3stb15TObject_controlFv
    .4byte do_begin__Q37JStudio3stb7TObjectFv
    .4byte do_end__Q37JStudio3stb7TObjectFv
    .4byte do_paragraph__Q37JStudio3stb7TObjectFUlPCvUl
    .4byte do_wait__Q37JStudio3stb7TObjectFUl
    .4byte do_data__Q37JStudio3stb7TObjectFPCvUlPCvUl
*/

namespace JStudio {
namespace stb {
struct TObject {
	virtual ~TObject();                                                           // _08
	virtual void do_begin();                                                      // _0C
	virtual void do_end();                                                        // _10
	virtual void do_paragraph(unsigned long, const void*, unsigned long);         // _14
	virtual void do_wait(unsigned long);                                          // _18
	virtual void do_data(const void*, unsigned long, const void*, unsigned long); // _1C

	// _00 VTBL
};
} // namespace stb
} // namespace JStudio

namespace JStudio {
namespace stb {
struct TObject_control : public TObject {
	virtual ~TObject_control(); // _08

	// _00 VTBL
};
} // namespace stb
} // namespace JStudio

#endif
