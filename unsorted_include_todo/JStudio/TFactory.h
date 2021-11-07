#ifndef _JSTUDIO_TFACTORY_H
#define _JSTUDIO_TFACTORY_H

namespace JStudio {
struct TFactory {
	virtual ~TFactory();                                         // _00
	virtual void create(const stb::data::TParse_TBlock_object&); // _04
	virtual void destroy(TObject*);                              // _08

	// _00 VTBL
};
} // namespace JStudio

#endif
