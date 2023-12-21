#include "PowerPC_EABI_Support/MSL_C/MSL_Common/strtold.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/stdio_api.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/ansi_fp.h"
#include "PowerPC_EABI_Support/MSL_C/PPC_EABI/math_ppc.h"
#include "errno.h"
#include "locale.h"
#include "ctype.h"
#include "math.h"
#include "mem.h"
#include "stl/limits.h"

#define TARGET_FLOAT_BITS           64
#define TARGET_FLOAT_BYTES          (TARGET_FLOAT_BITS / 8)
#define TARGET_FLOAT_MAX_EXP        LDBL_MAX_EXP
#define TARGET_FLOAT_MANT_DIG       LDBL_MANT_DIG
#define TARGET_FLOAT_IMPLICIT_J_BIT 1
#define TARGET_FLOAT_MANT_BITS      (TARGET_FLOAT_MANT_DIG - TARGET_FLOAT_IMPLICIT_J_BIT)
#define TARGET_FLOAT_EXP_BITS       (TARGET_FLOAT_BITS - TARGET_FLOAT_MANT_BITS - 1)

enum scan_states {
	start              = 0x0001,
	sig_start          = 0x0002,
	leading_sig_zeroes = 0x0004,
	int_digit_loop     = 0x0008,
	frac_start         = 0x0010,
	frac_digit_loop    = 0x0020,
	sig_end            = 0x0040,
	exp_start          = 0x0080,
	leading_exp_digit  = 0x0100,
	leading_exp_zeroes = 0x0200,
	exp_digit_loop     = 0x0400,
	finished           = 0x0800,
	failure            = 0x1000,
	nan_state          = 0x2000,
	infin_state        = 0x4000,
	hex_state          = 0x8000
};

enum hex_scan_states {
	not_hex                = 0x0000,
	hex_start              = 0x0001,
	hex_leading_sig_zeroes = 0x0002,
	hex_int_digit_loop     = 0x0004,
	hex_frac_digit_loop    = 0x0008,
	hex_sig_end            = 0x0010,
	hex_exp_start          = 0x0020,
	hex_leading_exp_digit  = 0x0040,
	hex_leading_exp_zeroes = 0x0080,
	hex_exp_digit_loop     = 0x0100
};

#define final_state(scan_state) (scan_state & (finished | failure))
#define success(scan_state) \
	(scan_state & (leading_sig_zeroes | int_digit_loop | frac_digit_loop | leading_exp_zeroes | exp_digit_loop | finished))
#define hex_success(count, scan_state) \
	(count - 1 > 2                     \
	 && scan_state & (hex_leading_sig_zeroes | hex_int_digit_loop | hex_frac_digit_loop | hex_leading_exp_zeroes | hex_exp_digit_loop))

#define fetch()    (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar))
#define unfetch(c) (*ReadProc)(ReadProcArg, c, __UngetAChar)

/**
 * @note Address: 0x800CA92C
 * @note Size: 0x100C
 */
