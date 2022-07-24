#ifndef _KH_SCREEN_SARGDAYENDRESULTITEM_H
#define _KH_SCREEN_SARGDAYENDRESULTITEM_H

/*
    __vt__Q32kh6Screen20SArgDayEndResultItem:
    .4byte 0
    .4byte 0
    .4byte getSceneType__Q32kh6Screen20SArgDayEndResultItemCFv
    .4byte getClassSize__Q32kh6Screen20SArgDayEndResultItemFv
*/

namespace kh {
namespace Screen {
struct SArgDayEndResultItem {
	virtual void getSceneType() const; // _08
	virtual void getClassSize();       // _0C

	// _00 VTBL
};
} // namespace Screen
} // namespace kh

#endif
