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

	virtual ~TParse();                                                          // _08
	virtual bool parseHeader_next(const void**, unsigned long*, unsigned long); // _0C
	virtual bool parseBlock_next(const void**, unsigned long*, unsigned long);  // _10
};

struct TParse_color : public JGadget::binary::TParse_header_block {
	TParse_color(TResourceContainer*);

	virtual ~TParse_color();                                                    // _08
	virtual bool parseHeader_next(const void**, unsigned long*, unsigned long); // _0C
	virtual bool parseBlock_next(const void**, unsigned long*, unsigned long);  // _10
};
} // namespace JMessage

#endif
