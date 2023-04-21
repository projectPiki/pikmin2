#ifndef _ASSERT_H
#define _ASSERT_H
#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif


void __msl_assertion_failed(const char*, const char*, const char*, int);

#ifdef __cplusplus
}
#endif

#endif
