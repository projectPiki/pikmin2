#ifndef _JSTUDIO_FVB_TFACTORY_H
#define _JSTUDIO_FVB_TFACTORY_H

/*
    __vt__Q37JStudio3fvb8TFactory:
    .4byte 0
    .4byte 0
    .4byte __dt__Q37JStudio3fvb8TFactoryFv
    .4byte create__Q37JStudio3fvb8TFactoryFRCQ47JStudio3fvb4data13TParse_TBlock
    .4byte destroy__Q37JStudio3fvb8TFactoryFPQ37JStudio3fvb7TObject
*/

namespace JStudio {
namespace fvb {
struct TFactory {
	virtual ~TFactory();                             // _08
	virtual void create(const data::TParse_TBlock&); // _0C
	virtual void destroy(TObject*);                  // _10

	// _00 VTBL
};
} // namespace fvb
} // namespace JStudio

#endif
