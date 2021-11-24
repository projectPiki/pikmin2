#ifndef _SCREEN_BASES_H
#define _SCREEN_BASES_H

#include "Dolphin/gx.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "Screen/Enums.h"
#include "types.h"
#include "CNode.h"

struct Graphics;
struct JKRArchive;

namespace og {
namespace Screen {
	struct DispMemberBase;
} // namespace Screen
} // namespace og

namespace Resource {
struct MgrCommand;
} // namespace Resource

namespace Screen {

struct SceneArg {
	virtual SceneType getSceneType(); // _00
	virtual int getClassSize();       // _04
};

struct StartSceneArg : public SceneArg {
	float _04; // _04
};

struct SetSceneArg : public SceneArg {
	SceneType m_sceneType;                    // _04
	u8 _08;                                   // _08
	u8 _09;                                   // _09
	og::Screen::DispMemberBase* m_dispMember; // _0C
};

struct EndSceneArg : public SceneArg {
	u8 _04; // _04
};

struct SceneBase {
	virtual SceneType getSceneType() = 0;                   // _00
	virtual uint getOwnerID()        = 0;                   // _04
	virtual ulonglong getMemberID()  = 0;                   // _08
	virtual bool isUseBackupSceneInfo();                    // _0C
	virtual bool isDrawInDemo() const;                      // _10
	virtual char* getResName() = 0;                         // _14
	virtual void doCreateObj() = 0;                         // _18
	virtual void doUserCallBackFunc(Resource::MgrCommand*); // _1C
	virtual void setPort(Graphics&);                        // _20
	virtual void doUpdateActive();                          // _24
	virtual bool doConfirmSetScene(SetSceneArg&);           // _28
	virtual bool doConfirmStartScene(StartSceneArg*);       // _2C
	virtual bool doConfirmEndScene(EndSceneArg*&);          // _30
	virtual bool doStart(StartSceneArg*);                   // _34
	virtual bool doEnd(EndSceneArg*);                       // _38
	virtual bool setDefaultDispMember();                    // _3C
	virtual void doSetBackupScene(SetSceneArg&);            // _40
	virtual int doGetFinishState();                         // _44
};

struct IObjBase : public CNode, JKRDisposer {
	// VTBL 2
	virtual ~IObjBase();                          // _00
	virtual bool update()                    = 0; // _04
	virtual void draw(Graphics&)             = 0; // _08
	virtual bool start(const StartSceneArg*) = 0; // _0C
	virtual bool end(const EndSceneArg*)     = 0; // _10
	virtual void setOwner(SceneBase*)        = 0; // _14
	virtual SceneBase* getOwner() const      = 0; // _18
	virtual void create(JKRArchive&)         = 0; // _1C
};

struct ObjBase : public IObjBase {
	ObjBase();
	virtual bool update();                            // _04
	virtual void draw(Graphics&);                     // _08
	virtual bool start(const StartSceneArg*);         // _0C
	virtual bool end(const EndSceneArg*);             // _10
	virtual void setOwner(SceneBase*);                // _14
	virtual SceneBase* getOwner() const;              // _18
	virtual void create(JKRArchive&);                 // _1C
	virtual void confirmSetScene(SetSceneArg&);       // _20
	virtual void confirmStartScene(StartSceneArg*);   // _24
	virtual void confirmEndScene(EndSceneArg*);       // _28
	virtual bool doStart(const StartSceneArg*);       // _2C
	virtual bool doEnd(const EndSceneArg*);           // _30
	virtual void doCreate(JKRArchive*);               // _34
	virtual bool doUpdateFadein();                    // _38
	virtual void doUpdateFadeinFinish();              // _3C
	virtual bool doUpdate();                          // _40
	virtual void doUpdateFinish();                    // _44
	virtual bool doUpdateFadeout();                   // _48
	virtual void doUpdateFadeoutFinish();             // _4C
	virtual void doDraw(Graphics&);                   // _50
	virtual bool doConfirmSetScene(SetSceneArg&);     // _54
	virtual bool doConfirmStartScene(StartSceneArg*); // _58
	virtual bool doConfirmEndScene(EndSceneArg*&);    // _5C

	og::Screen::DispMemberBase* getDispMember();

	int _30;            // _30
	SceneBase* m_owner; // _34
};
} // namespace Screen

#endif
