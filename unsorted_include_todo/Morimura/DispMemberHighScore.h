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
	virtual void getSize();           // _08 (weak)
	virtual void getOwnerID();        // _0C (weak)
	virtual void getMemberID();       // _10 (weak)
	virtual void doSetSubMemberAll(); // _14 (weak)
};
} // namespace Screen
} // namespace og

namespace Morimura {
struct DispMemberHighScore : public DispMemberBase {
	virtual void getSize();     // _08 (weak)
	virtual void getOwnerID();  // _0C (weak)
	virtual void getMemberID(); // _10 (weak)
};
} // namespace Morimura

#endif
