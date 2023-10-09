#ifndef _DOLPHIN_PAD_H
#define _DOLPHIN_PAD_H

#ifdef __cplusplus
extern "C" {
#endif

#include "types.h"
#include "Dolphin/os.h"

typedef struct PADStatus {
	u16 button;      // _00, Or-ed PAD_BUTTON_* bits
	s8 stickX;       // _02, -128 <= stickX       <= 127
	s8 stickY;       // _03, -128 <= stickY       <= 127
	s8 substickX;    // _04, -128 <= substickX    <= 127
	s8 substickY;    // _05, -128 <= substickY    <= 127
	u8 triggerLeft;  // _06,   0 <= triggerLeft  <= 255
	u8 triggerRight; // _07,   0 <= triggerRight <= 255
	u8 analogA;      // _08,   0 <= analogA      <= 255
	u8 analogB;      // _09,   0 <= analogB      <= 255
	s8 err;          // _0A, one of PAD_ERR_* number
} PADStatus;

#define PAD_MAX_CONTROLLERS 4

#define PAD_BUTTON_LEFT  0x0001
#define PAD_BUTTON_RIGHT 0x0002
#define PAD_BUTTON_DOWN  0x0004
#define PAD_BUTTON_UP    0x0008
#define PAD_TRIGGER_Z    0x0010
#define PAD_TRIGGER_R    0x0020
#define PAD_TRIGGER_L    0x0040
#define PAD_BUTTON_A     0x0100
#define PAD_BUTTON_B     0x0200
#define PAD_BUTTON_X     0x0400
#define PAD_BUTTON_Y     0x0800
#define PAD_BUTTON_MENU  0x1000
#define PAD_BUTTON_START 0x1000

#define PAD_ALL                                                                                                                          \
	(PAD_BUTTON_LEFT | PAD_BUTTON_RIGHT | PAD_BUTTON_DOWN | PAD_BUTTON_UP | PAD_TRIGGER_Z | PAD_TRIGGER_R | PAD_TRIGGER_L | PAD_BUTTON_A \
	 | PAD_BUTTON_B | PAD_BUTTON_X | PAD_BUTTON_Y | PAD_BUTTON_MENU | 0x2000 | 0x0080)

#define PAD_SPEC_0 0
#define PAD_SPEC_1 1
#define PAD_SPEC_2 2
#define PAD_SPEC_3 3
#define PAD_SPEC_4 4
#define PAD_SPEC_5 5

#define PAD_CHAN0   0
#define PAD_CHAN1   1
#define PAD_CHAN2   2
#define PAD_CHAN3   3
#define PAD_CHANMAX 4

#define PAD_CHAN0_BIT 0x80000000
#define PAD_CHAN1_BIT 0x40000000
#define PAD_CHAN2_BIT 0x20000000
#define PAD_CHAN3_BIT 0x10000000

#define PAD_ERR_NONE          0
#define PAD_ERR_NO_CONTROLLER -1
#define PAD_ERR_NOT_READY     -2
#define PAD_ERR_TRANSFER      -3

#define PAD_MOTOR_STOP      0
#define PAD_MOTOR_RUMBLE    1
#define PAD_MOTOR_STOP_HARD 2

// PADSetAnalogMode() param
#define PAD_MODE_0 0
#define PAD_MODE_1 1
#define PAD_MODE_2 2
#define PAD_MODE_3 3
#define PAD_MODE_4 4
#define PAD_MODE_5 5
#define PAD_MODE_6 6
#define PAD_MODE_7 7

#define PADButtonDown(buttonLast, button) ((u16)(((buttonLast) ^ (button)) & (button)))

#define PADButtonUp(buttonLast, button) ((u16)(((buttonLast) ^ (button)) & (buttonLast)))

#define PADStartMotor(chan)    PADControlMotor((chan), PAD_MOTOR_RUMBLE)
#define PADStopMotorHard(chan) PADControlMotor((chan), PAD_MOTOR_STOP_HARD)
#define PADStopMotor(chan)     PADControlMotor((chan), PAD_MOTOR_STOP)

BOOL PADInit(void);
BOOL PADReset(u32 mask);
u32 PADRead(PADStatus* status);
void PADSetSamplingRate(u32 msec);
void PADClamp(PADStatus* status);
void PADClampCircle(PADStatus* status);
void PADControlAllMotors(u32* command);
void PADControlMotor(s32 chan, u32 command);
BOOL PADRecalibrate(u32 mask);
BOOL PADSync(void);
void PADSetAnalogMode(u32 mode);
void PADSetSpec(u32 spec);

typedef void (*PADSamplingCallback)(void);

PADSamplingCallback PADSetSamplingCallback(PADSamplingCallback callback);

extern u32 __PADFixBits;

#ifdef __cplusplus
}
#endif

#endif
