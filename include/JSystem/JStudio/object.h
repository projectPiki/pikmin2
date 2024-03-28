#ifndef JSTUDIO_OBJECT_H
#define JSTUDIO_OBJECT_H

#include "JSystem/JGadget/linklist.h"
#include "types.h"

namespace JStudio {
namespace object {

struct TIDData {
	TIDData() { }
	TIDData(const void* id, u32 length)
	    : mIDString(id)
	    , mLength(length)
	{
	}

	~TIDData() { } // unused/inlined

	inline const void* getID() const { return mIDString; }
	inline u32 getIDSize() const { return mLength; }

	static bool isEqual(TIDData const&, TIDData const&);

	const void* mIDString; // _00
	u32 mLength;           // _04, in bytes
};

struct TObject_ID : public TIDData {
	inline TObject_ID(const void* id, u32 length)
	    : TIDData(id, length)
	{
	}

	~TObject_ID() { } // unused/inlined

	// _00-_08 = TIData
};

struct TPRObject_ID_equal : public TIDData {
	TPRObject_ID_equal(const void* id, u32 length)
	    : TIDData(id, length)
	{
	}

	bool operator()(TIDData const& other) const { return isEqual(other, *this); }

	// _00-_08 = TIDData
};

} // namespace object
} // namespace JStudio

#endif
