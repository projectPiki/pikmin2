#ifndef _JASCHANNEL_H
#define _JASCHANNEL_H

struct JASChannel {
    virtual void _00() = 0;   // _00
    virtual void _04() = 0;   // _04
    virtual void @16 @__dt(); // _08
    virtual ~JASChannel();    // _0C

    // _00 VTBL
};

#endif
