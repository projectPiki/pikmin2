#ifndef _RESOURCE_H
#define _RESOURCE_H

struct Resource {
	struct Mgr2D {
		void init(struct JKRHeap*);
	};

	struct Node {
		~Node();
	};

	struct MgrCommand {
		MgrCommand(char*);
		~MgrCommand();

		void aramLoadCallBackFunc();
		void becomeCurrentHeap();
		void dvdLoadCallBackFunc();
		void getResource();
		void memoryCallBackFunc();
		void releaseCurrentHeap();
		void setModeInvalid();
		void userCallBackInvoke();
	};

	struct Mgr {
		Mgr(struct JKRHeap*, unsigned long);

		void createNewNode(const char*);
		void delFinishCommand();
		void destroy(Resource::MgrCommand*);
		void destroyAll();
		void drawDump(struct Graphics&, int, int);
		void loadResource(Resource::MgrCommand*, const char*, bool);
		void searchCommand(Resource::MgrCommand*);
		void sync(Resource::MgrCommand*, bool);
	};
};

#endif
