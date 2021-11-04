#include "types.h"

#include "og/ogLib2D.h"

og::Lib2D* og::gLib2D;

namespace og {
/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
inline Lib2D::Lib2D()
{
	m_message = nullptr;
	m_message = new P2JME::SimpleMessage();
	m_message->init();
}

/*
 * --INFO--
 * Address:	8030F600
 * Size:	000068
 */
Lib2D::~Lib2D() { og::gLib2D = nullptr; }

/*
 * --INFO--
 * Address:	8030F668
 * Size:	000088
 */
void Lib2D::create()
{
	if (!og::gLib2D) {
		gLib2D = new og::Lib2D();
	}
}
} // namespace og
