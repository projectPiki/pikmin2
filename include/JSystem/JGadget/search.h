#ifndef _JSYSTEM_JGADGET_SEARCH_H
#define _JSYSTEM_JGADGET_SEARCH_H

#include "types.h"

namespace JGadget {
template <typename T>
inline const T& toValueFromIndex(int idx, const T* values, u32 count, const T& fallback)
{
	return (idx >= count) ? fallback : values[idx];
}
} // namespace JGadget

#endif
