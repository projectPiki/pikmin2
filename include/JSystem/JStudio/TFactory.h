#ifndef _JSTUDIO_TFACTORY_H
#define _JSTUDIO_TFACTORY_H

#include "JSystem/JStudio/TCreateObject.h"
#include "JSystem/JStudio/stb.h"
#include "JSystem/JGadget/linklist.h"
#include "JSystem/JStudio/fvb.h"

namespace JStudio {
struct TObject;

struct TFactory : public stb::TFactory {
	virtual ~TFactory();                                             // _08
	virtual TObject* create(const stb::data::TParse_TBlock_object&); // _0C

	void appendCreateObject(JStudio::TCreateObject*);

	// unused/inlined:
	void removeCreateObject(JStudio::TCreateObject*);
	void removeCreateObject_all();

	JGadget::TLinkList<TCreateObject, -4> mList; // _04
	fvb::TFactory mFvbFactory;                   // _10
};
} // namespace JStudio

#endif
