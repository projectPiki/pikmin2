#ifndef _JSTUDIO_STBDATAPARSE_H
#define _JSTUDIO_STBDATAPARSE_H

#include "JSystem/JStudio/stb-data.h"
#include "JSystem/JGadget/binary.h"

// otherwise there are way too many namespaces to type out.
using namespace JGadget::binary;

namespace JStudio {
namespace stb {
namespace data {

struct TParse_THeader : public TParseData_aligned<4> {
	TParse_THeader(const void* content)
	    : TParseData_aligned<4>(content)
	{
	}

	const THeader* get() const { return (THeader*)getRaw(); }
	const void* getContent() const { return get()->mContent; }
	const char* getSignature() const { return get()->mSignature; }
	u16 getByteOrder() const { return get()->mByteOrder; }
	u16 getVersion() const { return get()->mVersion; }
	u32 getBlockNum() const { return get()->mBlockNum; }
	const THeader::Target& getTarget() const { return get()->mTarget; }

	// _00-_04 = TParseData_aligned
};

struct TParse_TBlock : public TParseData_aligned<4> {
	TParse_TBlock(const void* content)
	    : TParseData_aligned<4>(content)
	{
	}

	const TBlock* get() const { return (TBlock*)getRaw(); }
	const TBlock* getNext() const { return (TBlock*)((u8*)getRaw() + getSize()); }
	u32 getSize() const { return get()->mSize; }
	u32 getType() const { return get()->mType; }
	const void* getContent() const { return ((char*)getRaw()) + 8; }

	// _00-_04 = TParseData_aligned
};

struct TParse_TBlock_object : public TParse_TBlock {
	TParse_TBlock_object(const void* content)
	    : TParse_TBlock(content)
	{
	}

	const TBlock_object* get() const { return (TBlock_object*)getRaw(); }
	const void* getContent() const { return get()->mID + align_roundUp(getIDSize(), 4); }
	u16 getFlag() const { return get()->mFlag; }
	u16 getIDSize() const { return get()->mIDSize; }
	const void* getID() const { return get()->mID; }

	// _00-_04 = TParse_TBlock
};

struct TParse_TSequence : public TParseData_aligned<4> {
	struct TData {
		u8 mType;             // _00
		u32 mParam;           // _04
		const void* mContent; // _08
		const void* mNext;    // _0C
	};

	TParse_TSequence(const void* content)
	    : TParseData_aligned<4>(content)
	{
	}

	void getData(TData*) const;

	const void* get() const { return getRaw(); }
	u32 getHead() const { return *(u32*)get(); }

	// _00-_04 = TParseData_aligned
};

struct TParse_TParagraph : public TParseData_aligned<4> {
	struct TData {
		u32 mType;            // _00
		u32 mParam;           // _04
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

struct TParse_TParagraph_data : public TParseData_aligned<4> {
	struct TData {
		u8 mStatus;                //_00
		u32 mDataSize;             //_04
		u32 mFileCount;            // _08
		const void* mData;         // _0C
		const void* mDataBlockEnd; // _10

		// Is this name accurate? are any of these member names accurate? are these developers sane?
		inline bool isLoaded()
		{
			bool stop = false;
			if (mData != 0 && mStatus == 0x60) {
				stop = true;
			}

			return stop;
		}
	};

	TParse_TParagraph_data(const void* content)
	    : TParseData_aligned<4>(content)
	{
	}

	void getData(TData*) const;

	// _00-_04 = TParseData_aligned
};

struct TParse_TParagraph_dataID : public TParseData_aligned<4> {
	TParse_TParagraph_dataID(const void* content)
	    : TParseData_aligned<4>(content)
	{
	}

	const TParagraph* get() const { return (TParagraph*)getRaw(); }
	u16 getIDSize() const { return get()->mIDSize; }
	const void* getID() const { return get()->mID; }
	const void* getContent() const { return get()->mID + align_roundUp(getIDSize(), 4); }

	// _00-_04 = TParseData_aligned
};

} // namespace data
} // namespace stb
} // namespace JStudio

#endif
