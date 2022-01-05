#include "types.h"
#include "Dolphin/dvderror.h"

extern void __OSUnlockSramEx(int);
extern u32* __OSLockSramEx(void);

/*
 * --INFO--
 * Address:	800DF654
 * Size:	00011C
 */
u8 ErrorCode2Num(u32 errorCode)

{
  int i;
  
  for (i = 0; i < 18; i++ ) {
    if (errorCode == ErrorTable[i]) {
      return i;
    }
  }

  if (errorCode >= 0x100000 && errorCode <= 0x100008) {
    return 17;
  }

  return 29;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000160
 */
//void Convert(void)
//{
	// UNUSED FUNCTION
//}

/*
 * --INFO--
 * Address:	800DF770
 * Size:	00007C
 */
void __DVDStoreErrorCode(u32 param_1)

{
  u8 cVar2;
  u32* puVar1;
  u32 cVar3;
  
  if (param_1 == 0x1234567) {
    cVar2 = -1;
  }
  else if (param_1 == 0x1234568) {
    cVar2 = -2;
  }
  else {
    cVar3 = (param_1 >> 0x18);
    cVar2 = ErrorCode2Num(param_1 & 0xffffff);
    if (6 <= param_1 >> 0x18) {
      cVar3 = 6;
    }
    cVar2 = cVar2 + cVar3 * 30;
  }
  puVar1 = __OSLockSramEx();
  *(u8 *)(puVar1 + 9) = cVar2;
  __OSUnlockSramEx(1);
}
