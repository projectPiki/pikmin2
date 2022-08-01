#ifndef _JSYSTEM_JMESSAGE_TPARSE_H
#define _JSYSTEM_JMESSAGE_TPARSE_H

#include "types.h"
#include "JSystem/JGadget/binary.h"

namespace JGadget {
namespace binary {
struct TParse_header_block;
} // namespace binary
} // namespace JGadget

namespace JMessage {
struct TParse : public JGadget::binary::TParse_header_block {
    virtual ~TParse();                                                          // _08
    virtual void parseHeader_next(const void**, unsigned long*, unsigned long); // _0C
    virtual void parseBlock_next(const void**, unsigned long*, unsigned long);  // _10
};

struct TParse_color : public JGadget::binary::TParse_header_block {
    virtual ~TParse_color();                                                    // _08
    virtual void parseHeader_next(const void**, unsigned long*, unsigned long); // _0C
    virtual void parseBlock_next(const void**, unsigned long*, unsigned long);  // _10
};
} // namespace JMessage

#endif
