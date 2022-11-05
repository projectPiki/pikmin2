#ifndef _SCREEN_SCREENOBJ_H
#define _SCREEN_SCREENOBJ_H

// #include "Dolphin/gx.h"
// #include "JSystem/JKR/JKRDisposer.h"
// #include "JSystem/JUT/TColor.h"
// #include "Resource.h"
// #include "Screen/Bases.h"
// #include "Screen/Enums.h"
// #include "types.h"
// #include "CNode.h"

// struct Controller;
// struct Graphics;
// struct JKRArchive;
// struct JKRSolidHeap;

// namespace Screen {

// struct IObjBase : public CNode, JKRDisposer {
// 	// vtable 2
// 	virtual ~IObjBase();                          // _00
// 	virtual bool update()                    = 0; // _04
// 	virtual void draw(Graphics&)             = 0; // _08
// 	virtual bool start(const StartSceneArg*) = 0; // _0C
// 	virtual bool end(const EndSceneArg*)     = 0; // _10
// 	virtual void setOwner(SceneBase*)        = 0; // _14
// 	virtual SceneBase* getOwner() const      = 0; // _18
// 	virtual void create(JKRArchive*)         = 0; // _1C
// };

// struct ObjBase : public IObjBase {
// 	ObjBase();

// 	// vtable 2
// 	virtual ~ObjBase();                               // _00
// 	virtual bool update();                            // _04
// 	virtual void draw(Graphics&);                     // _08
// 	virtual bool start(const StartSceneArg*);         // _0C
// 	virtual bool end(const EndSceneArg*);             // _10
// 	virtual void setOwner(SceneBase*);                // _14
// 	virtual SceneBase* getOwner() const;              // _18
// 	virtual void create(JKRArchive*);                 // _1C
// 	virtual void confirmSetScene(SetSceneArg&);       // _20
// 	virtual void confirmStartScene(StartSceneArg*);   // _24
// 	virtual void confirmEndScene(EndSceneArg*);       // _28
// 	virtual bool doStart(const StartSceneArg*);       // _2C
// 	virtual bool doEnd(const EndSceneArg*);           // _30
// 	virtual void doCreate(JKRArchive*);               // _34
// 	virtual bool doUpdateFadein();                    // _38
// 	virtual void doUpdateFadeinFinish();              // _3C
// 	virtual bool doUpdate();                          // _40
// 	virtual void doUpdateFinish();                    // _44
// 	virtual bool doUpdateFadeout();                   // _48
// 	virtual void doUpdateFadeoutFinish();             // _4C
// 	virtual void doDraw(Graphics& gfx);                   // _50
// 	virtual bool doConfirmSetScene(SetSceneArg&);     // _54
// 	virtual bool doConfirmStartScene(StartSceneArg*); // _58
// 	virtual bool doConfirmEndScene(EndSceneArg*&);    // _5C

// 	og::Screen::DispMemberBase* getDispMember();
// 	Controller* getGamePad() const;

// 	int _30;            // _30
// 	SceneBase* m_owner; // _34
// };

// struct ObjMgrBase : public CNode {
// 	ObjMgrBase();

// 	bool confirmSetScene(SetSceneArg&);
// 	bool confirmStartScene(StartSceneArg*);
// 	bool confirmEndScene(EndSceneArg*);
// 	void draw(Graphics&);
// 	void registObj(IObjBase*, SceneBase*);
// 	IObjBase* search(SceneBase*, char*);

// 	bool start(StartSceneArg*);
// 	bool update();
// 	bool end(EndSceneArg*);
// };

// } // namespace Screen

static const char BLAH[] = __FILE__;

#endif
