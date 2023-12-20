#include "PowerPC_EABI_Support/MSL_C/MSL_Common/mbstring.h"

/**
 * @note Address: N/A
 * @note Size: 0x11C
 */
// void mblen(void)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x800C6EFC
 * @note Size: 0xEC
 */
static int is_utf8_complete(const char* s, size_t n)
{
	if (n == 0) { // must have more than zero characters
		return -1;
	}

	if (s[0] == 0x00) { // first char is 0
		return 0;
	}

	if ((s[0] & 0x80) == 0x00) {
		return (1);
	} else if ((s[0] & 0xe0) == 0xc0) {
		if (n >= 2) {
			if ((*(s + 1) & 0x80) == 0x80) {
				return 2;
			}
			return -1;
		}
		return -2;
	} else if ((s[0] & 0xf0) == 0xe0) {
		if (n >= 3) {
			if ((s[1] & 0x80) == 0x80) {
				if ((s[2] & 0x80) == 0x80) {
					return 3;
				}
			}
			return -1;
		} else if ((n == 2 && ((s[1] & 0x80) == 0x80)) || n == 1) {
			return -2;
		}
		return -1;
	} else {
		return (-1);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x120
 */
// void utf8_to_unicode(void)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x800C6DDC
 * @note Size: 0x120
 */
int mbtowc(wchar_t* pwc, const char* s, size_t n) { return mbstowcs(pwc, s, n); }

/**
 * @note Address: N/A
 * @note Size: 0xA4
 */
inline static int unicode_to_UTF8(char* s, wchar_t wchar)
{
	int number_of_bytes;
	wchar_t wide_char;
	char* target_ptr;
	char first_byte_mark[4] = { 0x00, 0x00, 0xc0, 0xe0 };

	if (!s)
		return (0);

	wide_char = wchar;
	if (wide_char < 0x0080)
		number_of_bytes = 1;
	else if (wide_char < 0x0800)
		number_of_bytes = 2;
	else
		number_of_bytes = 3;

	target_ptr = s + number_of_bytes;

	switch (number_of_bytes) {
	case 3:
		*--target_ptr = (wide_char & 0x003f) | 0x80;
		wide_char >>= 6;
	case 2:
		*--target_ptr = (wide_char & 0x003f) | 0x80;
		wide_char >>= 6;
	case 1:
		*--target_ptr = wide_char | first_byte_mark[number_of_bytes];
	}

	return number_of_bytes;
}

/**
 * @note Address: N/A
 * @note Size: 0xA4
 */
inline int wctomb(char* s, wchar_t wchar) { return (unicode_to_UTF8(s, wchar)); }

/**
 * @note Address: N/A
 * @note Size: 0x188
 */
inline int mbstowcs(wchar_t* pwc, const char* s, size_t n)
{
	u32 result_chr;
	int number_of_bytes = 0;
	int isUTF8;
	char* source;

	if (!s) {
		number_of_bytes = 0;
		return (number_of_bytes);
	}

	if (n <= 0) {
		number_of_bytes = -1;
		return (number_of_bytes);
	}

	isUTF8 = is_utf8_complete(s, n);
	if (isUTF8 < 0) {
		number_of_bytes = -1;
		return number_of_bytes;
	}

	source = (char*)s;
	switch (isUTF8) {
	case 3:
		result_chr = (*source & 0x1f);
		source++;
		number_of_bytes = (result_chr << 6) & 0x3C0;
	case 2:
		result_chr = number_of_bytes | (*source & 0x3f);
		source++;
		number_of_bytes = (result_chr << 6) & 0xFFC0;
	case 1:
		result_chr = number_of_bytes | (*source & 0x7f);
		source++;
		number_of_bytes = result_chr & 0xFFFF;
	}

	result_chr = number_of_bytes & 0xFFFF;

	if (!(result_chr)) {
		result_chr = 0;
	} else if (result_chr < 0x00000080) {
		result_chr = 1;
	} else if (result_chr < 0x00000800) {
		result_chr = 2;
	} else {
		result_chr = 3;
	}

	if ((int)result_chr != isUTF8) {
		number_of_bytes = -1;
		return (number_of_bytes);
	}
	if (pwc) {
		*pwc = number_of_bytes;
	}
	return isUTF8;
}

/**
 * @note Address: 0x800C6CC4
 * @note Size: 0x118
 */
size_t wcstombs(char* s, const wchar_t* pwcs, size_t n)
{
	int chars_written = 0;
	int result;
	char temp[3];
	wchar_t* source;

	if (!s || !pwcs)
		return (0);

	source = (wchar_t*)pwcs;
	while (chars_written <= n) {
		if (!*source) {
			*(s + chars_written) = '\0';
			break;
		} else {
			result = wctomb(temp, *source++);
			if ((chars_written + result) <= n) {
				strncpy(s + chars_written, temp, result);
				chars_written += result;
			} else
				break;
		}
	}

	return chars_written;
}

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
// void mbrlen(void)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x188
 */
// void mbrtowc(void)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0xB0
 */
// void wcrtomb(void)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x1E0
 */
// void mbsrtowcs(void)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x114
 */
// void wcsrtombs(void)
// {
// 	// UNUSED FUNCTION
// }
