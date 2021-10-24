#ifndef _DOLPHIN_CTYPE_H
#define _DOLPHIN_CTYPE_H

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

enum ctype {
	CTYPE_CNTRL = 0x1,
	CTYPE_SPACE = 0x2,
	CTYPE_BLANK = 0x4,
	CTYPE_PUNCT = 0x8,
	CTYPE_DIGIT = 0x10,
	CTYPE_XDIGIT = 0x20,
	CTYPE_LOWER = 0x40,
	CTYPE_UPPER = 0x80
};

#ifdef __cplusplus
};
#endif // ifdef __cplusplus



#endif
