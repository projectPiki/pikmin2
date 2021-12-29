#ifndef _JSTUDIO_TFACTORY_H
#define _JSTUDIO_TFACTORY_H

/*
    __vt__Q27JStudio8TFactory:
    .4byte 0
    .4byte 0
    .4byte __dt__Q27JStudio8TFactoryFv
    .4byte
   create__Q27JStudio8TFactoryFRCQ47JStudio3stb4data20TParse_TBlock_object
    .4byte destroy__Q37JStudio3stb8TFactoryFPQ37JStudio3stb7TObject
*/

namespace JStudio {
struct TFactory {
	virtual ~TFactory();                                         // _00
	virtual void create(const stb::data::TParse_TBlock_object&); // _04
	virtual void destroy(TObject*);                              // _08

	// _00 VTBL
};
} // namespace JStudio

#endif
