#ifndef _JASCHANNEL_H
#define _JASCHANNEL_H

/*
    __vt__10JASChannel:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte "@16@__dt__10JASChannelFv"
    .4byte __dt__10JASChannelFv
*/

struct JASChannel {
	virtual void _08() = 0; // _08
	virtual void _0C() = 0; // _0C
	virtual ~JASChannel();  // _14 (weak)
};

#endif
