#ifndef _OG_SCREEN_DISPMEMBERKANTEI_H
#define _OG_SCREEN_DISPMEMBERKANTEI_H

/*
    __vt__Q32og6Screen16DispMemberKantei:
    .4byte 0
    .4byte 0
    .4byte getSize__Q32og6Screen16DispMemberKanteiFv
    .4byte getOwnerID__Q32og6Screen16DispMemberKanteiFv
    .4byte getMemberID__Q32og6Screen16DispMemberKanteiFv
    .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .4byte 0
*/

namespace og {
namespace Screen {
	struct DispMemberBase {
		virtual void getSize();           // _00
		virtual void getOwnerID();        // _04
		virtual void getMemberID();       // _08
		virtual void doSetSubMemberAll(); // _0C

		// _00 VTBL
	};
} // namespace Screen
} // namespace og

namespace og {
namespace Screen {
	struct DispMemberKantei : public DispMemberBase {
		virtual void getSize();           // _00
		virtual void getOwnerID();        // _04
		virtual void getMemberID();       // _08
		virtual void doSetSubMemberAll(); // _0C
		virtual void _10() = 0;           // _10

		// _00 VTBL
	};
} // namespace Screen
} // namespace og

#endif
