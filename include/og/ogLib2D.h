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

	P2JME::SimpleMessage* m_message; // _18
};

extern Lib2D* gLib2D;
} // namespace og

#endif
