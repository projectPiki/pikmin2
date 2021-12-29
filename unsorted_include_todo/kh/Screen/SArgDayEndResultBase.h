#ifndef _KH_SCREEN_SARGDAYENDRESULTBASE_H
#define _KH_SCREEN_SARGDAYENDRESULTBASE_H

/*
    __vt__Q32kh6Screen20SArgDayEndResultBase:
    .4byte 0
    .4byte 0
    .4byte getSceneType__Q26Screen12SceneArgBaseCFv
    .4byte getClassSize__Q32kh6Screen20SArgDayEndResultBaseFv
*/

namespace Screen {
struct SceneArgBase {
	virtual void getSceneType() const; // _00

	// _00 VTBL
};
} // namespace Screen

namespace kh {
namespace Screen {
	struct SArgDayEndResultBase : public SceneArgBase {
		virtual void getSceneType() const; // _00
		virtual void getClassSize();       // _04

		// _00 VTBL
	};
} // namespace Screen
} // namespace kh

#endif
