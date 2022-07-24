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
	virtual void _08() = 0; // _08
	virtual void _0C() = 0; // _0C

	// _00 VTBL
};

#endif
