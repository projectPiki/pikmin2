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
		virtual void getSceneType() const; // _00
		virtual void getClassSize();       // _04

		// _00 VTBL
	};
} // namespace Screen
} // namespace kh

#endif
