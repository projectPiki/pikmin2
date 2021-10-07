
/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void TRKInitializeEndian(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BB6B0
 * Size:	000028
 */
extern char lbl_804796C8[27];
extern void TRK_board_display(char*);
void TRKNubWelcome(void)
{

	TRK_board_display(lbl_804796C8); //"MetroTRK for GAMECUBE v2.6"
	return;
}

/*
 * --INFO--
 * Address:	800BB6D8
 * Size:	000024
 */
extern unsigned int TRKTerminateSerialHandler(void);
unsigned int TRKTerminateNub(void)
{

	TRKTerminateSerialHandler();
	return 0;

}

/*
 * --INFO--
 * Address:	800BB6FC
 * Size:	00014C
 */
//void TRKInitializeNub(void)
//{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  li        r5, 0x12
  li        r4, 0x34
  stw       r0, 0x24(r1)
  li        r3, 0x56
  li        r0, 0x78
  li        r6, 0x1
  stb       r5, 0x8(r1)
  lis       r5, 0x804F
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  stb       r4, 0x9(r1)
  stb       r3, 0xA(r1)
  stb       r0, 0xB(r1)
  lwz       r3, 0x8(r1)
  stwu      r6, 0x28A8(r5)
  subis     r0, r3, 0x1234
  cmplwi    r0, 0x5678
  bne-      .loc_0x5C
  stw       r6, 0x0(r5)
  b         .loc_0x74

.loc_0x5C:
  subis     r0, r3, 0x7856
  cmplwi    r0, 0x3412
  bne-      .loc_0x70
  stw       r31, 0x0(r5)
  b         .loc_0x74

.loc_0x70:
  mr        r31, r6

.loc_0x74:
  lis       r3, 0x8048
  subi      r4, r3, 0x691C
  li        r3, 0x1
  crclr     6, 0x6
  bl        0x5DC8
  cmpwi     r31, 0
  bne-      .loc_0x94
  bl        0xBF4

.loc_0x94:
  cmpwi     r31, 0
  bne-      .loc_0xA4
  bl        -0x140
  mr        r31, r3

.loc_0xA4:
  cmpwi     r31, 0
  bne-      .loc_0xB4
  bl        0x8AC
  mr        r31, r3

.loc_0xB4:
  cmpwi     r31, 0
  bne-      .loc_0xC4
  bl        0xDC4
  mr        r31, r3

.loc_0xC4:
  bl        0x4D30
  cmpwi     r31, 0
  bne-      .loc_0xD8
  bl        0x904
  mr        r31, r3

.loc_0xD8:
  cmpwi     r31, 0
  bne-      .loc_0xE8
  bl        0x4A40
  mr        r31, r3

.loc_0xE8:
  cmpwi     r31, 0
  bne-      .loc_0x130
  lis       r3, 0x8051
  lis       r5, 0x1
  addi      r6, r3, 0x5308
  li        r4, 0x1
  subi      r3, r5, 0x1F00
  li        r5, 0
  bl        0x4EC4
  lis       r4, 0x8051
  mr        r0, r3
  addi      r3, r4, 0x5308
  lwz       r3, 0x0(r3)
  mr        r30, r0
  bl        0x2B2C
  cmpwi     r30, 0
  beq-      .loc_0x130
  mr        r31, r30

.loc_0x130:
  lwz       r0, 0x24(r1)
  mr        r3, r31
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
//}