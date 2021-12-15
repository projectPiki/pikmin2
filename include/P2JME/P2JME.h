#ifndef _P2JME_P2JME_H
#define _P2JME_P2JME_H

#include "types.h"

namespace P2JME {
void convertU64ToMessageID(ulonglong, ulong*, ulong*);
void convertCharToMessageID(char*, ulong*, ulong*);
} // namespace P2JME

#endif
