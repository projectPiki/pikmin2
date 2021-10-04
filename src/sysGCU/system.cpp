#include "System.h"

extern char gStrSystem_CPP[11]; // system.cpp

extern char
    gStrSystem_MemoryAllocError[70]; // Memory Alloc Error!\n%x (size %d)
                                     // align(%d)\nRestTotal=%d\nRestFree =%d\n

extern char gStrSystem_Abort[7]; // abort\n

struct CallbackObject {
    u32* funcPtr;
    u8 filler[14 - 4];
};

extern CallbackObject exCallbackObject;

/*
 * --INFO--
 * Address:	80421EC4
 * Size:	0000A0
 */
void Pikmin2DefaultMemoryErrorRoutine(void* address, unsigned long size,
                                      int alignment)
{
    JUTException::panic_f(gStrSystem_CPP, 99, gStrSystem_MemoryAllocError,
                          address, size, alignment,
                          static_cast<JKRHeap*>(address)->getTotalFreeSize(),
                          static_cast<JKRHeap*>(address)->getFreeSize());

    OSPanic(gStrSystem_CPP, 101, gStrSystem_Abort);
}

extern char gStrSystem_InOnLine[23]; // %s in \"%s\" on line %d\n

/*
 * --INFO--
 * Address:	80421F64
 * Size:	000188
 */
