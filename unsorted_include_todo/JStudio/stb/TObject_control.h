#ifndef _JSTUDIO_STB_TOBJECT_CONTROL_H
#define _JSTUDIO_STB_TOBJECT_CONTROL_H

namespace JStudio {
namespace stb {
	struct TObject {
		virtual void _00() = 0;  // _00
		virtual void do_begin(); // _04
		virtual void do_end();   // _08
		virtual void do_paragraph(unsigned long, const void*,
		                          unsigned long); // _0C
		virtual void do_wait(unsigned long);      // _10
		virtual void do_data(const void*, unsigned long, const void*,
		                     unsigned long); // _14

		// _00 VTBL
	};
} // namespace stb
} // namespace JStudio

namespace JStudio {
namespace stb {
	struct TObject_control : public TObject {
		virtual ~TObject_control(); // _00
		virtual void do_begin();    // _04
		virtual void do_end();      // _08
		virtual void do_paragraph(unsigned long, const void*,
		                          unsigned long); // _0C
		virtual void do_wait(unsigned long);      // _10
		virtual void do_data(const void*, unsigned long, const void*,
		                     unsigned long); // _14

		// _00 VTBL
	};
} // namespace stb
} // namespace JStudio

#endif
