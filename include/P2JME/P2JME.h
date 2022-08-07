#ifndef _P2JME_P2JME_H
#define _P2JME_P2JME_H

#include "types.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JUT/JUTFont.h"
#include "JSystem/JMessage/TReference.h"

namespace P2JME {

struct Mgr : public JKRDisposer {
	virtual ~Mgr();

	// _00 VTBL
	JUTFont* m_font;                // _18
	u32 _1C;                        // _1C
	u32** _20;                      // _20
	u32* _24;                       // _24
	u8 _28;                         // _28
	u32 _2C;                        // _2C
	u32 _30;                        // _30
	JMessage::TReference* m_msgRef; // _34
};

void convertU64ToMessageID(u64, u32*, u32*);
void convertCharToMessageID(char*, u32*, u32*);

extern Mgr* gP2JMEMgr;
} // namespace P2JME

#endif
