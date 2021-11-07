#ifndef _JSTUDIO_FVB_TFACTORY_H
#define _JSTUDIO_FVB_TFACTORY_H

namespace JStudio {
namespace fvb {
	struct TFactory {
		virtual ~TFactory();                             // _00
		virtual void create(const data::TParse_TBlock&); // _04
		virtual void destroy(TObject*);                  // _08

		// _00 VTBL
	};
} // namespace fvb
} // namespace JStudio

#endif
