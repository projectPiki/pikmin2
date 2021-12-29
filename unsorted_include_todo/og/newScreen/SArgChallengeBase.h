#ifndef _OG_NEWSCREEN_SARGCHALLENGEBASE_H
#define _OG_NEWSCREEN_SARGCHALLENGEBASE_H

/*
    __vt__Q32og9newScreen17SArgChallengeBase:
    .4byte 0
    .4byte 0
    .4byte getSceneType__Q26Screen12SceneArgBaseCFv
    .4byte 0
*/

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
