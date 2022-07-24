#ifndef _MORIMURA_DISPMEMBERZUKANITEM_H
#define _MORIMURA_DISPMEMBERZUKANITEM_H

/*
    __vt__Q28Morimura19DispMemberZukanItem:
    .4byte 0
    .4byte 0
    .4byte getSize__Q28Morimura19DispMemberZukanItemFv
    .4byte getOwnerID__Q28Morimura19DispMemberZukanItemFv
    .4byte getMemberID__Q28Morimura19DispMemberZukanItemFv
    .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
*/

namespace og {
namespace Screen {
struct DispMemberBase {
	virtual void getSize();           // _08 (inline)
	virtual void getOwnerID();        // _0C (inline)
	virtual void getMemberID();       // _10 (inline)
	virtual void doSetSubMemberAll(); // _14 (inline)
};
} // namespace Screen
} // namespace og

namespace Morimura {
struct DispMemberZukanItem : public DispMemberBase {
	virtual void getSize();     // _08 (inline)
	virtual void getOwnerID();  // _0C (inline)
	virtual void getMemberID(); // _10 (inline)
};
} // namespace Morimura

#endif
