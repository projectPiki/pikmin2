

/*
 * --INFO--
 * Address:	800CF28C
 * Size:	000028
 */
#define GET_4BYTE(x) (*(int*)&x)

double copysign(double x, double y)
{
	GET_4BYTE(x) = (GET_4BYTE(x) & 0x7fffffff) | (GET_4BYTE(y) & 0x80000000);
	return x;
}