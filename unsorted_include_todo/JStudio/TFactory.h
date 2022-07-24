#ifndef _JSTUDIO_TFACTORY_H
#define _JSTUDIO_TFACTORY_H

/*
    __vt__Q27JStudio8TFactory:
    .4byte 0
    .4byte 0
    .4byte __dt__Q27JStudio8TFactoryFv
    .4byte create__Q27JStudio8TFactoryFRCQ47JStudio3stb4data20TParse_TBlock_object
    .4byte destroy__Q37JStudio3stb8TFactoryFPQ37JStudio3stb7TObject
*/

namespace JStudio {
struct TFactory {
	virtual ~TFactory();                                         // _08
	virtual void create(const stb::data::TParse_TBlock_object&); // _0C
	virtual void destroy(TObject*);                              // _10

	void appendCreateObject(JStudio::TCreateObject*);
};
} // namespace JStudio

#endif
