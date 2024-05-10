#include "PowerPC_EABI_Support/MSL_C/MSL_Common/ansi_fp.h"
#include "ctype.h"
#include "stl/limits.h"

/**
 * @note Address: N/A
 * @note Size: 0x70
 */
static int __count_trailing_zerol(u32 x)
{
	int result           = 0;
	int bits_not_checked = sizeof(u32) * CHAR_BIT;
	int n                = bits_not_checked / 2;
	int mask_size        = n;
	u32 mask             = (~0UL) >> (bits_not_checked - n);

	while (bits_not_checked) {
		if (!(x & mask)) {
			result += mask_size;
			x >>= mask_size;
			bits_not_checked -= mask_size;
		} else if (mask == 1) {
			break;
		}

		if (n > 1) {
			n /= 2;
		}

		if (mask > 1) {
			mask >>= n;
			mask_size -= n;
		}
	}
	return result;
}

/**
 * @note Address: N/A
 * @note Size: 0xFC
 */
static int __count_trailing_zero(f64 x)
{
	u32* l = (u32*)&x;

	if (l[1] != 0) {
		return __count_trailing_zerol(l[1]);
	}

	return (int)(sizeof(u32) * CHAR_BIT + __count_trailing_zerol(l[0] | 0x00100000));
}

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
static int __must_round(const decimal* d, int digits)
{
	u8 const* i = d->sig.text + digits;

	if (*i > 5) {
		return 1;
	}

	if (*i < 5) {
		return -1;
	}

	{
		u8 const* e = d->sig.text + d->sig.length;

		for (i++; i < e; i++) {
			if (*i != 0) {
				return 1;
			}
		}
	}

	if (d->sig.text[digits - 1] & 1) {
		return 1;
	}

	return -1;
}

/**
 * @note Address: N/A
 * @note Size: 0x58
 */
