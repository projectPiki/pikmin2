#include "types.h"
#include "SweepPrune.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A5D0
    lbl_8051A5D0:
        .4byte 0x00000000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
inline void SweepPrune::Node::insertBefore(SweepPrune::Node* prev)
{
	// UNUSED FUNCTION
	Node* next = prev->m_next;
	m_prev     = prev;
	m_next     = next;
	if (next) {
		next->m_prev = this;
	}
	// This function kind of assumes prev is nonnull earlier...
	if (prev) {
		prev->m_next = this;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
inline void SweepPrune::Node::insertAfter(SweepPrune::Node* next)
{
	// UNUSED FUNCTION
	Node* prev   = next->m_prev;
	next->m_prev = this;
	m_prev       = prev;
	m_next       = next;
	if (prev) {
		prev->m_next = this;
	}
}

/*
 * Inserts `this` into the node chain `chain` according to its
 * radius. The chain is assumed to be pre-sorted as such.
 *
 * --INFO--
 * Address:	8023C5B0
 * Size:	0001C8
 */
void SweepPrune::Node::insertSort(SweepPrune::Node& chain)
{
	if (m_next) {
		if (m_next->m_radius > m_radius) {
			for (Node* iNode = m_next; iNode != nullptr; iNode = iNode->m_next) {
				if (iNode->m_radius <= m_radius) {
					if (m_next) {
						m_next->m_prev = m_prev;
					}
					if (m_prev) {
						m_prev->m_next = m_next;
					}
					m_next = nullptr;
					m_prev = nullptr;
					insertAfter(iNode);
					return;
				}
			}
			return;
			// Interesting differences between the above loop and this one:
			// Node* iNode = m_next;
			// while (true) {
			// 	if (iNode == nullptr) {
			// 		return;
			// 	}
			// 	if (iNode->m_radius <= m_radius) break;
			// 	iNode = iNode->m_next;
			// }
			// if (m_next ) {
			// 	m_next->m_prev = m_prev;
			// }
			// if (m_prev ) {
			// 	m_prev->m_next = m_next;
			// }
			// m_next = nullptr;
			// m_prev = nullptr;
			// insertAfter(iNode);
			// return;
		}
		if (m_prev == nullptr) {
			return;
		}
		if (m_prev->m_radius < m_radius) {
			for (Node* iNode = m_prev; iNode != nullptr; iNode = iNode->m_prev) {
				if (iNode->m_radius >= m_radius) {
					if (m_next) {
						m_next->m_prev = m_prev;
					}
					if (m_prev) {
						m_prev->m_next = m_next;
					}
					m_next = nullptr;
					m_prev = nullptr;
					insertBefore(iNode);
					return;
				}
			}
		}
		return;
	}
	if (chain.m_prev == nullptr) {
		insertAfter(&chain);
		return;
	}
	Node* next = nullptr;
	for (Node* prev = chain.m_prev; prev != nullptr; prev = prev->m_prev) {
		next = prev;
		if (prev->m_radius > m_radius) {
			insertBefore(prev);
			return;
		}
	}
	if (next == nullptr) {
		return;
	}
	insertAfter(next);
}

/*
 * __ct
 *
 * --INFO--
 * Address:	8023C778
 * Size:	000070
 */
SweepPrune::Object::Object()
{
	m_minX.m_radius = 0.0f;
	m_minX.m_object = nullptr;
	m_minX.m_next   = nullptr;
	m_minX.m_prev   = nullptr;
	m_maxX.m_radius = 0.0f;
	m_maxX.m_object = nullptr;
	m_maxX.m_next   = nullptr;
	m_maxX.m_prev   = nullptr;
	m_minZ.m_radius = 0.0f;
	m_minZ.m_object = nullptr;
	m_minZ.m_next   = nullptr;
	m_minZ.m_prev   = nullptr;
	m_maxZ.m_radius = 0.0f;
	m_maxZ.m_object = nullptr;
	m_maxZ.m_next   = nullptr;
	m_maxZ.m_prev   = nullptr;
	m_minX.m_flags  = 0;
	m_maxX.m_flags  = 1;
	m_minZ.m_flags  = 0;
	m_maxZ.m_flags  = 1;
	m_maxZ.m_object = this;
	m_minZ.m_object = this;
	m_maxX.m_object = this;
	m_minX.m_object = this;
}

/*
 * __ct__Q210SweepPrune5WorldFv
 *
 * --INFO--
 * Address:	8023C7E8
 * Size:	00002C
 */
SweepPrune::World::World()
{
	_00.m_radius = 0.0f;
	_00.m_object = nullptr;
	_00.m_next   = nullptr;
	_00.m_prev   = nullptr;
	_14.m_radius = 0.0f;
	_14.m_object = nullptr;
	_14.m_next   = nullptr;
	_14.m_prev   = nullptr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
SweepPrune::World::~World()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8023C814
 * Size:	000148
 */
void SweepPrune::World::resolve(SweepPrune::World::ResolveArg& arg)
{
	arg._08 = 0;
	arg._04 = 0;

	Object* o1;
	Node* n1 = _00.m_prev;
	Node* prev;

	while (n1) {
		prev = nullptr;
		o1   = n1->m_object;
		for (Node* n2 = n1->m_prev; n2 != nullptr; n2 = n2->m_prev) {
			arg._04++;
			Object* o2 = n2->m_object;
			if ((o1 == o2) && (n2->m_flags == 1))
				break;
			if (n2->m_flags == 0) {
				if (prev == nullptr) {
					prev = n2;
				}
				float min1 = o1->m_minZ.m_radius;
				float max1 = o1->m_maxZ.m_radius;
				float min2 = o2->m_minZ.m_radius;
				float max2 = o2->m_maxZ.m_radius;
				if (((((min1 <= min2) && (min2 <= max1)) || ((min1 <= max2 && (max2 <= max1)))) || ((min2 <= min1 && (min1 <= max2))))
				    || ((min2 <= max1 && (max1 <= max2)))) {
					arg.m_callback->invoke(o1, o2);
					arg._08++;
				}
			}
		}
		if (prev == nullptr) {
			n1 = n1->m_prev;
		}
		if (prev) {
			n1 = prev;
		}
	}
}
