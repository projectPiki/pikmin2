#ifndef _DOLPHIN_FLOAT_H
#define _DOLPHIN_FLOAT_H

#include "types.h"

extern const float __float_nan[];
#define __float_nan *__float_nan
extern const float __float_huge;
extern const f64 __double_max;
extern const f64 __double_huge;
extern const f64 __extended_min;
extern const f64 __extended_max;
extern const float __float_max[];
extern const float __float_epsilon[];

#endif
