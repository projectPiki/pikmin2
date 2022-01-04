#ifndef FVB_DATA_H
#define FVB_DATA_H

#include "JSystem/JGadget/binary.h"
//#include "JSystem/fvb/functionvalue.h"

namespace JStudio {
namespace fvb {
namespace data {

const int PARAGRAPH_DATA = 1;

typedef enum TEComposite {
	COMPOSITE_NONE,
	COMPOSITE_RAW,
	COMPOSITE_IDX,
	COMPOSITE_PARAM,
	COMPOSITE_ADD,
	COMPOSITE_SUB,
	COMPOSITE_MUL,
	COMPOSITE_DIV,
	COMPOSITE_ENUM_SIZE,
};

// typedef const void*
// (*CompositeOperation)(TFunctionValue_composite::TData);

struct TBlock {
	u32 size;
	u16 type;
	u16 id_size;
	u8 id[0];
};

struct THeader {
	char signature[4];
	u16 byte_order; // must be 0xFEFF
	u16 version;    // 0-1 = obselete, 2-7 = OK
	u32 _8;
	u32 block_number;
	u8 content[0];
};

struct TParse_TParagraph {

	struct TData {
		u32* type;
		u32* param;
		const void* content;
		const void* next;
	};
	TParse_TParagraph(const void* content);
	const void* fvbData;
	void getData(JStudio::fvb::data::TParse_TParagraph::TData*) const;
};

struct TParse_TBlock {
	TParse_TBlock(const void* content) { }
	/*
	const TBlock* get() const { return (TBlock*)getRaw(); }

	u32 get_size() const { return get()->size; }
	const void* getNext() const {
	    u32 size = get_size();
	    return (const void*)((u8*)getRaw() + size);
	}
	u16 get_type() const { return get()->type; }
	u16 get_IDSize() const { return get()->id_size; }
	const void* getBlockEnd_() const { return (u8*)getRaw() +
	sizeof(TBlock); } const void* get_ID() const { const void* ret = 0;
	    if (get_IDSize())
	        ret = getBlockEnd_();
	    return ret;
	}
	const void* getContent() const {
	    u32 size = align_roundUp(get_IDSize(), 4);
	    return (const void*)((int)getBlockEnd_() + size);
	}
	*/
	const void* file;
};

} // namespace data
} // namespace fvb
} // namespace JStudio

#endif /* FVB_DATA_H */
