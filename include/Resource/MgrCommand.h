#ifndef _RESOURCE_MGRCOMMAND_H
#define _RESOURCE_MGRCOMMAND_H

namespace Resource {
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
} // namespace Resource

#endif