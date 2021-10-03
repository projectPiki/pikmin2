

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80307DCC
 * Size:	0000E4
 */
void og::Screen::MapCounter::__ct( (og::Screen::DataMap *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  bl        0x12CFC0
  lis       r4, 0x804E
  addi      r3, r30, 0x4
  subi      r4, r4, 0x7F38
  addi      r0, r30, 0x8
  stw       r4, 0x0(r29)
  addi      r31, r30, 0xC
  addi      r12, r30, 0x10
  addi      r11, r30, 0x14
  stw       r30, 0x148(r29)
  addi      r10, r30, 0x18
  addi      r9, r30, 0x1C
  addi      r8, r30, 0x20
  stw       r3, 0x178(r29)
  addi      r7, r30, 0x24
  addi      r6, r30, 0x28
  addi      r5, r30, 0x2C
  stw       r0, 0x17C(r29)
  addi      r4, r30, 0x30
  li        r0, 0
  mr        r3, r29
  stw       r31, 0x180(r29)
  stw       r12, 0x184(r29)
  stw       r11, 0x188(r29)
  stw       r10, 0x18C(r29)
  stw       r9, 0x190(r29)
  stw       r8, 0x194(r29)
  stw       r7, 0x198(r29)
  stw       r6, 0x19C(r29)
  stw       r5, 0x1A0(r29)
  stw       r4, 0x1A4(r29)
  stw       r0, 0x14C(r29)
  stw       r0, 0x150(r29)
  stw       r0, 0x154(r29)
  stw       r0, 0x158(r29)
  stw       r0, 0x15C(r29)
  stw       r0, 0x160(r29)
  stw       r0, 0x164(r29)
  stw       r0, 0x168(r29)
  stw       r0, 0x16C(r29)
  stw       r0, 0x170(r29)
  stw       r0, 0x174(r29)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80307EB0
 * Size:	000038
 */
void og::Screen::MapCounter::dispRed( (bool))
{
/*
.loc_0x0:
  rlwinm.   r0,r4,0,24,31
  beq-      .loc_0x20
  lwz       r4, 0x14C(r3)
  li        r0, 0x1
  stb       r0, 0xB0(r4)
  lwz       r3, 0x160(r3)
  stb       r0, 0xB0(r3)
  blr       

.loc_0x20:
  lwz       r4, 0x14C(r3)
  li        r0, 0
  stb       r0, 0xB0(r4)
  lwz       r3, 0x160(r3)
  stb       r0, 0xB0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80307EE8
 * Size:	000038
 */
void og::Screen::MapCounter::dispYellow( (bool))
{
/*
.loc_0x0:
  rlwinm.   r0,r4,0,24,31
  beq-      .loc_0x20
  lwz       r4, 0x150(r3)
  li        r0, 0x1
  stb       r0, 0xB0(r4)
  lwz       r3, 0x164(r3)
  stb       r0, 0xB0(r3)
  blr       

.loc_0x20:
  lwz       r4, 0x150(r3)
  li        r0, 0
  stb       r0, 0xB0(r4)
  lwz       r3, 0x164(r3)
  stb       r0, 0xB0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80307F20
 * Size:	000038
 */
void og::Screen::MapCounter::dispBlue( (bool))
{
/*
.loc_0x0:
  rlwinm.   r0,r4,0,24,31
  beq-      .loc_0x20
  lwz       r4, 0x154(r3)
  li        r0, 0x1
  stb       r0, 0xB0(r4)
  lwz       r3, 0x168(r3)
  stb       r0, 0xB0(r3)
  blr       

.loc_0x20:
  lwz       r4, 0x154(r3)
  li        r0, 0
  stb       r0, 0xB0(r4)
  lwz       r3, 0x168(r3)
  stb       r0, 0xB0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80307F58
 * Size:	000038
 */
void og::Screen::MapCounter::dispWhite( (bool))
{
/*
.loc_0x0:
  rlwinm.   r0,r4,0,24,31
  beq-      .loc_0x20
  lwz       r4, 0x158(r3)
  li        r0, 0x1
  stb       r0, 0xB0(r4)
  lwz       r3, 0x16C(r3)
  stb       r0, 0xB0(r3)
  blr       

.loc_0x20:
  lwz       r4, 0x158(r3)
  li        r0, 0
  stb       r0, 0xB0(r4)
  lwz       r3, 0x16C(r3)
  stb       r0, 0xB0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80307F90
 * Size:	000038
 */
void og::Screen::MapCounter::dispBlack( (bool))
{
/*
.loc_0x0:
  rlwinm.   r0,r4,0,24,31
  beq-      .loc_0x20
  lwz       r4, 0x15C(r3)
  li        r0, 0x1
  stb       r0, 0xB0(r4)
  lwz       r3, 0x170(r3)
  stb       r0, 0xB0(r3)
  blr       

.loc_0x20:
  lwz       r4, 0x15C(r3)
  li        r0, 0
  stb       r0, 0xB0(r4)
  lwz       r3, 0x170(r3)
  stb       r0, 0xB0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80307FC8
 * Size:	000028
 */
void og::Screen::MapCounter::dispFree( (bool))
{
/*
.loc_0x0:
  rlwinm.   r0,r4,0,24,31
  beq-      .loc_0x18
  lwz       r3, 0x174(r3)
  li        r0, 0x1
  stb       r0, 0xB0(r3)
  blr       

.loc_0x18:
  lwz       r3, 0x174(r3)
  li        r0, 0
  stb       r0, 0xB0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void og::Screen::setCallBack_CounterMap( (P2DScreen::Mgr *, unsigned long long, unsigned long long, unsigned long long, unsigned long *, unsigned short, unsigned short, bool, JKRArchive *))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80307FF0
 * Size:	000724
 */
void og::Screen::MapCounter::setCallBack( (JKRArchive *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  lwz       r29, 0x178(r3)
  li        r3, 0xA8
  bl        -0x2E4178
  mr.       r28, r3
  beq-      .loc_0x54
  lis       r4, 0x804D
  mr        r7, r30
  addi      r4, r4, 0x7E44
  li        r5, 0x6
  li        r6, 0x3
  bl        0x34E8
  mr        r28, r3

.loc_0x54:
  stw       r29, 0x8(r1)
  lis       r5, 0x6F72
  li        r0, 0x1
  mr        r3, r28
  stw       r0, 0xC(r1)
  mr        r4, r31
  addi      r6, r5, 0x5F72
  addi      r8, r5, 0x5F63
  lwz       r12, 0x0(r28)
  addi      r10, r5, 0x5F6C
  li        r5, 0
  li        r7, 0
  lwz       r12, 0x1C(r12)
  li        r9, 0
  mtctr     r12
  bctrl     
  mr        r3, r28
  li        r4, 0
  bl        0x374C
  lis       r4, 0x6F72
  mr        r3, r31
  mr        r7, r28
  li        r5, 0
  addi      r6, r4, 0x5F72
  bl        0x12CA80
  mr        r3, r28
  bl        0x3714
  stw       r3, 0x14C(r31)
  li        r3, 0xA8
  lwz       r29, 0x17C(r31)
  bl        -0x2E4218
  mr.       r28, r3
  beq-      .loc_0xF4
  lis       r4, 0x804D
  mr        r7, r30
  addi      r4, r4, 0x7E44
  li        r5, 0x6
  li        r6, 0x3
  bl        0x3448
  mr        r28, r3

.loc_0xF4:
  stw       r29, 0x8(r1)
  lis       r5, 0x6F79
  li        r0, 0x1
  mr        r3, r28
  stw       r0, 0xC(r1)
  mr        r4, r31
  addi      r6, r5, 0x5F72
  addi      r8, r5, 0x5F63
  lwz       r12, 0x0(r28)
  addi      r10, r5, 0x5F6C
  li        r5, 0
  li        r7, 0
  lwz       r12, 0x1C(r12)
  li        r9, 0
  mtctr     r12
  bctrl     
  mr        r3, r28
  li        r4, 0
  bl        0x36AC
  lis       r4, 0x6F79
  mr        r3, r31
  mr        r7, r28
  li        r5, 0
  addi      r6, r4, 0x5F72
  bl        0x12C9E0
  mr        r3, r28
  bl        0x3674
  stw       r3, 0x150(r31)
  li        r3, 0xA8
  lwz       r29, 0x180(r31)
  bl        -0x2E42B8
  mr.       r28, r3
  beq-      .loc_0x194
  lis       r4, 0x804D
  mr        r7, r30
  addi      r4, r4, 0x7E44
  li        r5, 0x6
  li        r6, 0x3
  bl        0x33A8
  mr        r28, r3

.loc_0x194:
  stw       r29, 0x8(r1)
  lis       r5, 0x6F62
  li        r0, 0x1
  mr        r3, r28
  stw       r0, 0xC(r1)
  mr        r4, r31
  addi      r6, r5, 0x5F72
  addi      r8, r5, 0x5F63
  lwz       r12, 0x0(r28)
  addi      r10, r5, 0x5F6C
  li        r5, 0
  li        r7, 0
  lwz       r12, 0x1C(r12)
  li        r9, 0
  mtctr     r12
  bctrl     
  mr        r3, r28
  li        r4, 0
  bl        0x360C
  lis       r4, 0x6F62
  mr        r3, r31
  mr        r7, r28
  li        r5, 0
  addi      r6, r4, 0x5F72
  bl        0x12C940
  mr        r3, r28
  bl        0x35D4
  stw       r3, 0x154(r31)
  li        r3, 0xA8
  lwz       r29, 0x184(r31)
  bl        -0x2E4358
  mr.       r28, r3
  beq-      .loc_0x234
  lis       r4, 0x804D
  mr        r7, r30
  addi      r4, r4, 0x7E44
  li        r5, 0x6
  li        r6, 0x3
  bl        0x3308
  mr        r28, r3

.loc_0x234:
  stw       r29, 0x8(r1)
  lis       r5, 0x7577
  li        r0, 0x1
  mr        r3, r28
  stw       r0, 0xC(r1)
  mr        r4, r31
  addi      r6, r5, 0x5F72
  addi      r8, r5, 0x5F63
  lwz       r12, 0x0(r28)
  addi      r10, r5, 0x5F6C
  li        r5, 0
  li        r7, 0
  lwz       r12, 0x1C(r12)
  li        r9, 0
  mtctr     r12
  bctrl     
  mr        r3, r28
  li        r4, 0
  bl        0x356C
  lis       r4, 0x7577
  mr        r3, r31
  mr        r7, r28
  li        r5, 0
  addi      r6, r4, 0x5F72
  bl        0x12C8A0
  mr        r3, r28
  bl        0x3534
  stw       r3, 0x158(r31)
  li        r3, 0xA8
  lwz       r29, 0x188(r31)
  bl        -0x2E43F8
  mr.       r28, r3
  beq-      .loc_0x2D4
  lis       r4, 0x804D
  mr        r7, r30
  addi      r4, r4, 0x7E44
  li        r5, 0x6
  li        r6, 0x3
  bl        0x3268
  mr        r28, r3

.loc_0x2D4:
  stw       r29, 0x8(r1)
  lis       r5, 0x7562
  li        r0, 0x1
  mr        r3, r28
  stw       r0, 0xC(r1)
  mr        r4, r31
  addi      r6, r5, 0x6B72
  addi      r8, r5, 0x6B63
  lwz       r12, 0x0(r28)
  addi      r10, r5, 0x6B6C
  li        r5, 0
  li        r7, 0
  lwz       r12, 0x1C(r12)
  li        r9, 0
  mtctr     r12
  bctrl     
  mr        r3, r28
  li        r4, 0
  bl        0x34CC
  lis       r4, 0x7562
  mr        r3, r31
  mr        r7, r28
  li        r5, 0
  addi      r6, r4, 0x6B72
  bl        0x12C800
  mr        r3, r28
  bl        0x3494
  stw       r3, 0x15C(r31)
  li        r3, 0xA8
  lwz       r29, 0x18C(r31)
  bl        -0x2E4498
  mr.       r28, r3
  beq-      .loc_0x374
  lis       r4, 0x804D
  mr        r7, r30
  addi      r4, r4, 0x7E44
  li        r5, 0x3
  li        r6, 0x3
  bl        0x31C8
  mr        r28, r3

.loc_0x374:
  stw       r29, 0x8(r1)
  lis       r5, 0x7472
  li        r0, 0x1
  mr        r3, r28
  stw       r0, 0xC(r1)
  mr        r4, r31
  addi      r6, r5, 0x5F72
  addi      r8, r5, 0x5F63
  lwz       r12, 0x0(r28)
  addi      r10, r5, 0x5F6C
  li        r5, 0
  li        r7, 0
  lwz       r12, 0x1C(r12)
  li        r9, 0
  mtctr     r12
  bctrl     
  mr        r3, r28
  li        r4, 0
  bl        0x342C
  lis       r4, 0x7472
  mr        r3, r31
  mr        r7, r28
  li        r5, 0
  addi      r6, r4, 0x5F72
  bl        0x12C760
  mr        r3, r28
  bl        0x33F4
  stw       r3, 0x160(r31)
  li        r3, 0xA8
  lwz       r29, 0x190(r31)
  bl        -0x2E4538
  mr.       r28, r3
  beq-      .loc_0x414
  lis       r4, 0x804D
  mr        r7, r30
  addi      r4, r4, 0x7E44
  li        r5, 0x3
  li        r6, 0x3
  bl        0x3128
  mr        r28, r3

.loc_0x414:
  stw       r29, 0x8(r1)
  lis       r5, 0x7479
  li        r0, 0x1
  mr        r3, r28
  stw       r0, 0xC(r1)
  mr        r4, r31
  addi      r6, r5, 0x5F72
  addi      r8, r5, 0x5F63
  lwz       r12, 0x0(r28)
  addi      r10, r5, 0x5F6C
  li        r5, 0
  li        r7, 0
  lwz       r12, 0x1C(r12)
  li        r9, 0
  mtctr     r12
  bctrl     
  mr        r3, r28
  li        r4, 0
  bl        0x338C
  lis       r4, 0x7479
  mr        r3, r31
  mr        r7, r28
  li        r5, 0
  addi      r6, r4, 0x5F72
  bl        0x12C6C0
  mr        r3, r28
  bl        0x3354
  stw       r3, 0x164(r31)
  li        r3, 0xA8
  lwz       r29, 0x194(r31)
  bl        -0x2E45D8
  mr.       r28, r3
  beq-      .loc_0x4B4
  lis       r4, 0x804D
  mr        r7, r30
  addi      r4, r4, 0x7E44
  li        r5, 0x3
  li        r6, 0x3
  bl        0x3088
  mr        r28, r3

.loc_0x4B4:
  stw       r29, 0x8(r1)
  lis       r5, 0x7462
  li        r0, 0x1
  mr        r3, r28
  stw       r0, 0xC(r1)
  mr        r4, r31
  addi      r6, r5, 0x5F72
  addi      r8, r5, 0x5F63
  lwz       r12, 0x0(r28)
  addi      r10, r5, 0x5F6C
  li        r5, 0
  li        r7, 0
  lwz       r12, 0x1C(r12)
  li        r9, 0
  mtctr     r12
  bctrl     
  mr        r3, r28
  li        r4, 0
  bl        0x32EC
  lis       r4, 0x7462
  mr        r3, r31
  mr        r7, r28
  li        r5, 0
  addi      r6, r4, 0x5F72
  bl        0x12C620
  mr        r3, r28
  bl        0x32B4
  stw       r3, 0x168(r31)
  li        r3, 0xA8
  lwz       r29, 0x198(r31)
  bl        -0x2E4678
  mr.       r28, r3
  beq-      .loc_0x554
  lis       r4, 0x804D
  mr        r7, r30
  addi      r4, r4, 0x7E44
  li        r5, 0x3
  li        r6, 0x3
  bl        0x2FE8
  mr        r28, r3

.loc_0x554:
  stw       r29, 0x8(r1)
  lis       r5, 0x7477
  li        r0, 0x1
  mr        r3, r28
  stw       r0, 0xC(r1)
  mr        r4, r31
  addi      r6, r5, 0x5F72
  addi      r8, r5, 0x5F63
  lwz       r12, 0x0(r28)
  addi      r10, r5, 0x5F6C
  li        r5, 0
  li        r7, 0
  lwz       r12, 0x1C(r12)
  li        r9, 0
  mtctr     r12
  bctrl     
  mr        r3, r28
  li        r4, 0
  bl        0x324C
  lis       r4, 0x7477
  mr        r3, r31
  mr        r7, r28
  li        r5, 0
  addi      r6, r4, 0x5F72
  bl        0x12C580
  mr        r3, r28
  bl        0x3214
  stw       r3, 0x16C(r31)
  li        r3, 0xA8
  lwz       r29, 0x19C(r31)
  bl        -0x2E4718
  mr.       r28, r3
  beq-      .loc_0x5F4
  lis       r4, 0x804D
  mr        r7, r30
  addi      r4, r4, 0x7E44
  li        r5, 0x3
  li        r6, 0x3
  bl        0x2F48
  mr        r28, r3

.loc_0x5F4:
  stw       r29, 0x8(r1)
  lis       r5, 0x7462
  li        r0, 0x1
  mr        r3, r28
  stw       r0, 0xC(r1)
  mr        r4, r31
  addi      r6, r5, 0x6B72
  addi      r8, r5, 0x6B63
  lwz       r12, 0x0(r28)
  addi      r10, r5, 0x6B6C
  li        r5, 0
  li        r7, 0
  lwz       r12, 0x1C(r12)
  li        r9, 0
  mtctr     r12
  bctrl     
  mr        r3, r28
  li        r4, 0
  bl        0x31AC
  lis       r4, 0x7462
  mr        r3, r31
  mr        r7, r28
  li        r5, 0
  addi      r6, r4, 0x6B72
  bl        0x12C4E0
  mr        r3, r28
  bl        0x3174
  stw       r3, 0x170(r31)
  li        r3, 0xA8
  lwz       r29, 0x1A0(r31)
  bl        -0x2E47B8
  mr.       r28, r3
  beq-      .loc_0x694
  lis       r4, 0x804D
  mr        r7, r30
  addi      r4, r4, 0x7E44
  li        r5, 0x3
  li        r6, 0x3
  bl        0x2EA8
  mr        r28, r3

.loc_0x694:
  stw       r29, 0x8(r1)
  lis       r5, 0x6672
  li        r0, 0x1
  mr        r3, r28
  stw       r0, 0xC(r1)
  mr        r4, r31
  addi      r6, r5, 0x6572
  addi      r8, r5, 0x6563
  lwz       r12, 0x0(r28)
  addi      r10, r5, 0x656C
  li        r5, 0
  li        r7, 0
  lwz       r12, 0x1C(r12)
  li        r9, 0
  mtctr     r12
  bctrl     
  mr        r3, r28
  li        r4, 0
  bl        0x310C
  lis       r4, 0x6672
  mr        r3, r31
  mr        r7, r28
  li        r5, 0
  addi      r6, r4, 0x6572
  bl        0x12C440
  mr        r3, r28
  bl        0x30D4
  stw       r3, 0x174(r31)
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80308714
 * Size:	0000A4
 */
void og::Screen::MapCounter::__dt(void)
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
  beq-      .loc_0x88
  lis       r3, 0x804E
  subi      r0, r3, 0x7F38
  stw       r0, 0x0(r30)
  beq-      .loc_0x78
  lis       r3, 0x804F
  subi      r0, r3, 0x3B00
  stw       r0, 0x0(r30)
  beq-      .loc_0x78
  lis       r3, 0x804F
  addic.    r0, r30, 0x118
  subi      r0, r3, 0x3A60
  stw       r0, 0x0(r30)
  beq-      .loc_0x6C
  lis       r4, 0x804D
  addi      r3, r30, 0x118
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0x118(r30)
  bl        0x108E0C

.loc_0x6C:
  mr        r3, r30
  li        r4, 0
  bl        -0x2C926C

.loc_0x78:
  extsh.    r0, r31
  ble-      .loc_0x88
  mr        r3, r30
  bl        -0x2E46E4

.loc_0x88:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}