static void __dorounddecup(decimal* d, int digits)
{
	u8* b = d->sig.text;
	u8* i = b + digits - 1;

	while (1) {
		if (*i < 9) {
			*i += 1;
			break;
		}
		if (i == b) {
			*i = 1;
			d->exp++;
			break;
		}
		*i-- = 0;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xFC
 */
static void __rounddec(decimal* d, int digits)
{
	if (digits > 0 && digits < d->sig.length) {
		int unkBool   = __must_round(d, digits);
		d->sig.length = digits;

		if (unkBool >= 0) {
			__dorounddecup(d, digits);
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x110
 */
void __ull2dec(decimal* result, u64 val)
{
	result->sign = 0;

	if (val == 0) {
		result->exp         = 0;
		result->sig.length  = 1;
		result->sig.text[0] = 0;
		return;
	}

	if (val < 0) {
		val          = -val;
		result->sign = 1;
	}

	result->sig.length = 0;

	for (; val != 0; val /= 10) {
		result->sig.text[result->sig.length++] = (u8)(val % 10);
	}

	{
		u8* i = result->sig.text;
		u8* j = result->sig.text + result->sig.length;

		for (; i < --j; ++i) {
			u8 t = *i;
			*i   = *j;
			*j   = t;
		}
	}

	result->exp = result->sig.length - 1;
}

/**
 * @note Address: 0x800C5E80
 * @note Size: 0x278
 */
void __timesdec(decimal* result, const decimal* x, const decimal* y)
{
	u32 accumulator = 0;
	u8 mantissa[SIGDIGLEN * 2];
	int i = x->sig.length + y->sig.length - 1;
	u8* pDigit;
	u8* ip = mantissa + i + 1;
	u8* ep = ip;

	result->sign = 0;

	for (; i > 0; i--) {
		int k = y->sig.length - 1;
		int j = i - k - 1;
		int l;
		int t;
		const u8* jp;
		const u8* kp;

		if (j < 0) {
			j = 0;
			k = i - 1;
		}

		jp = x->sig.text + j;
		kp = y->sig.text + k;
		l  = k + 1;
		t  = x->sig.length - j;

		if (l > t)
			l = t;

		for (; l > 0; l--, jp++, kp--) {
			accumulator += *jp * *kp;
		}

		*--ip = (u8)(accumulator % 10);
		accumulator /= 10;
	}

	result->exp = (s16)(x->exp + y->exp);

	if (accumulator) {
		*--ip = (u8)(accumulator);
		result->exp++;
	}

	for (i = 0; i < SIGDIGLEN && ip < ep; i++, ip++) {
		result->sig.text[i] = *ip;
	}
	result->sig.length = (u8)(i);

	if (ip < ep && *ip >= 5) {
		if (*ip == 5) {
			u8* jp = ip + 1;
			for (; jp < ep; jp++) {
				if (*jp != 0)
					goto round;
			}
			if ((ip[-1] & 1) == 0)
				return;
		}
	round:
		__dorounddecup(result, result->sig.length);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xF0
 */
void __str2dec(decimal* d, const char* s, s16 exp)
{
	int i;

	d->exp  = exp;
	d->sign = 0;

	for (i = 0; i < SIGDIGLEN && *s;) {
		d->sig.text[i++] = *s++ - '0';
	}
	d->sig.length = i;

	if (*s != 0) {
		if (*s < 5)
			return;
		if (*s > 5)
			goto round;

		{
			const char* p = s + 1;

			for (; *p != 0; p++) {
				if (*p != '0')
					goto round;
			}

			if ((d->sig.text[i - 1] & 1) == 0)
				return;
		}
	round:
		__dorounddecup(d, d->sig.length);
	}
}

/**
 * @note Address: 0x800C46FC
 * @note Size: 0x1784
 */
void __two_exp(decimal* result, s32 exp)
{
	switch (exp) {
	case -64:
		__str2dec(result, "542101086242752217003726400434970855712890625", -20);
		return;
	case -53:
		__str2dec(result, "11102230246251565404236316680908203125", -16);
		return;
	case -32:
		__str2dec(result, "23283064365386962890625", -10);
		return;
	case -16:
		__str2dec(result, "152587890625", -5);
		return;
	case -8:
		__str2dec(result, "390625", -3);
		return;
	case -7:
		__str2dec(result, "78125", -3);
		return;
	case -6:
		__str2dec(result, "15625", -2);
		return;
	case -5:
		__str2dec(result, "3125", -2);
		return;
	case -4:
		__str2dec(result, "625", -2);
		return;
	case -3:
		__str2dec(result, "125", -1);
		return;
	case -2:
		__str2dec(result, "25", -1);
		return;
	case -1:
		__str2dec(result, "5", -1);
		return;
	case 0:
		__str2dec(result, "1", 0);
		return;
	case 1:
		__str2dec(result, "2", 0);
		return;
	case 2:
		__str2dec(result, "4", 0);
		return;
	case 3:
		__str2dec(result, "8", 0);
		return;
	case 4:
		__str2dec(result, "16", 1);
		return;
	case 5:
		__str2dec(result, "32", 1);
		return;
	case 6:
		__str2dec(result, "64", 1);
		return;
	case 7:
		__str2dec(result, "128", 2);
		return;
	case 8:
		__str2dec(result, "256", 2);
		return;
	}

	{
		decimal x2, temp;

		__two_exp(&x2, exp / 2);
		__timesdec(result, &x2, &x2);

		if (exp & 1) {
			temp = *result;
			if (exp > 0) {
				__str2dec(&x2, "2", 0);
			} else {
				__str2dec(&x2, "5", -1);
			}
			__timesdec(result, &temp, &x2);
		}
	}
}

/**
 * @note Address: 0x800C45F0
 * @note Size: 0x10C
 */
BOOL __equals_dec(const decimal* x, const decimal* y)
{
	if (x->sig.text[0] == 0) {
		if (y->sig.text[0] == 0)
			return TRUE;
		return FALSE;
	}
	if (y->sig.text[0] == 0) {
		if (x->sig.text[0] == 0)
			return TRUE;
		return FALSE;
	}

	if (x->exp == y->exp) {
		int i;
		int l = x->sig.length;

		if (l > y->sig.length) {
			l = y->sig.length;
		}

		for (i = 0; i < l; i++) {
			if (x->sig.text[i] != y->sig.text[i]) {
				return FALSE;
			}
		}

		if (l == x->sig.length) {
			for (; i < y->sig.length; ++i) {
				if (y->sig.text[i] != 0) {
					return FALSE;
				}
			}
		} else {
			for (; i < x->sig.length; ++i) {
				if (x->sig.text[i] != 0) {
					return FALSE;
				}
			}
		}

		return TRUE;
	}
	return FALSE;
}

/**
 * @note Address: N/A
 * @note Size: 0xF8
 */
BOOL __less_dec(const decimal* x, const decimal* y)
{
	if (x->sig.text[0] == 0) {
		if (y->sig.text[0] != 0)
			return TRUE;
		return FALSE;
	}

	if (y->sig.text[0] == 0) {
		return FALSE;
	}

	if (x->exp == y->exp) {
		int i;
		int l = x->sig.length;

		if (l > y->sig.length) {
			l = y->sig.length;
		}

		for (i = 0; i < l; i++) {
			if (x->sig.text[i] < y->sig.text[i]) {
				return TRUE;
			} else if (y->sig.text[i] < x->sig.text[i]) {
				return FALSE;
			}
		}

		if (l == x->sig.length) {
			for (; i < y->sig.length; i++) {
				if (y->sig.text[i] != 0) {
					return TRUE;
				}
			}
		}
		return FALSE;
	}

	return x->exp < y->exp;
}

/**
 * @note Address: 0x800C40F4
 * @note Size: 0x4FC
 */
void __minus_dec(decimal* z, const decimal* x, const decimal* y)
{
	int zlen, dexp;
	u8 *ib, *i, *ie;
	u8 const *jb, *j, *jn;

	*z = *x;

	if (y->sig.text[0] == 0)
		return;

	zlen = z->sig.length;
	if (zlen < y->sig.length)
		zlen = y->sig.length;

	dexp = z->exp - y->exp;
	zlen += dexp;

	if (zlen > SIGDIGLEN)
		zlen = SIGDIGLEN;

	while (z->sig.length < zlen) {
		z->sig.text[z->sig.length++] = 0;
	}

	ib = z->sig.text;
	i  = ib + zlen;

	if (y->sig.length + dexp < zlen) {
		i = ib + (y->sig.length + dexp);
	}

	jb = y->sig.text;
	j  = jb + (i - ib - dexp);
	jn = j;

	while (i > ib && j > jb) {
		i--;
		j--;
		if (*i < *j) {
			u8* k = i - 1;
			while (*k == 0)
				k--;
			while (k != i) {
				--*k;
				*++k += 10;
			}
		}
		*i -= *j;
	}

	if (jn - jb < y->sig.length) {
		BOOL round_down = FALSE;
		if (*jn < 5)
			round_down = TRUE;
		else if (*jn == 5) {
			u8 const* ibPtr = y->sig.text + y->sig.length;

			for (j = jn + 1; j < ibPtr; j++) {
				if (*j != 0)
					goto done;
			}
			i = ib + (jn - jb) + dexp - 1;
			if (*i & 1)
				round_down = 1;
		}
		if (round_down) {
			if (*i < 1) {
				u8* k = i - 1;
				while (*k == 0)
					k--;
				while (k != i) {
					--*k;
					*++k += 10;
				}
			}
			*i -= 1;
		}
	}
done:
	for (i = ib; *i == 0; ++i) { }

	if (i > ib) {
		u8 dl = (u8)(i - ib);
		z->exp -= dl;
		ie = ib + z->sig.length;
		for (; i < ie; ++i, ++ib)
			*ib = *i;
		z->sig.length -= dl;
	}

	ib = z->sig.text;
	for (i = ib + z->sig.length; i > ib;) {
		i--;
		if (*i != 0)
			break;
	}
	z->sig.length = (u8)(i - ib + 1);
}

/**
 * @note Address: 0x800C3D40
 * @note Size: 0x3B4
 */
void __num2dec_internal(decimal* d, f64 x)
{
	s8 sign = (s8)(SIGNBIT(x) != 0);

	if (x == 0) {
		d->sign        = sign;
		d->exp         = 0;
		d->sig.length  = 1;
		d->sig.text[0] = 0;
		return;
	}

	if (!isfinite(x)) {
		d->sign        = sign;
		d->exp         = 0;
		d->sig.length  = 1;
		d->sig.text[0] = fpclassify(x) == 1 ? 'N' : 'I';
		return;
	}

	if (sign != 0) {
		x = -x;
	}

	{
		int exp;
		f64 frac             = frexp(x, &exp);
		s32 num_bits_extract = DBL_MANT_DIG - __count_trailing_zero(frac);
		f64 integer;
		decimal int_d, pow2_d;

		__two_exp(&pow2_d, exp - num_bits_extract);
		frac = modf(ldexp(frac, num_bits_extract), &integer);
		__ull2dec(&int_d, (u64)integer);
		__timesdec(d, &int_d, &pow2_d);
		d->sign = sign;
	}
}

/**
 * @note Address: 0x800C3B9C
 * @note Size: 0x1A4
 */
void __num2dec(const decform* form, f64 x, decimal* d)
{
	s16 digits = form->digits;
	int i;
	__num2dec_internal(d, x);

	if (d->sig.text[0] > 9) {
		return;
	}

	if (digits > SIGDIGLEN) {
		digits = SIGDIGLEN;
	}

	__rounddec(d, digits);

	while (d->sig.length < digits) {
		d->sig.text[d->sig.length++] = 0;
	}

	d->exp -= d->sig.length - 1;

	for (i = 0; i < d->sig.length; i++) {
		d->sig.text[i] += '0';
	}
}

/**
 * @note Address: 0x800C2B1C
 * @note Size: 0x1080
 */
f64 __dec2num(const decimal* d)
{
	if (d->sig.length <= 0) {
		return copysign(0.0, d->sign == 0 ? 1.0 : -1.0);
	}

	switch (d->sig.text[0]) {
	case '0':
		return copysign(0.0, d->sign == 0 ? 1.0 : -1.0);
	case 'I':
		return copysign((f64)INFINITY, d->sign == 0 ? 1.0 : -1.0);
	case 'N': {
		f64 result;
		u64* ll = (u64*)&result;

		*ll = 0x7FF0000000000000;
		if (d->sign)
			*ll |= 0x8000000000000000;

		if (d->sig.length == 1)
			*ll |= 0x8000000000000;
		else {
			u8* p               = (u8*)&result + 1;
			int placed_non_zero = 0;
			int low             = 1;
			int i;
			int e = d->sig.length;
			if (e > 14)
				e = 14;

			for (i = 1; i < e; ++i) {
				u8 c = d->sig.text[i];

				if (isdigit(c)) {
					c -= '0';
				} else {
					c = (u8)(_tolower(c) - 'a' + 10);
				}

				if (c != 0) {
					placed_non_zero = 1;
				}

				if (low) {
					*p++ |= c;
				} else {
					*p = (u8)(c << 4);
				}

				low = !low;
			}

			if (!placed_non_zero) {
				*ll |= 0x0008000000000000;
			}
		}

		return result;
	}
	}

	{
		static f64 pow_10[8] = { 1e1, 1e2, 1e3, 1e4, 1e5, 1e6, 1e7, 1e8 };

		decimal dec = *d;
		u8* i       = dec.sig.text;
		u8* e       = i + dec.sig.length;
		f64 first_guess;
		int exponent;

		for (; i < e; ++i)
			*i -= '0';
		dec.exp += dec.sig.length - 1;
		exponent = dec.exp;

		i           = dec.sig.text;
		first_guess = *i++;

		while (i < e) {
			u32 ival = 0;
			int j;
			f64 temp1, temp2;
			int ndig = (int)(e - i) % 8;

			if (ndig == 0)
				ndig = 8;

			for (j = 0; j < ndig; ++j, ++i) {
				ival = ival * 10 + *i;
			}

			temp1 = first_guess * pow_10[ndig - 1];
			temp2 = temp1 + ival;

			if (ival != 0 && temp1 == temp2)
				break;

			first_guess = temp2;
			exponent -= ndig;
		}

		if (exponent < 0) {
			first_guess /= pow(5.0, -exponent);
		} else {
			first_guess *= pow(5.0, exponent);
		}

		first_guess = ldexp(first_guess, exponent);

		if (isinf(first_guess)) {
			decimal max;
			__str2dec(&max, "179769313486231580793729011405303420", 308);
			if (__less_dec(&max, &dec))
				goto done;
			first_guess = DBL_MAX;
		}

		{
			decimal feedback1;

			__num2dec_internal(&feedback1, first_guess);

			if (__equals_dec(&feedback1, &dec)) {
				goto done;
			}

			if (__less_dec(&feedback1, &dec)) {

				decimal feedback2, difflow, diffhigh;
				f64 next_guess = first_guess;
				u64* ull       = (u64*)&next_guess;
				++*ull;

				if (isinf(next_guess)) {
					first_guess = next_guess;
					goto done;
				}

				__num2dec_internal(&feedback2, next_guess);

				while (__less_dec(&feedback2, &dec)) {
					feedback1   = feedback2;
					first_guess = next_guess;
					++*ull;
					if (isinf(next_guess)) {
						first_guess = next_guess;
						goto done;
					}
					__num2dec_internal(&feedback2, next_guess);
				}

				__minus_dec(&difflow, &dec, &feedback1);
				__minus_dec(&diffhigh, &feedback2, &dec);

				if (__equals_dec(&difflow, &diffhigh)) {
					if (*(u64*)&first_guess & 1) {
						first_guess = next_guess;
					}
				} else if (!__less_dec(&difflow, &diffhigh)) {
					first_guess = next_guess;
				}
			} else {
				decimal feedback2, difflow, diffhigh;
				f64 next_guess = first_guess;
				u64* ull       = (u64*)&next_guess;
				--*ull;

				__num2dec_internal(&feedback2, next_guess);

				while (__less_dec(&dec, &feedback2)) {
					feedback1   = feedback2;
					first_guess = next_guess;
					--*ull;
					__num2dec_internal(&feedback2, next_guess);
				}

				__minus_dec(&difflow, &dec, &feedback2);
				__minus_dec(&diffhigh, &feedback1, &dec);

				if (__equals_dec(&difflow, &diffhigh)) {
					if (*(u64*)&first_guess & 1) {
						first_guess = next_guess;
					}
				} else if (__less_dec(&difflow, &diffhigh)) {
					first_guess = next_guess;
				}
			}
		}
	done:
		if (dec.sign) {
			first_guess = -first_guess;
		}
		return first_guess;
	}
}
