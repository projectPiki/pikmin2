#ifndef _RESOURCE_H
#define _RESOURCE_H

#include "CNode.h"
#include "DvdThreadCommand.h"
#include "IDelegate.h"
#include "JSystem/JKR/JKRDisposer.h"

struct Graphics;

namespace ARAM {
struct Node;
} // namespace ARAM

namespace Resource {
struct MgrCommand;

struct Node : public CNode, JKRDisposer {
	~Node();

	// Unused/inlined:
	Node(char const*);
	void dump();
	void drawDump(Graphics&, int&, int&);
	void becomeCurrentHeap();
	static void destroy(Node*);

	// CNode _00 - _18
	// JKRDisposer _18 - _30
	JKRHeap* _30;             // _30
	u8 m_groupIDMaybe;        // _34
	void* m_resource;         // _38
	MgrCommand* m_mgrCommand; // _3C
};

struct MgrCommand : public CNode, JKRDisposer {
	MgrCommand(char*);
	~MgrCommand();

	void aramLoadCallBackFunc();
	void becomeCurrentHeap();
	void dvdLoadCallBackFunc();
	void* getResource();
	void memoryCallBackFunc();
	void releaseCurrentHeap();
	void setModeInvalid();
	void userCallBackInvoke();

	// Unused/inlined:
	bool isFinish();
	void setModeMemory(Node*);
	void setModeAram(Node*, ARAM::Node*);
	void setModeDvd(Node*);
	bool destroy();

	// CNode _00 - _18
	// JKRDisposer _18 - _30
	s32 _30;                      // _30
	u8 _34;                       // _34
	Node* _38;                    // _38
	DvdThreadCommand _3C;         // _3C
	Node* _A8;                    // _A8
	JKRHeap* _AC;                 // _AC
	IDelegate1<MgrCommand*>* _B0; // _B0
	Delegate<MgrCommand> _B4;     // _B4
	Delegate<MgrCommand> _C8;     // _C8
	Delegate<MgrCommand> _DC;     // _DC
};

struct Mgr {
	Mgr(JKRHeap*, u32);
	~Mgr();

	virtual void drawDump(Graphics&, int, int); // _00

	void createNewNode(const char*);
	void delFinishCommand();
	bool destroy(MgrCommand*);
	void destroyAll();
	void loadResource(MgrCommand*, const char*, bool);
	void searchCommand(MgrCommand*);
	bool sync(MgrCommand*, bool);

	// Unused/inlined:
	void search(const char*);
	void dump();
	void syncAll(bool);
	void watchHeap();

	// VTBL _00
	JKRHeap* _04; // _04
	u32 _08;      // _08
	u32 _0C;      // _0C
	CNode _10;    // _10
	CNode _28;    // _28
	union {
		u8 bytesView[4];
		u32 dwordView;
	} _40; // _40
};

struct Mgr2D : Mgr {
	Mgr2D(JKRHeap*);
	static void init(JKRHeap*);
};
} // namespace Resource

extern Resource::Mgr2D* gResMgr2D;

#endif
