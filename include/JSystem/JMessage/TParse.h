#ifndef _JSYSTEM_JMESSAGE_TPARSE_H
#define _JSYSTEM_JMESSAGE_TPARSE_H

#include "JSystem/JMessage/TResource.h"
#include "types.h"
#include "JSystem/JGadget/binary.h"

namespace JGadget {
namespace binary {
struct TParse_header_block;
} // namespace binary
} // namespace JGadget

namespace JMessage {
struct TParse : public JGadget::binary::TParse_header_block {
	TParse(TResourceContainer*);

	virtual ~TParse();                                      // _08
	virtual bool parseHeader_next(const void**, u32*, u32); // _0C
	virtual bool parseBlock_next(const void**, u32*, u32);  // _10

	// _00 = VTBL
	TResourceContainer* mResourceContainer; // _04
	TResource* mResource;                   // _08
};

struct TParse_color : public JGadget::binary::TParse_header_block {
	TParse_color(TResourceContainer*);

	virtual ~TParse_color();                                // _08
	virtual bool parseHeader_next(const void**, u32*, u32); // _0C
	virtual bool parseBlock_next(const void**, u32*, u32);  // _10

	// _00 = VTBL
	TResourceContainer* mResourceContainer; // _04
};
} // namespace JMessage

#endif
