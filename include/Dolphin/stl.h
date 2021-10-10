#ifndef _DOLPHIN_STL_H
#define _DOLPHIN_STL_H

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

__declspec(section ".init") void* memcpy(void*, const void*, size_t);
__declspec(section ".init") void __fill_mem(void*, int, size_t);
__declspec(section ".init") void* memset(void*, int, size_t);

typedef struct __va_list_struct {
	char gpr;
	char fpr;
	char* input_arg_area;
	char* reg_save_area;
} va_list[1];

void* __va_arg(va_list, int);

#define va_start(ARG, VA_LIST) ((void)ARG, __builtin_va_info(&VA_LIST))
#define va_end(VA_LIST) ((void)VA_LIST)
#define va_arg(VA_LIST, ARG_TYPE)                                              \
	(*(ARG_TYPE*)) __va_arg(VA_LIST, _var_arg_typeof(ARG_TYPE))

int printf(const char*, ...);
int vprintf(const char*, va_list);
int snprintf(char*, size_t, const char*, ...);
int vsnprintf(char*, size_t, const char*, va_list);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif