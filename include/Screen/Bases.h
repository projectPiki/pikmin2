#ifndef _SCREEN_BASES_H
#define _SCREEN_BASES_H

#include "Dolphin/gx.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JUtility.h"
#include "Resource.h"
#include "Screen/Enums.h"
#include "types.h"
#include "CNode.h"

struct Controller;
struct Graphics;
struct JKRArchive;
struct JKRSolidHeap;

namespace og {
namespace Screen {
struct DispMemberBase;
} // namespace Screen
} // namespace og

namespace Resource {
struct MgrCommand;
} // namespace Resource

namespace Screen {
struct IObjBase;
struct ObjBase;
struct ObjMgrBase;
struct Mgr;

struct SceneArg {
	virtual SceneType getSceneType(); // _00
	virtual int getClassSize();       // _04
};

struct StartSceneArg : public SceneArg {
	virtual SceneType getSceneType(); // _00
	virtual int getClassSize();       // _04

	float _04; // _04
};

struct SetSceneArg : public SceneArg {
	virtual SceneType getSceneType(); // _00
	virtual int getClassSize();       // _04

	SceneType m_sceneType;                    // _04
	u8 _08;                                   // _08
	bool _09;                                 // _09
	og::Screen::DispMemberBase* m_dispMember; // _0C
};

struct EndSceneArg : public SceneArg {
	virtual SceneType getSceneType(); // _00
	virtual int getClassSize();       // _04

	u8 _04; // _04
};

struct SceneBase {
#pragma enumalwaysint on
	enum StateID {
		Unknown0 = 0,
		Unknown1,
		Unknown2,
		Unknown3,
		Unknown4,
		Invalid = 0xFFFFFFFF
	};
#pragma enumalwaysint reset

	SceneBase();

	virtual SceneType getSceneType()     = 0;               // _00
	virtual ScreenOwnerID getOwnerID()   = 0;               // _04
	virtual ScreenMemberID getMemberID() = 0;               // _08
	virtual bool isUseBackupSceneInfo();                    // _0C
	virtual bool isDrawInDemo() const;                      // _10
	virtual const char* getResName() const = 0;             // _14
	virtual void doCreateObj(JKRArchive*)  = 0;             // _18
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

	void confirmEndScene(EndSceneArg*);
	void confirmSetScene(SetSceneArg&);
	void confirmStartScene(StartSceneArg*);
	void create();
	void createObj(JKRArchive*);
	void destroy();
	void draw(Graphics&);
	bool end(EndSceneArg*);
	void endScene(EndSceneArg*);
	int getFinishState();
	Controller* getGamePad() const;
	void registObj(ObjBase*, JKRArchive*);
	IObjBase* searchObj(char*);
	void setBackupScene();
	void setColorBG(u8, u8, u8, u8);
	void setScene(SetSceneArg&);
	void setDispMember(og::Screen::DispMemberBase*);
	bool start(StartSceneArg*);
	void startScene(StartSceneArg*);
	void update();
	bool updateActive();
	void userCallBackFunc(Resource::MgrCommand*);

	// Unused/inlined:
	u32 getBackupSceneType();
	void setBGMode(int);

	// VTBL _00
	char m_name[256];                                 // _004
	Controller* m_controller;                         // _104
	Mgr* m_screenMgr;                                 // _108
	Delegate1<SceneBase, Resource::MgrCommand*> _10C; // _10C
	StateID m_stateID;                                // _120
	float m_someTime;                                 // _124
	Resource::MgrCommand m_command;                   // _128
	ObjMgrBase* m_objMgr;                             // _218
	u8* m_dispMemberBuffer;                           // _21C
};

struct IObjBase : public CNode, JKRDisposer {
	// vtable 2
	virtual ~IObjBase();                          // _00
	virtual bool update()                    = 0; // _04
	virtual void draw(Graphics&)             = 0; // _08
	virtual bool start(const StartSceneArg*) = 0; // _0C
	virtual bool end(const EndSceneArg*)     = 0; // _10
	virtual void setOwner(SceneBase*)        = 0; // _14
	virtual SceneBase* getOwner() const      = 0; // _18
	virtual void create(JKRArchive*)         = 0; // _1C
};

struct ObjBase : public IObjBase {
	ObjBase();

	// vtable 2
	virtual ~ObjBase();                               // _00
	virtual bool update();                            // _04
	virtual void draw(Graphics&);                     // _08
	virtual bool start(const StartSceneArg*);         // _0C
	virtual bool end(const EndSceneArg*);             // _10
	virtual void setOwner(SceneBase*);                // _14
	virtual SceneBase* getOwner() const;              // _18
	virtual void create(JKRArchive*);                 // _1C
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
	Controller* getGamePad() const;

	int _30;            // _30
	SceneBase* m_owner; // _34
};

struct MgrBase : public JKRDisposer {
	virtual ~MgrBase();                          // _00
	virtual void setScene(SetSceneArg&)     = 0; // _04
	virtual bool startScene(StartSceneArg*) = 0; // _08
	virtual void endScene(EndSceneArg*)     = 0; // _0C
};
struct Mgr : public MgrBase {
	Mgr();

	virtual ~Mgr();                             // _00
	virtual void setScene(SetSceneArg&);        // _04
	virtual bool startScene(StartSceneArg*);    // _08
	virtual void endScene(EndSceneArg*);        // _0C
	virtual void reset();                       // _10
	virtual void setColorBG(JUtility::TColor&); // _14
	virtual void setBGMode(int);                // _18
	virtual void doGetSceneBase(long);          // _1C
	virtual void drawBG(Graphics&);             // _20
	virtual void drawWipe(Graphics&);           // _24

	u8 _18;                     // _18
	u8 _19;                     // _19
	u8 _1A;                     // _1A
	u8 _1B;                     // _1B
	SceneBase* m_backupScene;   // _1C
	Controller* m_controller;   // _20
	u8 _24[8];                  // _24
	CNode _2C;                  // _2C
	CNode _44;                  // _44
	JKRSolidHeap* _5C;          // _5C
	CNode _60;                  // _60
	CNode m_sceneInfoListNode;  // _78
	u8 _90;                     // _90
	u8 _91;                     // _91
	u8 _92;                     // _92
	u32 _94;                    // _94
	u32 _98;                    // _98
	JUtility::TColor m_bgColor; // _9C
	JUtility::TColor _A0;       // _A0
	int m_bgMode;               // _A4
};
struct ObjMgrBase : public CNode {
	ObjMgrBase();

	bool confirmSetScene(SetSceneArg&);
	bool confirmStartScene(StartSceneArg*);
	bool confirmEndScene(EndSceneArg*);
	void draw(Graphics&);
	void registObj(IObjBase*, SceneBase*);
	IObjBase* search(SceneBase*, char*);

	bool start(StartSceneArg*);
	bool update();
	bool end(EndSceneArg*);
};
} // namespace Screen

#endif
