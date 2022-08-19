#ifndef _SQRT_H
#define _SQRT_H

inline void _sqrtf(register float x, float* val)
{
	if (x > 0.0f) {
		if (x > 0.0f) {
			register float reg_f0;
			asm {
                frsqrte reg_f0, x
			}
			*val = reg_f0 * x;
		}
	} else {
		*val = 0.0f;
	}
}

#endif
