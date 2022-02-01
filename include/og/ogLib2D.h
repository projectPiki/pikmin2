#ifndef _OG_OGLIB2D_H
#define _OG_OGLIB2D_H

#include "types.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "P2JME/SimpleMessage.h"

namespace og {
struct Lib2D : public JKRDisposer {
	Lib2D();
	virtual ~Lib2D();

	static void create();

	/**
	 * @reifiedAddress{80309DA8}
	 * @reifiedFile{plugProjectOgawaU/ogCallBackMessage.cpp}
	 */
	P2JME::SimpleMessage* getMsgPtr() { return m_message; }

	P2JME::SimpleMessage* m_message; // _18
};

extern Lib2D* gLib2D;
} // namespace og

#endif
