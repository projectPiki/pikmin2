#ifndef _DYNAMICSPARMS_H
#define _DYNAMICSPARMS_H

struct DynamicsParms {
    virtual void _00() = 0;   // _00
    virtual void _04() = 0;   // _04
    virtual void @12 @__dt(); // _08
    virtual ~DynamicsParms(); // _0C

    // _00 VTBL
};

#endif
