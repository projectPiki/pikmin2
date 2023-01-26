#ifndef JSTUDIO_OBJECT_H
#define JSTUDIO_OBJECT_H

#include "JSystem/JGadget/linklist.h"
#include "types.h"

namespace JStudio {
namespace object {

struct TIDData {
	/** @fabricated */
	TIDData() {};
	/** @fabricated */
	TIDData(const void* id, u32 length)
	    : idString_0x0(id)
	    , lengthInBytes_0x4(length)
	{
	}

	~TIDData() {}; // unused/inlined

	const void* idString_0x0;
	u32 lengthInBytes_0x4;

	static bool isEqual(TIDData const&, TIDData const&);
};

struct TObject_ID : TIDData {
	inline TObject_ID(const void* id, u32 length)
	    : TIDData(id, length)
	{
	}

	// inline virtual ~TObject_ID() {}; // _08
	~TObject_ID() {}; // unused/inlined

	// JGadget::TLinkListNode _0C;
};

struct TPRObject_ID_equal : TIDData {
	/** @fabricated */
	TPRObject_ID_equal(const void* id, u32 length)
	    : TIDData(id, length)
	{
	}

	/** @fabricated */
	bool operator()(TIDData const& other) const { return isEqual(other, *this); }
};

} // namespace object
} // namespace JStudio

#endif
