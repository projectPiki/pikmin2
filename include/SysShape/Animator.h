#ifndef _SYSSHAPE_ANIMATOR_H
#define _SYSSHAPE_ANIMATOR_H

namespace SysShape {

struct BaseAnimator {
    virtual void getCalc() = 0;
};

struct Animator : public BaseAnimator {
    virtual void getCalc();
    virtual void animate(float);
};

} // namespace SysShape

#endif