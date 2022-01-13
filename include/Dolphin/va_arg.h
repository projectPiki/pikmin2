#ifndef _DOLPHIN_VA_ARG_H
#define _DOLPHIN_VA_ARG_H
#include "types.h"
struct va_list {
	char m_g_register;
	char m_float_register;
	char m_padding[2];
	char* m_input_arg_area;
	char* m_reg_save_area;
};
#endif
