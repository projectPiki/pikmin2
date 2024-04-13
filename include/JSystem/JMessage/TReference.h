#ifndef _JSYSTEM_JMESSAGE_TREFERENCE_H
#define _JSYSTEM_JMESSAGE_TREFERENCE_H

#include "types.h"
#include "JSystem/JMessage/TResource.h"

namespace JMessage {
struct TReference {
	TReference() { mResource = nullptr; }
	virtual ~TReference();            // _08
	virtual char* do_word(u32) const; // _0C

	int on_parseCharacter(int string) const { return mResource->parseCharacter(string); }
	const char* on_word(u32 param_0) const { return do_word(param_0); }

	TResource* getResource_groupID(u16 groupID) const
	{
		if (mResource == nullptr) {
			return nullptr;
		}

		return mResource->getResource_groupID(groupID);
	}

	TResourceContainer* getResourceContainer() const { return mResource; }
	void setResourceContainer(TResourceContainer* container) { mResource = container; }

	// _00 = VTBL
	TResourceContainer* mResource; // _04
};
} // namespace JMessage

#endif
