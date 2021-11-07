#ifndef _JSTUDIO_TOBJECT_AMBIENTLIGHT_H
#define _JSTUDIO_TOBJECT_AMBIENTLIGHT_H

namespace JStudio {
struct TObject {
	virtual void _00() = 0;              // _00
	virtual void do_begin();             // _04
	virtual void do_end();               // _08
	virtual void _0C() = 0;              // _0C
	virtual void do_wait(unsigned long); // _10
	virtual void do_data(const void*, unsigned long, const void*,
	                     unsigned long); // _14

	// _00 VTBL
};
} // namespace JStudio

namespace JStudio {
struct TObject_ambientLight : public TObject {
	virtual ~TObject_ambientLight();                                      // _00
	virtual void do_begin();                                              // _04
	virtual void do_end();                                                // _08
	virtual void do_paragraph(unsigned long, const void*, unsigned long); // _0C
	virtual void do_wait(unsigned long);                                  // _10
	virtual void do_data(const void*, unsigned long, const void*,
	                     unsigned long); // _14

	// _00 VTBL
};
} // namespace JStudio

#endif
