#include "og/ogLib2D.h"

og::Lib2D* og::gLib2D;

namespace og {
/**
 * @note Address: N/A
 * @note Size: 0x68
 */
inline Lib2D::Lib2D()
{
	mMessage = nullptr;
	mMessage = new P2JME::SimpleMessage;
	mMessage->init();
}

/**
 * @note Address: 0x8030F600
 * @note Size: 0x68
 */
Lib2D::~Lib2D() { gLib2D = nullptr; }

/**
 * @note Address: 0x8030F668
 * @note Size: 0x88
 */
void Lib2D::create()
{
	if (!gLib2D) {
		gLib2D = new Lib2D;
	}
}
} // namespace og
