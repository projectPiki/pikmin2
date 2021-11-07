#ifndef _OG_NEWSCREEN_SARGCHALLENGEBASE_H
#define _OG_NEWSCREEN_SARGCHALLENGEBASE_H

namespace Screen {
struct SceneArgBase {
	virtual void getSceneType() const; // _00

	// _00 VTBL
};
} // namespace Screen

namespace og {
namespace newScreen {
	struct SArgChallengeBase : public SceneArgBase {
		virtual void getSceneType() const; // _00
		virtual void _04() = 0;            // _04

		// _00 VTBL
	};
} // namespace newScreen
} // namespace og

#endif
