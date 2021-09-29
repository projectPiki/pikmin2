

/*
 * --INFO--
 * Address:	8000D068
 * Size:	000048
 */
void __dt__Q37JStudio14TVariableValue7TOutputFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x30
  lis       r5, 0x804A
  extsh.    r0, r4
  subi      r0, r5, 0xB68
  stw       r0, 0x0(r31)
  ble-      .loc_0x30
  bl        0x17020

.loc_0x30:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void update__Q27JStudio14TVariableValueFdPQ27JStudio8TAdaptor(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000D0B0
 * Size:	000014
 */
void update_immediate___Q27JStudio14TVariableValueFPQ27JStudio14TVariableValued(void)
{
/*
.loc_0x0:
  lfs       f0, 0xC(r3)
  li        r0, 0
  stfs      f0, 0x0(r3)
  stw       r0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8000D0C4
 * Size:	00003C
 */
void update_time___Q27JStudio14TVariableValueFPQ27JStudio14TVariableValued(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  lis       r0, 0x4330
  lfd       f2, -0x7F58(r2)
  lwz       r4, 0x4(r3)
  stw       r0, 0x8(r1)
  lfs       f3, 0xC(r3)
  stw       r4, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsub      f0, f0, f2
  fmul      f0, f0, f1
  fmul      f0, f3, f0
  frsp      f0, f0
  stfs      f0, 0x0(r3)
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8000D100
 * Size:	000064
 */
void update_functionValue___Q27JStudio14TVariableValueFPQ27JStudio14TVariableValued(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lfd       f2, -0x7F58(r2)
  stw       r0, 0x24(r1)
  lis       r0, 0x4330
  stw       r31, 0x1C(r1)
  mr        r31, r3
  lwz       r4, 0x4(r3)
  lwz       r3, 0xC(r3)
  stw       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  stw       r0, 0x8(r1)
  lwz       r12, 0x1C(r12)
  lfd       f0, 0x8(r1)
  fsub      f0, f0, f2
  fmul      f1, f0, f1
  mtctr     r12
  bctrl     
  frsp      f0, f1
  stfs      f0, 0x0(r31)
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8000D164
 * Size:	00005C
 */
void __dt__Q37JStudio14TVariableValue13TOutput_none_Fv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x44
  lis       r3, 0x804A
  subi      r0, r3, 0xB78
  stw       r0, 0x0(r31)
  beq-      .loc_0x34
  lis       r3, 0x804A
  subi      r0, r3, 0xB68
  stw       r0, 0x0(r31)

.loc_0x34:
  extsh.    r0, r4
  ble-      .loc_0x44
  mr        r3, r31
  bl        0x16F10

.loc_0x44:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8000D1C0
 * Size:	000004
 */
void __cl__Q37JStudio14TVariableValue13TOutput_none_CFfPQ27JStudio8TAdaptor(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void __dt__Q27JStudio8TAdaptorFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000D1C4
 * Size:	000004
 */
void adaptor_do_prepare__Q27JStudio8TAdaptorFPCQ27JStudio7TObject(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8000D1C8
 * Size:	000004
 */
void adaptor_do_begin__Q27JStudio8TAdaptorFPCQ27JStudio7TObject(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8000D1CC
 * Size:	000004
 */
void adaptor_do_end__Q27JStudio8TAdaptorFPCQ27JStudio7TObject(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8000D1D0
 * Size:	000004
 */
void adaptor_do_update__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectUl(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8000D1D4
 * Size:	000004
 */
void adaptor_do_data__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectPCvUlPCvUl(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8000D1D8
 * Size:	0000A0
 */
void adaptor_setVariableValue__Q27JStudio8TAdaptorFPQ27JStudio7TObjectUlQ37JStudio4data15TEOperationDataPCvUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r6, 0x12
  stw       r0, 0x14(r1)
  bgt-      .loc_0x90
  lis       r9, 0x804A
  rlwinm    r0,r6,2,0,29
  subi      r6, r9, 0x1908
  lwzx      r0, r6, r0
  mtctr     r0
  bctr      
  lis       r6, 0x8001
  subi      r0, r6, 0x2A70
  mr        r12, r0
  b         .loc_0x80
  lis       r6, 0x8001
  subi      r0, r6, 0x2A58
  mr        r12, r0
  b         .loc_0x80
  lis       r6, 0x8001
  subi      r0, r6, 0x2A2C
  mr        r12, r0
  b         .loc_0x80
  lis       r6, 0x8001
  subi      r0, r6, 0x2A00
  mr        r12, r0
  b         .loc_0x80
  lis       r6, 0x8001
  subi      r0, r6, 0x2990
  mr        r12, r0
  b         .loc_0x80
  b         .loc_0x90

.loc_0x80:
  mr        r6, r7
  mr        r7, r8
  mtctr     r12
  bctrl     

.loc_0x90:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000EC
 */
void adaptor_setVariableValue_n__Q27JStudio8TAdaptorFPQ27JStudio7TObjectPCUlUlQ37JStudio4data15TEOperationDataPCvUl(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000D278
 * Size:	000044
 */
void adaptor_setVariableValue_immediate__Q27JStudio8TAdaptorFPCQ37JStudio8TAdaptor27TSetVariableValue_immediate(void)
{
/*
.loc_0x0:
  lis       r5, 0x8001
  subi      r6, r5, 0x2F50
  li        r5, 0
  b         .loc_0x30

.loc_0x10:
  mulli     r0, r7, 0x14
  lwz       r7, 0x4(r3)
  lfs       f0, 0x4(r4)
  addi      r4, r4, 0x8
  add       r7, r7, r0
  stw       r6, 0x8(r7)
  stw       r5, 0x4(r7)
  stfs      f0, 0xC(r7)

.loc_0x30:
  lwz       r7, 0x0(r4)
  addis     r0, r7, 0x1
  cmplwi    r0, 0xFFFF
  bne+      .loc_0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8000D2BC
 * Size:	000070
 */
void adaptor_setVariableValue_Vec__Q27JStudio8TAdaptorFPCUlRC3Vec(void)
{
/*
.loc_0x0:
  lwz       r0, 0x0(r4)
  lis       r7, 0x8001
  lwz       r6, 0x4(r4)
  subi      r8, r7, 0x2F50
  mulli     r9, r0, 0x14
  lwz       r10, 0x4(r3)
  lwz       r0, 0x8(r4)
  li        r7, 0
  lfs       f0, 0x0(r5)
  add       r9, r10, r9
  stw       r8, 0x8(r9)
  mulli     r4, r6, 0x14
  lfs       f1, 0x4(r5)
  stw       r7, 0x4(r9)
  mulli     r0, r0, 0x14
  lfs       f2, 0x8(r5)
  stfs      f0, 0xC(r9)
  lwz       r5, 0x4(r3)
  add       r4, r5, r4
  stw       r8, 0x8(r4)
  stw       r7, 0x4(r4)
  stfs      f1, 0xC(r4)
  lwz       r3, 0x4(r3)
  add       r3, r3, r0
  stw       r8, 0x8(r3)
  stw       r7, 0x4(r3)
  stfs      f2, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8000D32C
 * Size:	000038
 */
void adaptor_getVariableValue_Vec__Q27JStudio8TAdaptorCFP3VecPCUl(void)
{
/*
.loc_0x0:
  lwz       r0, 0x0(r5)
  lwz       r6, 0x4(r5)
  mulli     r7, r0, 0x14
  lwz       r8, 0x4(r3)
  lwz       r0, 0x8(r5)
  lfsx      f0, r8, r7
  mulli     r3, r6, 0x14
  stfs      f0, 0x0(r4)
  mulli     r0, r0, 0x14
  lfsx      f0, r8, r3
  stfs      f0, 0x4(r4)
  lfsx      f0, r8, r0
  stfs      f0, 0x8(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000174
 */
void adaptor_updateVariableValue_Vec__Q27JStudio8TAdaptorFPCUlRC3Vec(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000D364
 * Size:	0000E0
 */
void adaptor_setVariableValue_GXColor__Q27JStudio8TAdaptorFPCUlRC8_GXColor(void)
{
/*
.loc_0x0:
  lwz       r0, 0x0(r4)
  lis       r6, 0x8001
  stwu      r1, -0x30(r1)
  lis       r12, 0x4330
  lbz       r9, 0x0(r5)
  mulli     r7, r0, 0x14
  lwz       r8, 0x4(r3)
  subi      r11, r6, 0x2F50
  stw       r9, 0xC(r1)
  li        r10, 0
  add       r6, r8, r7
  stw       r12, 0x8(r1)
  lfd       f1, -0x7F58(r2)
  lfd       f0, 0x8(r1)
  stw       r11, 0x8(r6)
  lwz       r0, 0x4(r4)
  fsubs     f0, f0, f1
  stw       r10, 0x4(r6)
  mulli     r8, r0, 0x14
  lbz       r9, 0x1(r5)
  lwz       r0, 0x8(r4)
  stfs      f0, 0xC(r6)
  mulli     r6, r0, 0x14
  lbz       r7, 0x2(r5)
  lwz       r0, 0x4(r3)
  stw       r9, 0x14(r1)
  add       r8, r0, r8
  lwz       r0, 0xC(r4)
  stw       r12, 0x10(r1)
  lbz       r4, 0x3(r5)
  mulli     r0, r0, 0x14
  lfd       f0, 0x10(r1)
  stw       r11, 0x8(r8)
  fsubs     f0, f0, f1
  stw       r10, 0x4(r8)
  stfs      f0, 0xC(r8)
  lwz       r5, 0x4(r3)
  stw       r7, 0x1C(r1)
  add       r5, r5, r6
  stw       r12, 0x18(r1)
  lfd       f0, 0x18(r1)
  stw       r11, 0x8(r5)
  fsubs     f0, f0, f1
  stw       r10, 0x4(r5)
  stfs      f0, 0xC(r5)
  lwz       r3, 0x4(r3)
  stw       r4, 0x24(r1)
  add       r3, r3, r0
  stw       r12, 0x20(r1)
  lfd       f0, 0x20(r1)
  stw       r11, 0x8(r3)
  fsubs     f0, f0, f1
  stw       r10, 0x4(r3)
  stfs      f0, 0xC(r3)
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8000D444
 * Size:	00014C
 */
void adaptor_getVariableValue_GXColor__Q27JStudio8TAdaptorCFP8_GXColorPCUl(void)
{
/*
.loc_0x0:
  lwz       r0, 0x0(r5)
  stwu      r1, -0x10(r1)
  mulli     r0, r0, 0x14
  lwz       r6, 0x4(r3)
  lfs       f0, -0x7F50(r2)
  lfsx      f1, r6, r0
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x2C
  li        r6, 0
  b         .loc_0x50

.loc_0x2C:
  lfs       f0, -0x7F4C(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x44
  li        r6, 0xFF
  b         .loc_0x50

.loc_0x44:
  fctiwz    f0, f1
  stfd      f0, 0x8(r1)
  lwz       r6, 0xC(r1)

.loc_0x50:
  lwz       r0, 0x4(r5)
  stb       r6, 0x0(r4)
  mulli     r0, r0, 0x14
  lwz       r6, 0x4(r3)
  lfs       f0, -0x7F50(r2)
  lfsx      f1, r6, r0
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x7C
  li        r6, 0
  b         .loc_0xA0

.loc_0x7C:
  lfs       f0, -0x7F4C(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x94
  li        r6, 0xFF
  b         .loc_0xA0

.loc_0x94:
  fctiwz    f0, f1
  stfd      f0, 0x8(r1)
  lwz       r6, 0xC(r1)

.loc_0xA0:
  lwz       r0, 0x8(r5)
  stb       r6, 0x1(r4)
  mulli     r0, r0, 0x14
  lwz       r6, 0x4(r3)
  lfs       f0, -0x7F50(r2)
  lfsx      f1, r6, r0
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0xCC
  li        r6, 0
  b         .loc_0xF0

.loc_0xCC:
  lfs       f0, -0x7F4C(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0xE4
  li        r6, 0xFF
  b         .loc_0xF0

.loc_0xE4:
  fctiwz    f0, f1
  stfd      f0, 0x8(r1)
  lwz       r6, 0xC(r1)

.loc_0xF0:
  lwz       r0, 0xC(r5)
  stb       r6, 0x2(r4)
  mulli     r0, r0, 0x14
  lwz       r3, 0x4(r3)
  lfs       f0, -0x7F50(r2)
  lfsx      f1, r3, r0
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x11C
  li        r0, 0
  b         .loc_0x140

.loc_0x11C:
  lfs       f0, -0x7F4C(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x134
  li        r0, 0xFF
  b         .loc_0x140

.loc_0x134:
  fctiwz    f0, f1
  stfd      f0, 0x8(r1)
  lwz       r0, 0xC(r1)

.loc_0x140:
  stb       r0, 0x3(r4)
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000238
 */
void adaptor_updateVariableValue_GXColor__Q27JStudio8TAdaptorFPCUlRC8_GXColor(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void adaptor_updateVariableValue__Q27JStudio8TAdaptorFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void adaptor_updateVariableValue__Q27JStudio8TAdaptorFPQ27JStudio7TObjectUl(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000D590
 * Size:	000018
 */
void adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl(void)
{
/*
.loc_0x0:
  mulli     r4, r5, 0x14
  lwz       r3, 0x4(r3)
  li        r5, 0
  addi      r0, r4, 0x8
  stwx      r5, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	8000D5A8
 * Size:	00002C
 */
void adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl(void)
{
/*
.loc_0x0:
  mulli     r4, r5, 0x14
  lwz       r5, 0x4(r3)
  lis       r3, 0x8001
  lfs       f0, 0x0(r6)
  li        r0, 0
  add       r4, r5, r4
  subi      r3, r3, 0x2F50
  stw       r3, 0x8(r4)
  stw       r0, 0x4(r4)
  stfs      f0, 0xC(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	8000D5D4
 * Size:	00002C
 */
void adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl(void)
{
/*
.loc_0x0:
  mulli     r4, r5, 0x14
  lwz       r5, 0x4(r3)
  lis       r3, 0x8001
  lfs       f0, 0x0(r6)
  li        r0, 0
  add       r4, r5, r4
  subi      r3, r3, 0x2F3C
  stw       r3, 0x8(r4)
  stw       r0, 0x4(r4)
  stfs      f0, 0xC(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	8000D600
 * Size:	000070
 */
void adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  mulli     r0, r5, 0x14
  mr        r5, r7
  stw       r31, 0xC(r1)
  lwz       r8, 0x4(r3)
  lwz       r3, 0x14(r4)
  mr        r4, r6
  add       r31, r8, r0
  addi      r3, r3, 0x60
  bl        -0x16BC
  cmplwi    r3, 0
  bne-      .loc_0x40
  li        r4, 0
  b         .loc_0x44

.loc_0x40:
  lwz       r4, 0x14(r3)

.loc_0x44:
  lis       r3, 0x8001
  li        r0, 0
  subi      r3, r3, 0x2F00
  stw       r3, 0x8(r31)
  stw       r0, 0x4(r31)
  stw       r4, 0xC(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8000D670
 * Size:	00006C
 */
void adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  mulli     r0, r5, 0x14
  stw       r31, 0xC(r1)
  lwz       r5, 0x4(r3)
  lwz       r3, 0x14(r4)
  lwz       r4, 0x0(r6)
  add       r31, r5, r0
  addi      r3, r3, 0x60
  bl        -0x15F8
  cmplwi    r3, 0
  bne-      .loc_0x3C
  li        r4, 0
  b         .loc_0x40

.loc_0x3C:
  lwz       r4, 0x14(r3)

.loc_0x40:
  lis       r3, 0x8001
  li        r0, 0
  subi      r3, r3, 0x2F00
  stw       r3, 0x8(r31)
  stw       r0, 0x4(r31)
  stw       r4, 0xC(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void __dt__Q27JStudio7TObjectFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000EC
 */
void forward_value__Q27JStudio7TObjectFUl(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000D6DC
 * Size:	00003C
 */
void do_begin__Q27JStudio7TObjectFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  lwz       r3, 0x34(r3)
  cmplwi    r3, 0
  beq-      .loc_0x2C
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     

.loc_0x2C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8000D718
 * Size:	00003C
 */
void do_end__Q27JStudio7TObjectFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  lwz       r3, 0x34(r3)
  cmplwi    r3, 0
  beq-      .loc_0x2C
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     

.loc_0x2C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8000D754
 * Size:	0000EC
 */
void do_wait__Q27JStudio7TObjectFUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stmw      r26, 0x8(r1)
  mr        r26, r3
  mr        r27, r4
  lwz       r31, 0x34(r3)
  cmplwi    r31, 0
  beq-      .loc_0xD0
  lwz       r0, 0x8(r31)
  lwz       r3, 0x14(r26)
  mulli     r0, r0, 0x14
  lwz       r28, 0x4(r31)
  lfd       f31, 0x58(r3)
  add       r30, r28, r0
  b         .loc_0xAC

.loc_0x48:
  lwz       r3, 0x4(r28)
  mr        r29, r28
  addi      r28, r28, 0x14
  subfic    r0, r3, -0x1
  cmplw     r0, r27
  bgt-      .loc_0x6C
  li        r0, -0x1
  stw       r0, 0x4(r29)
  b         .loc_0x74

.loc_0x6C:
  add       r0, r3, r27
  stw       r0, 0x4(r29)

.loc_0x74:
  lwz       r12, 0x8(r29)
  cmplwi    r12, 0
  beq-      .loc_0xAC
  fmr       f1, f31
  mr        r3, r29
  mtctr     r12
  bctrl     
  lwz       r3, 0x10(r29)
  mr        r4, r31
  lfs       f1, 0x0(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0xAC:
  cmplw     r28, r30
  bne+      .loc_0x48
  mr        r3, r31
  mr        r4, r26
  lwz       r12, 0x0(r31)
  mr        r5, r27
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     

.loc_0xD0:
  psq_l     f31,0x28(r1),0,0
  lfd       f31, 0x20(r1)
  lmw       r26, 0x8(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8000D840
 * Size:	00005C
 */
void do_data__Q27JStudio7TObjectFPCvUlPCvUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r11, r3
  mr        r10, r4
  stw       r0, 0x14(r1)
  mr        r9, r5
  mr        r0, r6
  mr        r8, r7
  lwz       r3, 0x34(r3)
  cmplwi    r3, 0
  beq-      .loc_0x4C
  lwz       r12, 0x0(r3)
  mr        r4, r11
  mr        r5, r10
  mr        r6, r9
  lwz       r12, 0x1C(r12)
  mr        r7, r0
  mtctr     r12
  bctrl     

.loc_0x4C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void __ct__Q27JStudio7TObjectFQ37JStudio4data9TE32BlockPCvUlPQ27JStudio8TAdaptor(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void __ct__Q27JStudio7TObjectFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio8TAdaptor(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000D89C
 * Size:	00005C
 */
void __dt__Q27JStudio14TAdaptor_actorFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x44
  lis       r3, 0x804A
  subi      r0, r3, 0xC08
  stw       r0, 0x0(r31)
  beq-      .loc_0x34
  lis       r3, 0x804A
  subi      r0, r3, 0xB98
  stw       r0, 0x0(r31)

.loc_0x34:
  extsh.    r0, r4
  ble-      .loc_0x44
  mr        r3, r31
  bl        0x167D8

.loc_0x44:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void __ct__Q27JStudio13TObject_actorFPCvUlPQ27JStudio14TAdaptor_actor(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000D8F8
 * Size:	000058
 */
void __ct__Q27JStudio13TObject_actorFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio14TAdaptor_actor(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r5
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        0x2964
  lis       r3, 0x804A
  lis       r4, 0x804A
  subi      r0, r3, 0xBB8
  mr        r3, r30
  stw       r0, 0x8(r30)
  subi      r0, r4, 0xC28
  stw       r31, 0x34(r30)
  stw       r0, 0x8(r30)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8000D950
 * Size:	000484
 */
void do_paragraph__Q27JStudio13TObject_actorFUlPCvUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  lis       r8, 0x8047
  mr        r7, r6
  stw       r0, 0x44(r1)
  mr        r0, r5
  addi      r10, r8, 0x3350
  stmw      r25, 0x24(r1)
  mr        r30, r3
  lwz       r31, 0x34(r3)
  lis       r3, 0x804A
  subi      r3, r3, 0x1968
  cmplwi    r31, 0
  beq-      .loc_0x470
  lis       r5, 0x8048
  rlwinm    r6,r4,27,5,31
  subi      r9, r5, 0x60F0
  rlwinm    r4,r4,0,27,31
  lwz       r5, 0x4(r9)
  subi      r6, r6, 0x9
  lwz       r8, 0x0(r9)
  cmplwi    r6, 0x48
  stw       r5, 0xC(r1)
  stw       r8, 0x8(r1)
  lwz       r5, 0x8(r9)
  stw       r5, 0x10(r1)
  bgt-      .loc_0x470
  lis       r5, 0x804A
  rlwinm    r6,r6,2,0,29
  subi      r5, r5, 0x1794
  lwzx      r5, r5, r6
  mtctr     r5
  bctr      
  lwz       r6, 0xAC(r3)
  lwz       r5, 0xB0(r3)
  lwz       r3, 0xB4(r3)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x458
  lwz       r6, 0xB8(r3)
  lwz       r5, 0xBC(r3)
  lwz       r3, 0xC0(r3)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x458
  lwz       r6, 0xC4(r3)
  lwz       r5, 0xC8(r3)
  lwz       r3, 0xCC(r3)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x458
  lwz       r6, 0xD0(r3)
  lwz       r5, 0xD4(r3)
  lwz       r3, 0xD8(r3)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x458
  lwz       r6, 0xDC(r3)
  lwz       r5, 0xE0(r3)
  lwz       r3, 0xE4(r3)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x458
  lwz       r6, 0xE8(r3)
  lwz       r5, 0xEC(r3)
  lwz       r3, 0xF0(r3)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x458
  lwz       r6, 0xF4(r3)
  lwz       r5, 0xF8(r3)
  lwz       r3, 0xFC(r3)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x458
  lwz       r8, 0x100(r3)
  lis       r5, 0x804F
  lwz       r6, 0x104(r3)
  subi      r5, r5, 0x344
  lwz       r3, 0x108(r3)
  mr        r28, r5
  stw       r8, 0x8(r1)
  li        r29, 0xC
  stw       r6, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x274
  lwz       r6, 0x10C(r3)
  lwz       r5, 0x110(r3)
  lwz       r3, 0x114(r3)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x458
  lwz       r6, 0x118(r3)
  lwz       r5, 0x11C(r3)
  lwz       r3, 0x120(r3)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x458
  lwz       r6, 0x124(r3)
  lwz       r5, 0x128(r3)
  lwz       r3, 0x12C(r3)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x458
  lwz       r8, 0x130(r3)
  lis       r5, 0x804F
  lwz       r6, 0x134(r3)
  subi      r5, r5, 0x328
  lwz       r3, 0x138(r3)
  mr        r28, r5
  stw       r8, 0x8(r1)
  li        r29, 0xD
  stw       r6, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x274
  li        r5, 0
  b         .loc_0x33C
  li        r5, 0x1
  b         .loc_0x33C
  li        r5, 0x3
  b         .loc_0x33C
  li        r5, 0x4
  b         .loc_0x33C
  li        r5, 0x5
  b         .loc_0x33C
  li        r5, 0x6
  b         .loc_0x33C
  li        r5, 0x7
  b         .loc_0x33C
  li        r5, 0x8
  b         .loc_0x33C
  li        r5, 0x9
  b         .loc_0x33C
  li        r5, 0xA
  b         .loc_0x33C
  li        r5, 0xB
  b         .loc_0x33C
  addi      r6, r10, 0
  li        r5, 0x3
  b         .loc_0x3AC
  addi      r6, r10, 0xC
  li        r5, 0x3
  b         .loc_0x3AC
  addi      r6, r10, 0x18
  li        r5, 0x3
  b         .loc_0x3AC
  b         .loc_0x470

.loc_0x274:
  cmpwi     r4, 0x13
  bge-      .loc_0x320
  cmpwi     r4, 0x10
  bge-      .loc_0x288
  b         .loc_0x320

.loc_0x288:
  cmplwi    r4, 0x12
  bgt-      .loc_0x2F8
  lis       r5, 0x804A
  rlwinm    r3,r4,2,0,29
  subi      r4, r5, 0x17E0
  lwzx      r3, r4, r3
  mtctr     r3
  bctr      
  lis       r3, 0x8001
  subi      r12, r3, 0x2A70
  b         .loc_0x2E0
  lis       r3, 0x8001
  subi      r12, r3, 0x2A58
  b         .loc_0x2E0
  lis       r3, 0x8001
  subi      r12, r3, 0x2A2C
  b         .loc_0x2E0
  lis       r3, 0x8001
  subi      r12, r3, 0x2A00
  b         .loc_0x2E0
  lis       r3, 0x8001
  subi      r12, r3, 0x2990

.loc_0x2E0:
  mr        r3, r31
  mr        r4, r30
  mr        r5, r29
  mr        r6, r0
  mtctr     r12
  bctrl     

.loc_0x2F8:
  mulli     r0, r29, 0x14
  lwz       r3, 0x4(r31)
  cmplwi    r28, 0
  add       r3, r3, r0
  beq-      .loc_0x314
  mr        r0, r28
  b         .loc_0x318

.loc_0x314:
  subi      r0, r13, 0x78F0

.loc_0x318:
  stw       r0, 0x10(r3)
  b         .loc_0x470

.loc_0x320:
  mr        r3, r31
  mr        r5, r0
  mr        r6, r7
  addi      r12, r1, 0x8
  bl        0xB3EA4
  nop       
  b         .loc_0x470

.loc_0x33C:
  cmplwi    r4, 0x12
  bgt-      .loc_0x470
  lis       r6, 0x804A
  rlwinm    r3,r4,2,0,29
  subi      r4, r6, 0x182C
  lwzx      r3, r4, r3
  mtctr     r3
  bctr      
  lis       r3, 0x8001
  subi      r12, r3, 0x2A70
  b         .loc_0x394
  lis       r3, 0x8001
  subi      r12, r3, 0x2A58
  b         .loc_0x394
  lis       r3, 0x8001
  subi      r12, r3, 0x2A2C
  b         .loc_0x394
  lis       r3, 0x8001
  subi      r12, r3, 0x2A00
  b         .loc_0x394
  lis       r3, 0x8001
  subi      r12, r3, 0x2990

.loc_0x394:
  mr        r3, r31
  mr        r4, r30
  mr        r6, r0
  mtctr     r12
  bctrl     
  b         .loc_0x470

.loc_0x3AC:
  cmpwi     r4, 0x3
  mr        r29, r0
  beq-      .loc_0x3F8
  bge-      .loc_0x3CC
  cmpwi     r4, 0x1
  beq-      .loc_0x3D8
  bge-      .loc_0x3E8
  b         .loc_0x470

.loc_0x3CC:
  cmpwi     r4, 0x12
  beq-      .loc_0x408
  b         .loc_0x470

.loc_0x3D8:
  lis       r3, 0x8001
  li        r27, 0
  subi      r28, r3, 0x2A70
  b         .loc_0x414

.loc_0x3E8:
  lis       r3, 0x8001
  li        r27, 0x4
  subi      r28, r3, 0x2A58
  b         .loc_0x414

.loc_0x3F8:
  lis       r3, 0x8001
  li        r27, 0x4
  subi      r28, r3, 0x2A2C
  b         .loc_0x414

.loc_0x408:
  lis       r3, 0x8001
  li        r27, 0x4
  subi      r28, r3, 0x2990

.loc_0x414:
  rlwinm    r0,r5,2,0,29
  mr        r26, r6
  add       r25, r6, r0
  b         .loc_0x44C

.loc_0x424:
  mr        r12, r28
  mr        r3, r31
  mr        r4, r30
  mr        r6, r29
  mr        r7, r27
  lwz       r5, 0x0(r26)
  mtctr     r12
  addi      r26, r26, 0x4
  bctrl     
  add       r29, r29, r27

.loc_0x44C:
  cmplw     r26, r25
  bne+      .loc_0x424
  b         .loc_0x470

.loc_0x458:
  mr        r3, r31
  mr        r5, r0
  mr        r6, r7
  addi      r12, r1, 0x8
  bl        0xB3D6C
  nop       

.loc_0x470:
  lmw       r25, 0x24(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	8000DDD4
 * Size:	00005C
 */
void __dt__Q27JStudio21TAdaptor_ambientLightFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x44
  lis       r3, 0x804A
  subi      r0, r3, 0xC48
  stw       r0, 0x0(r31)
  beq-      .loc_0x34
  lis       r3, 0x804A
  subi      r0, r3, 0xB98
  stw       r0, 0x0(r31)

.loc_0x34:
  extsh.    r0, r4
  ble-      .loc_0x44
  mr        r3, r31
  bl        0x162A0

.loc_0x44:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void __ct__Q27JStudio20TObject_ambientLightFPCvUlPQ27JStudio21TAdaptor_ambientLight(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000DE30
 * Size:	000058
 */
void __ct__Q27JStudio20TObject_ambientLightFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio21TAdaptor_ambientLight(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r5
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        0x242C
  lis       r3, 0x804A
  lis       r4, 0x804A
  subi      r0, r3, 0xBB8
  mr        r3, r30
  stw       r0, 0x8(r30)
  subi      r0, r4, 0xC68
  stw       r31, 0x34(r30)
  stw       r0, 0x8(r30)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8000DE88
 * Size:	0001DC
 */
void do_paragraph__Q27JStudio20TObject_ambientLightFUlPCvUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  mr        r7, r6
  stw       r0, 0x34(r1)
  mr        r0, r5
  stmw      r25, 0x14(r1)
  mr        r30, r3
  lwz       r31, 0x34(r3)
  cmplwi    r31, 0
  beq-      .loc_0x1C8
  rlwinm    r3,r4,27,5,31
  rlwinm    r6,r4,0,27,31
  cmpwi     r3, 0x20
  beq-      .loc_0x7C
  bge-      .loc_0x54
  cmpwi     r3, 0x1E
  beq-      .loc_0x6C
  bge-      .loc_0x74
  cmpwi     r3, 0x1D
  bge-      .loc_0x64
  b         .loc_0x1C8

.loc_0x54:
  cmpwi     r3, 0x22
  beq-      .loc_0x98
  bge-      .loc_0x1C8
  b         .loc_0x84

.loc_0x64:
  li        r5, 0
  b         .loc_0xB0

.loc_0x6C:
  li        r5, 0x1
  b         .loc_0xB0

.loc_0x74:
  li        r5, 0x2
  b         .loc_0xB0

.loc_0x7C:
  li        r5, 0x3
  b         .loc_0xB0

.loc_0x84:
  lis       r3, 0x8047
  li        r4, 0x3
  addi      r3, r3, 0x3374
  mr        r5, r3
  b         .loc_0x120

.loc_0x98:
  lis       r3, 0x8047
  li        r4, 0x4
  addi      r3, r3, 0x3380
  mr        r5, r3
  b         .loc_0x120
  b         .loc_0x1C8

.loc_0xB0:
  cmplwi    r6, 0x12
  bgt-      .loc_0x1C8
  lis       r4, 0x804A
  rlwinm    r3,r6,2,0,29
  subi      r4, r4, 0x1670
  lwzx      r3, r4, r3
  mtctr     r3
  bctr      
  lis       r3, 0x8001
  subi      r12, r3, 0x2A70
  b         .loc_0x108
  lis       r3, 0x8001
  subi      r12, r3, 0x2A58
  b         .loc_0x108
  lis       r3, 0x8001
  subi      r12, r3, 0x2A2C
  b         .loc_0x108
  lis       r3, 0x8001
  subi      r12, r3, 0x2A00
  b         .loc_0x108
  lis       r3, 0x8001
  subi      r12, r3, 0x2990

.loc_0x108:
  mr        r3, r31
  mr        r4, r30
  mr        r6, r0
  mtctr     r12
  bctrl     
  b         .loc_0x1C8

.loc_0x120:
  cmpwi     r6, 0x3
  mr        r28, r0
  beq-      .loc_0x16C
  bge-      .loc_0x140
  cmpwi     r6, 0x1
  beq-      .loc_0x14C
  bge-      .loc_0x15C
  b         .loc_0x1C8

.loc_0x140:
  cmpwi     r6, 0x12
  beq-      .loc_0x17C
  b         .loc_0x1C8

.loc_0x14C:
  lis       r3, 0x8001
  li        r27, 0
  subi      r29, r3, 0x2A70
  b         .loc_0x188

.loc_0x15C:
  lis       r3, 0x8001
  li        r27, 0x4
  subi      r29, r3, 0x2A58
  b         .loc_0x188

.loc_0x16C:
  lis       r3, 0x8001
  li        r27, 0x4
  subi      r29, r3, 0x2A2C
  b         .loc_0x188

.loc_0x17C:
  lis       r3, 0x8001
  li        r27, 0x4
  subi      r29, r3, 0x2990

.loc_0x188:
  rlwinm    r0,r4,2,0,29
  mr        r26, r5
  add       r25, r5, r0
  b         .loc_0x1C0

.loc_0x198:
  mr        r12, r29
  mr        r3, r31
  mr        r4, r30
  mr        r6, r28
  mr        r7, r27
  lwz       r5, 0x0(r26)
  mtctr     r12
  addi      r26, r26, 0x4
  bctrl     
  add       r28, r28, r27

.loc_0x1C0:
  cmplw     r26, r25
  bne+      .loc_0x198

.loc_0x1C8:
  lmw       r25, 0x14(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8000E064
 * Size:	00005C
 */
void __dt__Q27JStudio15TAdaptor_cameraFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x44
  lis       r3, 0x804A
  subi      r0, r3, 0xCA4
  stw       r0, 0x0(r31)
  beq-      .loc_0x34
  lis       r3, 0x804A
  subi      r0, r3, 0xB98
  stw       r0, 0x0(r31)

.loc_0x34:
  extsh.    r0, r4
  ble-      .loc_0x44
  mr        r3, r31
  bl        0x16010

.loc_0x44:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void __ct__Q27JStudio14TObject_cameraFPCvUlPQ27JStudio15TAdaptor_camera(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000E0C0
 * Size:	000058
 */
void __ct__Q27JStudio14TObject_cameraFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio15TAdaptor_camera(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r5
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        0x219C
  lis       r3, 0x804A
  lis       r4, 0x804A
  subi      r0, r3, 0xBB8
  mr        r3, r30
  stw       r0, 0x8(r30)
  subi      r0, r4, 0xCC4
  stw       r31, 0x34(r30)
  stw       r0, 0x8(r30)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8000E118
 * Size:	0003F8
 */
void do_paragraph__Q27JStudio14TObject_cameraFUlPCvUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  mr        r7, r6
  stw       r0, 0x44(r1)
  mr        r0, r5
  stmw      r25, 0x24(r1)
  mr        r30, r3
  lis       r3, 0x804A
  subi      r3, r3, 0x1968
  lwz       r31, 0x34(r30)
  cmplwi    r31, 0
  beq-      .loc_0x3E4
  lis       r5, 0x8048
  rlwinm    r6,r4,27,5,31
  subi      r9, r5, 0x60F0
  rlwinm    r4,r4,0,27,31
  lwz       r5, 0x4(r9)
  subi      r6, r6, 0x15
  lwz       r8, 0x0(r9)
  cmplwi    r6, 0x3F
  stw       r5, 0xC(r1)
  stw       r8, 0x8(r1)
  lwz       r5, 0x8(r9)
  stw       r5, 0x10(r1)
  bgt-      .loc_0x3E4
  lis       r5, 0x804A
  rlwinm    r6,r6,2,0,29
  subi      r5, r5, 0x1538
  lwzx      r5, r5, r6
  mtctr     r5
  bctr      
  lwz       r6, 0x344(r3)
  lwz       r5, 0x348(r3)
  lwz       r3, 0x34C(r3)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x3CC
  lwz       r6, 0x350(r3)
  lwz       r5, 0x354(r3)
  lwz       r3, 0x358(r3)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x3CC
  lwz       r8, 0x35C(r3)
  lis       r5, 0x804F
  lwz       r6, 0x360(r3)
  subi      r5, r5, 0x30C
  lwz       r3, 0x364(r3)
  mr        r28, r5
  stw       r8, 0x8(r1)
  li        r29, 0xA
  stw       r6, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x1E8
  lwz       r6, 0x368(r3)
  lwz       r5, 0x36C(r3)
  lwz       r3, 0x370(r3)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x3CC
  lwz       r6, 0x374(r3)
  lwz       r5, 0x378(r3)
  lwz       r3, 0x37C(r3)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x3CC
  lwz       r6, 0x380(r3)
  lwz       r5, 0x384(r3)
  lwz       r3, 0x388(r3)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x3CC
  lwz       r8, 0x38C(r3)
  lis       r5, 0x804F
  lwz       r6, 0x390(r3)
  subi      r5, r5, 0x2F0
  lwz       r3, 0x394(r3)
  mr        r28, r5
  stw       r8, 0x8(r1)
  li        r29, 0xB
  stw       r6, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x1E8
  li        r5, 0
  b         .loc_0x2B0
  li        r5, 0x1
  b         .loc_0x2B0
  li        r5, 0x2
  b         .loc_0x2B0
  li        r5, 0x3
  b         .loc_0x2B0
  li        r5, 0x4
  b         .loc_0x2B0
  li        r5, 0x5
  b         .loc_0x2B0
  li        r5, 0x6
  b         .loc_0x2B0
  li        r5, 0x7
  b         .loc_0x2B0
  li        r5, 0x8
  b         .loc_0x2B0
  li        r5, 0x9
  b         .loc_0x2B0
  lis       r3, 0x8047
  li        r5, 0x3
  addi      r3, r3, 0x3390
  mr        r6, r3
  b         .loc_0x320
  lis       r3, 0x8047
  li        r5, 0x3
  addi      r3, r3, 0x339C
  mr        r6, r3
  b         .loc_0x320
  subi      r6, r2, 0x7F48
  li        r5, 0x2
  b         .loc_0x320
  b         .loc_0x3E4

.loc_0x1E8:
  cmpwi     r4, 0x13
  bge-      .loc_0x294
  cmpwi     r4, 0x10
  bge-      .loc_0x1FC
  b         .loc_0x294

.loc_0x1FC:
  cmplwi    r4, 0x12
  bgt-      .loc_0x26C
  lis       r5, 0x804A
  rlwinm    r3,r4,2,0,29
  subi      r4, r5, 0x1584
  lwzx      r3, r4, r3
  mtctr     r3
  bctr      
  lis       r3, 0x8001
  subi      r12, r3, 0x2A70
  b         .loc_0x254
  lis       r3, 0x8001
  subi      r12, r3, 0x2A58
  b         .loc_0x254
  lis       r3, 0x8001
  subi      r12, r3, 0x2A2C
  b         .loc_0x254
  lis       r3, 0x8001
  subi      r12, r3, 0x2A00
  b         .loc_0x254
  lis       r3, 0x8001
  subi      r12, r3, 0x2990

.loc_0x254:
  mr        r3, r31
  mr        r4, r30
  mr        r5, r29
  mr        r6, r0
  mtctr     r12
  bctrl     

.loc_0x26C:
  mulli     r0, r29, 0x14
  lwz       r3, 0x4(r31)
  cmplwi    r28, 0
  add       r3, r3, r0
  beq-      .loc_0x288
  mr        r0, r28
  b         .loc_0x28C

.loc_0x288:
  subi      r0, r13, 0x78F0

.loc_0x28C:
  stw       r0, 0x10(r3)
  b         .loc_0x3E4

.loc_0x294:
  mr        r3, r31
  mr        r5, r0
  mr        r6, r7
  addi      r12, r1, 0x8
  bl        0xB3768
  nop       
  b         .loc_0x3E4

.loc_0x2B0:
  cmplwi    r4, 0x12
  bgt-      .loc_0x3E4
  lis       r6, 0x804A
  rlwinm    r3,r4,2,0,29
  subi      r4, r6, 0x15D0
  lwzx      r3, r4, r3
  mtctr     r3
  bctr      
  lis       r3, 0x8001
  subi      r12, r3, 0x2A70
  b         .loc_0x308
  lis       r3, 0x8001
  subi      r12, r3, 0x2A58
  b         .loc_0x308
  lis       r3, 0x8001
  subi      r12, r3, 0x2A2C
  b         .loc_0x308
  lis       r3, 0x8001
  subi      r12, r3, 0x2A00
  b         .loc_0x308
  lis       r3, 0x8001
  subi      r12, r3, 0x2990

.loc_0x308:
  mr        r3, r31
  mr        r4, r30
  mr        r6, r0
  mtctr     r12
  bctrl     
  b         .loc_0x3E4

.loc_0x320:
  cmpwi     r4, 0x3
  mr        r29, r0
  beq-      .loc_0x36C
  bge-      .loc_0x340
  cmpwi     r4, 0x1
  beq-      .loc_0x34C
  bge-      .loc_0x35C
  b         .loc_0x3E4

.loc_0x340:
  cmpwi     r4, 0x12
  beq-      .loc_0x37C
  b         .loc_0x3E4

.loc_0x34C:
  lis       r3, 0x8001
  li        r27, 0
  subi      r28, r3, 0x2A70
  b         .loc_0x388

.loc_0x35C:
  lis       r3, 0x8001
  li        r27, 0x4
  subi      r28, r3, 0x2A58
  b         .loc_0x388

.loc_0x36C:
  lis       r3, 0x8001
  li        r27, 0x4
  subi      r28, r3, 0x2A2C
  b         .loc_0x388

.loc_0x37C:
  lis       r3, 0x8001
  li        r27, 0x4
  subi      r28, r3, 0x2990

.loc_0x388:
  rlwinm    r0,r5,2,0,29
  mr        r26, r6
  add       r25, r6, r0
  b         .loc_0x3C0

.loc_0x398:
  mr        r12, r28
  mr        r3, r31
  mr        r4, r30
  mr        r6, r29
  mr        r7, r27
  lwz       r5, 0x0(r26)
  mtctr     r12
  addi      r26, r26, 0x4
  bctrl     
  add       r29, r29, r27

.loc_0x3C0:
  cmplw     r26, r25
  bne+      .loc_0x398
  b         .loc_0x3E4

.loc_0x3CC:
  mr        r3, r31
  mr        r5, r0
  mr        r6, r7
  addi      r12, r1, 0x8
  bl        0xB3630
  nop       

.loc_0x3E4:
  lmw       r25, 0x24(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	8000E510
 * Size:	00005C
 */
void __dt__Q27JStudio12TAdaptor_fogFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x44
  lis       r3, 0x804A
  subi      r0, r3, 0xCE4
  stw       r0, 0x0(r31)
  beq-      .loc_0x34
  lis       r3, 0x804A
  subi      r0, r3, 0xB98
  stw       r0, 0x0(r31)

.loc_0x34:
  extsh.    r0, r4
  ble-      .loc_0x44
  mr        r3, r31
  bl        0x15B64

.loc_0x44:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void __ct__Q27JStudio11TObject_fogFPCvUlPQ27JStudio12TAdaptor_fog(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000E56C
 * Size:	000058
 */
void __ct__Q27JStudio11TObject_fogFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio12TAdaptor_fog(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r5
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        0x1CF0
  lis       r3, 0x804A
  lis       r4, 0x804A
  subi      r0, r3, 0xBB8
  mr        r3, r30
  stw       r0, 0x8(r30)
  subi      r0, r4, 0xD04
  stw       r31, 0x34(r30)
  stw       r0, 0x8(r30)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8000E5C4
 * Size:	0001E8
 */
void do_paragraph__Q27JStudio11TObject_fogFUlPCvUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  mr        r7, r6
  stw       r0, 0x34(r1)
  mr        r0, r5
  stmw      r25, 0x14(r1)
  mr        r30, r3
  lwz       r31, 0x34(r3)
  cmplwi    r31, 0
  beq-      .loc_0x1D4
  rlwinm    r3,r4,27,5,31
  rlwinm    r6,r4,0,27,31
  subi      r4, r3, 0x1D
  cmplwi    r4, 0x10
  bgt-      .loc_0x1D4
  lis       r3, 0x804A
  rlwinm    r4,r4,2,0,29
  subi      r3, r3, 0x13EC
  lwzx      r3, r3, r4
  mtctr     r3
  bctr      
  li        r5, 0
  b         .loc_0xBC
  li        r5, 0x1
  b         .loc_0xBC
  li        r5, 0x2
  b         .loc_0xBC
  li        r5, 0x3
  b         .loc_0xBC
  li        r5, 0x4
  b         .loc_0xBC
  li        r5, 0x5
  b         .loc_0xBC
  lis       r3, 0x8047
  li        r4, 0x3
  addi      r3, r3, 0x33A8
  mr        r5, r3
  b         .loc_0x12C
  lis       r3, 0x8047
  li        r4, 0x4
  addi      r3, r3, 0x33B4
  mr        r5, r3
  b         .loc_0x12C
  subi      r5, r2, 0x7F40
  li        r4, 0x2
  b         .loc_0x12C
  b         .loc_0x1D4

.loc_0xBC:
  cmplwi    r6, 0x12
  bgt-      .loc_0x1D4
  lis       r4, 0x804A
  rlwinm    r3,r6,2,0,29
  subi      r4, r4, 0x1438
  lwzx      r3, r4, r3
  mtctr     r3
  bctr      
  lis       r3, 0x8001
  subi      r12, r3, 0x2A70
  b         .loc_0x114
  lis       r3, 0x8001
  subi      r12, r3, 0x2A58
  b         .loc_0x114
  lis       r3, 0x8001
  subi      r12, r3, 0x2A2C
  b         .loc_0x114
  lis       r3, 0x8001
  subi      r12, r3, 0x2A00
  b         .loc_0x114
  lis       r3, 0x8001
  subi      r12, r3, 0x2990

.loc_0x114:
  mr        r3, r31
  mr        r4, r30
  mr        r6, r0
  mtctr     r12
  bctrl     
  b         .loc_0x1D4

.loc_0x12C:
  cmpwi     r6, 0x3
  mr        r28, r0
  beq-      .loc_0x178
  bge-      .loc_0x14C
  cmpwi     r6, 0x1
  beq-      .loc_0x158
  bge-      .loc_0x168
  b         .loc_0x1D4

.loc_0x14C:
  cmpwi     r6, 0x12
  beq-      .loc_0x188
  b         .loc_0x1D4

.loc_0x158:
  lis       r3, 0x8001
  li        r27, 0
  subi      r29, r3, 0x2A70
  b         .loc_0x194

.loc_0x168:
  lis       r3, 0x8001
  li        r27, 0x4
  subi      r29, r3, 0x2A58
  b         .loc_0x194

.loc_0x178:
  lis       r3, 0x8001
  li        r27, 0x4
  subi      r29, r3, 0x2A2C
  b         .loc_0x194

.loc_0x188:
  lis       r3, 0x8001
  li        r27, 0x4
  subi      r29, r3, 0x2990

.loc_0x194:
  rlwinm    r0,r4,2,0,29
  mr        r26, r5
  add       r25, r5, r0
  b         .loc_0x1CC

.loc_0x1A4:
  mr        r12, r29
  mr        r3, r31
  mr        r4, r30
  mr        r6, r28
  mr        r7, r27
  lwz       r5, 0x0(r26)
  mtctr     r12
  addi      r26, r26, 0x4
  bctrl     
  add       r28, r28, r27

.loc_0x1CC:
  cmplw     r26, r25
  bne+      .loc_0x1A4

.loc_0x1D4:
  lmw       r25, 0x14(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8000E7AC
 * Size:	00005C
 */
void __dt__Q27JStudio14TAdaptor_lightFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x44
  lis       r3, 0x804A
  subi      r0, r3, 0xD2C
  stw       r0, 0x0(r31)
  beq-      .loc_0x34
  lis       r3, 0x804A
  subi      r0, r3, 0xB98
  stw       r0, 0x0(r31)

.loc_0x34:
  extsh.    r0, r4
  ble-      .loc_0x44
  mr        r3, r31
  bl        0x158C8

.loc_0x44:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void __ct__Q27JStudio13TObject_lightFPCvUlPQ27JStudio14TAdaptor_light(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000E808
 * Size:	000058
 */
void __ct__Q27JStudio13TObject_lightFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio14TAdaptor_light(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r5
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        0x1A54
  lis       r3, 0x804A
  lis       r4, 0x804A
  subi      r0, r3, 0xBB8
  mr        r3, r30
  stw       r0, 0x8(r30)
  subi      r0, r4, 0xD4C
  stw       r31, 0x34(r30)
  stw       r0, 0x8(r30)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8000E860
 * Size:	000370
 */
void do_paragraph__Q27JStudio13TObject_lightFUlPCvUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  mr        r7, r6
  stw       r0, 0x44(r1)
  mr        r0, r5
  stmw      r25, 0x24(r1)
  mr        r30, r3
  lis       r3, 0x8047
  addi      r11, r3, 0x3350
  lwz       r31, 0x34(r30)
  cmplwi    r31, 0
  beq-      .loc_0x35C
  lis       r3, 0x8048
  rlwinm    r8,r4,27,5,31
  subi      r10, r3, 0x60F0
  rlwinm    r4,r4,0,27,31
  lwz       r3, 0x4(r10)
  subi      r8, r8, 0x15
  lwz       r9, 0x0(r10)
  cmplwi    r8, 0x22
  stw       r3, 0xC(r1)
  stw       r9, 0x8(r1)
  lwz       r3, 0x8(r10)
  stw       r3, 0x10(r1)
  bgt-      .loc_0x35C
  lis       r3, 0x804A
  rlwinm    r8,r8,2,0,29
  subi      r3, r3, 0x12F8
  lwzx      r3, r3, r8
  mtctr     r3
  bctr      
  lis       r5, 0x804A
  lis       r3, 0x804F
  subi      r8, r5, 0x13A8
  lwz       r6, 0x0(r8)
  subi      r3, r3, 0x2D4
  lwz       r5, 0x4(r8)
  mr        r29, r3
  lwz       r3, 0x8(r8)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x170
  lis       r3, 0x804A
  subi      r8, r3, 0x139C
  lwz       r7, 0x0(r8)
  lwz       r3, 0x4(r8)
  lwz       r0, 0x8(r8)
  stw       r7, 0x8(r1)
  stw       r3, 0xC(r1)
  stw       r0, 0x10(r1)
  b         .loc_0x34C
  li        r5, 0
  b         .loc_0x230
  li        r5, 0x1
  b         .loc_0x230
  li        r5, 0x2
  b         .loc_0x230
  li        r5, 0x3
  b         .loc_0x230
  li        r5, 0x4
  b         .loc_0x230
  li        r5, 0x5
  b         .loc_0x230
  li        r5, 0x6
  b         .loc_0x230
  li        r5, 0x7
  b         .loc_0x230
  li        r5, 0x8
  b         .loc_0x230
  li        r5, 0x9
  b         .loc_0x230
  li        r5, 0xA
  b         .loc_0x230
  li        r5, 0xB
  b         .loc_0x230
  addi      r6, r11, 0x74
  li        r5, 0x3
  b         .loc_0x2A0
  addi      r6, r11, 0x80
  li        r5, 0x4
  b         .loc_0x2A0
  addi      r6, r11, 0x90
  li        r5, 0x3
  b         .loc_0x2A0
  addi      r6, r11, 0x9C
  li        r5, 0x3
  b         .loc_0x2A0
  subi      r6, r2, 0x7F38
  li        r5, 0x2
  b         .loc_0x2A0
  b         .loc_0x35C

.loc_0x170:
  cmpwi     r4, 0x13
  bge-      .loc_0x214
  cmpwi     r4, 0x10
  bge-      .loc_0x184
  b         .loc_0x214

.loc_0x184:
  cmplwi    r4, 0x12
  bgt-      .loc_0x1F4
  lis       r5, 0x804A
  rlwinm    r3,r4,2,0,29
  subi      r4, r5, 0x1344
  lwzx      r3, r4, r3
  mtctr     r3
  bctr      
  lis       r3, 0x8001
  subi      r12, r3, 0x2A70
  b         .loc_0x1DC
  lis       r3, 0x8001
  subi      r12, r3, 0x2A58
  b         .loc_0x1DC
  lis       r3, 0x8001
  subi      r12, r3, 0x2A2C
  b         .loc_0x1DC
  lis       r3, 0x8001
  subi      r12, r3, 0x2A00
  b         .loc_0x1DC
  lis       r3, 0x8001
  subi      r12, r3, 0x2990

.loc_0x1DC:
  mr        r3, r31
  mr        r4, r30
  mr        r6, r0
  li        r5, 0xC
  mtctr     r12
  bctrl     

.loc_0x1F4:
  cmplwi    r29, 0
  lwz       r3, 0x4(r31)
  beq-      .loc_0x208
  mr        r0, r29
  b         .loc_0x20C

.loc_0x208:
  subi      r0, r13, 0x78F0

.loc_0x20C:
  stw       r0, 0x100(r3)
  b         .loc_0x35C

.loc_0x214:
  mr        r3, r31
  mr        r5, r0
  mr        r6, r7
  addi      r12, r1, 0x8
  bl        0xB30A0
  nop       
  b         .loc_0x35C

.loc_0x230:
  cmplwi    r4, 0x12
  bgt-      .loc_0x35C
  lis       r6, 0x804A
  rlwinm    r3,r4,2,0,29
  subi      r4, r6, 0x1390
  lwzx      r3, r4, r3
  mtctr     r3
  bctr      
  lis       r3, 0x8001
  subi      r12, r3, 0x2A70
  b         .loc_0x288
  lis       r3, 0x8001
  subi      r12, r3, 0x2A58
  b         .loc_0x288
  lis       r3, 0x8001
  subi      r12, r3, 0x2A2C
  b         .loc_0x288
  lis       r3, 0x8001
  subi      r12, r3, 0x2A00
  b         .loc_0x288
  lis       r3, 0x8001
  subi      r12, r3, 0x2990

.loc_0x288:
  mr        r3, r31
  mr        r4, r30
  mr        r6, r0
  mtctr     r12
  bctrl     
  b         .loc_0x35C

.loc_0x2A0:
  cmpwi     r4, 0x3
  mr        r28, r0
  beq-      .loc_0x2EC
  bge-      .loc_0x2C0
  cmpwi     r4, 0x1
  beq-      .loc_0x2CC
  bge-      .loc_0x2DC
  b         .loc_0x35C

.loc_0x2C0:
  cmpwi     r4, 0x12
  beq-      .loc_0x2FC
  b         .loc_0x35C

.loc_0x2CC:
  lis       r3, 0x8001
  li        r27, 0
  subi      r29, r3, 0x2A70
  b         .loc_0x308

.loc_0x2DC:
  lis       r3, 0x8001
  li        r27, 0x4
  subi      r29, r3, 0x2A58
  b         .loc_0x308

.loc_0x2EC:
  lis       r3, 0x8001
  li        r27, 0x4
  subi      r29, r3, 0x2A2C
  b         .loc_0x308

.loc_0x2FC:
  lis       r3, 0x8001
  li        r27, 0x4
  subi      r29, r3, 0x2990

.loc_0x308:
  rlwinm    r0,r5,2,0,29
  mr        r26, r6
  add       r25, r6, r0
  b         .loc_0x340

.loc_0x318:
  mr        r12, r29
  mr        r3, r31
  mr        r4, r30
  mr        r6, r28
  mr        r7, r27
  lwz       r5, 0x0(r26)
  mtctr     r12
  addi      r26, r26, 0x4
  bctrl     
  add       r28, r28, r27

.loc_0x340:
  cmplw     r26, r25
  bne+      .loc_0x318
  b         .loc_0x35C

.loc_0x34C:
  mr        r3, r31
  addi      r12, r1, 0x8
  bl        0xB2F70
  nop       

.loc_0x35C:
  lmw       r25, 0x24(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	8000EBD0
 * Size:	00005C
 */
void __dt__Q27JStudio16TAdaptor_messageFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x44
  lis       r3, 0x804A
  subi      r0, r3, 0xD70
  stw       r0, 0x0(r31)
  beq-      .loc_0x34
  lis       r3, 0x804A
  subi      r0, r3, 0xB98
  stw       r0, 0x0(r31)

.loc_0x34:
  extsh.    r0, r4
  ble-      .loc_0x44
  mr        r3, r31
  bl        0x154A4

.loc_0x44:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void __ct__Q27JStudio15TObject_messageFPCvUlPQ27JStudio16TAdaptor_message(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000EC2C
 * Size:	000058
 */
void __ct__Q27JStudio15TObject_messageFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio16TAdaptor_message(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r5
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        0x1630
  lis       r3, 0x804A
  lis       r4, 0x804A
  subi      r0, r3, 0xBB8
  mr        r3, r30
  stw       r0, 0x8(r30)
  subi      r0, r4, 0xD90
  stw       r31, 0x34(r30)
  stw       r0, 0x8(r30)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8000EC84
 * Size:	000090
 */
void do_paragraph__Q27JStudio15TObject_messageFUlPCvUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  lwz       r3, 0x34(r3)
  cmplwi    r3, 0
  beq-      .loc_0x80
  lis       r7, 0x8048
  rlwinm    r9,r4,27,5,31
  subi      r8, r7, 0x60F0
  rlwinm    r4,r4,0,27,31
  lwz       r0, 0x4(r8)
  cmpwi     r9, 0x42
  lwz       r7, 0x0(r8)
  stw       r0, 0xC(r1)
  stw       r7, 0x8(r1)
  lwz       r0, 0x8(r8)
  stw       r0, 0x10(r1)
  beq-      .loc_0x4C
  b         .loc_0x80

.loc_0x4C:
  lis       r7, 0x804A
  subi      r9, r7, 0x126C
  lwz       r8, 0x0(r9)
  lwz       r7, 0x4(r9)
  lwz       r0, 0x8(r9)
  stw       r8, 0x8(r1)
  stw       r7, 0xC(r1)
  stw       r0, 0x10(r1)
  b         .loc_0x74
  b         .loc_0x80

.loc_0x74:
  addi      r12, r1, 0x8
  bl        0xB2E28
  nop       

.loc_0x80:
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8000ED14
 * Size:	00005C
 */
void __dt__Q27JStudio17TAdaptor_particleFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x44
  lis       r3, 0x804A
  subi      r0, r3, 0x1D68
  stw       r0, 0x0(r31)
  beq-      .loc_0x34
  lis       r3, 0x804A
  subi      r0, r3, 0xB98
  stw       r0, 0x0(r31)

.loc_0x34:
  extsh.    r0, r4
  ble-      .loc_0x44
  mr        r3, r31
  bl        0x15360

.loc_0x44:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void __ct__Q27JStudio16TObject_particleFPCvUlPQ27JStudio17TAdaptor_particle(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000ED70
 * Size:	000058
 */
void __ct__Q27JStudio16TObject_particleFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio17TAdaptor_particle(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r5
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        0x14EC
  lis       r3, 0x804A
  lis       r4, 0x804A
  subi      r0, r3, 0xBB8
  mr        r3, r30
  stw       r0, 0x8(r30)
  subi      r0, r4, 0xDF0
  stw       r31, 0x34(r30)
  stw       r0, 0x8(r30)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8000EDC8
 * Size:	000458
 */
void do_paragraph__Q27JStudio16TObject_particleFUlPCvUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  lis       r8, 0x8047
  mr        r7, r6
  stw       r0, 0x44(r1)
  mr        r0, r5
  addi      r10, r8, 0x3350
  stmw      r25, 0x24(r1)
  mr        r30, r3
  lwz       r31, 0x34(r3)
  lis       r3, 0x804A
  subi      r3, r3, 0x1968
  cmplwi    r31, 0
  beq-      .loc_0x444
  lis       r5, 0x8048
  rlwinm    r6,r4,27,5,31
  subi      r9, r5, 0x60F0
  rlwinm    r4,r4,0,27,31
  lwz       r5, 0x4(r9)
  subi      r6, r6, 0x9
  lwz       r8, 0x0(r9)
  cmplwi    r6, 0x47
  stw       r5, 0xC(r1)
  stw       r8, 0x8(r1)
  lwz       r5, 0x8(r9)
  stw       r5, 0x10(r1)
  bgt-      .loc_0x444
  lis       r5, 0x804A
  rlwinm    r6,r6,2,0,29
  subi      r5, r5, 0x1168
  lwzx      r5, r5, r6
  mtctr     r5
  bctr      
  lwz       r6, 0x708(r3)
  lwz       r5, 0x70C(r3)
  lwz       r3, 0x710(r3)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x42C
  lwz       r6, 0x714(r3)
  lwz       r5, 0x718(r3)
  lwz       r3, 0x71C(r3)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x42C
  lwz       r6, 0x720(r3)
  lwz       r5, 0x724(r3)
  lwz       r3, 0x728(r3)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x42C
  lwz       r6, 0x72C(r3)
  lwz       r5, 0x730(r3)
  lwz       r3, 0x734(r3)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x42C
  lwz       r6, 0x738(r3)
  lwz       r5, 0x73C(r3)
  lwz       r3, 0x740(r3)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x42C
  lwz       r6, 0x744(r3)
  lwz       r5, 0x748(r3)
  lwz       r3, 0x74C(r3)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x42C
  lwz       r6, 0x750(r3)
  lwz       r5, 0x754(r3)
  lwz       r3, 0x758(r3)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x42C
  lwz       r8, 0x75C(r3)
  lis       r5, 0x804F
  lwz       r6, 0x760(r3)
  subi      r5, r5, 0x2B8
  lwz       r3, 0x764(r3)
  mr        r29, r5
  stw       r8, 0x8(r1)
  stw       r6, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x250
  li        r5, 0
  b         .loc_0x310
  li        r5, 0x1
  b         .loc_0x310
  li        r5, 0x2
  b         .loc_0x310
  li        r5, 0x3
  b         .loc_0x310
  li        r5, 0x4
  b         .loc_0x310
  li        r5, 0x5
  b         .loc_0x310
  li        r5, 0x6
  b         .loc_0x310
  li        r5, 0x7
  b         .loc_0x310
  li        r5, 0x8
  b         .loc_0x310
  li        r5, 0x9
  b         .loc_0x310
  li        r5, 0xA
  b         .loc_0x310
  li        r5, 0xB
  b         .loc_0x310
  li        r5, 0xC
  b         .loc_0x310
  li        r5, 0xD
  b         .loc_0x310
  li        r5, 0xE
  b         .loc_0x310
  li        r5, 0xF
  b         .loc_0x310
  li        r5, 0x10
  b         .loc_0x310
  addi      r6, r10, 0xA8
  li        r5, 0x3
  b         .loc_0x380
  addi      r6, r10, 0xB4
  li        r5, 0x3
  b         .loc_0x380
  addi      r6, r10, 0xC0
  li        r5, 0x3
  b         .loc_0x380
  addi      r6, r10, 0xCC
  li        r5, 0x3
  b         .loc_0x380
  addi      r6, r10, 0xD8
  li        r5, 0x4
  b         .loc_0x380
  addi      r6, r10, 0xE8
  li        r5, 0x3
  b         .loc_0x380
  addi      r6, r10, 0xF4
  li        r5, 0x4
  b         .loc_0x380
  b         .loc_0x444

.loc_0x250:
  cmpwi     r4, 0x13
  bge-      .loc_0x2F4
  cmpwi     r4, 0x10
  bge-      .loc_0x264
  b         .loc_0x2F4

.loc_0x264:
  cmplwi    r4, 0x12
  bgt-      .loc_0x2D4
  lis       r5, 0x804A
  rlwinm    r3,r4,2,0,29
  subi      r4, r5, 0x11B4
  lwzx      r3, r4, r3
  mtctr     r3
  bctr      
  lis       r3, 0x8001
  subi      r12, r3, 0x2A70
  b         .loc_0x2BC
  lis       r3, 0x8001
  subi      r12, r3, 0x2A58
  b         .loc_0x2BC
  lis       r3, 0x8001
  subi      r12, r3, 0x2A2C
  b         .loc_0x2BC
  lis       r3, 0x8001
  subi      r12, r3, 0x2A00
  b         .loc_0x2BC
  lis       r3, 0x8001
  subi      r12, r3, 0x2990

.loc_0x2BC:
  mr        r3, r31
  mr        r4, r30
  mr        r6, r0
  li        r5, 0x11
  mtctr     r12
  bctrl     

.loc_0x2D4:
  cmplwi    r29, 0
  lwz       r3, 0x4(r31)
  beq-      .loc_0x2E8
  mr        r0, r29
  b         .loc_0x2EC

.loc_0x2E8:
  subi      r0, r13, 0x78F0

.loc_0x2EC:
  stw       r0, 0x164(r3)
  b         .loc_0x444

.loc_0x2F4:
  mr        r3, r31
  mr        r5, r0
  mr        r6, r7
  addi      r12, r1, 0x8
  bl        0xB2A58
  nop       
  b         .loc_0x444

.loc_0x310:
  cmplwi    r4, 0x12
  bgt-      .loc_0x444
  lis       r6, 0x804A
  rlwinm    r3,r4,2,0,29
  subi      r4, r6, 0x1200
  lwzx      r3, r4, r3
  mtctr     r3
  bctr      
  lis       r3, 0x8001
  subi      r12, r3, 0x2A70
  b         .loc_0x368
  lis       r3, 0x8001
  subi      r12, r3, 0x2A58
  b         .loc_0x368
  lis       r3, 0x8001
  subi      r12, r3, 0x2A2C
  b         .loc_0x368
  lis       r3, 0x8001
  subi      r12, r3, 0x2A00
  b         .loc_0x368
  lis       r3, 0x8001
  subi      r12, r3, 0x2990

.loc_0x368:
  mr        r3, r31
  mr        r4, r30
  mr        r6, r0
  mtctr     r12
  bctrl     
  b         .loc_0x444

.loc_0x380:
  cmpwi     r4, 0x3
  mr        r28, r0
  beq-      .loc_0x3CC
  bge-      .loc_0x3A0
  cmpwi     r4, 0x1
  beq-      .loc_0x3AC
  bge-      .loc_0x3BC
  b         .loc_0x444

.loc_0x3A0:
  cmpwi     r4, 0x12
  beq-      .loc_0x3DC
  b         .loc_0x444

.loc_0x3AC:
  lis       r3, 0x8001
  li        r27, 0
  subi      r29, r3, 0x2A70
  b         .loc_0x3E8

.loc_0x3BC:
  lis       r3, 0x8001
  li        r27, 0x4
  subi      r29, r3, 0x2A58
  b         .loc_0x3E8

.loc_0x3CC:
  lis       r3, 0x8001
  li        r27, 0x4
  subi      r29, r3, 0x2A2C
  b         .loc_0x3E8

.loc_0x3DC:
  lis       r3, 0x8001
  li        r27, 0x4
  subi      r29, r3, 0x2990

.loc_0x3E8:
  rlwinm    r0,r5,2,0,29
  mr        r26, r6
  add       r25, r6, r0
  b         .loc_0x420

.loc_0x3F8:
  mr        r12, r29
  mr        r3, r31
  mr        r4, r30
  mr        r6, r28
  mr        r7, r27
  lwz       r5, 0x0(r26)
  mtctr     r12
  addi      r26, r26, 0x4
  bctrl     
  add       r28, r28, r27

.loc_0x420:
  cmplw     r26, r25
  bne+      .loc_0x3F8
  b         .loc_0x444

.loc_0x42C:
  mr        r3, r31
  mr        r5, r0
  mr        r6, r7
  addi      r12, r1, 0x8
  bl        0xB2920
  nop       

.loc_0x444:
  lmw       r25, 0x24(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	8000F220
 * Size:	00005C
 */
void __dt__Q27JStudio14TAdaptor_soundFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x44
  lis       r3, 0x804A
  subi      r0, r3, 0xE34
  stw       r0, 0x0(r31)
  beq-      .loc_0x34
  lis       r3, 0x804A
  subi      r0, r3, 0xB98
  stw       r0, 0x0(r31)

.loc_0x34:
  extsh.    r0, r4
  ble-      .loc_0x44
  mr        r3, r31
  bl        0x14E54

.loc_0x44:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void __ct__Q27JStudio13TObject_soundFPCvUlPQ27JStudio14TAdaptor_sound(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000F27C
 * Size:	000058
 */
void __ct__Q27JStudio13TObject_soundFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio14TAdaptor_sound(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r5
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        0xFE0
  lis       r3, 0x804A
  lis       r4, 0x804A
  subi      r0, r3, 0xBB8
  mr        r3, r30
  stw       r0, 0x8(r30)
  subi      r0, r4, 0xE54
  stw       r31, 0x34(r30)
  stw       r0, 0x8(r30)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8000F2D4
 * Size:	0003F8
 */
void do_paragraph__Q27JStudio13TObject_soundFUlPCvUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  mr        r7, r6
  stw       r0, 0x44(r1)
  mr        r0, r5
  stmw      r25, 0x24(r1)
  mr        r30, r3
  lis       r3, 0x804A
  subi      r3, r3, 0x1968
  lwz       r31, 0x34(r30)
  cmplwi    r31, 0
  beq-      .loc_0x3E4
  lis       r5, 0x8048
  rlwinm    r6,r4,27,5,31
  subi      r9, r5, 0x60F0
  rlwinm    r4,r4,0,27,31
  lwz       r5, 0x4(r9)
  subi      r6, r6, 0x15
  lwz       r8, 0x0(r9)
  cmplwi    r6, 0x3B
  stw       r5, 0xC(r1)
  stw       r8, 0x8(r1)
  lwz       r5, 0x8(r9)
  stw       r5, 0x10(r1)
  bgt-      .loc_0x3E4
  lis       r5, 0x804A
  rlwinm    r6,r6,2,0,29
  subi      r5, r5, 0xF44
  lwzx      r5, r5, r6
  mtctr     r5
  bctr      
  lwz       r6, 0x920(r3)
  lwz       r5, 0x924(r3)
  lwz       r3, 0x928(r3)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x3CC
  lwz       r6, 0x92C(r3)
  lwz       r5, 0x930(r3)
  lwz       r3, 0x934(r3)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x3CC
  lwz       r6, 0x938(r3)
  lwz       r5, 0x93C(r3)
  lwz       r3, 0x940(r3)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x3CC
  lwz       r6, 0x944(r3)
  lwz       r5, 0x948(r3)
  lwz       r3, 0x94C(r3)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x3CC
  lwz       r6, 0x950(r3)
  lwz       r5, 0x954(r3)
  lwz       r3, 0x958(r3)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x3CC
  lwz       r6, 0x95C(r3)
  lwz       r5, 0x960(r3)
  lwz       r3, 0x964(r3)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x3CC
  lwz       r6, 0x968(r3)
  lwz       r5, 0x96C(r3)
  lwz       r3, 0x970(r3)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x3CC
  lwz       r8, 0x974(r3)
  lis       r5, 0x804F
  lwz       r6, 0x978(r3)
  subi      r5, r5, 0x29C
  lwz       r3, 0x97C(r3)
  mr        r28, r5
  stw       r8, 0x8(r1)
  li        r29, 0x3
  stw       r6, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x1EC
  lwz       r8, 0x980(r3)
  lis       r5, 0x804F
  lwz       r6, 0x984(r3)
  subi      r5, r5, 0x280
  lwz       r3, 0x988(r3)
  mr        r28, r5
  stw       r8, 0x8(r1)
  li        r29, 0x4
  stw       r6, 0xC(r1)
  stw       r3, 0x10(r1)
  b         .loc_0x1EC
  li        r5, 0
  b         .loc_0x2B4
  li        r5, 0x1
  b         .loc_0x2B4
  li        r5, 0x2
  b         .loc_0x2B4
  li        r5, 0x5
  b         .loc_0x2B4
  li        r5, 0x6
  b         .loc_0x2B4
  li        r5, 0x7
  b         .loc_0x2B4
  li        r5, 0x8
  b         .loc_0x2B4
  li        r5, 0x9
  b         .loc_0x2B4
  lis       r3, 0x8047
  addi      r3, r3, 0x3454
  mr        r5, r3
  b         .loc_0x324
  b         .loc_0x3E4

.loc_0x1EC:
  cmpwi     r4, 0x13
  bge-      .loc_0x298
  cmpwi     r4, 0x10
  bge-      .loc_0x200
  b         .loc_0x298

.loc_0x200:
  cmplwi    r4, 0x12
  bgt-      .loc_0x270
  lis       r5, 0x804A
  rlwinm    r3,r4,2,0,29
  subi      r4, r5, 0xF90
  lwzx      r3, r4, r3
  mtctr     r3
  bctr      
  lis       r3, 0x8001
  subi      r12, r3, 0x2A70
  b         .loc_0x258
  lis       r3, 0x8001
  subi      r12, r3, 0x2A58
  b         .loc_0x258
  lis       r3, 0x8001
  subi      r12, r3, 0x2A2C
  b         .loc_0x258
  lis       r3, 0x8001
  subi      r12, r3, 0x2A00
  b         .loc_0x258
  lis       r3, 0x8001
  subi      r12, r3, 0x2990

.loc_0x258:
  mr        r3, r31
  mr        r4, r30
  mr        r5, r29
  mr        r6, r0
  mtctr     r12
  bctrl     

.loc_0x270:
  mulli     r0, r29, 0x14
  lwz       r3, 0x4(r31)
  cmplwi    r28, 0
  add       r3, r3, r0
  beq-      .loc_0x28C
  mr        r0, r28
  b         .loc_0x290

.loc_0x28C:
  subi      r0, r13, 0x78F0

.loc_0x290:
  stw       r0, 0x10(r3)
  b         .loc_0x3E4

.loc_0x298:
  mr        r3, r31
  mr        r5, r0
  mr        r6, r7
  addi      r12, r1, 0x8
  bl        0xB25A8
  nop       
  b         .loc_0x3E4

.loc_0x2B4:
  cmplwi    r4, 0x12
  bgt-      .loc_0x3E4
  lis       r6, 0x804A
  rlwinm    r3,r4,2,0,29
  subi      r4, r6, 0xFDC
  lwzx      r3, r4, r3
  mtctr     r3
  bctr      
  lis       r3, 0x8001
  subi      r12, r3, 0x2A70
  b         .loc_0x30C
  lis       r3, 0x8001
  subi      r12, r3, 0x2A58
  b         .loc_0x30C
  lis       r3, 0x8001
  subi      r12, r3, 0x2A2C
  b         .loc_0x30C
  lis       r3, 0x8001
  subi      r12, r3, 0x2A00
  b         .loc_0x30C
  lis       r3, 0x8001
  subi      r12, r3, 0x2990

.loc_0x30C:
  mr        r3, r31
  mr        r4, r30
  mr        r6, r0
  mtctr     r12
  bctrl     
  b         .loc_0x3E4

.loc_0x324:
  cmpwi     r4, 0x3
  mr        r29, r0
  beq-      .loc_0x370
  bge-      .loc_0x344
  cmpwi     r4, 0x1
  beq-      .loc_0x350
  bge-      .loc_0x360
  b         .loc_0x3E4

.loc_0x344:
  cmpwi     r4, 0x12
  beq-      .loc_0x380
  b         .loc_0x3E4

.loc_0x350:
  lis       r3, 0x8001
  li        r27, 0
  subi      r28, r3, 0x2A70
  b         .loc_0x38C

.loc_0x360:
  lis       r3, 0x8001
  li        r27, 0x4
  subi      r28, r3, 0x2A58
  b         .loc_0x38C

.loc_0x370:
  lis       r3, 0x8001
  li        r27, 0x4
  subi      r28, r3, 0x2A2C
  b         .loc_0x38C

.loc_0x380:
  lis       r3, 0x8001
  li        r27, 0x4
  subi      r28, r3, 0x2990

.loc_0x38C:
  mr        r26, r5
  addi      r25, r5, 0xC
  b         .loc_0x3C0

.loc_0x398:
  mr        r12, r28
  mr        r3, r31
  mr        r4, r30
  mr        r6, r29
  mr        r7, r27
  lwz       r5, 0x0(r26)
  mtctr     r12
  addi      r26, r26, 0x4
  bctrl     
  add       r29, r29, r27

.loc_0x3C0:
  cmplw     r26, r25
  bne+      .loc_0x398
  b         .loc_0x3E4

.loc_0x3CC:
  mr        r3, r31
  mr        r5, r0
  mr        r6, r7
  addi      r12, r1, 0x8
  bl        0xB2474
  nop       

.loc_0x3E4:
  lmw       r25, 0x24(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	8000F6CC
 * Size:	000094
 */
void __dt__Q27JStudio13TObject_soundFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr.       r30, r3
  beq-      .loc_0x78
  lis       r3, 0x804A
  subi      r0, r3, 0xE54
  stw       r0, 0x8(r30)
  beq-      .loc_0x68
  lis       r3, 0x804A
  subi      r0, r3, 0xBB8
  stw       r0, 0x8(r30)
  lwz       r3, 0x34(r30)
  cmplwi    r3, 0
  beq-      .loc_0x5C
  lwz       r12, 0x0(r3)
  li        r4, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x5C:
  mr        r3, r30
  li        r4, 0
  bl        0xBB8

.loc_0x68:
  extsh.    r0, r31
  ble-      .loc_0x78
  mr        r3, r30
  bl        0x14974

.loc_0x78:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8000F760
 * Size:	000094
 */
void __dt__Q27JStudio16TObject_particleFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr.       r30, r3
  beq-      .loc_0x78
  lis       r3, 0x804A
  subi      r0, r3, 0xDF0
  stw       r0, 0x8(r30)
  beq-      .loc_0x68
  lis       r3, 0x804A
  subi      r0, r3, 0xBB8
  stw       r0, 0x8(r30)
  lwz       r3, 0x34(r30)
  cmplwi    r3, 0
  beq-      .loc_0x5C
  lwz       r12, 0x0(r3)
  li        r4, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x5C:
  mr        r3, r30
  li        r4, 0
  bl        0xB24

.loc_0x68:
  extsh.    r0, r31
  ble-      .loc_0x78
  mr        r3, r30
  bl        0x148E0

.loc_0x78:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8000F7F4
 * Size:	000094
 */
void __dt__Q27JStudio15TObject_messageFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr.       r30, r3
  beq-      .loc_0x78
  lis       r3, 0x804A
  subi      r0, r3, 0xD90
  stw       r0, 0x8(r30)
  beq-      .loc_0x68
  lis       r3, 0x804A
  subi      r0, r3, 0xBB8
  stw       r0, 0x8(r30)
  lwz       r3, 0x34(r30)
  cmplwi    r3, 0
  beq-      .loc_0x5C
  lwz       r12, 0x0(r3)
  li        r4, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x5C:
  mr        r3, r30
  li        r4, 0
  bl        0xA90

.loc_0x68:
  extsh.    r0, r31
  ble-      .loc_0x78
  mr        r3, r30
  bl        0x1484C

.loc_0x78:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8000F888
 * Size:	000094
 */
void __dt__Q27JStudio13TObject_lightFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr.       r30, r3
  beq-      .loc_0x78
  lis       r3, 0x804A
  subi      r0, r3, 0xD4C
  stw       r0, 0x8(r30)
  beq-      .loc_0x68
  lis       r3, 0x804A
  subi      r0, r3, 0xBB8
  stw       r0, 0x8(r30)
  lwz       r3, 0x34(r30)
  cmplwi    r3, 0
  beq-      .loc_0x5C
  lwz       r12, 0x0(r3)
  li        r4, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x5C:
  mr        r3, r30
  li        r4, 0
  bl        0x9FC

.loc_0x68:
  extsh.    r0, r31
  ble-      .loc_0x78
  mr        r3, r30
  bl        0x147B8

.loc_0x78:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8000F91C
 * Size:	000094
 */
void __dt__Q27JStudio11TObject_fogFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr.       r30, r3
  beq-      .loc_0x78
  lis       r3, 0x804A
  subi      r0, r3, 0xD04
  stw       r0, 0x8(r30)
  beq-      .loc_0x68
  lis       r3, 0x804A
  subi      r0, r3, 0xBB8
  stw       r0, 0x8(r30)
  lwz       r3, 0x34(r30)
  cmplwi    r3, 0
  beq-      .loc_0x5C
  lwz       r12, 0x0(r3)
  li        r4, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x5C:
  mr        r3, r30
  li        r4, 0
  bl        0x968

.loc_0x68:
  extsh.    r0, r31
  ble-      .loc_0x78
  mr        r3, r30
  bl        0x14724

.loc_0x78:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8000F9B0
 * Size:	000094
 */
void __dt__Q27JStudio14TObject_cameraFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr.       r30, r3
  beq-      .loc_0x78
  lis       r3, 0x804A
  subi      r0, r3, 0xCC4
  stw       r0, 0x8(r30)
  beq-      .loc_0x68
  lis       r3, 0x804A
  subi      r0, r3, 0xBB8
  stw       r0, 0x8(r30)
  lwz       r3, 0x34(r30)
  cmplwi    r3, 0
  beq-      .loc_0x5C
  lwz       r12, 0x0(r3)
  li        r4, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x5C:
  mr        r3, r30
  li        r4, 0
  bl        0x8D4

.loc_0x68:
  extsh.    r0, r31
  ble-      .loc_0x78
  mr        r3, r30
  bl        0x14690

.loc_0x78:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8000FA44
 * Size:	000094
 */
void __dt__Q27JStudio20TObject_ambientLightFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr.       r30, r3
  beq-      .loc_0x78
  lis       r3, 0x804A
  subi      r0, r3, 0xC68
  stw       r0, 0x8(r30)
  beq-      .loc_0x68
  lis       r3, 0x804A
  subi      r0, r3, 0xBB8
  stw       r0, 0x8(r30)
  lwz       r3, 0x34(r30)
  cmplwi    r3, 0
  beq-      .loc_0x5C
  lwz       r12, 0x0(r3)
  li        r4, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x5C:
  mr        r3, r30
  li        r4, 0
  bl        0x840

.loc_0x68:
  extsh.    r0, r31
  ble-      .loc_0x78
  mr        r3, r30
  bl        0x145FC

.loc_0x78:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8000FAD8
 * Size:	000094
 */
void __dt__Q27JStudio13TObject_actorFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr.       r30, r3
  beq-      .loc_0x78
  lis       r3, 0x804A
  subi      r0, r3, 0xC28
  stw       r0, 0x8(r30)
  beq-      .loc_0x68
  lis       r3, 0x804A
  subi      r0, r3, 0xBB8
  stw       r0, 0x8(r30)
  lwz       r3, 0x34(r30)
  cmplwi    r3, 0
  beq-      .loc_0x5C
  lwz       r12, 0x0(r3)
  li        r4, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x5C:
  mr        r3, r30
  li        r4, 0
  bl        0x7AC

.loc_0x68:
  extsh.    r0, r31
  ble-      .loc_0x78
  mr        r3, r30
  bl        0x14568

.loc_0x78:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8000FB6C
 * Size:	000284
 */
void __sinit_jstudio-object_cpp(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r5, 0x804A
  lis       r3, 0x804A
  stw       r0, 0x14(r1)
  lis       r4, 0x804F
  subi      r8, r5, 0xB18
  stw       r31, 0xC(r1)
  subi      r31, r4, 0x350
  lis       r4, 0x8001
  stw       r30, 0x8(r1)
  subi      r30, r3, 0x1968
  lis       r3, 0x804A
  subi      r4, r4, 0xA0
  subi      r9, r3, 0xB68
  lwz       r7, 0x0(r30)
  stw       r9, 0xC(r31)
  addi      r3, r31, 0xC
  lwz       r6, 0x4(r30)
  addi      r5, r31, 0
  lwz       r0, 0x8(r30)
  stw       r8, 0xC(r31)
  stw       r7, 0x4(r3)
  stw       r6, 0x8(r3)
  stw       r0, 0xC(r3)
  bl        0xB1B30
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r0, r3, 0xB68
  lis       r4, 0x8001
  stw       r0, 0x28(r31)
  subi      r5, r5, 0xB18
  lwz       r7, 0xC(r30)
  addi      r3, r31, 0x28
  lwz       r6, 0x10(r30)
  subi      r4, r4, 0xA0
  lwz       r0, 0x14(r30)
  stw       r5, 0x28(r31)
  addi      r5, r31, 0x1C
  stw       r7, 0x4(r3)
  stw       r6, 0x8(r3)
  stw       r0, 0xC(r3)
  bl        0xB1AEC
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r0, r3, 0xB68
  lis       r4, 0x8001
  stw       r0, 0x44(r31)
  subi      r5, r5, 0xB28
  lwz       r7, 0x18(r30)
  addi      r3, r31, 0x44
  lwz       r6, 0x1C(r30)
  subi      r4, r4, 0xFC
  lwz       r0, 0x20(r30)
  stw       r5, 0x44(r31)
  addi      r5, r31, 0x38
  stw       r7, 0x4(r3)
  stw       r6, 0x8(r3)
  stw       r0, 0xC(r3)
  bl        0xB1AA8
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r0, r3, 0xB68
  lis       r4, 0x8001
  stw       r0, 0x60(r31)
  subi      r5, r5, 0xB28
  lwz       r7, 0x24(r30)
  addi      r3, r31, 0x60
  lwz       r6, 0x28(r30)
  subi      r4, r4, 0xFC
  lwz       r0, 0x2C(r30)
  stw       r5, 0x60(r31)
  addi      r5, r31, 0x54
  stw       r7, 0x4(r3)
  stw       r6, 0x8(r3)
  stw       r0, 0xC(r3)
  bl        0xB1A64
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r0, r3, 0xB68
  lis       r4, 0x8001
  stw       r0, 0x7C(r31)
  subi      r5, r5, 0xB38
  lwz       r7, 0x30(r30)
  addi      r3, r31, 0x7C
  lwz       r6, 0x34(r30)
  subi      r4, r4, 0x158
  lwz       r0, 0x38(r30)
  stw       r5, 0x7C(r31)
  addi      r5, r31, 0x70
  stw       r7, 0x4(r3)
  stw       r6, 0x8(r3)
  stw       r0, 0xC(r3)
  bl        0xB1A20
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r0, r3, 0xB68
  lis       r4, 0x8001
  stw       r0, 0x98(r31)
  subi      r5, r5, 0xB48
  lwz       r7, 0x3C(r30)
  addi      r3, r31, 0x98
  lwz       r6, 0x40(r30)
  subi      r4, r4, 0x1B4
  lwz       r0, 0x44(r30)
  stw       r5, 0x98(r31)
  addi      r5, r31, 0x8C
  stw       r7, 0x4(r3)
  stw       r6, 0x8(r3)
  stw       r0, 0xC(r3)
  bl        0xB19DC
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r0, r3, 0xB68
  lis       r4, 0x8001
  stw       r0, 0xB4(r31)
  subi      r5, r5, 0xB58
  lwz       r7, 0x48(r30)
  addi      r3, r31, 0xB4
  lwz       r6, 0x4C(r30)
  subi      r4, r4, 0x210
  lwz       r0, 0x50(r30)
  stw       r5, 0xB4(r31)
  addi      r5, r31, 0xA8
  stw       r7, 0x4(r3)
  stw       r6, 0x8(r3)
  stw       r0, 0xC(r3)
  bl        0xB1998
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r0, r3, 0xB68
  lis       r4, 0x8001
  stw       r0, 0xD0(r31)
  subi      r5, r5, 0xB58
  lwz       r7, 0x54(r30)
  addi      r3, r31, 0xD0
  lwz       r6, 0x58(r30)
  subi      r4, r4, 0x210
  lwz       r0, 0x5C(r30)
  stw       r5, 0xD0(r31)
  addi      r5, r31, 0xC4
  stw       r7, 0x4(r3)
  stw       r6, 0x8(r3)
  stw       r0, 0xC(r3)
  bl        0xB1954
  lis       r4, 0x804A
  addi      r0, r30, 0xDF0
  subi      r4, r4, 0xB68
  lis       r3, 0x8001
  stw       r4, -0x78F0(r13)
  subi      r4, r3, 0x2E9C
  addi      r5, r31, 0xE0
  subi      r3, r13, 0x78F0
  stw       r0, -0x78F0(r13)
  bl        0xB192C
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8000FDF0
 * Size:	00005C
 */
void __dt__Q37JStudio28@unnamed@jstudio_object_cpp@54TOutputVariableValue_BOOL_<JStudio::TAdaptor_sound>Fv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x44
  lis       r3, 0x804A
  subi      r0, r3, 0xB58
  stw       r0, 0x0(r31)
  beq-      .loc_0x34
  lis       r3, 0x804A
  subi      r0, r3, 0xB68
  stw       r0, 0x0(r31)

.loc_0x34:
  extsh.    r0, r4
  ble-      .loc_0x44
  mr        r3, r31
  bl        0x14284

.loc_0x44:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8000FE4C
 * Size:	00005C
 */
void __dt__Q37JStudio28@unnamed@jstudio_object_cpp@57TOutputVariableValue_BOOL_<JStudio::TAdaptor_particle>Fv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x44
  lis       r3, 0x804A
  subi      r0, r3, 0xB48
  stw       r0, 0x0(r31)
  beq-      .loc_0x34
  lis       r3, 0x804A
  subi      r0, r3, 0xB68
  stw       r0, 0x0(r31)

.loc_0x34:
  extsh.    r0, r4
  ble-      .loc_0x44
  mr        r3, r31
  bl        0x14228

.loc_0x44:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8000FEA8
 * Size:	00005C
 */
void __dt__Q37JStudio28@unnamed@jstudio_object_cpp@54TOutputVariableValue_BOOL_<JStudio::TAdaptor_light>Fv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x44
  lis       r3, 0x804A
  subi      r0, r3, 0xB38
  stw       r0, 0x0(r31)
  beq-      .loc_0x34
  lis       r3, 0x804A
  subi      r0, r3, 0xB68
  stw       r0, 0x0(r31)

.loc_0x34:
  extsh.    r0, r4
  ble-      .loc_0x44
  mr        r3, r31
  bl        0x141CC

.loc_0x44:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8000FF04
 * Size:	00005C
 */
void __dt__Q37JStudio28@unnamed@jstudio_object_cpp@55TOutputVariableValue_BOOL_<JStudio::TAdaptor_camera>Fv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x44
  lis       r3, 0x804A
  subi      r0, r3, 0xB28
  stw       r0, 0x0(r31)
  beq-      .loc_0x34
  lis       r3, 0x804A
  subi      r0, r3, 0xB68
  stw       r0, 0x0(r31)

.loc_0x34:
  extsh.    r0, r4
  ble-      .loc_0x44
  mr        r3, r31
  bl        0x14170

.loc_0x44:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8000FF60
 * Size:	00005C
 */
void __dt__Q37JStudio28@unnamed@jstudio_object_cpp@54TOutputVariableValue_BOOL_<JStudio::TAdaptor_actor>Fv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x44
  lis       r3, 0x804A
  subi      r0, r3, 0xB18
  stw       r0, 0x0(r31)
  beq-      .loc_0x34
  lis       r3, 0x804A
  subi      r0, r3, 0xB68
  stw       r0, 0x0(r31)

.loc_0x34:
  extsh.    r0, r4
  ble-      .loc_0x44
  mr        r3, r31
  bl        0x14114

.loc_0x44:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8000FFBC
 * Size:	00005C
 */
void __cl__Q37JStudio28@unnamed@jstudio_object_cpp@54TOutputVariableValue_BOOL_<JStudio::TAdaptor_sound>CFfPQ27JStudio8TAdaptor(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x7F30(r2)
  mr        r6, r3
  stw       r0, 0x14(r1)
  li        r0, 0
  fcmpo     cr0, f1, f0
  stw       r0, 0x8(r1)
  cror      2, 0x1, 0x2
  bne-      .loc_0x30
  li        r0, 0x1
  stw       r0, 0x8(r1)

.loc_0x30:
  mr        r3, r4
  addi      r5, r1, 0x8
  addi      r12, r6, 0x4
  li        r4, 0x2
  li        r6, 0x4
  bl        0xB1B24
  nop       
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80010018
 * Size:	00005C
 */
void __cl__Q37JStudio28@unnamed@jstudio_object_cpp@57TOutputVariableValue_BOOL_<JStudio::TAdaptor_particle>CFfPQ27JStudio8TAdaptor(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x7F30(r2)
  mr        r6, r3
  stw       r0, 0x14(r1)
  li        r0, 0
  fcmpo     cr0, f1, f0
  stw       r0, 0x8(r1)
  cror      2, 0x1, 0x2
  bne-      .loc_0x30
  li        r0, 0x1
  stw       r0, 0x8(r1)

.loc_0x30:
  mr        r3, r4
  addi      r5, r1, 0x8
  addi      r12, r6, 0x4
  li        r4, 0x2
  li        r6, 0x4
  bl        0xB1AC8
  nop       
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80010074
 * Size:	00005C
 */
void __cl__Q37JStudio28@unnamed@jstudio_object_cpp@54TOutputVariableValue_BOOL_<JStudio::TAdaptor_light>CFfPQ27JStudio8TAdaptor(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x7F30(r2)
  mr        r6, r3
  stw       r0, 0x14(r1)
  li        r0, 0
  fcmpo     cr0, f1, f0
  stw       r0, 0x8(r1)
  cror      2, 0x1, 0x2
  bne-      .loc_0x30
  li        r0, 0x1
  stw       r0, 0x8(r1)

.loc_0x30:
  mr        r3, r4
  addi      r5, r1, 0x8
  addi      r12, r6, 0x4
  li        r4, 0x2
  li        r6, 0x4
  bl        0xB1A6C
  nop       
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800100D0
 * Size:	00005C
 */
void __cl__Q37JStudio28@unnamed@jstudio_object_cpp@55TOutputVariableValue_BOOL_<JStudio::TAdaptor_camera>CFfPQ27JStudio8TAdaptor(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x7F30(r2)
  mr        r6, r3
  stw       r0, 0x14(r1)
  li        r0, 0
  fcmpo     cr0, f1, f0
  stw       r0, 0x8(r1)
  cror      2, 0x1, 0x2
  bne-      .loc_0x30
  li        r0, 0x1
  stw       r0, 0x8(r1)

.loc_0x30:
  mr        r3, r4
  addi      r5, r1, 0x8
  addi      r12, r6, 0x4
  li        r4, 0x2
  li        r6, 0x4
  bl        0xB1A10
  nop       
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8001012C
 * Size:	00005C
 */
void __cl__Q37JStudio28@unnamed@jstudio_object_cpp@54TOutputVariableValue_BOOL_<JStudio::TAdaptor_actor>CFfPQ27JStudio8TAdaptor(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x7F30(r2)
  mr        r6, r3
  stw       r0, 0x14(r1)
  li        r0, 0
  fcmpo     cr0, f1, f0
  stw       r0, 0x8(r1)
  cror      2, 0x1, 0x2
  bne-      .loc_0x30
  li        r0, 0x1
  stw       r0, 0x8(r1)

.loc_0x30:
  mr        r3, r4
  addi      r5, r1, 0x8
  addi      r12, r6, 0x4
  li        r4, 0x2
  li        r6, 0x4
  bl        0xB19B4
  nop       
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}