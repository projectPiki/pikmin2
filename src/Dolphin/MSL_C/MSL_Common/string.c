#include "types.h"
#define K1 0x80808080
#define K2 0xFEFEFEFF

/**
 * @note Address: 0x800CA910
 * @note Size: 0x1C
 */
size_t(strlen)(const char* str)
{
	size_t len = -1;
	u8* p      = (u8*)str - 1;

	do
		len++;
	while (*++p);
	return (len);
}

/**
 * @note Address: 0x800CA858
 * @note Size: 0xB8
 */
char*(strcpy)(char* dst, const char* src)
{
	register u8 *destb, *fromb;
	register u32 w, t, align;

	fromb = (u8*)src;
	destb = (u8*)dst;

	if ((align = ((int)fromb & 3)) != ((int)destb & 3)) {
		goto bytecopy;
	}

	if (align) {
		if ((*destb = *fromb) == 0)
			return (dst);
		for (align = 3 - align; align; align--) {
			if ((*(++destb) = *(++fromb)) == 0)
				return (dst);
		}
		++destb;
		++fromb;
	}

	w = *((int*)(fromb));

	t = w + K2;

	t &= K1;
	if (t)
		goto bytecopy;
	--((int*)(destb));

	do {
		*(++((int*)(destb))) = w;
		w                    = *(++((int*)(fromb)));

		t = w + K2;
		t &= K1;
		if (t)
			goto adjust;
	} while (1);

adjust:
	++((int*)(destb));
bytecopy:
	if ((*destb = *fromb) == 0)
		return dst;
	do {
		if ((*(++destb) = *(++fromb)) == 0)
			return dst;
	} while (1);

	return dst;
}

/**
 * @note Address: 0x800CA814
 * @note Size: 0x44
 */
char* strncpy(char* dst, const char* src, size_t n)
{
	const u8* p = (const u8*)src - 1;
	u8* q       = (u8*)dst - 1;
	u8 zero     = 0;

	n++;

	while (--n)
		if (!(*++q = *++p)) {
			while (--n)
				*++q = 0;
			break;
		}
	return (dst);
}

/**
 * @note Address: 0x800CA7E8
 * @note Size: 0x2C
 */
char* strcat(char* dst, const char* src)
{
	const u8* p = (u8*)src - 1;
	u8* q       = (u8*)dst - 1;

	while (*++q)
		;

	q--;

	while (*++q = *++p)
		;

	return (dst);
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
void strncat(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800CA6C0
 * @note Size: 0x128
 */
int strcmp(const char* str1, const char* str2)
{
	// bless metrowerks for this implementation

	register u8* left  = (u8*)str1;
	register u8* right = (u8*)str2;
	u32 align, l1, r1, x;

	l1 = *left;
	r1 = *right;
	if (l1 - r1) {
		return (l1 - r1);
	}

	if ((align = ((int)left & 3)) != ((int)right & 3)) {
		goto bytecopy;
	}
	if (align) {
		if (l1 == 0) {
			return 0;
		}
		for (align = 3 - align; align; align--) {
			l1 = *(++left);
			r1 = *(++right);
			if (l1 - r1) {
				return (l1 - r1);
			}
			if (l1 == 0) {
				return 0;
			}
		}
		left++;
		right++;
	}

	l1 = *(int*)left;
	r1 = *(int*)right;
	x  = l1 + K2;
	if (x & K1) {
		goto adjust;
	}
	while (l1 == r1) {
		l1 = *(++((int*)(left)));
		r1 = *(++((int*)(right)));
		x  = l1 + K2;
		if (x & K1) {
			goto adjust;
		}
	}
	if (l1 > r1)
		return 1;
	return -1;

adjust:
	l1 = *left;
	r1 = *right;
	if (l1 - r1) {
		return (l1 - r1);
	}
bytecopy:
	if (l1 == 0) {
		return 0;
	}
	do {
		l1 = *(++left);
		r1 = *(++right);
		if (l1 - r1) {
			return (l1 - r1);
		}
		if (l1 == 0) {
			return 0;
		}
	} while (1);
}

/**
 * @note Address: 0x800CA680
 * @note Size: 0x40
 */
int strncmp(const char* str1, const char* str2, size_t n)
{
	const u8* p1 = (u8*)str1 - 1;
	const u8* p2 = (u8*)str2 - 1;
	u32 c1, c2;

	n++;

	while (--n)
		if ((c1 = *++p1) != (c2 = *++p2))
			return (c1 - c2);
		else if (!c1)
			break;
	return 0;
}

/**
 * @note Address: 0x800CA650
 * @note Size: 0x30
 */
char* strchr(const char* str, int chr)
{
	const u8* p = (u8*)str - 1;
	u32 c       = (chr & 0xFF);
	u32 ch;

	while (ch = *++p)
		if (ch == c)
			return ((char*)p);

	return (c ? 0 : (char*)p);
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void strcoll(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
void strxfrm(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800CA608
 * @note Size: 0x48
 */
char* strrchr(const char* str, int chr)
{
	const u8* p = (u8*)str - 1;
	const u8* q = 0;
	u32 c       = (chr & 0xFF);
	u32 ch;

	while (ch = *++p)
		if (ch == c)
			q = p;

	if (q)
		return ((char*)q);

	return (c ? 0 : (char*)p);
}

/**
 * @note Address: N/A
 * @note Size: 0xD4
 */
void strpbrk(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xD0
 */
void strspn(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xD0
 */
void strcspn(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x13C
 */
void strtok(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x68
 */
void strstr(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
void strerror(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x458
 */
void __strerror(void)
{
	// UNUSED FUNCTION
}
