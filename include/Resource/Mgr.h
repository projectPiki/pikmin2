#ifndef _RESOURCE_MGR_H
#define _RESOURCE_MGR_H

namespace Resource {
struct MgrCommand;

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
} // namespace Resource

#endif