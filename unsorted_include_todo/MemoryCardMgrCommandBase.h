#ifndef _MEMORYCARDMGRCOMMANDBASE_H
#define _MEMORYCARDMGRCOMMANDBASE_H

/*
    __vt__24MemoryCardMgrCommandBase:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

struct MemoryCardMgrCommandBase {
	virtual void _00() = 0; // _00
	virtual void _04() = 0; // _04

	// _00 VTBL
};

#endif
