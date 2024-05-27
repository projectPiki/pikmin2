#ifndef _JSYSTEM_JMESSAGE_DATA_H
#define _JSYSTEM_JMESSAGE_DATA_H

#include "JSystem/JGadget/binary.h"

using namespace JGadget::binary;

namespace JMessage {
namespace data {
extern const int ga4cSignature;
extern const int ga4cSignature_color;

struct TParse_THeader : public TParseData_aligned<4> {
	TParse_THeader(const void* data)
	    : TParseData_aligned(data)
	{
	}

	const void* getContent() const { return (char*)getRaw() + 0x20; }
	char* get() const { return (char*)getRaw(); }

	u32* getSignature() const { return (u32*)(get() + 0x0); }
	u32 getType() const { return *(u32*)(get() + 0x4); }
	u32 getSize() const { return *(u32*)(get() + 0x4); }
	u32 getBlockNumber() const { return *(u32*)(get() + 0xC); }
	u8 getEncoding() const { return *(u8*)(get() + 0x10); }

	// _00-_04 = TParseData_aligned
};

struct TParse_TBlock : public TParseData_aligned<4> {
	TParse_TBlock(const void* data)
	    : TParseData_aligned(data)
	{
	}

	// _00-_04 = TParseData_aligned
};

struct TParse_TBlock_info : public TParse_TBlock {
	TParse_TBlock_info(const void* data)
	    : TParse_TBlock(data)
	{
	}

	char* get() const { return (char*)getRaw(); }

	char* getContent() const { return (char*)getRaw() + 0x10; }

	u16 getMessageEntrySize() const { return *(u16*)(get() + 0xA); }

	u16 getMessageEntryNumber() const { return *(u16*)(get() + 0x8); }

	u16 getGroupID() const { return *(u16*)(get() + 0xC); }

	// _00-_04 = TParse_TBlock
};

struct TParse_TBlock_messageID : public TParse_TBlock {
	TParse_TBlock_messageID(const void* data)
	    : TParse_TBlock(data)
	{
	}

	char* get() const { return (char*)getRaw(); }
	u8 get_formSupplement() const { return *(u8*)(get() + 0xB); }
	u16 get_number() const { return *(u16*)(get() + 0x8); }
	char* getContent() const { return (char*)get() + 0x10; }
	u8 get_form() const { return *(u8*)(get() + 0xA) & 0xF; }
	bool get_isOrdered() const { return *(u8*)(get() + 0xA) & 0xF0; }

	// _00-_04 = TParse_TBlock
};

struct TParse_TBlock_color : public TParse_TBlock {
	TParse_TBlock_color(const void* data)
	    : TParse_TBlock(data)
	{
	}

	// _00-_04 = TParse_TBlock
};

inline u32 getTagCode(u32 tag) { return tag & 0xFFFF; }
inline u32 getTagGroup(u32 tag) { return (tag >> 0x10) & 0xFF; }

} // namespace data
} // namespace JMessage

#endif
