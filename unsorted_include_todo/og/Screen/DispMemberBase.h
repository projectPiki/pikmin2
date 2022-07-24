#ifndef _OG_SCREEN_DISPMEMBERBASE_H
#define _OG_SCREEN_DISPMEMBERBASE_H

/*
    __vt__Q32og6Screen14DispMemberBase:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
*/

namespace og {
namespace Screen {
struct DispMemberBase {
	virtual void _08() = 0;           // _08
	virtual void _0C() = 0;           // _0C
	virtual void _10() = 0;           // _10
	virtual void doSetSubMemberAll(); // _14 (inline)

	void isID(unsigned long, unsigned long long);
	void getMemberName(char*);
	void setSubMember(og::Screen::DispMemberBase*);
	void getSubMember(unsigned long, unsigned long long);
	void setSubMemberAll();
};
} // namespace Screen
} // namespace og

#endif