f128 __strtold(int max_width, int (*ReadProc)(void*, int, int), void* ReadProcArg, int* chars_scanned, int* overflow)
{
	int scan_state     = start;
	int hex_scan_state = not_hex;
	int count          = 0;
	int spaces         = 0;
	int c;
	decimal d        = { 0, 0, 0, { 0, "" } };
	int sig_negative = 0;
	int exp_negative = 0;
	s32 exp_value    = 0;
	int exp_adjust   = 0;
	f128 result;
	int sign_detected = 0;

	u8* chptr = (u8*)&result;
	u8 uch, uch1;
	int ui;
	int chindex;
	int NibbleIndex;
	int expsign         = 0;
	int exp_digits      = 0;
	int intdigits       = 0;
	int RadixPointFound = 0;
	s16 exponent        = 0;
	int dot;

	dot = *(u8*)(__lconv).decimal_point;

	*overflow = 0;
	c         = fetch();

	while (count <= max_width && c != -1 && !final_state(scan_state)) {
		switch (scan_state) {
		case start:
			if (isspace(c)) {
				c = fetch();
				count--;
				spaces++;
				break;
			}

			switch (toupper(c)) {
			case '-':
				sig_negative = 1;

			case '+':
				c             = fetch();
				sign_detected = 1;
				break;
			case 'I':
				c          = fetch();
				scan_state = infin_state;
				break;

			case 'N':
				c          = fetch();
				scan_state = nan_state;
				break;

			default:
				scan_state = sig_start;
				break;
			}
			break;

		case infin_state: {
			int i        = 1;
			char model[] = "INFINITY";

			while ((i < 8) && (toupper(c) == model[i])) {
				i++;
				c = fetch();
			}

			if ((i == 3) || (i == 8)) {
				if (sig_negative) {
					result = -INFINITY;
				} else {
					result = INFINITY;
				}

				*chars_scanned = spaces + i + sign_detected;
				return result;
			} else {
				scan_state = failure;
			}

			break;
		}

		case nan_state: {
			int i = 1, j = 0;
			char model[]     = "NAN(";
			char nan_arg[32] = "";
			while ((i < 4) && (toupper(c) == model[i])) {
				i++;
				c = fetch();
			}

			if ((i == 3) || (i == 4)) {
				if (i == 4) {
					while ((j < 32) && (isdigit(c) || isalpha(c))) {
						nan_arg[j++] = c;
						c            = fetch();
					}

					if (c != ')') {
						scan_state = failure;
						break;
					} else {
						j++;
					}
				}
				nan_arg[j] = '\0';

				if (sig_negative) {
					result = -NAN;
				} else {
					result = NAN;
				}

				*chars_scanned = spaces + i + j + sign_detected;
				return result;
			} else {
				scan_state = failure;
			}
			break;
		}

		case sig_start:
			if (c == dot) {
				scan_state = frac_start;
				c          = fetch();
				break;
			}
			if (!isdigit(c)) {
				scan_state = failure;
				break;
			}

			if (c == '0') {
				c = fetch();
				if (toupper(c) == 'X') {
					scan_state     = hex_state;
					hex_scan_state = hex_start;
				} else {
					scan_state = leading_sig_zeroes;
				}
				break;
			}

			scan_state = int_digit_loop;
			break;

		case leading_sig_zeroes:
			if (c == '0') {
				c = fetch();

				break;
			}
			scan_state = int_digit_loop;
			break;

		case int_digit_loop:
			if (!isdigit(c)) {
				if (c == dot) {
					scan_state = frac_digit_loop;
					c          = fetch();
				} else {
					scan_state = sig_end;
				}
				break;
			}
			if (d.sig.length < 20) {
				d.sig.text[d.sig.length++] = c;
			} else {
				exp_adjust++;
			}

			c = fetch();
			break;

		case frac_start:
			if (!isdigit(c)) {
				scan_state = failure;
				break;
			}

			scan_state = frac_digit_loop;
			break;

		case frac_digit_loop:
			if (!isdigit(c)) {
				scan_state = sig_end;
				break;
			}

			if (d.sig.length < 20) {
				if (c != '0' || d.sig.length) {
					d.sig.text[d.sig.length++] = c;
				}

				exp_adjust--;
			}
			c = fetch();
			break;

		case sig_end:
			if (toupper(c) == 'E') {
				scan_state = exp_start;
				c          = fetch();
				break;
			}
			scan_state = finished;
			break;

		case exp_start:
			if (c == '+') {
				c = fetch();
			} else if (c == '-') {
				c            = fetch();
				exp_negative = 1;
			}

			scan_state = leading_exp_digit;
			break;

		case leading_exp_digit:
			if (!isdigit(c)) {
				scan_state = failure;
				break;
			}

			if (c == '0') {
				scan_state = leading_exp_zeroes;
				c          = fetch();
				break;
			}

			scan_state = exp_digit_loop;
			break;

		case leading_exp_zeroes:
			if (c == '0') {
				c = fetch();
				break;
			}

			scan_state = exp_digit_loop;
			break;

		case exp_digit_loop:
			if (!isdigit(c)) {
				scan_state = finished;
				break;
			}

			exp_value = exp_value * 10 + (c - '0');
			if (exp_value > SHRT_MAX) {
				*overflow = 1;
			}

			c = fetch();
			break;

		case hex_state: {
			switch (hex_scan_state) {
			case hex_start:
				for (chindex = 0; chindex < 8; chindex++) {
					*(chptr + chindex) = '\0';
				}
				NibbleIndex    = 2;
				hex_scan_state = hex_leading_sig_zeroes;
				c              = fetch();
				break;

			case hex_leading_sig_zeroes:
				if (c == '0') {
					c = fetch();
					break;
				}

				hex_scan_state = hex_int_digit_loop;
				break;

			case hex_int_digit_loop:
				if (!isxdigit(c)) {
					if (c == dot) {
						hex_scan_state = hex_frac_digit_loop;
						c              = fetch();
					} else {
						hex_scan_state = hex_sig_end;
					}
					break;
				}

				if (NibbleIndex < 17) {
					intdigits++;
					uch = *(chptr + NibbleIndex / 2);
					ui  = toupper(c);

					if (ui >= 'A') {
						ui = ui - 'A' + 10;
					} else {
						ui -= '0';
					}

					uch1 = ui;

					if ((NibbleIndex % 2) != 0) {
						uch |= uch1;
					} else {
						uch |= uch1 << 4;
					}

					*(chptr + NibbleIndex++ / 2) = uch;
					c                            = fetch();
				}

				else {
					c = fetch();
				}

				break;

			case hex_frac_digit_loop:
				if (!isxdigit(c)) {
					hex_scan_state = hex_sig_end;
					break;
				}

				if (NibbleIndex < 17) {
					uch = *(chptr + NibbleIndex / 2);
					ui  = toupper(c);

					if (ui >= 'A') {
						ui = ui - 'A' + 10;
					} else {
						ui -= '0';
					}

					uch1 = ui;

					if ((NibbleIndex % 2) != 0) {
						uch |= uch1;
					} else {
						uch |= uch1 << 4;
					}

					*(chptr + NibbleIndex++ / 2) = uch;
					c                            = fetch();
				} else {
					c = fetch();
				}
				break;

			case hex_sig_end:
				if (toupper(c) == 'P') {
					hex_scan_state = hex_exp_start;
					exp_digits++;
					c = fetch();
				} else {
					scan_state = finished;
				}

				break;

			case hex_exp_start:
				exp_digits++;
				if (c == '-') {
					expsign = 1;
				} else if (c != '+') {
					c = unfetch(c);
					exp_digits--;
				}

				hex_scan_state = hex_leading_exp_digit;
				c              = fetch();
				break;

			case hex_leading_exp_digit:
				if (!isdigit(c)) {
					scan_state = failure;
					break;
				}

				if (c == '0') {
					exp_digits++;
					hex_scan_state = hex_leading_exp_zeroes;
					c              = fetch();
					break;
				}

				hex_scan_state = hex_exp_digit_loop;
				break;
			case hex_exp_digit_loop:
				if (!isdigit(c)) {
					scan_state = finished;
					break;
				}

				exponent = exponent * 10 + (c - '0');

				if (exp_value > SHRT_MAX) {
					*overflow = 1;
				}

				exp_digits++;
				c = fetch();

				break;
			}
		} break;
		}
	}

	if (!success(scan_state)) {
		count          = 0;
		*chars_scanned = 0;
	} else {
		count--;
		*chars_scanned = count + spaces;
	}

	unfetch(c);

	if (hex_scan_state == not_hex) {
		if (exp_negative) {
			exp_value = -exp_value;
		}

		{
			int n = d.sig.length;
			u8* p = &d.sig.text[n];

			while (n-- && *--p == '0') {
				exp_adjust++;
			}

			d.sig.length = n + 1;

			if (d.sig.length == 0) {
				d.sig.text[d.sig.length++] = '0';
			}
		}

		exp_value += exp_adjust;

		if (exp_value < SHRT_MIN || exp_value > SHRT_MAX) {
			*overflow = 1;
		}

		if (*overflow) {
			if (exp_negative) {
				return 0.0;
			} else {
				return sig_negative ? -HUGE_VAL : HUGE_VAL;
			}
		}

		d.exp = exp_value;

		result = __dec2num(&d);

		if (result != 0.0 && result < LDBL_MIN) {
			*overflow = 1;
		} else if (result > LDBL_MAX) {
			*overflow = 1;
			result    = HUGE_VAL;
		}

		if (sig_negative && success(scan_state)) {
			result = -result;
		}

		return result;
	} else {
		u64* uptr = (u64*)&result;

		if (result) {
			if (expsign) {
				exponent = -exponent;
			}

			while ((*(s16*)(&result) & 0x00f0) != 0x0010) {
				*uptr >>= 1;
				exponent++;
			}

			exponent += 4 * (intdigits - 1);
			*(s16*)&result &= 0x000f;
			*(s16*)(&result) |= ((exponent + 1023) << 4);

			*chars_scanned = spaces + sign_detected + NibbleIndex + 1 + exp_digits;
			if (result != 0.0 && result < LDBL_MIN) {
				*overflow = 1;
				result    = 0.0;
			} else if (result > LDBL_MAX) {
				*overflow = 1;
				result    = HUGE_VAL;
			}
			if (sig_negative) {
				*(s16*)(&result) |= 0x8000;
			}
		} else {
			result = 0.0;
		}
		return result;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xBC
 */
void strtold(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xBC
 */
void strtod(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8C
 */
void atof(void)
{
	// UNUSED FUNCTION
}
