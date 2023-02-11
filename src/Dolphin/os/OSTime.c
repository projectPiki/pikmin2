#include "Dolphin/os.h"

#define OS_TIME_MONTH_MAX    12
#define OS_TIME_WEEK_DAY_MAX 7
#define OS_TIME_YEAR_DAY_MAX 365
#define BIAS                 (2000 * 365 + (2000 + 3) / 4 - (2000 - 1) / 100 + (2000 - 1) / 400)

// End of each month in standard year
static s32 YearDays[OS_TIME_MONTH_MAX] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 };
// End of each month in leap year
static s32 LeapYearDays[OS_TIME_MONTH_MAX] = { 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335 };

/*
 * --INFO--
 * Address:	800F2B90
 * Size:	000018
 */
asm s64 OSGetTime()
{
	// clang-format off
    nofralloc

    mftbu r3
    mftb r4

    // Check for possible carry from TBL to TBU
    mftbu r5
    cmpw r3, r5
    bne OSGetTime

    blr
	// clang-format on
}

/*
 * --INFO--
 * Address:	800F2BA8
 * Size:	000008
 */
asm u32 OSGetTick() {
	// clang-format off
    nofralloc

    mftb r3
    blr
	// clang-format on
}

/*
 * --INFO--
 * Address:	800F2BB0
 * Size:	000064
 */
OSTime __OSGetSystemTime()
{
	BOOL enabled;
	OSTime* timeAdjustAddr = (OSTime*)(OSPhysicalToCached(0x30D8));
	OSTime result;

	enabled = OSDisableInterrupts();
	result  = *timeAdjustAddr + OSGetTime();
	OSRestoreInterrupts(enabled);

	return result;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
static BOOL IsLeapYear(s32 year) { return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0); }

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
static s32 GetLeapDays(s32 year)
{
	if (year < 1) {
		return 0;
	}
	return (year + 3) / 4 - (year - 1) / 100 + (year - 1) / 400;
}

/*
 * --INFO--
 * Address:	800F2C14
 * Size:	00019C
 */
static void GetDates(s32 days, OSCalendarTime* cal)
{
	s32 year;
	s32 totalDays;
	s32* p_days;
	s32 month;
	cal->wday = (days + 6) % OS_TIME_WEEK_DAY_MAX;

	for (year = days / OS_TIME_YEAR_DAY_MAX; days < (totalDays = year * OS_TIME_YEAR_DAY_MAX + GetLeapDays(year));) {
		year--;
	}

	days -= totalDays;
	cal->year = year;
	cal->yday = days;

	p_days = IsLeapYear(year) ? LeapYearDays : YearDays;
	month  = OS_TIME_MONTH_MAX;
	while (days < p_days[--month]) {
		;
	}
	cal->mon  = month;
	cal->mday = days - p_days[month] + 1;
}

#pragma dont_inline on
/*
 * --INFO--
 * Address:	800F2DB0
 * Size:	000204
 */
void OSTicksToCalendarTime(OSTime ticks, OSCalendarTime* cal)
{
	int days;
	int secs;
	OSTime d;

	d = ticks % OSSecondsToTicks(1);
	if (d < 0) {
		d += OSSecondsToTicks(1);
	}
	cal->usec = (int)(OSTicksToMicroseconds(d) % 1000);
	cal->msec = (int)(OSTicksToMilliseconds(d) % 1000);

	ticks -= d;
	days = (int)(OSTicksToSeconds(ticks) / 86400 + BIAS);
	secs = (int)(OSTicksToSeconds(ticks) % 86400);
	if (secs < 0) {
		days -= 1;
		secs += 24 * 60 * 60;
	}

	GetDates(days, cal);

	cal->hour = secs / 60 / 60;
	cal->min  = (secs / 60) % 60;
	cal->sec  = secs % 60;
}
#pragma dont_inline reset
