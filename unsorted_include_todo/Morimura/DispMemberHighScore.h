#ifndef _MORIMURA_DISPMEMBERHIGHSCORE_H
#define _MORIMURA_DISPMEMBERHIGHSCORE_H

/*
    __vt__Q28Morimura19DispMemberHighScore:
    .4byte 0
    .4byte 0
    .4byte getSize__Q28Morimura19DispMemberHighScoreFv
    .4byte getOwnerID__Q28Morimura19DispMemberHighScoreFv
    .4byte getMemberID__Q28Morimura19DispMemberHighScoreFv
    .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
*/

namespace og {
namespace Screen {
struct DispMemberBase {
	virtual void getSize();           // _08
	virtual void getOwnerID();        // _0C
	virtual void getMemberID();       // _10
	virtual void doSetSubMemberAll(); // _14

	// _00 VTBL
};
} // namespace Screen
} // namespace og

namespace Morimura {
struct DispMemberHighScore : public DispMemberBase {
	virtual void getSize();     // _08
	virtual void getOwnerID();  // _0C
	virtual void getMemberID(); // _10

	// _00 VTBL
};
} // namespace Morimura

#endif
