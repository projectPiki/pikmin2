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
	virtual void getSceneType() const; // _08 (inline)
};
} // namespace Screen

namespace og {
namespace newScreen {
struct SArgChallengeBase : public SceneArgBase {
	virtual void _0C() = 0; // _0C
};
} // namespace newScreen
} // namespace og

#endif