void kando_panic_f(bool r3, const char* r4, int line, const char* r6, ...)
{
    va_list list;
    va_start(list, r6);

    char buffer[0xFF];
    vsnprintf(buffer, sizeof(buffer), r6, list);

    if (!JUTException::sConsole) {
        OSPanic(r4, line, buffer);
    }

    char dest[4];
    memcpy(dest, (void*)*(JFWSystem::mainThread + 0x2C), 0x2C8);

    int unknown;
    *(JUTException::sErrorManager + 0xa0) = unknown;
    exCallbackObject.funcPtr              = (u32*)preUserCallback;

    if (!JUTException::sErrorManager) {
        OSReport(gStrSystem_InOnLine, buffer, r4, line);
    }

    OSSendMessage(JUTException::sMessageQueue, (OSMessage*)&exCallbackObject,
                  true);
    OSSuspendThread(OSGetCurrentThread());
}
/*
.loc_0x0:
  stwu      r1, -0x460(r1)
  mflr      r0
  stw       r0, 0x464(r1)
  stmw      r26, 0x448(r1)
  mr        r29, r4
  mr        r30, r5
  bne-      cr1, .loc_0x3C
  stfd      f1, 0x28(r1)
  stfd      f2, 0x30(r1)
  stfd      f3, 0x38(r1)
  stfd      f4, 0x40(r1)
  stfd      f5, 0x48(r1)
  stfd      f6, 0x50(r1)
  stfd      f7, 0x58(r1)
  stfd      f8, 0x60(r1)

.loc_0x3C:
  addi      r11, r1, 0x468
  addi      r0, r1, 0x8
  lis       r12, 0x400
  stw       r3, 0x8(r1)
  lis       r3, 0x8042
  lwz       r31, -0x775C(r13)
  stw       r4, 0xC(r1)
  addi      r28, r3, 0x20EC
  addi      r27, r1, 0x68
  lwz       r26, -0x7770(r13)
  stw       r5, 0x10(r1)
  addi      r3, r1, 0x74
  mr        r5, r6
  li        r4, 0xFF
  stw       r6, 0x14(r1)
  mr        r6, r27
  stw       r7, 0x18(r1)
  stw       r8, 0x1C(r1)
  stw       r9, 0x20(r1)
  stw       r10, 0x24(r1)
  stw       r12, 0x68(r1)
  stw       r11, 0x6C(r1)
  stw       r0, 0x70(r1)
  bl        -0x35A998
  cmplwi    r26, 0
  bne-      .loc_0xB8
  mr        r3, r29
  mr        r4, r30
  addi      r5, r1, 0x74
  crclr     6, 0x6
  bl        -0x3348AC

.loc_0xB8:
  lwz       r4, -0x7630(r13)
  addi      r3, r1, 0x178
  li        r5, 0x2C8
  lwz       r27, 0x2C(r4)
  mr        r4, r27
  bl        -0x41CE94
  lwz       r0, 0x17C(r1)
  lis       r4, 0x804F
  cmplwi    r31, 0
  li        r3, 0xFF
  stw       r0, 0xA0(r26)
  li        r0, 0
  stwu      r28, 0x7C20(r4)
  sth       r3, 0x4(r4)
  stw       r27, 0x8(r4)
  stw       r0, 0xC(r4)
  stw       r0, 0x10(r4)
  beq-      .loc_0x110
  beq-      .loc_0x12C
  lwz       r0, 0x58(r31)
  rlwinm.   r0,r0,0,30,30
  bne-      .loc_0x12C

.loc_0x110:
  lis       r3, 0x804A
  mr        r5, r29
  subi      r3, r3, 0x67E4
  mr        r6, r30
  addi      r4, r1, 0x74
  crclr     6, 0x6
  bl        -0x3349A0

.loc_0x12C:
  cmplwi    r31, 0
  beq-      .loc_0x154
  lis       r4, 0x804A
  mr        r3, r31
  subi      r4, r4, 0x67CC
  mr        r6, r29
  mr        r7, r30
  addi      r5, r1, 0x74
  crclr     6, 0x6
  bl        -0x3F9714

.loc_0x154:
  lis       r3, 0x804A
  lis       r4, 0x804F
  addi      r3, r3, 0x3A8
  li        r5, 0x1
  addi      r4, r4, 0x7C20
  bl        -0x332BB0
  bl        -0x33070C
  bl        -0x32F958
  lmw       r26, 0x448(r1)
  lwz       r0, 0x464(r1)
  mtlr      r0
  addi      r1, r1, 0x460
  blr
}

/*
* --INFO--
* Address:	804220EC
* Size:	000118

void preUserCallback(unsigned short, OSContext*, unsigned long, unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  lis       r4, 0x804A
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  stw       r30, 0x38(r1)
  subi      r30, r4, 0x6838
  stw       r29, 0x34(r1)
  stw       r28, 0x30(r1)
  lwz       r3, -0x6514(r13)
  bl        0x218
  lwz       r7, 0x84(r30)
  addi      r31, r1, 0xC
  lwz       r6, 0x88(r30)
  li        r28, 0
  lwz       r5, 0x8C(r30)
  lwz       r4, 0x90(r30)
  lwz       r3, 0x94(r30)
  lhz       r0, 0x98(r30)
  stw       r7, 0xC(r1)
  stw       r6, 0x10(r1)
  stw       r5, 0x14(r1)
  stw       r4, 0x18(r1)
  stw       r3, 0x1C(r1)
  sth       r0, 0x20(r1)
  b         .loc_0xA4

.loc_0x68:
  li        r3, 0x64
  bl        -0x3F5B34
  lwz       r3, -0x7770(r13)
  addi      r4, r1, 0x8
  li        r5, 0
  bl        -0x3F6598
  lwz       r0, 0x8(r1)
  cmplwi    r0, 0
  beq-      .loc_0xA4
  sub       r3, r0, r29
  sub       r0, r29, r0
  nor       r3, r3, r0
  addi      r0, r28, 0x1
  srawi     r3, r3, 0x1F
  and       r28, r0, r3

.loc_0xA4:
  rlwinm    r0,r28,1,0,30
  lhzx      r29, r31, r0
  cmplwi    r29, 0
  bne+      .loc_0x68
  lwz       r3, -0x775C(r13)
  li        r0, 0x1
  stb       r0, -0x7990(r13)
  cmplwi    r3, 0
  beq-      .loc_0xEC
  stb       r0, 0x68(r3)
  li        r0, 0x3
  addi      r4, r30, 0x9C
  stw       r0, 0x58(r3)
  bl        -0x3F9798
  lwz       r3, -0x7790(r13)
  li        r4, 0x1
  bl        -0x3F90CC
  b         .loc_0xF8

.loc_0xEC:
  addi      r3, r30, 0xBC
  crclr     6, 0x6
  bl        -0x334AF4

.loc_0xF8:
  lwz       r0, 0x44(r1)
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  lwz       r29, 0x34(r1)
  lwz       r28, 0x30(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr

}

/*
* --INFO--
* Address:	80422204
* Size:	00002C

void myTask(void*)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  lwz       r5, -0x6514(r13)
  lwz       r3, 0x5C(r5)
  bl        0x1EEA4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	........
* Size:	0000E0

void _Print(char*, ...)
{
// UNUSED FUNCTION
}

/*
* --INFO--
* Address:	80422230
* Size:	000054

void System::FragmentationChecker::__ct((char*, bool))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  stw       r4, 0x4(r3)
  lwz       r3, -0x77D4(r13)
  bl        -0x3FEA9C
  mr        r31, r3
  lwz       r3, -0x77D4(r13)
  bl        -0x3FEA7C
  sub       r0, r3, r31
  mr        r3, r30
  stw       r0, 0x0(r30)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	80422284
* Size:	00005C

void System::FragmentationChecker::__dt(void)
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
  beq-      .loc_0x40
  lwz       r3, -0x77D4(r13)
  bl        -0x3FEAF4
  lwz       r3, -0x77D4(r13)
  bl        -0x3FEAD0
  extsh.    r0, r31
  ble-      .loc_0x40
  mr        r3, r30
  bl        -0x3FE20C

.loc_0x40:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	804222E0
* Size:	00003C

void System::assert_fragmentation(char*)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  lwz       r3, -0x77D4(r13)
  bl        -0x3FEB40
  mr        r31, r3
  lwz       r3, -0x77D4(r13)
  bl        -0x3FEB20
  cmplw     r31, r3
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	8042231C
* Size:	000010

void System::enableCPULockDetector(int)
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, 0x1C(r3)
  stw       r4, 0x20(r3)
  blr

}

/*
* --INFO--
* Address:	8042232C
* Size:	000018

void System::disableCPULockDetector()
{
/*
.loc_0x0:
  lwz       r4, 0x20(r3)
  li        r0, 0
  stw       r0, 0x20(r3)
  stw       r0, 0x1C(r3)
  mr        r3, r4
  blr

}

/*
* --INFO--
* Address:	80422344
* Size:	0000A4

void retraceCallback(unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x804A
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  subi      r31, r3, 0x6838
  lwz       r4, -0x6514(r13)
  lwz       r3, 0x1C(r4)
  addi      r0, r3, 0x1
  stw       r0, 0x1C(r4)
  bl        -0x3435BC
  cmpwi     r3, 0x1
  bne-      .loc_0x40
  lwz       r3, -0x6514(r13)
  li        r0, 0
  stw       r0, 0x1C(r3)

.loc_0x40:
  lwz       r5, -0x6514(r13)
  lwz       r3, 0x20(r5)
  cmpwi     r3, 0
  ble-      .loc_0x90
  lwz       r0, 0x1C(r5)
  cmpw      r0, r3
  ble-      .loc_0x90
  li        r0, 0
  addi      r3, r31, 0xE0
  stb       r0, -0x7990(r13)
  lwz       r4, 0x20(r5)
  lwz       r5, 0x1C(r5)
  crclr     6, 0x6
  bl        -0x334CCC
  addi      r4, r31, 0x104
  addi      r6, r31, 0x114
  li        r3, 0x1
  li        r5, 0
  crclr     6, 0x6
  bl        -0x46C

.loc_0x90:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	804223E8
* Size:	00011C

void System::System()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, 0x20A8(r2)
  stw       r0, 0x14(r1)
  li        r0, 0
  lfs       f0, 0x20AC(r2)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  stw       r0, 0x38(r3)
  addi      r3, r30, 0x68
  stw       r0, 0x3C(r30)
  stw       r0, 0x48(r30)
  stw       r0, 0x4C(r30)
  stfs      f1, 0x54(r30)
  stw       r0, 0x60(r30)
  stfs      f0, 0x64(r30)
  bl        0x23EC
  li        r4, 0
  li        r0, 0x1
  stw       r4, 0xD4(r30)
  mr        r3, r30
  stb       r4, 0xD8(r30)
  stb       r4, 0xD9(r30)
  stb       r4, 0xDA(r30)
  stb       r4, 0xDB(r30)
  stw       r30, -0x6514(r13)
  stb       r0, -0x7990(r13)
  bl        0xFBC
  lis       r3, 0x43
  lwz       r31, -0x77D4(r13)
  subi      r3, r3, 0x8000
  li        r4, 0
  li        r5, 0x1
  bl        -0x4025A8
  stw       r3, 0x38(r30)
  lwz       r3, 0x38(r30)
  bl        -0x3FEED8
  li        r3, 0x54
  bl        -0x3FE5E0
  mr.       r0, r3
  beq-      .loc_0xB0
  bl        0x8B34
  mr        r0, r3

.loc_0xB0:
  stw       r0, 0x50(r30)
  mr        r3, r30
  bl        .loc_0x11C
  mr        r3, r31
  bl        -0x3FEF04
  li        r0, 0
  lis       r3, 0x8042
  stw       r0, 0x24(r30)
  addi      r4, r3, 0x2344
  lwz       r3, -0x76E0(r13)
  bl        -0x3EE7D4
  li        r0, 0
  stb       r0, 0xD8(r30)
  stb       r0, 0xD9(r30)
  stb       r0, 0xDA(r30)
  stb       r0, 0xDB(r30)
  lwz       r3, 0x38(r30)
  bl        -0x3FECFC
  lwz       r3, 0x38(r30)
  bl        -0x3FED04
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

.loc_0x11C:

}

/*
* --INFO--
* Address:	........
* Size:	00006C

void System::~System()
{
// UNUSED FUNCTION
}

/*
* --INFO--
* Address:	80422504
* Size:	000214

void System::construct()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x804A
  li        r5, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  subi      r31, r4, 0x6838
  addi      r4, r31, 0x130
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        0xE30
  bl        -0x32F988
  bl        -0x358F9C
  li        r0, 0
  mr        r3, r30
  stw       r0, 0x30(r30)
  addi      r4, r31, 0x13C
  li        r5, 0
  stw       r0, 0x34(r30)
  bl        0xE0C
  li        r3, 0x88
  bl        -0x3FE6B4
  mr.       r0, r3
  beq-      .loc_0x78
  lis       r4, 0x1
  li        r5, 0x10
  subi      r4, r4, 0x8000
  li        r6, 0x1D
  bl        0x2344
  mr        r0, r3

.loc_0x78:
  stw       r0, 0x40(r30)
  mr        r3, r30
  addi      r4, r31, 0x13C
  bl        0xDDC
  mr        r3, r30
  addi      r4, r31, 0x148
  li        r5, 0
  bl        0xDC4
  li        r3, 0x28
  bl        -0x3FE6FC
  mr.       r0, r3
  beq-      .loc_0xB0
  bl        0x8250
  mr        r0, r3

.loc_0xB0:
  stw       r0, 0x28(r30)
  mr        r3, r30
  addi      r4, r31, 0x148
  bl        0xDA4
  mr        r3, r30
  addi      r4, r31, 0x154
  li        r5, 0
  bl        0xD8C
  li        r3, 0x14
  bl        -0x3FE734
  mr.       r0, r3
  beq-      .loc_0xEC
  lfs       f1, 0x20B0(r2)
  bl        0x77C8
  mr        r0, r3

.loc_0xEC:
  stw       r0, 0x44(r30)
  mr        r3, r30
  addi      r4, r31, 0x154
  bl        0xD68
  li        r3, 0xE8
  bl        -0x3FE760
  mr.       r0, r3
  beq-      .loc_0x114
  bl        0x20510
  mr        r0, r3

.loc_0x114:
  stw       r0, 0x5C(r30)
  lwz       r3, 0x5C(r30)
  bl        0x1E4AC
  li        r3, 0x1
  li        r4, 0x11
  li        r5, 0x4000
  li        r6, 0
  bl        -0x3FC95C
  stw       r3, 0x58(r30)
  lis       r3, 0x8042
  addi      r4, r3, 0x2204
  li        r5, 0
  lwz       r3, 0x58(r30)
  li        r6, 0
  bl        -0x3FC638
  mr        r3, r30
  addi      r4, r2, 0x20B4
  li        r5, 0
  bl        0xCFC
  bl        0x104B4
  bl        0x335C8
  mr        r3, r30
  addi      r4, r2, 0x20B4
  bl        0xCF0
  mr        r3, r30
  addi      r4, r31, 0x164
  li        r5, 0
  bl        0xCD8
  lwz       r3, -0x77D4(r13)
  bl        0x118E4
  mr        r3, r30
  addi      r4, r31, 0x164
  bl        0xCCC
  li        r3, 0x48
  bl        -0x3FE7FC
  mr.       r0, r3
  beq-      .loc_0x1B0
  bl        0x245BC
  mr        r0, r3

.loc_0x1B0:
  stw       r0, 0x60(r30)
  li        r3, 0xC
  bl        -0x3FE818
  mr.       r0, r3
  beq-      .loc_0x1CC
  bl        0x7C4C
  mr        r0, r3

.loc_0x1CC:
  stw       r0, 0x48(r30)
  bl        0x29F90
  li        r3, 0x8
  bl        -0x3FE838
  mr.       r0, r3
  beq-      .loc_0x1EC
  bl        0x1ABC
  mr        r0, r3

.loc_0x1EC:
  stw       r0, 0x3C(r30)
  mr        r3, r30
  addi      r4, r31, 0x130
  bl        0xC68
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	80422718
* Size:	0000E8

void System::constructWithDvdAccessFirst()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804A
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  subi      r31, r4, 0x6838
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r3, -0x77D4(r13)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl
  subis     r0, r3, 0x4558
  cmplwi    r0, 0x5048
  beq-      .loc_0x58
  addi      r3, r31, 0
  addi      r5, r31, 0x174
  li        r4, 0x3F5
  crclr     6, 0x6
  bl        -0x3F812C

.loc_0x58:
  lwz       r30, -0x77D4(r13)
  lwz       r3, 0x38(r29)
  bl        -0x3FF1D4
  mr        r3, r29
  addi      r4, r31, 0x180
  li        r5, 0
  bl        0xBD4
  lis       r3, 0x8051
  addi      r4, r31, 0x19C
  addi      r3, r3, 0x41FC
  bl        0xFFD8
  mr        r3, r29
  bl        0x224
  mr        r3, r29
  addi      r4, r31, 0x180
  bl        0xBB8
  lwz       r3, 0x38(r29)
  bl        -0x3FEFD4
  lwz       r3, 0x38(r29)
  bl        -0x3FEFDC
  lwz       r3, 0x38(r29)
  bl        -0x3FF010
  lwz       r3, 0x38(r29)
  bl        -0x3FF018
  mr        r3, r30
  bl        -0x3FF230
  mr        r3, r29
  li        r4, 0x1
  bl        0xB88
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr

}

/*
* --INFO--
* Address:	80422800
* Size:	000120

void System::constructWithDvdAccessSecond()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804A
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  subi      r31, r4, 0x6838
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  bl        0x358
  lwz       r3, -0x77D4(r13)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl
  subis     r0, r3, 0x4558
  cmplwi    r0, 0x5048
  beq-      .loc_0x5C
  addi      r3, r31, 0
  addi      r5, r31, 0x174
  li        r4, 0x428
  crclr     6, 0x6
  bl        -0x3F8218

.loc_0x5C:
  lwz       r30, -0x77D4(r13)
  lwz       r3, 0x38(r29)
  bl        -0x3FF2C0
  mr        r3, r29
  addi      r4, r31, 0x1AC
  li        r5, 0
  bl        0xAE8
  mr        r3, r29
  addi      r4, r31, 0x1C8
  li        r5, 0
  bl        0xAD8
  mr        r3, r30
  bl        0x15620
  mr        r3, r29
  addi      r4, r31, 0x1C8
  bl        0xACC
  bl        -0x1FA5F4
  li        r3, 0x10C
  bl        -0x3FEA00
  mr.       r0, r3
  beq-      .loc_0xB8
  bl        -0x274C30
  mr        r0, r3

.loc_0xB8:
  stw       r0, -0x6C38(r13)
  bl        -0x23C788
  bl        0xF334
  mr        r3, r29
  addi      r4, r31, 0x1AC
  bl        0xA98
  lwz       r3, 0x38(r29)
  bl        -0x3FF0F4
  lwz       r3, 0x38(r29)
  bl        -0x3FF0FC
  lwz       r3, 0x38(r29)
  bl        -0x3FF130
  lwz       r3, 0x38(r29)
  bl        -0x3FF138
  mr        r3, r30
  bl        -0x3FF350
  mr        r3, r29
  li        r4, 0x1
  bl        0xA68
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr

}

/*
* --INFO--
* Address:	80422920
* Size:	000054

void System::createRomFont(JKRHeap*)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  li        r3, 0x1C
  bl        -0x3FEA9C
  mr.       r0, r3
  beq-      .loc_0x38
  mr        r4, r31
  bl        -0x3F0304
  mr        r0, r3

.loc_0x38:
  stw       r0, 0xDC(r30)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	80422974
* Size:	000050

void System::destroyRomFont()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0xDC(r3)
  cmplwi    r3, 0
  beq-      .loc_0x34
  lwz       r12, 0x0(r3)
  li        r4, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl

.loc_0x34:
  li        r0, 0
  stw       r0, 0xDC(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	804229C4
* Size:	0001B8

void System::createSoundSystem()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804A
  li        r5, 0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  subi      r29, r4, 0x6838
  addi      r4, r29, 0x1D4
  lwz       r3, -0x6514(r13)
  bl        0x974
  lwz       r31, -0x77D4(r13)
  cmplwi    r31, 0
  bne-      .loc_0x48
  addi      r3, r29, 0
  addi      r5, r29, 0x174
  li        r4, 0x486
  crclr     6, 0x6
  bl        -0x3F83C8

.loc_0x48:
  lwz       r0, -0x6450(r13)
  cmplwi    r0, 0
  bne-      .loc_0x68
  addi      r3, r29, 0
  addi      r5, r29, 0x174
  li        r4, 0x489
  crclr     6, 0x6
  bl        -0x3F83E8

.loc_0x68:
  lwz       r3, -0x6450(r13)
  lwz       r27, 0x4(r3)
  mr        r3, r27
  bl        -0x3FF284
  mr        r4, r27
  li        r5, 0x1
  bl        -0x402B7C
  mr.       r28, r3
  bne-      .loc_0xA0
  addi      r3, r29, 0
  addi      r5, r29, 0x174
  li        r4, 0x48D
  crclr     6, 0x6
  bl        -0x3F8420

.loc_0xA0:
  mr        r3, r28
  bl        -0x3FF4C4
  mr        r4, r28
  addi      r3, r29, 0x1E0
  li        r5, 0
  bl        -0x4010B4
  mr        r4, r3
  addi      r3, r29, 0x1EC
  bl        -0x3FFA6C
  mr.       r30, r3
  bne-      .loc_0xE0
  addi      r3, r29, 0
  addi      r5, r29, 0x174
  li        r4, 0x495
  crclr     6, 0x6
  bl        -0x3F8460

.loc_0xE0:
  li        r3, 0x1C
  bl        -0x3FEC04
  mr.       r27, r3
  beq-      .loc_0x100
  bl        -0xEDBDC
  lis       r3, 0x804F
  subi      r0, r3, 0x448C
  stw       r0, 0x10(r27)

.loc_0x100:
  lis       r3, 0x8047
  lis       r0, 0x90
  addi      r4, r3, 0xF0C
  mr        r3, r27
  stw       r4, 0xC(r27)
  stw       r31, 0x0(r27)
  stw       r0, 0x4(r27)
  stw       r30, 0x8(r27)
  bl        -0xEDBD8
  mr        r3, r31
  bl        -0x3FF338
  mr        r4, r31
  li        r5, 0x1
  bl        -0x3FDD88
  mr        r27, r3
  bl        -0x3FF55C
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x160
  addi      r3, r29, 0x1F8
  addi      r5, r29, 0x174
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x3F84E0

.loc_0x160:
  lwz       r3, -0x6780(r13)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl
  mr        r3, r27
  bl        -0x3FDBF4
  mr        r3, r31
  bl        -0x3FF5A0
  mr        r3, r28
  bl        -0x3FF598
  lwz       r3, -0x6514(r13)
  addi      r4, r29, 0x1D4
  bl        0x80C
  lwz       r3, -0x6450(r13)
  lwz       r0, 0x8(r3)
  stw       r0, 0xC(r3)
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr

}

/*
* --INFO--
* Address:	80422B7C
* Size:	0000E8

void System::loadSoundResource()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r3, 0x804A
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  subi      r31, r3, 0x6838
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  lwz       r28, -0x77D4(r13)
  mr        r3, r28
  bl        -0x3FF3F4
  mr        r4, r28
  li        r5, 0x1
  bl        -0x3FDE44
  mr        r30, r3
  bl        -0x3FF618
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x64
  addi      r3, r31, 0x1F8
  addi      r5, r31, 0x174
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x3F859C

.loc_0x64:
  lwz       r29, -0x6780(r13)
  cmplwi    r29, 0
  bne-      .loc_0x84
  addi      r3, r31, 0x1F8
  addi      r5, r31, 0x174
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x3F85BC

.loc_0x84:
  lwz       r29, 0x4(r29)
  cmplwi    r29, 0
  bne-      .loc_0xA4
  addi      r3, r31, 0
  addi      r5, r31, 0x174
  li        r4, 0x4DD
  crclr     6, 0x6
  bl        -0x3F85DC

.loc_0xA4:
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl
  mr        r3, r30
  bl        -0x3FDCF0
  mr        r3, r28
  bl        -0x3FF69C
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr

}

/*
* --INFO--
* Address:	........
* Size:	000014

void System::GXVerifyArg::__ct(void)
{
// UNUSED FUNCTION
}

/*
* --INFO--
* Address:	........
* Size:	000004

void System::setGXVerifyLevel(System::GXVerifyArg&)
{
// UNUSED FUNCTION
}

/*
* --INFO--
* Address:	........
* Size:	000004

void System::clearGXVerifyLevel()
{
// UNUSED FUNCTION
}

/*
* --INFO--
* Address:	80422C64
* Size:	0000F8

void System::initialize()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r5, 0x8070
  stw       r0, 0x14(r1)
  lwz       r4, 0x0(r5)
  subis     r0, r4, 0x7661
  cmplwi    r0, 0x6C64
  bne-      .loc_0x2C
  lbz       r3, 0x4(r5)
  bl        0x58C
  b         .loc_0x34

.loc_0x2C:
  li        r3, 0
  bl        0x580

.loc_0x34:
  li        r3, 0x4
  oris      r3, r3, 0x4
  mtspr     914, r3
  li        r3, 0x5
  oris      r3, r3, 0x5
  mtspr     915, r3
  li        r3, 0x6
  oris      r3, r3, 0x6
  mtspr     916, r3
  li        r3, 0x7
  oris      r3, r3, 0x7
  mtspr     917, r3
  lis       r4, 0x7
  addi      r5, r4, 0x800
  li        r7, 0x1
  lis       r6, 0xA
  lis       r4, 0x90
  li        r0, -0x1
  stw       r7, -0x7F30(r13)
  stw       r6, -0x7F2C(r13)
  stw       r5, -0x7F28(r13)
  stw       r4, -0x7F24(r13)
  stw       r0, -0x7F20(r13)
  bl        0x530
  stw       r3, -0x7F0C(r13)
  bl        -0x3995A0
  lwz       r5, -0x7770(r13)
  li        r0, -0x1
  lis       r4, 0x8042
  stw       r0, 0x84(r5)
  addi      r3, r4, 0x20EC
  stw       r0, 0x88(r5)
  bl        -0x3F6578
  lwz       r5, -0x7770(r13)
  li        r0, 0
  lis       r4, 0x8042
  stw       r0, 0x90(r5)
  addi      r3, r4, 0x1EC4
  lwz       r4, -0x7770(r13)
  stw       r0, 0x8C(r4)
  bl        -0x3FEEB4
  lwz       r3, -0x77D0(r13)
  bl        -0x3FF79C
  lwz       r3, -0x798C(r13)
  bl        -0x3F6598
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	80422D5C
* Size:	000094

void System::loadResourceFirst()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  li        r3, 0x14
  lwz       r4, 0x38(r31)
  bl        -0x3FEE3C
  mr.       r5, r3
  beq-      .loc_0x74
  lis       r3, 0x804F
  lis       r4, 0x804B
  subi      r8, r3, 0x44C0
  lis       r3, 0x804F
  lwz       r7, 0x0(r8)
  addi      r4, r4, 0xF00
  lwz       r6, 0x4(r8)
  subi      r0, r3, 0x4498
  lwz       r3, 0x8(r8)
  stw       r7, 0x8(r1)
  stw       r4, 0x0(r5)
  stw       r0, 0x0(r5)
  stw       r31, 0x4(r5)
  stw       r7, 0x8(r5)
  stw       r6, 0xC(r5)
  stw       r6, 0xC(r1)
  stw       r3, 0x10(r1)
  stw       r3, 0x10(r5)

.loc_0x74:
  mr        r3, r31
  addi      r4, r31, 0x68
  bl        0x160
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr

}

/*
* --INFO--
* Address:	80422DF0
* Size:	000094

void System::loadResourceSecond()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  li        r3, 0x14
  lwz       r4, 0x38(r31)
  bl        -0x3FEED0
  mr.       r5, r3
  beq-      .loc_0x74
  lis       r3, 0x804F
  lis       r4, 0x804B
  subi      r8, r3, 0x44B4
  lis       r3, 0x804F
  lwz       r7, 0x0(r8)
  addi      r4, r4, 0xF00
  lwz       r6, 0x4(r8)
  subi      r0, r3, 0x4498
  lwz       r3, 0x8(r8)
  stw       r7, 0x8(r1)
  stw       r4, 0x0(r5)
  stw       r0, 0x0(r5)
  stw       r31, 0x4(r5)
  stw       r7, 0x8(r5)
  stw       r6, 0xC(r5)
  stw       r6, 0xC(r1)
  stw       r3, 0x10(r1)
  stw       r3, 0x10(r5)

.loc_0x74:
  mr        r3, r31
  addi      r4, r31, 0x68
  bl        0xCC
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr

}

/*
* --INFO--
* Address:	80422E84
* Size:	000034

void System::run()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x3C(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl
  lwz       r0, 0x14(r1)
  li        r3, 0
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	80422EB8
* Size:	000058

void System::getTime()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x33031C
  lis       r5, 0x8000
  lis       r4, 0x1062
  lwz       r5, 0xF8(r5)
  lis       r0, 0x4330
  addi      r4, r4, 0x4DD3
  stw       r0, 0x8(r1)
  rlwinm    r0,r5,30,2,31
  lfd       f1, 0x20C0(r2)
  mulhwu    r0, r4, r0
  rlwinm    r0,r0,26,6,31
  divwu     r0, r3, r0
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f1, f0, f1
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	........
* Size:	00000C

void System::checkOptionBlockSaveFlag()
{
// UNUSED FUNCTION
}

/*
* --INFO--
* Address:	80422F10
* Size:	000010

void System::clearOptionBlockSaveFlag()
{
/*
.loc_0x0:
  lwz       r3, 0x60(r3)
  li        r0, 0
  stb       r0, 0x42(r3)
  blr

}

/*
* --INFO--
* Address:	80422F20
* Size:	000010

void System::setOptionBlockSaveFlag()
{
/*
.loc_0x0:
  lwz       r3, 0x60(r3)
  li        r0, 0x1
  stb       r0, 0x42(r3)
  blr

}

/*
* --INFO--
* Address:	80422F30
* Size:	000008

void System::getPlayCommonData()
{
/*
.loc_0x0:
  lwz       r3, 0x60(r3)
  blr

}

/*
* --INFO--
* Address:	80422F38
* Size:	000058

void System::dvdLoadUseCallBack(DvdThreadCommand*, IDelegate*)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r0, 0x40(r3)
  cmplwi    r0, 0
  beq-      .loc_0x40
  mr        r3, r31
  mr        r4, r5
  bl        0x1930
  lwz       r3, 0x40(r30)
  mr        r4, r31
  bl        0x1CC8

.loc_0x40:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	........
* Size:	000060

void System::dvdLoadArchive(DvdThreadCommand*, char*, JKRHeap*)
{
// UNUSED FUNCTION
}

/*
* --INFO--
* Address:	........
* Size:	000060

void System::dvdLoadArchiveTemporary(DvdThreadCommand*, char*, JKRHeap*)
{
// UNUSED FUNCTION
}

/*
* --INFO--
* Address:	........
* Size:	000060

void System::dvdLoadFile(DvdThreadCommand*, char*, JKRHeap*)
{
// UNUSED FUNCTION
}

/*
* --INFO--
* Address:	........
* Size:	000034

void System::dvdLoadSync(DvdThreadCommand*, DvdThread::ESyncBlockFlag)
{
// UNUSED FUNCTION
}

/*
* --INFO--
* Address:	........
* Size:	000034

void System::dvdLoadSyncAll(DvdThread::ESyncBlockFlag)
{
// UNUSED FUNCTION
}

/*
* --INFO--
* Address:	80422F90
* Size:	000054

void System::deleteThreads()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x40(r3)
  cmplwi    r3, 0
  beq-      .loc_0x40
  beq-      .loc_0x38
  lwz       r12, 0x0(r3)
  li        r4, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl

.loc_0x38:
  li        r0, 0
  stw       r0, 0x40(r31)

.loc_0x40:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	80422FE4
* Size:	00008C

void DvdThread::~DvdThread()
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
  beq-      .loc_0x70
  lis       r3, 0x804F
  addic.    r0, r30, 0x7C
  subi      r0, r3, 0x4278
  stw       r0, 0x0(r30)
  beq-      .loc_0x40
  addi      r3, r30, 0x7C
  li        r4, 0
  bl        -0x3FC7B8

.loc_0x40:
  cmplwi    r30, 0
  beq-      .loc_0x60
  lis       r4, 0x804F
  mr        r3, r30
  subi      r0, r4, 0x44A8
  li        r4, 0
  stw       r0, 0x0(r30)
  bl        -0x3FD808

.loc_0x60:
  extsh.    r0, r31
  ble-      .loc_0x70
  mr        r3, r30
  bl        -0x3FEF9C

.loc_0x70:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	80423070
* Size:	000010

void System::setCurrentDisplay(JFWDisplay*)
{
/*
.loc_0x0:
  lwz       r0, 0x4C(r3)
  stw       r4, 0x4C(r3)
  mr        r3, r0
  blr

}

/*
* --INFO--
* Address:	80423080
* Size:	00001C

void System::clearCurrentDisplay(JFWDisplay*)
{
/*
.loc_0x0:
  lwz       r0, 0x4C(r3)
  cmplw     r0, r4
  bne-      .loc_0x14
  li        r0, 0
  stw       r0, 0x4C(r3)

.loc_0x14:
  li        r3, 0
  blr

}

/*
* --INFO--
* Address:	8042309C
* Size:	00003C

void System::beginFrame()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r0, 0x1C(r3)
  bl        -0x3F5A58
  lwz       r3, 0x48(r31)
  bl        0x7294
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	804230D8
* Size:	00005C

void System::endFrame()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x4C(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl
  mr        r3, r31
  bl        0x2D8
  lwz       r3, 0x44(r31)
  bl        0x6D6C
  lwz       r3, -0x77A8(r13)
  cmplwi    r3, 0
  beq-      .loc_0x48
  bl        -0x3FD6D8

.loc_0x48:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	80423134
* Size:	000048

void System::beginRender()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x280
  li        r3, 0
  bl        -0x34AD50
  lwz       r3, 0x4C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	8042317C
* Size:	000098

void System::endRender()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r31, -0x67A8(r13)
  cmplwi    r31, 0
  beq-      .loc_0x50
  lwz       r3, -0x6514(r13)
  addi      r4, r2, 0x20C8
  li        r5, 0x1
  lwz       r3, 0x28(r3)
  bl        0x7948
  mr        r3, r31
  bl        -0xEAA6C
  lwz       r3, -0x6514(r13)
  addi      r4, r2, 0x20C8
  lwz       r3, 0x28(r3)
  bl        0x7934

.loc_0x50:
  lwz       r3, 0x48(r30)
  bl        0x7374
  lwz       r3, 0x44(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl
  lwz       r3, 0x4C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	80423214
* Size:	000010

void System::setRenderMode(System::ERenderMode)
{
/*
.loc_0x0:
  lwz       r0, -0x6518(r13)
  stw       r3, -0x6518(r13)
  mr        r3, r0
  blr

}

/*
* --INFO--
* Address:	80423224
* Size:	000018

void System::getRenderModeObj()
{
/*
.loc_0x0:
  lwz       r0, -0x6518(r13)
  lis       r3, 0x804F
  subi      r3, r3, 0x44D0
  rlwinm    r0,r0,2,0,29
  lwzx      r3, r3, r0
  blr

}

/*
* --INFO--
* Address:	8042323C
* Size:	000120

void System::changeRenderMode(System::ERenderMode)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x804A
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  subi      r31, r5, 0x6838
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  lwz       r30, -0x76E0(r13)
  cmplwi    r30, 0
  bne-      .loc_0x4C
  addi      r3, r31, 0
  addi      r5, r31, 0x174
  li        r4, 0x761
  crclr     6, 0x6
  bl        -0x3F8C44

.loc_0x4C:
  lwz       r0, -0x6518(r13)
  cmpw      r0, r29
  beq-      .loc_0x88
  stw       r29, -0x6518(r13)
  li        r3, 0x1
  bl        -0x3511D4
  bl        -0x35137C
  bl        -0x352070
  lwz       r0, -0x6518(r13)
  lis       r3, 0x804F
  subi      r4, r3, 0x44D0
  mr        r3, r30
  rlwinm    r0,r0,2,0,29
  lwzx      r4, r4, r0
  bl        -0x3EF650

.loc_0x88:
  cmpwi     r29, 0x2
  beq-      .loc_0xC8
  bge-      .loc_0xA4
  cmpwi     r29, 0
  beq-      .loc_0xB0
  bge-      .loc_0xBC
  b         .loc_0xE0

.loc_0xA4:
  cmpwi     r29, 0x4
  bge-      .loc_0xE0
  b         .loc_0xD4

.loc_0xB0:
  li        r3, 0
  bl        -0x331EBC
  b         .loc_0xF8

.loc_0xBC:
  li        r3, 0x1
  bl        -0x331EC8
  b         .loc_0xF8

.loc_0xC8:
  li        r3, 0
  bl        -0x331E30
  b         .loc_0xF8

.loc_0xD4:
  li        r3, 0x1
  bl        -0x331E3C
  b         .loc_0xF8

.loc_0xE0:
  mr        r6, r29
  addi      r3, r31, 0
  addi      r5, r31, 0x204
  li        r4, 0x781
  crclr     6, 0x6
  bl        -0x3F8CF0

.loc_0xF8:
  lwz       r3, 0x60(r28)
  bl        0x23C90
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr

}

/*
* --INFO--
* Address:	8042335C
* Size:	000008

void System::heapStatusStart(char*, JKRHeap*)
{
/*
.loc_0x0:
  li        r3, 0
  blr

}

/*
* --INFO--
* Address:	80423364
* Size:	000004

void System::heapStatusEnd(char*)
{
/*
.loc_0x0:
  blr

}

/*
* --INFO--
* Address:	80423368
* Size:	000004

void System::heapStatusDump(bool)
{
/*
.loc_0x0:
  blr

}

/*
* --INFO--
* Address:	8042336C
* Size:	000004

void System::heapStatusIndividual()
{
/*
.loc_0x0:
  blr

}

/*
* --INFO--
* Address:	80423370
* Size:	000004

void System::heapStatusNormal()
{
/*
.loc_0x0:
  blr

}

/*
* --INFO--
* Address:	........
* Size:	000004

void System::heapStatusDumpNode()
{
// UNUSED FUNCTION
}

/*
* --INFO--
* Address:	80423374
* Size:	000028

void System::resetOn(bool)
{
/*
.loc_0x0:
  lwz       r3, 0x44(r3)
  rlwinm.   r0,r4,0,24,31
  lwz       r0, 0xC(r3)
  ori       r0, r0, 0x1
  stw       r0, 0xC(r3)
  beqlr-
  lwz       r0, 0xC(r3)
  ori       r0, r0, 0x8
  stw       r0, 0xC(r3)
  blr

}

/*
* --INFO--
* Address:	........
* Size:	000020

void System::resetOff()
{
// UNUSED FUNCTION
}

/*
* --INFO--
* Address:	8042339C
* Size:	000014

void System::resetPermissionOn()
{
/*
.loc_0x0:
  lwz       r3, 0x44(r3)
  lwz       r0, 0xC(r3)
  oris      r0, r0, 0x1000
  stw       r0, 0xC(r3)
  blr

}

/*
* --INFO--
* Address:	804233B0
* Size:	000018

void System::isResetActive()
{
/*
.loc_0x0:
  lwz       r3, 0x44(r3)
  lwz       r3, 0x4(r3)
  neg       r0, r3
  or        r0, r0, r3
  rlwinm    r3,r0,1,31,31
  blr

}

/*
* --INFO--
* Address:	804233C8
* Size:	000014

void System::activeGP()
{
/*
.loc_0x0:
  lwz       r3, 0x44(r3)
  lwz       r0, 0xC(r3)
  ori       r0, r0, 0x2
  stw       r0, 0xC(r3)
  blr

}

/*
* --INFO--
* Address:	804233DC
* Size:	000014

void System::inactiveGP()
{
/*
.loc_0x0:
  lwz       r3, 0x44(r3)
  lwz       r0, 0xC(r3)
  rlwinm    r0,r0,0,31,29
  stw       r0, 0xC(r3)
  blr

}

/*
* --INFO--
* Address:	804233F0
* Size:	000024

void System::isDvdErrorOccured()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x48(r3)
  bl        0x6F28
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	80423414
* Size:	000034

void System::initCurrentHeapMutex()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x3338F8
  li        r0, 0
  stw       r0, 0x18(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	80423448
* Size:	000070

void System::startChangeCurrentHeap(JKRHeap*)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        -0x3338FC
  lwz       r0, 0x18(r30)
  cmplwi    r0, 0
  beq-      .loc_0x48
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x6838
  li        r4, 0x7F1
  subi      r5, r5, 0x66C4
  crclr     6, 0x6
  bl        -0x3F8E4C

.loc_0x48:
  lwz       r0, -0x77D4(r13)
  mr        r3, r31
  stw       r0, 0x18(r30)
  bl        -0x3FFEF8
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	804234B8
* Size:	000068

void System::endChangeCurrentHeap()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0x18(r3)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x6838
  li        r4, 0x7F9
  subi      r5, r5, 0x66C4
  crclr     6, 0x6
  bl        -0x3F8EB0

.loc_0x3C:
  lwz       r3, 0x18(r31)
  bl        -0x3FFF54
  li        r0, 0
  mr        r3, r31
  stw       r0, 0x18(r31)
  bl        -0x3338C4
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	80423520
* Size:	000004

void System::addGenNode(CNode*)
{
/*
.loc_0x0:
  blr

}

/*
* --INFO--
* Address:	80423524
* Size:	000004

void System::initGenNode()
{
/*
.loc_0x0:
  blr

}

/*
* --INFO--
* Address:	80423528
* Size:	000004

void System::refreshGenNode()
{
/*
.loc_0x0:
  blr

}

/*
* --INFO--
* Address:	8042352C
* Size:	0000A0

void System::setFrameRate(int)
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
  lwz       r31, 0x4C(r3)
  cmplwi    r31, 0
  bne-      .loc_0x48
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x6838
  li        r4, 0x927
  subi      r5, r5, 0x661C
  crclr     6, 0x6
  bl        -0x3F8F30

.loc_0x48:
  xoris     r0, r30, 0x8000
  lis       r3, 0x4330
  stw       r0, 0xC(r1)
  li        r0, 0
  lfd       f2, 0x20D8(r2)
  stw       r3, 0x8(r1)
  lfs       f0, 0x20D0(r2)
  lfd       f1, 0x8(r1)
  fsubs     f1, f1, f2
  stfs      f1, 0x64(r29)
  lfs       f1, 0x64(r29)
  fdivs     f0, f1, f0
  stfs      f0, 0x54(r29)
  sth       r30, 0x1C(r31)
  stw       r0, 0x20(r31)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r0, 0x24(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr

}

/*
* --INFO--
* Address:	........
* Size:	0000A0

void System::forceFinishSection()
{
// UNUSED FUNCTION
}

/*
* --INFO--
* Address:	804235CC
* Size:	000008

void ISectionMgr::getCurrentSection()
{
/*
.loc_0x0:
  li        r3, 0
  blr

}

/*
* --INFO--
* Address:	804235D4
* Size:	000060

void System::dvdLoadSyncNoBlock(DvdThreadCommand*)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x40(r3)
  cmplwi    r3, 0
  beq-      .loc_0x2C
  li        r5, 0x1
  bl        0x16A4
  b         .loc_0x30

.loc_0x2C:
  li        r3, 0x1

.loc_0x30:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x4C
  lwz       r3, 0x48(r31)
  bl        0x6D18
  rlwinm    r0,r3,0,24,31
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31

.loc_0x4C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	80423634
* Size:	00005C

void System::dvdLoadSyncAllNoBlock()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x48(r3)
  bl        0x6CDC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2C
  li        r3, -0x1
  b         .loc_0x48

.loc_0x2C:
  lwz       r3, 0x40(r31)
  cmplwi    r3, 0
  beq-      .loc_0x44
  li        r4, 0x1
  bl        0x16DC
  b         .loc_0x48

.loc_0x44:
  li        r3, 0

.loc_0x48:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	80423690
* Size:	000060

void AppThread::~AppThread()
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
  beq-      .loc_0x44
  lis       r5, 0x804F
  li        r4, 0
  subi      r0, r5, 0x44A8
  stw       r0, 0x0(r30)
  bl        -0x3FDE88
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x3FF61C

.loc_0x44:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	804236F0
* Size:	000038

void PSM::Factory::newSceneMgr(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r3, 0x14
  stw       r0, 0x14(r1)
  bl        -0x3FF85C
  mr.       r0, r3
  beq-      .loc_0x24
  bl        0x36AB8
  mr        r0, r3

.loc_0x24:
  mr        r3, r0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	80423728
* Size:	000030

void Delegate<System>::invoke()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  addi      r12, r4, 0x8
  lwz       r3, 0x4(r3)
  bl        -0x361C1C
  nop
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	80423758
* Size:	000018

void __sinit_system_cpp(void)
{
/*
.loc_0x0:
  li        r4, 0x1
  li        r0, 0
  subi      r3, r13, 0x6510
  stw       r4, -0x6510(r13)
  stb       r0, 0x4(r3)
  blr

}
*/