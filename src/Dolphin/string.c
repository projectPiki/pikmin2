#include "types.h"
#define K1 0x80808080
#define K2 0xFEFEFEFF
/*
 * --INFO--
 * Address:	........
 * Size:	000458
 */
void __strerror(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void strerror(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void strstr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00013C
 */
void strtok(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void strcspn(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void strspn(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D4
 */
void strpbrk(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800CA608
 * Size:	000048
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

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void strxfrm(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void strcoll(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800CA650
 * Size:	000030
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

/*
 * --INFO--
 * Address:	800CA680
 * Size:	000040
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

/*
 * --INFO--
 * Address:	800CA6C0
 * Size:	000128
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

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void strncat(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800CA7E8
 * Size:	00002C
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

/*
 * --INFO--
 * Address:	800CA814
 * Size:	000044
 */
char* strncpy(char* dst, const char* src, size_t n)
{
	const unsigned char* p = (const unsigned char*)src - 1;
	unsigned char* q       = (unsigned char*)dst - 1;
	unsigned char zero     = 0;

	n++;

	while (--n)
		if (!(*++q = *++p)) {
			while (--n)
				*++q = 0;
			break;
		}
	return (dst);
}

/*
 * --INFO--
 * Address:	800CA858
 * Size:	0000B8
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

/*
 * --INFO--
 * Address:	800CA910
 * Size:	00001C
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
