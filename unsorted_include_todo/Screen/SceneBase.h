#ifndef _SCREEN_SCENEBASE_H
#define _SCREEN_SCENEBASE_H

/*
    __vt__Q26Screen9SceneBase:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte isUseBackupSceneInfo__Q26Screen9SceneBaseFv
    .4byte isDrawInDemo__Q26Screen9SceneBaseCFv
    .4byte 0
    .4byte 0
    .4byte doUserCallBackFunc__Q26Screen9SceneBaseFPQ28Resource10MgrCommand
    .4byte setPort__Q26Screen9SceneBaseFR8Graphics
    .4byte doUpdateActive__Q26Screen9SceneBaseFv
    .4byte doConfirmSetScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
    .4byte doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
    .4byte doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg
    .4byte doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
    .4byte doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
    .4byte setDefaultDispMember__Q26Screen9SceneBaseFv
    .4byte doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
    .4byte doGetFinishState__Q26Screen9SceneBaseFv
*/

namespace Screen {
struct SceneBase {
	virtual void _08() = 0;                                 // _08
	virtual void _0C() = 0;                                 // _0C
	virtual void _10() = 0;                                 // _10
	virtual void isUseBackupSceneInfo();                    // _14 (inline)
	virtual void isDrawInDemo() const;                      // _18 (inline)
	virtual void _1C() = 0;                                 // _1C
	virtual void _20() = 0;                                 // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*); // _24 (inline)
	virtual void setPort(Graphics&);                        // _28 (inline)
	virtual void doUpdateActive();                          // _2C
	virtual void doConfirmSetScene(SetSceneArg&);           // _30 (inline)
	virtual void doConfirmStartScene(StartSceneArg*);       // _34 (inline)
	virtual void doConfirmEndScene(EndSceneArg*&);          // _38 (inline)
	virtual void doStart(StartSceneArg*);                   // _3C
	virtual void doEnd(EndSceneArg*);                       // _40
	virtual void setDefaultDispMember();                    // _44 (inline)
	virtual void doSetBackupScene(SetSceneArg&);            // _48 (inline)
	virtual void doGetFinishState();                        // _4C (inline)

	SceneBase();
	void searchObj(char*);
	void destroy();
	void create();
	void update();
	void updateActive();
	void draw(Graphics&);
	void start(Screen::StartSceneArg*);
	void end(Screen::EndSceneArg*);
	void userCallBackFunc(Resource::MgrCommand*);
	void createObj(JKRArchive*);
	void registObj(Screen::ObjBase*, JKRArchive*);
	void confirmSetScene(Screen::SetSceneArg&);
	void confirmStartScene(Screen::StartSceneArg*);
	void confirmEndScene(Screen::EndSceneArg*);
	void setScene(Screen::SetSceneArg&);
	void startScene(Screen::StartSceneArg*);
	void endScene(Screen::EndSceneArg*);
	void setBackupScene();
	void setDispMember(og::Screen::DispMemberBase*);
	void getFinishState();
	void getGamePad() const;
	void setColorBG(unsigned char, unsigned char, unsigned char, unsigned char);
};
} // namespace Screen

#endif
