#ifndef _JSTUDIO_STB_TFACTORY_H
#define _JSTUDIO_STB_TFACTORY_H

/*
    __vt__Q37JStudio3stb8TFactory:
    .4byte 0
    .4byte 0
    .4byte __dt__Q37JStudio3stb8TFactoryFv
    .4byte create__Q37JStudio3stb8TFactoryFRCQ47JStudio3stb4data20TParse_TBlock_object
    .4byte destroy__Q37JStudio3stb8TFactoryFPQ37JStudio3stb7TObject
*/

namespace JStudio {
namespace stb {
struct TFactory {
	virtual ~TFactory();                                    // _08
	virtual void create(const data::TParse_TBlock_object&); // _0C
	virtual void destroy(TObject*);                         // _10

	// _00 VTBL
};
} // namespace stb
} // namespace JStudio

#endif
