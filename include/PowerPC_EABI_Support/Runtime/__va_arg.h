#ifndef _RUNTIME_VA_ARG_H
#define _RUNTIME_VA_ARG_H
#include "types.h"
struct va_list {
	char mG_register;
	char mFloat_register;
	char mPadding[2];
	char* mInput_arg_area;
	char* mReg_save_area;
};
#endif
