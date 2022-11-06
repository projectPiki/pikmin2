#ifndef _OG_NEWSCREEN_COURSENAME_H
#define _OG_NEWSCREEN_COURSENAME_H

#include "Screen/Bases.h"
#include "JSystem/J2D/J2DPane.h"

namespace P2DScreen {
struct Mgr_tuning;
} // namespace P2DScreen

namespace og {
namespace Screen {
struct DispMemberCourseName;
struct AnimGroup;
} // namespace Screen

namespace newScreen {
struct CourseName : public ::Screen::SceneBase {
	CourseName();

	virtual SceneType getSceneType();                       // _08 (weak)
	virtual ScreenOwnerID getOwnerID();                     // _0C (weak)
	virtual ScreenMemberID getMemberID();                   // _10 (weak)
	virtual const char* getResName() const;                 // _1C (weak)
	virtual void doCreateObj(JKRArchive*);                  // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*); // _24

	void doCreateObjUserCallBackFunc(JKRArchive*);

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
	int m_courseIndex; // _220
};

struct ObjCourseName : public ::Screen::ObjBase {
	ObjCourseName(const char*);

	virtual ~ObjCourseName();                             // _08 (weak)
	virtual bool doStart(const ::Screen::StartSceneArg*); // _44
	virtual bool doEnd(const ::Screen::EndSceneArg*);     // _48
	virtual void doCreate(JKRArchive*);                   // _4C
	virtual bool doUpdateFadein();                        // _50
	virtual void doUpdateFadeinFinish();                  // _54
	virtual bool doUpdate();                              // _58
	virtual void doUpdateFinish();                        // _5C
	virtual bool doUpdateFadeout();                       // _60
	virtual void doUpdateFadeoutFinish();                 // _64
	virtual void doDraw(Graphics& gfx);                   // _68

	void drawBG(Graphics&);

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	og::Screen::DispMemberCourseName* m_courseName; // _38
	P2DScreen::Mgr_tuning* _3C;                     // _3C
	og::Screen::AnimGroup* m_animGroup;             // _40
	f32 _44;                                        // _44, timer?
	f32 _48;                                        // _48
	f32 _4C;                                        // _4C, timer?
	u8 _50;                                         // _50
	JUtility::TColor m_color;                       // _54
	u8 _58;                                         // _58
	f32 _5C;                                        // _5C
};
} // namespace newScreen
} // namespace og

#endif
