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
		u8 getAttribute();
		char* getAttributeName();
		u8 getSlipCode();
		char* getSlipCodeName();
		bool isBald();
		void read(Stream&);
		void setCode(int, int, bool);
		void write(Stream&);

		// u8 m_attribute;
		union {
			u8 m_contents;
			u8 m_attribute : 4, m_slipCode : 2, m_isBald : 1;
		};
	};

	struct Mgr {
		struct CodeArray : ArrayContainer<MapCode::Code> {
			CodeArray();
			virtual ~CodeArray();
			virtual void writeObject(Stream &, Code &) override;
			virtual void readObject(Stream &, Code &) override;
			virtual void addOne(Code &) override;

		};

		Mgr();
		~Mgr();
		void write(Stream&);
		void read(Stream&);
		void attachCodes(Sys::TriangleTable*);

		CodeArray m_codeArray; // _00
	};
} // namespace MapCode

#endif
