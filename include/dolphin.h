#ifndef _DOLPHIN_H
#define _DOLPHIN_H

#include "types.h"




// predeclare unknown types
typedef unsigned int * CARDBlock;
typedef unsigned int * CARDDirectoryEntry;
typedef unsigned int * CARDFatBlock;
typedef unsigned int * CARDFileInfo;
typedef unsigned int * CARDMemoryCard;
typedef unsigned int * CARDStat;
typedef unsigned int * DVDPlayer;
typedef unsigned int * ECBObject;
typedef unsigned int * ECardSlot;
typedef unsigned int * FILE;
typedef unsigned int * GDCurrentDL;
typedef unsigned int * GXLightObj;
typedef unsigned int * JKRTask;
typedef unsigned int * Matrixf;
typedef unsigned int * OSAlarm;
typedef unsigned int * OSContext;
typedef unsigned int * OSCurrTiming;
typedef unsigned int * OSHorVer;
typedef unsigned int * OSMessageQueue;
typedef unsigned int * OSMutexObject;
typedef unsigned int * OSTRKBuffer;
typedef unsigned int * OSThread;
typedef unsigned int * OSThreadQueue;
typedef unsigned int * PADStatus;
typedef unsigned int * PADStatusSingle;
typedef unsigned int * Quat;
typedef unsigned int * SCallObject;
typedef unsigned int * STRUCT_DSP_TASK;
typedef unsigned int * TColor;
typedef unsigned int * THPInfo;
typedef unsigned int * Vector3_float_;
typedef unsigned int * _GXTexFmt;
typedef unsigned int * _GXVtxDescList;
typedef unsigned int * __FILE;
typedef unsigned int * __gnuc_va_list;
typedef unsigned int * code;
typedef unsigned int * gDBCommTable;



// mainloop.c
void TRKNubMainLoop(void);


// nubevent.c
void TRKDestructEvent(int param_1);
void TRKConstructEvent(undefined4 *param_1,undefined4 param_2);
undefined4 TRKPostEvent(undefined4 param_1);
undefined4 TRKGetNextEvent(undefined4 param_1);
undefined4 TRKInitializeEventQueue(void);


// nubinit.c
void TRKNubWelcome(void);
undefined4 TRKTerminateNub(void);
int TRKInitializeNub(void);


// msg.c
undefined4 TRKMessageSend(int param_1);


