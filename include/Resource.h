#ifndef _RESOURCE_H
#define _RESOURCE_H

#include "CNode.h"
#include "DvdThreadCommand.h"
#include "IDelegate.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "BitFlag.h"

struct Graphics;

namespace ARAM {
struct Node;
} // namespace ARAM

namespace Resource {
struct MgrCommand;

struct Node : public CNode, JKRDisposer {
	Node(char const*);

	virtual ~Node(); // _08 (weak)

	// Unused/inlined:
	void dump();
	void drawDump(Graphics&, int&, int&);
	void becomeCurrentHeap();

	static void destroy(Node* node);

	// CNode _00 - _18
	// JKRDisposer _18 - _30
	JKRHeap* mHeap;          // _30
	u8 mHeapGroupID;         // _34
	void* mResource;         // _38
	MgrCommand* mMgrCommand; // _3C
};

// fabricated struct, needs to exist for MgrCommand dtor to build correctly
struct CommandNode {
	bool mIsWorking;           // _00
	Node* mNode;               // _04
	DvdThreadCommand mCommand; // _08
};

struct MgrCommand : public CNode, JKRDisposer {
	MgrCommand(char* name);

	virtual ~MgrCommand();               // _08 (weak)
	virtual void memoryCallBackFunc();   // _1C
	virtual void dvdLoadCallBackFunc();  // _20
	virtual void aramLoadCallBackFunc(); // _24

	void becomeCurrentHeap();
	void* getResource();
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
	s32 mMode;                              // _30
	CommandNode mCommandNode;               // _34
	Node* mNode2;                           // _A8
	JKRHeap* mActiveHeap;                   // _AC
	IDelegate1<MgrCommand*>* mUserCallback; // _B0
	Delegate<MgrCommand> mDelegateDvdLoad;  // _B4
	Delegate<MgrCommand> mDelegateMemory;   // _C8
	Delegate<MgrCommand> mDelegateAramLoad; // _DC
};

struct Mgr {
	Mgr(JKRHeap* parentHeap, u32 size);

	virtual void drawDump(Graphics&, int, int); // _08

	Node* createNewNode(const char*);
	void delFinishCommand();
	bool destroy(MgrCommand* command);
	void destroyAll();
	void loadResource(MgrCommand*, const char*, bool);
	bool searchCommand(MgrCommand*);
	bool sync(MgrCommand*, bool);

	// Unused/inlined:
	Node* search(const char* path);
	void dump();
	void syncAll(bool);
	void watchHeap();

	JKRHeap* getHeap() const { return mHeap; }

	// _00 = VTBL
	JKRHeap* mHeap;      // _04
	u32 mHeapSize;       // _08
	u32 mRemainingSize;  // _0C, guessed name
	CNode mNodes;        // _10
	CNode mLoadingNodes; // _28
	BitFlag<u32> mFlags; // _40
};

struct Mgr2D : public Mgr {
	Mgr2D(JKRHeap*);

	static void init(JKRHeap*);

	// _00     = VTBL
	// _00-_44 = Mgr
};
} // namespace Resource

extern Resource::Mgr2D* gResMgr2D;

#endif
