#ifndef _JSTUDIO_TFACTORY_H
#define _JSTUDIO_TFACTORY_H

#include "JStudio/TCreateObject.h"
#include "JStudio/stb.h"
#include "JSystem/JGadget/linklist.h"
#include "JSystem/fvb/fvb.h"

namespace JStudio {
struct TFactory : public stb::TFactory {
	virtual ~TFactory();                                        // _08
	virtual int create(const stb::data::TParse_TBlock_object&); // _0C

	void appendCreateObject(JStudio::TCreateObject*);

	// unused/inlined:
	void removeCreateObject(JStudio::TCreateObject*);
	void removeCreateObject_all();

	JGadget::TNodeLinkList m_nodeLinkList; // _04
	fvb::TFactory m_fvbFactory;            // _10
};
} // namespace JStudio

#endif
