#ifndef _P2JME_P2JME_H
#define _P2JME_P2JME_H

#include "types.h"

namespace P2JME {
void convertU64ToMessageID(u64, u32*, u32*);
void convertCharToMessageID(char*, u32*, u32*);
} // namespace P2JME

#endif
