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
	mMessage = nullptr;
	mMessage = new P2JME::SimpleMessage;
	mMessage->init();
}

/*
 * --INFO--
 * Address:	8030F600
 * Size:	000068
 */
Lib2D::~Lib2D() { gLib2D = nullptr; }

/*
 * --INFO--
 * Address:	8030F668
 * Size:	000088
 */
void Lib2D::create()
{
	if (!gLib2D) {
		gLib2D = new Lib2D;
	}
}
} // namespace og