// msgbuf.c
void TRKReadBuffer_ui32(int param_1,undefined *param_2,int param_3);
void TRKReadBuffer_ui8(int param_1,int param_2,int param_3);
int TRKReadBuffer1_ui64(int param_1,undefined *param_2);
void TRKAppendBuffer_ui32(int param_1,undefined4 *param_2,int param_3);
int TRKAppendBuffer_ui8(int param_1,undefined *param_2,int param_3);
undefined4 TRKAppendBuffer1_ui64(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 TRKReadBuffer(int param_1,undefined4 param_2,uint param_3);
undefined4 TRKAppendBuffer(int param_1,undefined *param_2,uint param_3);
undefined4 TRKSetBufferPosition(int param_1,uint param_2);
void TRKResetBuffer(int param_1,int param_2);
void TRKReleaseBuffer(int bufferIndex);
OSTRKBuffer * TRKGetBuffer(int bufferIndex);
int TRKGetFreeBuffer(int *param_1,OSTRKBuffer **param_2);
undefined4 TRKInitializeMessageBuffers(void);


// serpoll.c
undefined4 TRKTerminateSerialHandler(void);
undefined4 TRKInitializeSerialHandler(void);
void TRKProcessInput(undefined4 param_1);
void TRKGetInput(void);
int TRKTestForPacket(void);


// usr_put.c
void usr_put_initialize(void);
void usr_puts_serial(char *param_1);


// dispatch.c
undefined4 TRKDispatchMessage(int param_1);
undefined4 TRKInitializeDispatcher(void);


// msghndlr.c
undefined4 TRKDoSetOption(int param_1);
undefined4 TRKDoStop(void);
undefined4 TRKDoStep(int param_1);
undefined4 TRKDoContinue(void);
undefined4 TRKDoWriteRegisters(int param_1);
undefined4 TRKDoReadRegisters(int param_1);
undefined4 TRKDoWriteMemory(int param_1);
undefined4 TRKDoReadMemory(int param_1);
undefined4 TRKDoSupportMask(void);
undefined4 TRKDoVersions(void);
undefined4 TRKDoOverride(void);
undefined4 TRKDoReset(void);
undefined4 TRKDoDisconnect(void);
undefined4 TRKDoConnect(void);
void SetTRKConnected(undefined4 param_1);
undefined4 GetTRKConnected(void);
void OutputData(undefined *param_1,int param_2);


// support.c
int HandlePositionFileSupportRequest (undefined4 param_1,undefined4 *param_2,undefined param_3,undefined4 *param_4);
int HandleCloseFileSupportRequest(undefined4 param_1,undefined4 *param_2);
int HandleOpenFileSupportRequest (char *param_1,undefined param_2,undefined4 *param_3,undefined4 *param_4);
int TRKRequestSend (undefined4 param_1,int *param_2,undefined4 param_3,int param_4,int param_5);
int TRKSuppAccessFile (int param_1,int param_2,uint *param_3,uint *param_4,int param_5,int param_6);


// mutex_TRK.c
undefined4 TRKReleaseMutex(void *param_1);
undefined4 TRKAcquireMutex(void *param_1);
undefined4 TRKInitializeMutex(void);


// notify.c
int TRKDoNotifyStopped(int param_1);


// flush_cache.c
void TRK_flush_cache(uint param_1,int param_2);


// mem_TRK.c
void TRK_fill_mem(int param_1,uint param_2,uint param_3);


// targimpl.c
void __TRK_get_MSR(void);
void __TRK_set_MSR(void);
void TRK_ppc_memcpy(int param_1,int param_2,int param_3);
undefined4 TRKInterruptHandler (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8);
void TRKExceptionHandler(undefined2 param_1);
undefined4 TRKSwapAndGo (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
void TRKInterruptHandlerEnableInterrupts(void);
void ReadFPSCR(ulonglong *param_1);
void WriteFPSCR(void);
undefined4 TRKTargetAccessARAM(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4);
void TRKTargetSetInputPendingPtr(undefined4 param_1);
undefined4 TRKTargetStop(void);
void TRKTargetSetStopped(undefined4 param_1);
undefined4 TRKTargetStopped(void);
int TRKTargetSupportRequest(void);
undefined4 TRKTargetGetPC(void);
undefined4 TRKTargetStepOutOfRange(undefined4 param_1,undefined4 param_2,int param_3);
undefined4 TRKTargetSingleStep(int param_1,int param_2);
void TRKTargetAddExceptionInfo(undefined4 param_1);
void TRKTargetAddStopInfo(undefined4 param_1);
undefined4 TRKTargetInterrupt(int *param_1);
void TRKPostInterruptEvent(void);
int TRKTargetAccessExtended2 (uint param_1,uint param_2,undefined4 param_3,int *param_4,int param_5);
uint TRKTargetAccessExtended1 (uint param_1,uint param_2,undefined4 param_3,int *param_4,int param_5);
int TRKTargetAccessFP (uint param_1,uint param_2,undefined4 param_3,int *param_4,int param_5);
undefined4 TRKTargetAccessDefault (int param_1,uint param_2,undefined4 param_3,int *param_4,int param_5);
int TRKTargetReadInstruction(undefined4 param_1,undefined4 param_2);
int TRKTargetAccessMemory (undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5);
undefined4 TRKValidMemory32(uint param_1,int param_2);


// mpc_7xx_603e.c
void TRKSaveExtended1Block(void);
void TRKRestoreExtended1Block(void);


// dolphin_trk.c
undefined8 InitMetroTRK (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
undefined8 InitMetroTRK_BBA (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
void TRK__write_aram(int param_1,uint param_2,int *param_3);
void TRK__read_aram(int param_1,uint param_2,int *param_3);
undefined4 TRKInitializeTarget(void);
void __TRK_copy_vectors(void);
uint TRKTargetTranslate(uint param_1);
void EnableMetroTRKInterrupts(void);


// main_TRK.c
void TRK_main(void);


// dolphin_trk_glue.c
void TRKLoadContext (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
void TRKUARTInterruptHandler(void);
void InitializeProgramEndTrap(void);
void TRK_board_display(undefined4 param_1);
void UnreserveEXI2Port(void);
void ReserveEXI2Port(void);
int TRKWriteUARTN(uint *param_1,size_t param_2);
int TRKReadUARTN(void *param_1,size_t param_2);
void TRKPollUART(void);
gDBCommTable * EnableEXI2Interrupts(void);
undefined4 TRKInitializeIntDrivenUART(void);
uint InitMetroTRKCommTable(int param_1);
void TRKEXICallBack(undefined4 param_1,undefined4 param_2);


// targcont.c
undefined4 TRKTargetContinue(void);


// target_options.c
undefined GetUseSerialIO(void);
void SetUseSerialIO(undefined param_1);


// mslsupp.c
undefined4 __close_console(undefined4 param_1);
undefined4 __TRK_write_console(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
undefined4 __read_console(undefined4 param_1,undefined4 param_2,undefined4 *param_3);


// UDP_Stubs.c
undefined4 udp_cc_post_stop(void);
undefined4 udp_cc_pre_continue(void);
undefined4 udp_cc_peek(void);
undefined4 udp_cc_write(void);
undefined4 udp_cc_read(void);
undefined4 udp_cc_close(void);
undefined4 udp_cc_open(void);
int udp_cc_shutdown(void);
undefined4 udp_cc_initialize(void);


// main.c
undefined4 ddh_cc_initinterrupts(void);
int ddh_cc_peek(void);
undefined4 ddh_cc_post_stop(void);
undefined4 ddh_cc_pre_continue(void);
undefined4 ddh_cc_write(int param_1,int param_2);
int ddh_cc_read(undefined4 param_1,uint param_2);
undefined4 ddh_cc_close(void);
int ddh_cc_open(void);
int ddh_cc_shutdown(void);
undefined4 ddh_cc_initialize(undefined4 param_1,undefined4 param_2);


// CircleBuffer.c
uint CircleBufferReadBytes(void **param_1,void *param_2,size_t param_3);
undefined4 CircleBufferWriteBytes(int param_1,void *param_2,uint param_3);
void CircleBufferInitialize(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
undefined4 CBGetBytesAvailableForRead(int param_1);


// main.c
undefined4 gdev_cc_initinterrupts(void);
int gdev_cc_peek(void);
undefined4 gdev_cc_post_stop(void);
undefined4 gdev_cc_pre_continue(void);
undefined4 gdev_cc_write(uint *param_1,size_t param_2);
int gdev_cc_read(void *param_1,size_t param_2);
undefined4 gdev_cc_close(void);
int gdev_cc_open(void);
int gdev_cc_shutdown(void);
undefined4 gdev_cc_initialize(undefined1 **outEXIInputFlag,undefined4 mtrCallback);


// MWTrace.c
void MWTRACE(void);


// MWCriticalSection_gc.cpp
undefined MWExitCriticalSection(void);
void MWEnterCriticalSection(undefined4 *param_1);
void MWInitializeCriticalSection(void);


// __va_arg.c
int * __va_arg(char *param_1,int param_2);


// global_destructor_chain.c
void __destroy_global_chain(void);
void __register_global_object(undefined4 param_1,undefined4 param_2,undefined4 *param_3);


// CPlusLibPPC.cp
void __copy(undefined *param_1,undefined *param_2,int param_3);


// NMWException.cp
void __destroy_new_array(int param_1,code *param_2);
void __destroy_arr(int param_1,code *param_2,int param_3,int param_4);
void __construct_array (void *arrayPointer,code *ctor,code *dtor,int elementSize,uint elementCount);
void __dt__26__partial_array_destructorFv(void); // unknown function signature
void * __construct_new_array (void *memory,code *elementCtor,code *elementDtor,int elementSize,uint elementCount );


// ptmf.c
void __ptmf_test(void); // malformatted function signature: bool __ptmf_test(undefined4 (*param_1) [3])
void __ptmf_scall(void *object,SCallObject *param_2,...);


// runtime.c
ulong __cvt_fp2unsigned(double param_1);
void __save_fpr(void);
void __restore_fpr(void);
void __save_gpr(void);
void __restore_gpr(void);
undefined8 __div2u(uint param_1,uint param_2,int param_3,uint param_4);
ulonglong __div2i(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 __mod2u(uint param_1,uint param_2,int param_3,uint param_4);
undefined8 __mod2i(uint param_1,uint param_2,int param_3,uint param_4);
undefined8 __shl2i(int param_1,uint param_2,int param_3);
ulonglong __shr2u(uint param_1,uint param_2,int param_3);
undefined8 __shr2i(int param_1,uint param_2,uint param_3);
double __cvt_ull_dbl(uint param_1,uint param_2);
ulonglong __cvt_dbl_usll(double param_1);


// __init_cpp_exceptions.cpp
void GetR2__Fv(void); // unknown function signature
void __fini_cpp_exceptions(void);
void __init_cpp_exceptions(void);


// Gecko_ExceptionPPC.cp
void __unregister_fragment(int param_1);
undefined4 __register_fragment(undefined4 param_1,undefined4 param_2);


// GCN_mem_alloc.c
void __sys_free(undefined4 param_1);


// abort_exit.c
void exit(int __status);


// alloc.c
void free(void *__ptr);
void __pool_free(undefined4 param_1,int param_2);
void deallocate_from_fixed_pools(int param_1,int **param_2,uint param_3);
void deallocate_from_var_pools(int **param_1,uint **param_2);


// ansi_files.c
undefined4 __flush_all(void);
void __close_all(void);


// ansi_fp.c
double __dec2num(uint *param_1);
void __num2dec(int param_1,int param_2);
void __num2dec_internal(double param_1,char *param_2);
void __minus_dec(undefined4 *param_1,undefined4 *param_2,int param_3);
uint __equals_dec(int param_1,int param_2);
void __two_exp(undefined4 *param_1,uint param_2);
void __timesdec(undefined *param_1,int param_2,int param_3);


// arith.c
div_t div(int __numer,int __denom);
int abs(int __x);


// buffer_io.c
int __flush_buffer(undefined4 *param_1,undefined4 *param_2);
void __prep_buffer(int param_1);


// critical_regions.gamecube.c
void __end_critical_region(void);
void __begin_critical_region(void);
void __kill_critical_regions(void);


// ctype.c
int tolower(int __c);


// direct_io.c
uint __fwrite(char *param_1,uint param_2,int param_3,__FILE *param_4);
size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s);


// file_io.c
int fflush(FILE *__stream);
int fclose(FILE *__stream);


// FILE_POS.C
int fseek(FILE *__stream,long __off,int __whence);
undefined4 _fseek(undefined4 *param_1,uint param_2,int param_3);
long ftell(FILE *__stream);


// mbstring.c
size_t wcstombs(char *__s,_wchar_t *__pwcs,size_t __n);
int mbtowc(_wchar_t *__pwc,char *__s,size_t __n);
undefined4 is_utf8_complete(char *param_1,uint param_2);


// mem.c
int memcmp(void *__s1,void *__s2,size_t __n);
char * __memrchr(int param_1,char param_2,int param_3);
void * memchr(void *__s,int __c,size_t __n);
void * memmove(void *__dest,void *__src,size_t __n);


// mem_funcs.c
void __copy_longs_rev_unaligned(int param_1,int param_2,uint param_3);
void __copy_longs_unaligned(int param_1,int param_2,uint param_3);
void __copy_longs_rev_aligned(int param_1,int param_2,uint param_3);
void __copy_longs_aligned(int param_1,int param_2,uint param_3);


// misc_io.c
void __stdio_atexit(void);


// printf.c
int sprintf(char *__s,char *__format,...);
int snprintf(char *__s,size_t __maxlen,char *__format,...);
int vsprintf(char *__s,char *__format,__gnuc_va_list __arg);
int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg);
int vprintf(char *__format,__gnuc_va_list __arg);
undefined4 __StringWrite(int *param_1,void *param_2,size_t param_3);
FILE * __FileWrite(FILE *param_1,void *param_2,size_t param_3);
int __pformatter(code *param_1,undefined4 param_2,char *param_3,__gnuc_va_list param_4);
byte * float2str(double param_1,int param_2,int param_3);
void round_decimal(int param_1,int param_2);
char * double2hex(ulonglong param_1,int param_2,int param_3);
char * longlong2str(uint param_1,uint param_2,int param_3,char *param_4);
char * long2str(uint param_1,int param_2,char *param_3);
byte * parse_format(int param_1,uint *param_2);


// rand.c
void srand(uint __seed);
short rand(void);


// scanf.c
int sscanf(char *__s,char *__format,...);
byte * __StringRead(byte **param_1,byte *param_2,int param_3);
int __sformatter(code *param_1,undefined4 param_2,byte *param_3,undefined4 param_4);
byte * parse_format(int param_1,uint *param_2);


// string.c
char * strrchr(char *__s,int __c);
char * strchr(char *__s,int __c);
int strncmp(char *__s1,char *__s2,size_t __n);
int strcmp(char *__s1,char *__s2);
char * strcat(char *__dest,char *__src);
char * strncpy(char *__dest,char *__src,size_t __n);
char * strcpy(char *__dest,char *__src);
size_t strlen(char *__s);


// strtold.c
double __strtold(int param_1,code *param_2,undefined4 param_3,int *param_4,int *param_5);


// strtoul.c
long strtol(char *__nptr,char **__endptr,int __base);
ulong strtoul(char *__nptr,char **__endptr,int __base);
undefined8 __strtoull(uint param_1,int param_2,code *param_3,undefined4 param_4,int *param_5, undefined4 *param_6,undefined4 *param_7);
undefined * __strtoul(uint param_1,uint param_2,code *param_3,undefined4 param_4,int *param_5, undefined4 *param_6,undefined4 *param_7);


// wchar_io.c
int fwide(__FILE *__fp,int __mode);


// uart_console_io_gcn.c
undefined4 __write_console (undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4);


// e_asin.c
double __ieee754_asin(double param_1);


// e_atan2.c
double __ieee754_atan2(double param_1,double param_2);


// e_exp.c
double __ieee754_exp(double param_1);


// e_fmod.c
double __ieee754_fmod(double param_1,double param_2);


// e_log.c
double __ieee754_log(double param_1);


// e_log10.c
double __ieee754_log10(double param_1);


// e_pow.c
double __ieee754_pow(double param_1,double param_2);


// e_rem_pio2.c
int __ieee754_rem_pio2(double param_1,double *param_2);


// k_cos.c
double __kernel_cos(double param_1,double param_2);


// k_rem_pio2.c
void __kernel_rem_pio2 (undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5, int param_6);


// k_sin.c
double __kernel_sin(double param_1,double param_2,int param_3);


// k_tan.c
double __kernel_tan(double param_1,double param_2,uint param_3);


// s_atan.c
double atan(double __x);


// s_ceil.c
double ceil(double __x);


// s_copysign.c
double copysign(double __x,double __y);


// s_cos.c
double cos(double __x);


// s_floor.c
double floor(double __x);


// s_frexp.c
double frexp(double __x,int *__exponent);


// s_ldexp.c
double ldexp(double __x,int __exponent);


// s_modf.c
double modf(double __x,double *__iptr);


// s_sin.c
double sin(double __x);


// s_tan.c
double tan(double __x);


// w_asin.c
double asin(double __x);


// w_atan2.c
double atan2(double __y,double __x);


// w_exp.c
double exp(double __x);


// w_fmod.c
double fmod(double __x,double __y);


// w_log10.c
double log10(double __x);


// w_pow.c
double pow(double __x,double __y);


// e_sqrt.c
double __ieee754_sqrt(double param_1);


// math_ppc.c
float tanf(float __x);
float sinf(float __x);
float cosf(float __x);


// w_sqrt.c
double sqrt(double __x);


// extras.c
undefined4 stricmp(char *param_1,char *param_2);


// DebuggerDriver.c
void DBClose(void);
void DBOpen(void);
undefined4 DBWrite(uint *param_1,size_t param_2);
undefined4 DBRead(undefined4 param_1,int param_2);
uint DBQueryData(void);
void DBInitInterrupts(void);
undefined DBInitComm(undefined1 **outEXIInputFlag,undefined4 mtrCallback);
void DBGHandler(short param_1);
void MWCallback(void);
uint DBGReadStatus(undefined4 param_1);
uint DBGWrite(uint param_1,uint *param_2,int param_3);
uint DBGRead(uint param_1,undefined4 *param_2,int param_3);
uint DBGReadMailbox(undefined4 param_1);
undefined4 DBGEXIImm(byte *param_1,int param_2,int param_3);


// vi.c
void __VIRetraceHandler(undefined4 param_1,OSContext *param_2);
undefined4 VISetPreRetraceCallback(undefined4 param_1);
undefined4 VISetPostRetraceCallback(undefined4 param_1);
OSCurrTiming * getTiming(uint param_1);
void __VIInit(uint param_1);
void VIInit(void);
undefined VIWaitForRetrace(void);
void setFbbRegs(OSHorVer *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5);
void setVerticalRegs (uint param_1,ushort param_2,ushort param_3,short param_4,short param_5,short param_6 ,short param_7,short param_8,int param_9);
undefined VIConfigure(uint *param_1);
undefined VIFlush(void);
undefined VISetNextFrameBuffer(undefined4 param_1);
void * VIGetCurrentFrameBuffer(void);
undefined VISetBlack(int param_1);
undefined4 VIGetRetraceCount(void);
void GetCurrentDisplayPosition(uint *param_1,uint *param_2);
_bool getCurrentFieldEvenOdd(void);
ushort VIGetNextField(void);
uint VIGetCurrentLine(void);
undefined4 VIGetTvFormat(void);
ushort VIGetDTVStatus(void);
void __VIDisplayPositionToXY(uint param_1,uint param_2,short *param_3,ushort *param_4);
void __VIGetCurrentPosition(short *param_1,ushort *param_2);


// AmcExi2Stubs.c
void EXI2_Init(void);
void EXI2_EnableInterrupts(void);
undefined4 EXI2_Poll(void);
undefined4 EXI2_ReadN(void);
undefined4 EXI2_WriteN(void);
void EXI2_Reserve(void);
void EXI2_Unreserve(void);
_bool AMC_IsStub(void);


// ar.c
undefined4 ARRegisterDMACallback(undefined4 param_1);
ushort ARGetDMAStatus(void);
undefined ARStartDMA(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void * ARAlloc(ulong param_1);
void * ARInit(ulong param_1,ulong param_2);
ulong ARGetBaseAddress(void);
ulong ARGetSize(void);
void __ARHandler(undefined4 param_1,OSContext *param_2);
void __ARClearInterrupt(void);
ushort __ARGetInterruptStatus(void);
void __ARChecksize(void);


// arq.c
void __ARQServiceQueueLo(void);
void __ARQCallbackHack(void);
void __ARQInterruptServiceRoutine(void);
void ARQInit(void);
undefined ARQPostRequest (undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8);


// PPCArch.c
void PPCMfmsr(void);
void PPCMtmsr(void);
void PPCMfhid0(void);
void PPCMthid0(void);
void PPCMfl2cr(void);
void PPCMtl2cr(void);
void PPCMtdec(void);
void PPCSync(void);
void PPCHalt(void);
void PPCMtmmcr0(void);
void PPCMtmmcr1(void);
void PPCMtpmc1(void);
void PPCMtpmc2(void);
void PPCMtpmc3(void);
void PPCMtpmc4(void);
uint PPCMffpscr(void);
void PPCMtfpscr(void);
void PPCMfhid2(void);
void PPCMthid2(void);
void PPCMtwpar(void);
void PPCDisableSpeculation(void);
void PPCSetFpNonIEEEMode(void);


// CARDBios.c
void __CARDDefaultApiCallback(void);
void __CARDSyncCallback(int param_1);
void __CARDExtHandler(ECardSlot param_1);
int __CARDExiHandler(ECardSlot slot);
int __CARDTxHandler(ECardSlot slot);
void __CARDUnlockedHandler(ECardSlot param_1);
undefined4 __CARDEnableInterrupt(ECardSlot param_1,int param_2);
int __CARDReadStatus(ECardSlot slot,byte *array);
int __CARDClearStatus(ECardSlot slot);
void TimeoutHandler(int param_1);
int Retry(ECardSlot slot);
void UnlockedCallback(ECardSlot param_1,int param_2);
int __CARDStart(ECardSlot param_1,undefined *callback,int param_3);
int __CARDReadSegment(ECardSlot param_1,undefined4 param_2);
int __CARDWritePage(ECardSlot param_1,undefined4 param_2);
int __CARDEraseSector(ECardSlot slot,uint param_2,undefined *callback);
void CARDInit(void);
ushort __CARDGetFontEncode(void);
void __CARDSetDiskID(byte *param_1);
int __CARDGetControlBlock(ECardSlot slot,CARDBlock **param_2);
int __CARDPutControlBlock(CARDBlock *param_1,int param_2);
int CARDFreeBlocks(ECardSlot slot,int *param_2,int *param_3);
int __CARDSync(ECardSlot param_1);
undefined4 OnReset(void);


// CARDUnlock.c
uint bitrev(uint param_1);
int ReadArrayUnlock(ECardSlot slot,uint param_2,byte *array,int arrayLength,int param_5);
int DummyLen(void);
undefined4 __CARDUnlock(ECardSlot param_1,uint *param_2);
void InitCallback(int param_1);
void DoneCallback(int param_1);


// CARDRdwr.c
void BlockReadCallback(ECardSlot param_1,int param_2);
undefined4 __CARDRead(ECardSlot param_1,undefined4 param_2,uint param_3,uchar *param_4, undefined4 param_5);
void BlockWriteCallback(int param_1,int param_2);
undefined4 __CARDWrite(int param_1,undefined4 param_2,uint param_3,uchar *param_4,undefined4 param_5);


// CARDBlock.c
undefined4 __CARDGetFatBlock(int param_1);
void WriteCallback(ECardSlot param_1,int param_2);
void EraseCallback(int param_1,int param_2);
undefined4 __CARDAllocBlock(ECardSlot param_1,uint sectorCountMaybe,undefined *callback);
void __CARDUpdateFatBlock(ECardSlot slot,CARDFatBlock *fatBlock,undefined *callback);


// CARDDir.c
CARDDirectoryEntry * __CARDGetDirBlock(CARDBlock *param_1);
void WriteCallback(ECardSlot param_1,int param_2);
void EraseCallback(int param_1,int param_2);
int __CARDUpdateDir(ECardSlot slot,undefined *callback);


// CARDCheck.c
void __CARDCheckSum(ushort *param_1,uint param_2,short *param_3,short *param_4);
int VerifyID(CARDBlock *param_1);
int VerifyDir(CARDBlock *param_1,uint *param_2);
int VerifyFAT(CARDBlock *param_1,uint *param_2);
int __CARDVerify(CARDBlock *param_1);
int CARDCheckExAsync(ECardSlot slot,undefined4 *param_2,code *callback);
void CARDCheck(ECardSlot param_1);


// CARDMount.c
_bool IsCard(uint param_1);
_bool CARDProbe(ECardSlot slot);
undefined4 CARDProbeEx(ECardSlot param_1,uint *param_2,uint *param_3);
int DoMount(ECardSlot slot);
void __CARDMountCallback(ECardSlot param_1,int param_2);
int CARDMountAsync(ECardSlot slot,CARDMemoryCard *param_2,undefined *param_3,code *param_4);
void CARDMount(ECardSlot slot,CARDMemoryCard *memoryCard,undefined *callback);
undefined DoUnmount(ECardSlot param_1,int param_2);
int CARDUnmount(ECardSlot slot);


// CARDFormat.c
void FormatCallback(ECardSlot param_1,int param_2);
int __CARDFormatRegionAsync(ECardSlot slot,ushort param_2,code *callback);
void CARDFormat(ECardSlot slot);


// CARDOpen.c
undefined4 __CARDCompareFileName(int param_1,char *param_2);
int __CARDAccess(CARDBlock *param_1,CARDDirectoryEntry *param_2);
int __CARDIsWritable(CARDBlock *param_1,CARDDirectoryEntry *param_2);
int __CARDIsReadable(CARDBlock *param_1,CARDDirectoryEntry *param_2);
void CARDOpen(ECardSlot param_1,char *param_2,CARDFileInfo *fileInfo);
void CARDClose(CARDFileInfo *param_1);


// CARDCreate.c
void CreateCallbackFat(ECardSlot param_1,int param_2);
int CARDCreateAsync (ECardSlot slot,char *fileName,uint param_3,CARDFileInfo *fileInfo,undefined *callback );
void CARDCreate(ECardSlot slot,char *fileName,uint param_3,CARDFileInfo *fileInfo);


// CARDRead.c
int __CARDSeek(CARDFileInfo *param_1,long param_2,long param_3,CARDBlock **param_4);
void ReadCallback(ECardSlot param_1,int param_2);
int CARDReadAsync (CARDFileInfo *param_1,uchar *param_2,long param_3,long param_4,undefined *callback);
void CARDRead(CARDFileInfo *param_1,uchar *param_2,long param_3,long param_4);


// CARDWrite.c
void WriteCallback(ECardSlot param_1,int param_2);
void EraseCallback(int param_1,int param_2);
int CARDWriteAsync (CARDFileInfo *param_1,uchar *param_2,long param_3,long param_4,code *param_5);
void CARDWrite(CARDFileInfo *param_1,uchar *param_2,long param_3,long param_4);


// CARDStat.c
void UpdateIconOffsets(CARDDirectoryEntry *param_1,CARDStat *param_2);
int CARDGetStatus(ECardSlot slot,int param_2,CARDStat *stat);
int CARDSetStatusAsync(ECardSlot slot,int param_2,CARDStat *stat,undefined *callback);
void CARDSetStatus(ECardSlot param_1,undefined4 param_2,CARDStat *param_3);


// CARDNet.c
int CARDGetSerialNo(ECardSlot param_1,ulonglong *param_2);


// db.c
void DBInit(void);
void __DBExceptionDestinationAux(void);
void __DBExceptionDestination(void);
uint __DBIsExceptionMarked(uint param_1);
void DBPrintf(void);


// dsp.c
ushort DSPCheckMailToDSP(void);
ushort DSPCheckMailFromDSP(void);
uint DSPReadMailFromDSP(void);
void DSPSendMailToDSP(undefined4 param_1);
undefined DSPAssertInt(void);
uint DSPInit(void);


// dsp_debug.c
void __DSP_debug_printf(void);


// dsp_task.c
void __DSP_exec_task(int param_1,int *param_2);
void __DSP_boot_task(STRUCT_DSP_TASK *param_1);
void __DSP_insert_task(STRUCT_DSP_TASK *param_1);
void __DSP_remove_task(STRUCT_DSP_TASK *param_1);


// dvdlow.c
void __DVDInitWA(void);
void __DVDInterruptHandler(undefined4 param_1,OSContext *param_2);
void AlarmHandler(int param_1);
void AlarmHandlerForTimeout(undefined4 param_1,OSContext *param_2);
void Read(undefined4 param_1,uint param_2,uint param_3,undefined4 param_4);
void SeekTwiceBeforeRead(int param_1,int param_2,uint param_3,int param_4);
undefined4 DVDLowRead(int param_1,int param_2,uint param_3,int param_4);
undefined4 DVDLowSeek(uint param_1,undefined4 param_2);
undefined4 DVDLowWaitCoverClose(undefined4 param_1);
undefined4 DVDLowReadDiskID(undefined4 param_1,undefined4 param_2);
undefined4 DVDLowStopMotor(undefined4 param_1);
undefined4 DVDLowRequestError(undefined4 param_1);
undefined4 DVDLowInquiry(undefined4 param_1,undefined4 param_2);
undefined4 DVDLowAudioStream(uint param_1,undefined4 param_2,uint param_3,undefined4 param_4);
undefined4 DVDLowRequestAudioStatus(uint param_1,undefined4 param_2);
undefined4 DVDLowAudioBufferConfig(int param_1,uint param_2,undefined4 param_3);
void DVDLowReset(void);
undefined4 DVDLowBreak(void);
undefined4 DVDLowClearCallback(void);
undefined __DVDLowSetWAType(undefined4 param_1,undefined4 param_2);
undefined4 __DVDLowTestAlarm(undefined *param_1);


// dvdfs.c
void __DVDFSInit(void);
uint DVDConvertPathToEntrynum(char *path);
_bool DVDFastOpen(long fileNumber,DVDPlayer *param_2);
undefined4 DVDOpen(char *param_1,DVDPlayer *param_2);
_bool DVDClose(DVDPlayer *param_1);
int entryToPath(int param_1,int param_2,int param_3);
undefined4 DVDConvertEntrynumToPath(int param_1,int param_2,int param_3);
undefined4 DVDGetCurrentDir(int param_1,int param_2);
undefined4 DVDChangeDir(char *param_1);
undefined4 DVDReadAsyncPrio (DVDPlayer *param_1,void *param_2,long byteCount,long startOffset,undefined *param_5, undefined4 param_6);
void cbForReadAsync(undefined4 param_1,int param_2);
undefined4 DVDReadPrio(DVDPlayer *param_1,void *param_2,int param_3,uint param_4,undefined4 param_5);
void cbForReadSync(void);
undefined4 DVDOpenDir(char *param_1,uint *param_2);
undefined4 DVDReadDir(uint *param_1,uint *param_2);
undefined4 DVDCloseDir(void);


// dvd.c
void defaultOptionalCommandChecker(void);
void DVDInit(void);
void stateReadingFST(void);
void cbForStateReadingFST(uint param_1);
void cbForStateError(int param_1);
void stateTimeout(void);
void stateGettingError(void);
undefined4 CategorizeError(uint param_1);
void cbForStateGettingError(uint param_1);
void cbForUnrecoveredError(uint param_1);
void cbForUnrecoveredErrorRetry(uint param_1);
void stateGoToRetry(void);
void cbForStateGoToRetry(uint param_1);
void stateCheckID(void);
void stateCheckID3(void);
void stateCheckID2a(void);
void cbForStateCheckID2a(uint param_1);
void stateCheckID2(void);
void cbForStateCheckID1(uint param_1);
void cbForStateCheckID2(uint param_1);
void cbForStateCheckID3(uint param_1);
void AlarmHandler(int param_1);
void stateCoverClosed(void);
void stateCoverClosed_CMD(void);
void cbForStateCoverClosed(uint param_1);
void stateMotorStopped(void);
void cbForStateMotorStopped(void);
void stateReady(void);
void stateBusy(int param_1);
void cbForStateBusy(uint param_1);
undefined4 DVDReadAbsAsyncPrio (DVDPlayer *param_1,void *param_2,long byteCount,byte *startAddress,undefined *param_5, undefined4 param_6);
undefined4 DVDReadAbsAsyncForBS (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
undefined4 DVDReadDiskID(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 DVDCancelStreamAsync(int param_1,undefined4 param_2);
undefined4 DVDInquiryAsync(int param_1,undefined4 param_2,undefined4 param_3);
void DVDReset(void);
int DVDGetCommandBlockStatus(DVDPlayer *param_1);
int DVDGetDriveStatus(void);
uint DVDSetAutoInvalidation(uint param_1);
undefined DVDResume(void);
undefined4 DVDCancelAsync(DVDPlayer *param_1,code *param_2);
int DVDCancel(DVDPlayer *param_1);
void cbForCancelSync(void);
undefined4 DVDGetCurrentDiskID(void);
undefined4 DVDCheckDisk(void);
undefined __DVDPrepareResetAsync(code *param_1);
undefined4 __DVDTestAlarm(undefined *param_1);


// dvdqueue.c
void __DVDClearWaitingQueue(void);
undefined4 __DVDPushWaitingQueue(int param_1,undefined4 *param_2);
int ** __DVDPopWaitingQueue(void);
undefined4 __DVDCheckWaitingQueue(void);
undefined4 __DVDDequeueWaitingQueue(DVDPlayer *param_1);


// dvderror.c
char ErrorCode2Num(uint param_1);
void __DVDStoreErrorCode(uint param_1);


// dvdidutils.c
undefined4 DVDCompareDiskID(char *param_1,char *param_2);


// dvdFatal.c
void __DVDPrintFatalMessage(void);


// fstload.c
void cb(int param_1,undefined4 param_2);
void __fstLoad(void);


// EXIBios.c
void SetExiInterruptMask(ECardSlot slot,ECBObject *ecbObject);
_bool EXIImm(ECardSlot slot,byte *array,int byteCount,int param_4,undefined4 param_5);
_bool EXIImmEx(ECardSlot slot,byte *array,int lengthMaybe,int param_4);
undefined4 EXIDma(ECardSlot param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5);
_bool EXISync(ECardSlot slot);
uint EXIClearInterrupts(int param_1,int param_2,int param_3,int param_4);
undefined * EXISetExiCallback(ECardSlot slot,undefined *callback);
_bool __EXIProbe(ECardSlot slot);
_bool EXIProbe(ECardSlot slot);
undefined4 EXIProbeEx(ECardSlot param_1);
undefined4 EXIAttach(ECardSlot param_1,undefined4 param_2);
undefined4 EXIDetach(int param_1);
undefined4 EXISelect(ECardSlot param_1,int param_2,int param_3);
_bool EXIDeselect(ECardSlot slot);
void EXIIntrruptHandler(short param_1,OSContext *param_2);
void TCIntrruptHandler(short param_1,OSContext *param_2);
void EXTIntrruptHandler(short param_1,OSContext *param_2);
void EXIInit(void);
undefined4 EXILock(ECardSlot param_1,void *param_2,undefined *param_3);
_bool EXIUnlock(ECardSlot slot);
uint EXIGetState(ECardSlot param_1);
void UnlockedHandler(ECardSlot param_1);
undefined4 EXIGetID(ECardSlot slot,int param_2,int *param_3);


// EXIUart.c
undefined4 ProbeBarnacle(ECardSlot param_1,int param_2,int *param_3);
void __OSEnableBarnacle(ECardSlot param_1,undefined4 param_2);
undefined4 InitializeUART(void);
undefined4 WriteUARTN(byte *param_1,uint param_2);


// GDBase.c
void GDInitGDLObj(GDCurrentDL *param_1,byte *param_2,int param_3);
void GDFlushCurrToMem(void);
void GDPadCurr32(void);
void GDOverflowed(void);


// GDGeometry.c
void GDSetVtxDescv(_GXVtxDescList *param_1);
void GDSetArray(int param_1,int param_2,byte param_3);
void GDSetArrayRaw(int param_1,undefined4 param_2,byte param_3);


// GXInit.c
int __GXDefaultTexRegionCallback(undefined4 param_1,uint param_2);
int __GXDefaultTlutRegionCallback(uint param_1);
undefined4 __GXShutdown(int param_1);
undefined * GXInit(undefined4 param_1,undefined4 param_2);
void __GXInitGX(void);


// GXFifo.c
void GXCPInterruptHandler(undefined4 param_1,OSContext *param_2);
void GXInitFifoBase(int *param_1,int param_2,uint param_3);
undefined GXInitFifoPtrs(int param_1,int param_2,int param_3);
void GXInitFifoLimits(int param_1,undefined4 param_2,undefined4 param_3);
undefined GXSetCPUFifo(uint *param_1);
undefined GXSetGPFifo(undefined4 *param_1);
void GXSaveCPUFifo(undefined4 param_1);
undefined __GXSaveCPUFifoAux(int *param_1);
void GXGetGPStatus(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5);
undefined4 GXSetBreakPtCallback(undefined4 param_1);
void __GXFifoInit(void);
void __GXFifoReadEnable(void);
void __GXFifoReadDisable(void);
void __GXFifoLink(char param_1);
void __GXWriteFifoIntEnable(uint param_1,uint param_2);
void __GXWriteFifoIntReset(uint param_1,uint param_2);
void __GXCleanGPFifo(void);
undefined4 GXGetCPUFifo(void);
undefined4 GXGetGPFifo(void);


// GXAttr.c
void GXSetVtxDesc(int param_1,uint param_2);
void __GXSetVCD(void);
void __GXCalculateVLim(void);
void GXClearVtxDesc(void);
void GXSetVtxAttrFmt(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5);
void GXSetVtxAttrFmtv(uint param_1,int *param_2);
void __GXSetVAT(void);
void GXSetArray(int param_1,uint param_2,uint param_3);
void GXInvalidateVtxCache(void);
void GXSetTexCoordGen2 (int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6);
void GXSetNumTexGens(uint param_1);


// GXMisc.c
void GXSetMisc(int param_1,int param_2);
void GXFlush(void);
void __GXAbort(void);
void GXAbortFrame(void);
void GXSetDrawSync(uint param_1);
undefined GXSetDrawDone(void);
undefined GXWaitDrawDone(void);
undefined GXDrawDone(void);
void GXPixModeSync(void);
void GXPokeAlphaMode(int param_1,ushort param_2);
void GXPokeAlphaRead(ushort param_1);
void GXPokeAlphaUpdate(uint param_1);
void GXPokeBlendMode(int param_1,int param_2,int param_3,int param_4);
void GXPokeColorUpdate(uint param_1);
void GXPokeDstAlpha(uint param_1,ushort param_2);
void GXPokeDither(uint param_1);
void GXPokeZMode(ushort param_1,int param_2,int param_3);
undefined4 GXSetDrawSyncCallback(undefined4 param_1);
void GXTokenInterruptHandler(undefined4 param_1,OSContext *param_2);
undefined4 GXSetDrawDoneCallback(undefined4 param_1);
void GXFinishInterruptHandler(undefined4 param_1,OSContext *param_2);
void __GXPEInit(void);


// GXGeometry.c
void __GXSetDirtyState(void);
void GXBegin(byte param_1,byte param_2,undefined2 param_3);
void __GXSendFlushPrim(void);
void GXSetLineWidth(uint param_1,uint param_2);
void GXSetPointSize(uint param_1,uint param_2);
void GXEnableTexOffsets(int param_1,uint param_2,uint param_3);
void GXSetCullMode(uint param_1);
void GXSetCoPlanar(uint param_1);
void __GXSetGenMode(void);


// GXFrameBuf.c
void GXSetDispCopySrc(uint param_1,uint param_2,uint param_3,uint param_4);
void GXSetTexCopySrc (ushort param_1,ushort param_2,ushort param_3,ushort param_4,_bool param_5, uchar param_6);
void GXSetDispCopyDst(uint param_1);
void GXSetTexCopyDst(ushort param_1,ushort param_2,_GXTexFmt param_3,_bool param_4);
void GXSetDispCopyFrame2Field(uint param_1);
void GXSetCopyClamp(uint param_1);
uint GXGetNumXfbLines(double param_1,uint param_2);
double GXGetYScaleFactor(ushort param_1,ushort param_2);
uint GXSetDispCopyYScale(double param_1);
void GXSetCopyClear(undefined *param_1,uint param_2);
void GXSetCopyFilter(char param_1,byte *param_2,char param_3,byte *param_4);
void GXSetDispCopyGamma(uint param_1);
void GXCopyDisp(uint param_1,uint param_2);
void GXCopyTex(uint param_1,uchar param_2);
void GXClearBoundingBox(void);


// GXLight.c
void GXInitLightAttn (GXLightObj *param_1,float param_2,float param_3,float param_4,float param_5, float param_6,float param_7);
void GXInitLightSpot(GXLightObj *param_1,uint param_2,float param_3);
void GXInitLightDistAttn(GXLightObj *param_1,int param_2,float param_3,float param_4);
void GXInitLightPos(GXLightObj *param_1,float param_2,float param_3,float param_4);
void GXInitLightDir(GXLightObj *param_1,float param_2,float param_3,float param_4);
void GXInitSpecularDir(GXLightObj *param_1,float param_2,float param_3,float param_4);
void GXInitLightColor(GXLightObj *param_1,TColor *param_2);
undefined8 GXLoadLightObjImm(GXLightObj *param_1,uint param_2);
void GXSetChanAmbColor(int param_1,uint *param_2);
void GXSetChanMatColor(int param_1,uint *param_2);
void GXSetNumChans(uint param_1);
void GXSetChanCtrl (uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6, int param_7);


// GXTexture.c
int GXGetTexBufferSize(uint param_1,uint param_2,int param_3,char param_4,uint param_5);
void __GetImageTileCount (int param_1,ushort param_2,ushort param_3,int *param_4,int *param_5,int *param_6);
void GXInitTexObj (uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6, uint param_7,char param_8);
void GXInitTexObjCI(int param_1);
void GXInitTexObjLOD (double param_1,double param_2,double param_3,uint *param_4,int param_5,int param_6, uint param_7,char param_8,uint param_9);
undefined4 GXGetTexObjFmt(int param_1);
uint GXGetTexObjMipMap(int param_1);
void GXLoadTexObjPreLoaded(uint *param_1,uint *param_2,int param_3);
void GXLoadTexObj(undefined4 param_1,undefined4 param_2);
void GXInitTlutObj(uint *param_1,uint param_2,uint param_3,undefined2 param_4);
void GXLoadTlut(uint *param_1,undefined4 param_2);
void GXInitTexCacheRegion (uint *param_1,undefined param_2,uint param_3,int param_4,uint param_5,int param_6, uint param_7);
void GXInitTlutRegion(uint *param_1,int param_2,uint param_3);
void GXInvalidateTexAll(void);
undefined * GXSetTexRegionCallback(undefined *param_1);
undefined4 GXSetTlutRegionCallback(undefined4 param_1);
void __SetSURegs(int param_1,int param_2);
void __GXSetSUTexRegs(void);
void __GXSetTmemConfig(int param_1);


// GXBump.c
void GXSetTevIndirect (int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6, uint param_7,uint param_8,byte param_9,uint param_10);
void GXSetIndTexMtx(int param_1,float *param_2,char param_3);
void GXSetIndTexCoordScale(int param_1,uint param_2,uint param_3);
void GXSetIndTexOrder(int param_1,uint param_2,uint param_3);
void GXSetNumIndStages(uint param_1);
void GXSetTevDirect(undefined4 param_1);
void GXSetTevIndWarp (undefined4 param_1,undefined4 param_2,char param_3,char param_4,undefined4 param_5);
void __GXUpdateBPMask(void);
void __GXSetIndirectMask(uint param_1);
void __GXFlushTextureState(void);


// GXTev.c
void GXSetTevOp(int param_1,int param_2);
void GXSetTevColorIn(int param_1,uint param_2,uint param_3,uint param_4,uint param_5);
void GXSetTevAlphaIn(int param_1,uint param_2,uint param_3,uint param_4,uint param_5);
void GXSetTevColorOp (int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6);
void GXSetTevAlphaOp (int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6);
void GXSetTevColor(int param_1,byte *param_2);
void GXSetTevColorS10(int param_1,short *param_2);
void GXSetTevKColor(int param_1,TColor *param_2);
void GXSetTevKColorSel(uint param_1,uint param_2);
void GXSetTevKAlphaSel(uint param_1,uint param_2);
void GXSetTevSwapMode(int param_1,uint param_2,uint param_3);
void GXSetTevSwapModeTable(int param_1,uint param_2,uint param_3,uint param_4,uint param_5);
void GXSetAlphaCompare(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5);
void GXSetZTexture(uint param_1,int param_2,uint param_3);
void GXSetTevOrder(uint param_1,uint param_2,uint param_3,int param_4);
void GXSetNumTevStages(uint param_1);


// GXPixel.c
void GXSetFog(double param_1,double param_2,double param_3,double param_4,uint param_5, uint3 *param_6);
void GXInitFogAdjTable(ushort *param_1,uint param_2,float *param_3);
void GXSetFogRangeAdj(uint param_1,uint param_2,ushort *param_3);
void GXSetBlendMode(uint param_1,uint param_2,uint param_3,uint param_4);
void GXSetColorUpdate(uint param_1);
void GXSetAlphaUpdate(uint param_1);
void GXSetZMode(uint param_1,uint param_2,uint param_3);
void GXSetZCompLoc(uint param_1);
void GXSetPixelFmt(int param_1,uint param_2);
void GXSetDither(uint param_1);
void GXSetDstAlpha(uint param_1,uint param_2);
void GXSetFieldMask(uint param_1,uint param_2);
void GXSetFieldMode(uint param_1,uint param_2);


// GXDisplayList.c
void GXCallDisplayList(undefined4 param_1,undefined4 param_2);


// GXTransform.c
undefined8 GXSetProjection(Matrixf *param_1,int param_2);
undefined8 GXSetProjectionv(float *param_1);
void GXLoadPosMtxImm(Matrixf *param_1,int param_2);
undefined8 GXLoadNrmMtxImm(Matrixf *param_1);
void GXSetCurrentMtx(uint param_1);
undefined8 GXLoadTexMtxImm(Matrixf *param_1,uint param_2,int param_3);
void __GXSetViewport(void);
void GXSetViewport (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6);
void GXSetScissor(int param_1,int param_2,int param_3,int param_4);
void GXGetScissor(int *param_1,int *param_2,int *param_3,int *param_4);
void GXSetScissorBoxOffset(int param_1,int param_2);
void GXSetClipMode(undefined4 param_1);
void __GXSetMatrixIndex(int param_1);


// GXPerf.c
void GXSetGPMetric(undefined4 param_1,undefined4 param_2);
void GXClearGPMetric(void);
void GXReadXfRasMetric (undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);


// mtx.c
void PSMTXIdentity(Matrixf *param_1);
void PSMTXCopy(Matrixf *param_1,Matrixf *param_2);
undefined8 PSMTXConcat(Matrixf *inMatrix1,Matrixf *inMatrix2,Matrixf *outMatrix);
undefined8 PSMTXTranspose(Matrixf *param_1,Matrixf *param_2);
undefined4 PSMTXInverse(Matrixf *param_1,Matrixf *param_2);
void PSMTXRotRad(float param_1,Matrixf *param_2,uint param_3);
double PSMTXRotTrig(float param_1,float param_2,Matrixf *param_3,uint param_4);
double __PSMTXRotAxisRadInternal (float param_1,float param_2,Matrixf *param_3,Vector3_float_ *param_4);
void PSMTXRotAxisRad(double param_1,Matrixf *param_2,Vector3_float_ *param_3);
void PSMTXTrans(float param_1,float param_2,float param_3,Matrixf *param_4);
double PSMTXTransApply (float param_1,float param_2,float param_3,Matrixf *param_4,Matrixf *param_5);
void PSMTXScale(float param_1,float param_2,float param_3,Matrixf *param_4);
void PSMTXScaleApply (float param_1,float param_2,float param_3,Matrixf *param_4,Matrixf *param_5);
double PSMTXQuat(Matrixf *param_1,Quat *param_2);
void C_MTXLookAt (Matrixf *param_1,Vector3_float_ *param_2,Vector3_float_ *param_3, Vector3_float_ *param_4);
void C_MTXLightPerspective (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6, Matrixf *param_7);
void C_MTXLightOrtho (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6, float param_7,float param_8,Matrixf *param_9);


// mtxvec.c
void PSMTXMultVec(Matrixf *param_1,Vector3_float_ *param_2,Vector3_float_ *param_3);
undefined8 PSMTXMultVecSR(Matrixf *param_1,Vector3_float_ *param_2,Vector3_float_ *param_3);
void PSMTXMultVecArraySR(Matrixf *param_1,Matrixf *param_2,int param_3,int param_4);


// mtx44.c
void C_MTXPerspective (double param_1,double param_2,double param_3,double param_4,float *param_5);
void C_MTXOrtho(double param_1,double param_2,double param_3,double param_4,double param_5, double param_6,float *param_7);
undefined8 PSMTX44Copy(Matrixf *param_1,Matrixf *param_2);


// vec.c
void PSVECAdd(int param_1,int param_2,int param_3);
void PSVECSubtract(int param_1,int param_2,int param_3);
double PSVECNormalize(Vector3_float_ *param_1,Vector3_float_ *param_2);
double PSVECMag(int param_1);
undefined8 PSVECCrossProduct(Vector3_float_ *param_1,Vector3_float_ *param_2,int param_3);


// odenotstub.c
undefined4 Hu_IsStub(void);


// OS.c
undefined * __OSFPRInit(void);
int OSGetConsoleType(void);
void ClearArena(void);
void InquiryCallback(undefined4 param_1,int param_2);
void OSInit(void);
void OSExceptionInit(void);
undefined4 __OSDBIntegrator(void);
void __OSDBJump(void); // unknown function signature
undefined4 __OSSetExceptionHandler(uint param_1,undefined4 param_2);
undefined4 __OSGetExceptionHandler(uint param_1);
void OSExceptionVector(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void OSDefaultExceptionHandler (undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
undefined4 __OSPSInit(void);
byte __OSGetDIConfig(void);
void OSRegisterVersion(undefined4 param_1);


// OSAlarm.c
void OSInitAlarm(void);
void OSCreateAlarm(OSAlarm *param_1);
void InsertAlarm (OSAlarm *param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5);
undefined OSSetAlarm(OSAlarm *alarm,undefined4 param_2,undefined4 param_3, undefined4 param_4,undefined *callback);
undefined OSCancelAlarm(OSAlarm *param_1);
void DecrementerExceptionCallback(undefined4 param_1,OSContext *param_2);
void DecrementerExceptionHandler (undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
undefined4 OnReset(void);


// OSAlloc.c
uint ** DLInsert(uint **param_1,uint **param_2);
void OSFreeToHeap(int param_1,int param_2);
undefined4 OSSetCurrentHeap(undefined4 param_1);
void OSInitAlloc(int param_1,uint param_2,int param_3);
int OSCreateHeap(int param_1,uint param_2);


// OSArena.c
undefined4 OSGetArenaHi(void);
undefined4 OSGetArenaLo(void);
void OSSetArenaHi(undefined4 param_1);
void OSSetArenaLo(undefined4 param_1);


// OSAudioSystem.c
void __OSInitAudioSystem(void);
void __OSStopAudioSystem(void);


// OSCache.c
uint DCEnable(void);
byte * DCInvalidateRange(byte *memoryPointer,int lengthToInvalidate);
uint DCFlushRange(uint param_1,int param_2);
uchar * DCStoreRange(uchar *param_1,long param_2);
uint DCFlushRangeNoSync(uint param_1,int param_2);
uint DCStoreRangeNoSync(uint param_1,int param_2);
uint DCZeroRange(uint param_1,int param_2);
uint ICInvalidateRange(uint param_1,int param_2);
uint ICFlashInvalidate(void);
uint ICEnable(void);
ulonglong __LCEnable(void);
undefined LCEnable(void);
ulonglong LCDisable(void);
uint LCStoreBlocks(uint param_1,undefined4 param_2,undefined4 param_3);
uint LCStoreData(uint param_1,int param_2,int param_3);
void LCQueueWait(int param_1);
void L2GlobalInvalidate(void);
void DMAErrorHandler(undefined4 param_1,OSContext *param_2);
void __OSCacheInit(void);


// OSContext.c
undefined8 __OSLoadFPUContext(undefined8 param_1,undefined4 param_2,int param_3);
void __OSSaveFPUContext (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8, undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12, undefined8 param_13,undefined4 param_14,undefined4 param_15,int param_16);
void OSSaveFPUContext(undefined4 param_1,undefined4 param_2);
void OSSetCurrentContext(OSContext *param_1);
OSContext * OSGetCurrentContext(void);
undefined4 OSSaveContext(int param_1);
undefined8 OSLoadContext(OSContext *param_1);
undefined * OSGetStackPointer(void);
void OSClearContext(OSContext *param_1);
void OSInitContext(OSContext *param_1,undefined4 param_2,undefined4 param_3);
void OSDumpContext(OSContext *param_1);
undefined8 OSSwitchFPUContext(undefined4 param_1,OSThread *param_2);
void __OSContextInit(void);
void OSFillFPUContext (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8, undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12, undefined8 param_13,int param_14);


// OSError.c
void OSReport(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8, char *param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12, undefined4 param_13,undefined4 param_14,undefined4 param_15, undefined4 param_16);
void OSPanic(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8, undefined4 param_9,undefined4 param_10,char *param_11,undefined4 param_12, undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16 );
void * OSSetErrorHandler(ushort param_1,void *funcPtr);
void __OSUnhandledException (byte param_1,OSThread *param_2,undefined4 param_3,undefined4 param_4);


// OSFont.c
uint GetFontCode(uint param_1);
void Decode(int param_1,int param_2);
ushort OSGetFontEncode(void);
void ReadROM(int param_1,int param_2,int param_3);
int OSLoadFont(int param_1,char *param_2);
void ExpandFontSheet(int param_1,uchar *param_2);
_bool OSInitFont(int param_1);
byte * OSGetFontTexture(byte *param_1,int *param_2,int *param_3,int *param_4,uint *param_5);
byte * OSGetFontWidth(byte *param_1,uint *param_2);


// OSInterrupt.c
ulonglong OSDisableInterrupts(void);
ulonglong OSEnableInterrupts(void);
_bool OSRestoreInterrupts(void);
undefined4 __OSSetInterruptHandler(short param_1,undefined4 param_2);
undefined4 __OSGetInterruptHandler(short param_1);
void __OSInterruptInit(void);
uint SetInterruptMask(uint param_1,uint param_2);
uint __OSMaskInterrupts(uint param_1);
uint __OSUnmaskInterrupts(uint param_1);
void __OSDispatchInterrupt(undefined4 param_1,OSContext *param_2);
void ExternalInterruptHandler (undefined4 param_1,OSContext *param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);


// OSLink.c
void __OSModuleInit(void);


// OSMessage.c
void OSInitMessageQueue(OSMessageQueue *msgQueue,void **msgSlots,int slotCount);
_bool OSSendMessage(OSMessageQueue *msgQueue,void *msg,_bool shouldBlock);
_bool OSReceiveMessage(OSMessageQueue *msgQueue,void **msg,_bool shouldBlock);
_bool OSJamMessage(OSMessageQueue *msgQueue,void **msg,_bool shouldBlock);


// OSMemory.c
undefined4 OnReset(void);
void MEMIntrruptHandler(undefined4 param_1,undefined4 param_2);
uint OSProtectRange(uint param_1,uint param_2,int param_3,uint param_4);
void Config24MB(void);
void Config48MB(void);
uint RealMode(void);
undefined __OSInitMemoryProtection(void);


// OSMutex.c
void OSInitMutex(OSMutexObject *param_1);
undefined OSLockMutex(OSMutexObject *param_1);
undefined OSUnlockMutex(OSMutexObject *param_1);
void __OSUnlockAllMutex(OSThread *param_1);
undefined4 OSTryLockMutex(OSMutexObject *param_1);
void OSInitCond(OSThreadQueue *param_1);
undefined OSWaitCond(undefined4 param_1,OSMutexObject *param_2);
void OSSignalCond(OSThreadQueue *param_1);


// OSReboot.c
void Run(void);
void Callback(void);
void __OSReboot(undefined4 param_1);
void OSSetSaveRegion(undefined4 param_1,undefined4 param_2);


// OSReset.c
void OSRegisterResetFunction(int param_1);
void Reset(void);
void __OSDoHotReset(int param_1);
void OSResetSystem(int param_1,int param_2,int param_3);
uint OSGetResetCode(void);


// OSResetSW.c
void __OSResetSWInterruptHandler(void);
_bool OSGetResetButtonState(void);
_bool OSGetResetSwitchState(void);


// OSRtc.c
void WriteSramCallback(void);
uint WriteSram(byte *param_1,int param_2,int param_3);
void __OSInitSram(void);
ushort * __OSLockSram(void);
undefined4 __OSLockSramEx(void);
uint UnlockSram(int param_1,uint param_2);
void __OSUnlockSram(undefined4 param_1);
void __OSUnlockSramEx(undefined4 param_1);
undefined4 __OSSyncSram(void);
uint __OSReadROM(byte *param_1,int param_2,int param_3);
_bool OSGetSoundMode(void);
void OSSetSoundMode(uint param_1);
byte OSGetProgressiveMode(void);
void OSSetProgressiveMode(uint param_1);
void OSSetEuRgb60Mode(uint param_1);
undefined2 OSGetWirelessID(int param_1);
void OSSetWirelessID(int param_1,short param_2);
undefined2 OSGetGbsMode(void);
void OSSetGbsMode(ushort param_1);


// OSSync.c
void SystemCallVector(void);
void __OSInitSystemCall(void);


// OSThread.c
void DefaultSwitchThreadCallback(void);
void __OSThreadInit(void);
void OSInitThreadQueue(OSThreadQueue *param_1);
OSThread * OSGetCurrentThread(void);
_bool OSIsThreadTerminated(OSThread *param_1);
int OSDisableScheduler(void);
int OSEnableScheduler(void);
void UnsetRun(OSThread *param_1);
int __OSGetEffectivePriority(int param_1);
undefined4 SetEffectivePriority(OSThread *param_1,int param_2);
void __OSPromoteThread(OSThread *param_1,int param_2);
OSThread * SelectThread(int param_1);
void __OSReschedule(void);
undefined OSYieldThread(void);
_bool OSCreateThread (OSThread *thread,void *funcPtr,JKRTask *task,uint param_4,int param_5,int priority, ushort param_7);
undefined OSExitThread(int param_1);
undefined OSCancelThread(OSThread *param_1);
undefined OSDetachThread(OSThread *param_1);
int OSResumeThread(OSThread *param_1);
int OSSuspendThread(OSThread *param_1);
undefined OSSleepThread(OSThreadQueue *param_1);
undefined OSWakeupThread(OSThreadQueue *param_1);
int OSGetThreadPriority(OSThread *param_1);
void OSClearStack(uint param_1);


// OSTime.c
ulonglong OSGetTime(void);
ulong OSGetTick(void);
ulonglong __OSGetSystemTime(void);
void GetDates(int param_1,int param_2);
void OSTicksToCalendarTime(int param_1,uint param_2,int *param_3);


// __ppc_eabi_init.cpp
void __init_user(void);
void __init_cpp(void);
void _ExitProcess(void);


// Padclamp.c
void ClampStick(char *param_1,char *param_2,char param_3,char param_4,char param_5);
void ClampCircle(char *param_1,char *param_2,char param_3,char param_4);
void PADClamp(int param_1);
void PADClampCircle(PADStatus *param_1);


// Pad.c
void UpdateOrigin(int param_1);
void PADOriginCallback(undefined4 param_1,uint param_2);
uint PADOriginUpdateCallback(int param_1,uint param_2);
void PADProbeCallback(undefined4 param_1,uint param_2);
void PADTypeAndStatusCallback(undefined4 param_1,uint param_2);
uint PADReceiveCheckCallback(int param_1,uint param_2);
undefined4 PADReset(uint param_1);
undefined4 PADRecalibrate(uint param_1);
undefined4 PADInit(void);
uint PADRead(PADStatus *param_1);
undefined PADControlMotor(int controllerIndexMaybe,uint param_2);
void PADSetSpec(uint param_1);
void SPEC0_MakeStatus(undefined4 param_1,PADStatusSingle *param_2,uint *param_3);
void SPEC1_MakeStatus(undefined4 param_1,PADStatusSingle *param_2,uint *param_3);
void SPEC2_MakeStatus(int param_1,PADStatusSingle *param_2,undefined4 *param_3);
undefined PADSetAnalogMode(int param_1);
undefined4 OnReset(void);
void SamplingHandler(undefined4 param_1,OSContext *param_2);
undefined4 PADSetSamplingCallback(int param_1);
_bool __PADDisableRecalibration(int param_1);


// SIBios.c
undefined4 SIBusy(void);
_bool SIIsChanBusy(int param_1);
uint CompleteTransfer(void);
void SIInterruptHandler(undefined4 param_1,undefined4 param_2);
_bool SIEnablePollingInterrupt(int param_1);
undefined4 SIRegisterPollingHandler(int param_1);
undefined4 SIUnregisterPollingHandler(int param_1);
void SIInit(void);
undefined4 __SITransfer (uint param_1,undefined4 *param_2,int param_3,undefined4 param_4,int param_5,int param_6);
uint SIGetStatus(int param_1);
void SISetCommand(int controllerIndexMaybe,undefined4 param_2);
void SITransferCommands(void);
uint SISetXY(int param_1,int param_2);
uint SIEnablePolling(uint param_1);
uint SIDisablePolling(uint param_1);
_bool SIGetResponseRaw(int param_1);
int SIGetResponse(int param_1,undefined4 *param_2);
void AlarmHandler(int param_1);
undefined4 SITransfer(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,uint param_7,uint param_8);
void GetTypeCallback(int param_1,uint param_2);
int SIGetType(uint controllerIndexMaybe);
undefined4 SIGetTypeAsync(int param_1,code *param_2);
uint SIDecodeType(uint param_1);
void SIProbe(void);


// SISamplingRate.c
undefined SISetSamplingRate(uint param_1);
void SIRefreshSamplingRate(void);


// ai.c
undefined4 AIRegisterDMACallback(undefined4 param_1);
undefined AIInitDMA(undefined4 param_1,uint param_2);
void AIStartDMA(void);
void AIStopDMA(void);
void AISetStreamPlayState(uint param_1);
uint AIGetStreamPlayState(void);
void AISetDSPSampleRate(int param_1);
uint AIGetDSPSampleRate(void);
void __AI_set_stream_sample_rate(int param_1);
uint AIGetStreamSampleRate(void);
void AISetStreamVolLeft(uint param_1);
uint AIGetStreamVolLeft(void);
void AISetStreamVolRight(uint param_1);
uint AIGetStreamVolRight(void);
void AIInit(undefined4 param_1);
void __AISHandler(undefined4 param_1,OSContext *param_2);
void __AIDHandler(undefined4 param_1,OSContext *param_2);
void __AICallbackStackSwitch(code *param_1);
void __AI_SRC_INIT(void);


// THPDec.c
char THPVideoDecode(char *param_1,int param_2,int param_3,int param_4,int param_5);
void __THPSetupBuffers(void);
undefined4 __THPReadFrameHeader(void);
undefined4 __THPReadScaneHeader(void);
undefined4 __THPReadQuantizationTable(void);
undefined4 __THPReadHuffmanTableSpecification(void);
void __THPHuffGenerateSizeTable(void);
void __THPHuffGenerateCodeTable(void);
void __THPHuffGenerateDecoderTables(uint param_1);
void __THPRestartDefinition(void);
void __THPPrepBitStream(void);
void __THPDecompressYUV(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void __THPDecompressiMCURow512x448(void);
void __THPDecompressiMCURow640x480(void);
void __THPDecompressiMCURowNxN(void);
void __THPHuffDecodeDCTCompY(THPInfo *param_1,short *param_2);
void __THPHuffDecodeDCTCompU(THPInfo *param_1,short *param_2);
void __THPHuffDecodeDCTCompV(THPInfo *param_1,short *param_2);
undefined4 THPInit(void);


// THPAudio.c
int THPAudioDecode(undefined2 *param_1,int *param_2,int param_3);
int __THPAudioGetNewSample(byte **param_1);
void __THPAudioInitialize(byte **param_1,byte *param_2);


// GBA.c
void ShortCommandProc(int param_1);
void GBAInit(void);
void GBAGetStatus(int param_1,undefined4 param_2);
void GBAReset(int param_1,undefined4 param_2);
undefined4 OnReset(void);


// GBARead.c
void ReadProc(int param_1);
void GBARead(int param_1,undefined4 param_2,undefined4 param_3);


// GBAWrite.c
void WriteProc(int param_1);
void GBAWrite(int param_1,void *param_2,undefined4 param_3);


// GBAXfer.c
void __GBAHandler(int param_1,uint param_2,OSContext *param_3);
void __GBASyncCallback(int param_1);
undefined4 __GBASync(int param_1);
void TypeAndStatusCallback(int param_1,uint param_2);
undefined4 __GBATransfer(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);


#endif
