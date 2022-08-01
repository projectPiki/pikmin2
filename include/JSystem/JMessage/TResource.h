#ifndef _JSYSTEM_JMESSAGE_TRESOURCE_H
#define _JSYSTEM_JMESSAGE_TRESOURCE_H

#include "JSystem/JGadget/linklist.h"
#include "types.h"

namespace JGadget {
struct TLinkListNode;
}

namespace JMessage {
struct JMessageHeader;

struct TResource : public JGadget::TLinkListNode {
    void* _08;      // _08 - "INF1Block*"
    void* _0C;      // _0C - "pDAT1Data"
    void* _10;      // _10 - "pSTR1Data"
    void* _14;      // _14 - "MID1Block*"
};

// struct TResourceContainer {
//     struct TCResource {

//     };

// };

} // namespace JMessage

#endif
