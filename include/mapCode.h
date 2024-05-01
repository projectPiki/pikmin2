#ifndef _MAPCODE_H
#define _MAPCODE_H

#include "types.h"
#include "Container.h"

namespace Sys {
struct TriangleTable;
}
namespace MapCode {
// typedef u8 Code;
struct Code {
#pragma enumsalwaysint off
	enum Attribute {
		Attribute1 = 0x1,
		Attribute2 = 0x2,
		Attribute3 = 0x4,
		Attribute4 = 0x8,
		ATTR_MASK  = 0xF,
	};

	enum SlipCode {
		SlipCode_NoSlip  = 0x0, // normal ground
		SlipCode_Gradual = 0x1, // slow slip if not moving, like in VoR going up to SCx
		SlipCode_Steep   = 0x2, // strong slip, cannot walk up, like slope behind ship in VoR
		SLIPCODE_MASK    = 0x3,
	};
#pragma enumsalwaysint reset

	int getAttribute();
	char* getAttributeName();
	int getSlipCode();
	char* getSlipCodeName();
	bool isBald();
	void read(Stream&);
	void setCode(int attribute, int slip, bool isBald);
	void write(Stream&);

	inline char* getContents() { return (char*)mContents; }

	// u8 mAttribute;
	union {
		u8 mContents;
		u8 mAttribute : 4, mSlipCode : 2, mIsBald : 1;
	};
};

struct Mgr {
	struct CodeArray : public ArrayContainer<Code> {
		inline CodeArray()
		    : ArrayContainer<Code>()
		{
		}

		virtual ~CodeArray() { }                  // _08 (weak)
		virtual void writeObject(Stream&, Code&); // _2C
		virtual void readObject(Stream&, Code&);  // _30
	};

	Mgr();
	~Mgr();
	void write(Stream&);
	void read(Stream&);
	void attachCodes(Sys::TriangleTable*);

	CodeArray mCodeArray; // _00
};
} // namespace MapCode

#endif
