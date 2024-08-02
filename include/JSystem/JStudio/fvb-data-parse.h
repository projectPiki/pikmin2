#ifndef _JSTUDIO_FVB_DATA_PARSE_H
#define _JSTUDIO_FVB_DATA_PARSE_H

#include "JSystem/JStudio/fvb-data.h"

// otherwise there are way too many namespaces to type out.
using namespace JGadget::binary;

namespace JStudio {
namespace fvb {
namespace data {

struct TParse_THeader : public TParseData_aligned<4> {
	TParse_THeader(const void* p)
	    : TParseData_aligned<4>(p)
	{
	}

	const THeader* get() const { return (THeader*)getRaw(); }
	const void* getContent() const { return ((THeader*)getRaw())->mContent; }
	const char* getSignature() const { return get()->mSignature; }
	u16 getByteOrder() const { return get()->mByteOrder; }
	u16 getVersion() const { return get()->mVersion; }
	u32 getBlockNumber() const { return get()->mBlockNumber; }

	// _00-_04 = TParseData_aligned
};

struct TParse_TBlock : public TParseData_aligned<4> {
	TParse_TBlock(const void* content)
	    : TParseData_aligned<4>(content)
	{
	}

	const TBlock* get() const { return (TBlock*)getRaw(); }

	u32 getSize() const { return get()->mSize; }
	u16 getType() const { return get()->mType; }
	u32 getIDSize() const { return get()->mIDSize; }

	const void* getNext() const
	{
		return getSize() + ((u8*)getRaw());
	}

	const void* getBlockEnd() const { return (u8*)getRaw() + sizeof(TBlock); }

	const void* getID() const
	{
		const void* ret = 0;
		if (getIDSize()) {
			ret = getBlockEnd();
		}
		return ret;
	}

	const void* getContent() const
	{
	    return align_roundUp(getIDSize(), 4) + (const u8*)getBlockEnd();
	}

	// _00-_04 = TParseData_aligned
};

struct TParse_TParagraph : public TParseData_aligned<4> {
	struct TData {
		u32 mSize;            // _00
		u32 mType;            // _04
		const void* mContent; // _08
		const void* mNext;    // _0C
	};

	TParse_TParagraph(const void* content)
	    : TParseData_aligned<4>(content)
	{
	}

	void getData(TData*) const;

	// _00-_04 = TParseData_aligned
};

} // namespace data
} // namespace fvb
} // namespace JStudio

#endif
