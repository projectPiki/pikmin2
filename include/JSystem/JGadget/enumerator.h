#ifndef _JSYSTEM_JGADGET_TENUMERATOR_H
#define _JSYSTEM_JGADGET_TENUMERATOR_H

#include "types.h"

namespace JGadget {
template <typename Element>
struct TEnumerator {
	TEnumerator(Element, Element);
	Element operator*();
	// TODO: __opb__ const
	bool isEnd() const;
};

template <typename Container>
struct TContainerEnumerator_const {
	TContainerEnumerator_const(const Container&);
};
} // namespace JGadget

#endif
