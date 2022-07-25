#ifndef _KH_SCREEN_SARGDAYENDRESULTINCP_H
#define _KH_SCREEN_SARGDAYENDRESULTINCP_H

/*
    __vt__Q32kh6Screen20SArgDayEndResultIncP:
    .4byte 0
    .4byte 0
    .4byte getSceneType__Q32kh6Screen20SArgDayEndResultIncPCFv
    .4byte getClassSize__Q32kh6Screen20SArgDayEndResultIncPFv
*/

namespace kh {
namespace Screen {
struct SArgDayEndResultIncP {
	virtual void getSceneType() const; // _08 (weak)
	virtual void getClassSize();       // _0C (weak)
};
} // namespace Screen
} // namespace kh

#endif
