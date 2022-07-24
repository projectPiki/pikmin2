#ifndef _MORIMURA_DISPMEMBERZUKANBASE_H
#define _MORIMURA_DISPMEMBERZUKANBASE_H

/*
    __vt__Q28Morimura19DispMemberZukanBase:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

namespace og {
namespace Screen {
struct DispMemberBase {
	virtual void _08() = 0;           // _08
	virtual void _0C() = 0;           // _0C
	virtual void _10() = 0;           // _10
	virtual void doSetSubMemberAll(); // _14

	// _00 VTBL
};
} // namespace Screen
} // namespace og

namespace Morimura {
struct DispMemberZukanBase : public DispMemberBase {
	virtual void _08() = 0; // _08
	virtual void _0C() = 0; // _0C
	virtual void _10() = 0; // _10
	virtual void _18() = 0; // _18
	virtual void _1C() = 0; // _1C
	virtual void _20() = 0; // _20
	virtual void _24() = 0; // _24
	virtual void _28() = 0; // _28
	virtual void _2C() = 0; // _2C

	// _00 VTBL
};
} // namespace Morimura

#endif
