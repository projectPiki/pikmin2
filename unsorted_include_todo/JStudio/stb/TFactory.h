#ifndef _JSTUDIO_STB_TFACTORY_H
#define _JSTUDIO_STB_TFACTORY_H

namespace JStudio {
namespace stb {
	struct TFactory {
		virtual ~TFactory();                                    // _00
		virtual void create(const data::TParse_TBlock_object&); // _04
		virtual void destroy(TObject*);                         // _08

		// _00 VTBL
	};
} // namespace stb
} // namespace JStudio

#endif
