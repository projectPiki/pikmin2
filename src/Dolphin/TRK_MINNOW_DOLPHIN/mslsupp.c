#include "PowerPC_EABI_Support/MetroTRK/trk.h"

// forward declares
DSIOResult __read_file(u32 handle, u8* buffer, size_t* count, void* ref_con);
DSIOResult __write_file(u32 handle, u8* buffer, size_t* count, void* ref_con);
DSIOResult __close_file(u32 handle, u8* buffer, size_t* count, void* ref_con);
DSIOResult __access_file(u32 handle, u8* buffer, size_t* count, void* ref_con, MessageCommandID cmd);

/*
 * --INFO--
 * Address:	800C0B4C
 * Size:	0000BC
 */
DSIOResult __read_console(u32 handle, u8* buffer, size_t* count, void* ref_con)
{
	if (GetUseSerialIO() == 0) {
		return DS_IOError;
	}
	return __read_file(DS_Stdin, buffer, count, ref_con);
}

/*
 * --INFO--
 * Address:	800C0A90
 * Size:	0000BC
 */
DSIOResult __TRK_write_console(u32 handle, u8* buffer, size_t* count, void* ref_con)
{
	if (GetUseSerialIO() == 0) {
		return DS_IOError;
	}
	return __write_file(DS_Stdout, buffer, count, ref_con);
}

/*
 * --INFO--
 * Address:	800C0A0C
 * Size:	000084
 */
DSIOResult __close_console(u32 handle, u8* buffer, size_t* count, void* ref_con) { return __close_file(handle, buffer, count, ref_con); }

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
DSIOResult __read_file(u32 handle, u8* buffer, size_t* count, void* ref_con)
{
	return __access_file(handle, buffer, count, ref_con, DSMSG_ReadFile);
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
DSIOResult __write_file(u32 handle, u8* buffer, size_t* count, void* ref_con)
{
	return __access_file(handle, buffer, count, ref_con, DSMSG_WriteFile);
}

/*
 * --INFO--
 * Address:	........
 * Size:	00017C
 */
void __open_file(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
DSIOResult __close_file(u32 handle, u8* buffer, size_t* count, void* ref_con)
{
	u32 r0;

	if (GetTRKConnected() == DS_NoError) {
		return DS_IOError;
	}

	r0 = TRKCloseFile(DSMSG_CloseFile, handle);

	switch ((u8)r0) {
	case DS_IONoError:
		return DS_IONoError;
	case DS_IOEOF:
		return DS_IOEOF;
	}

	return DS_IOError;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void __position_file(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void convertFileMode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C0
 */
DSIOResult __access_file(u32 handle, u8* buffer, size_t* count, void* ref_con, MessageCommandID cmd)
{
	size_t countTemp;
	u32 r0;

	if (GetTRKConnected() == DS_NoError) {
		return DS_IOError;
	}

	countTemp = *count;
	r0        = TRKAccessFile(cmd, handle, &countTemp, buffer);
	*count    = countTemp;

	switch ((u8)r0) {
	case DS_IONoError:
		return DS_IONoError;
	case DS_IOEOF:
		return DS_IOEOF;
	}

	return DS_IOError;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001D0
 */
void __open_temp_file(void)
{
	// UNUSED FUNCTION
}
