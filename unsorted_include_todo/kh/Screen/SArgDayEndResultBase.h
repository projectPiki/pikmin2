#ifndef _KH_SCREEN_SARGDAYENDRESULTBASE_H
#define _KH_SCREEN_SARGDAYENDRESULTBASE_H

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
