#include "types.h"

/*
 * --INFO--
 * Address:	800D2644
 * Size:	000004
 */
void EXI2_Init(void){return;}
/*
.loc_0x0:
  blr
*/

/*
 * --INFO--
 * Address:	800D2648
 * Size:	000004
 */
void EXI2_EnableInterrupts(void){return;}
/*
.loc_0x0:
  blr
*/

/*
 * --INFO--
 * Address:	800D264C
 * Size:	000008
 */
BOOL EXI2_Poll(void){return FALSE;}
/*
.loc_0x0:
  li        r3, 0
  blr
*/

/*
 * --INFO--
 * Address:	800D2654
 * Size:	000008
 */
BOOL EXI2_ReadN(void){return FALSE;}
/*
.loc_0x0:
  li        r3, 0
  blr
*/

/*
 * --INFO--
 * Address:	800D265C
 * Size:	000008
 */
BOOL EXI2_WriteN(void){return FALSE;}
/*
.loc_0x0:
  li        r3, 0
  blr
*/

/*
 * --INFO--
 * Address:	800D2664
 * Size:	000004
 */
void EXI2_Reserve(void){return;}
/*
.loc_0x0:
  blr
*/

/*
 * --INFO--
 * Address:	800D2668
 * Size:	000004
 */
void EXI2_Unreserve(void){return;}
/*
.loc_0x0:
  blr
*/

/*
 * --INFO--
 * Address:	800D266C
 * Size:	000008
 */
BOOL AMC_IsStub(void){return TRUE;}
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
