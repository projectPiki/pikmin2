
extern unsigned char __lower_map[256];
/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void iswblank(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void toupper(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C6264
 * Size:	000024
 */
int tolower(int __c)
{
	{
		if (__c == -1) {
			return 0xffffffff;
		}
		return (unsigned int)__lower_map[__c & 0xff];
	}

}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void isxdigit(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void isupper(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void isspace(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void ispunct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void isprint(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void islower(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void isgraph(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void isdigit(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void iscntrl(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void isalpha(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void isalnum(void)
{
	// UNUSED FUNCTION
}