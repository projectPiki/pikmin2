#ifndef _MORIMURA_DISPMEMBERZUKANENEMY_H
#define _MORIMURA_DISPMEMBERZUKANENEMY_H

/*
    __vt__Q28Morimura20DispMemberZukanEnemy:
    .4byte 0
    .4byte 0
    .4byte getSize__Q28Morimura20DispMemberZukanEnemyFv
    .4byte getOwnerID__Q28Morimura20DispMemberZukanEnemyFv
    .4byte getMemberID__Q28Morimura20DispMemberZukanEnemyFv
    .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
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

namespace Morimura {
struct DispMemberZukanEnemy : public DispMemberBase {
	virtual void getSize();           // _00
	virtual void getOwnerID();        // _04
	virtual void getMemberID();       // _08
	virtual void doSetSubMemberAll(); // _0C

	// _00 VTBL
};
} // namespace Morimura

#endif
