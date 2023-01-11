#ifndef _EFX_CONTEXT_H
#define _EFX_CONTEXT_H

#include "CNode.h"
#include "Vector3.h"

namespace efx {
struct Context : public CNode {
	Context() { clearRelations(); }

	virtual ~Context() { } // _08 (weak)

	Vector3f m_position; // _18
};

struct ContextChasePos : public CNode {
	ContextChasePos()
	{
		clearRelations();
		m_position = nullptr;
	}

	virtual ~ContextChasePos() { } // _08 (weak)

	Vector3f* m_position; // _18
};
} // namespace efx

#endif
