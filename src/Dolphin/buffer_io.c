#include "Dolphin/bufferstruct.h"

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void setbuf(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000164
 */
void setvbuf(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C6160
 * Size:	0000C4
 */
s32 __flush_buffer(bufferStruct* param_1, u32* param_2)
{
	u32 uVar1;
	s32 iVar2;

	uVar1 = param_1->field24_0x24 - param_1->field22_0x1c;
	if (uVar1 != 0) {
		param_1->field25_0x28 = uVar1;
		iVar2                 = param_1->beans(param_1->field0_0x0, param_1->field22_0x1c, &param_1->field25_0x28, param_1->field45_0x48);
		if (param_2 != nullptr) {
			*param_2 = param_1->field25_0x28;
		}
		if (iVar2 != 0) {
			return iVar2;
		}
		param_1->field21_0x18 = param_1->field21_0x18 + param_1->field25_0x28;
	}
	param_1->field24_0x24 = param_1->field22_0x1c;
	param_1->field25_0x28 = param_1->field23_0x20;
	param_1->field25_0x28 = param_1->field25_0x28 - (param_1->field21_0x18 & param_1->field26_0x2c);
	param_1->field31_0x34 = param_1->field21_0x18;
	return 0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000110
 */
void __load_buffer(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C6224
 * Size:	000034
 */
void __prep_buffer(bufferStruct* param_1)

{
	param_1->field24_0x24 = param_1->field22_0x1c;
	param_1->field25_0x28 = param_1->field23_0x20;
	param_1->field25_0x28 = param_1->field25_0x28 - (param_1->field21_0x18 & param_1->field26_0x2c);
	param_1->field31_0x34 = param_1->field21_0x18;
	return;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void __convert_to_newlines(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void __convert_from_newlines(void)
{
	// UNUSED FUNCTION
}
