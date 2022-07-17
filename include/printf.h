#ifndef _PRINTF_H
#define _PRINTF_H

void sprintf(void);
void snprintf(void);
void vsnprintf(void);
void vfprintf(void);
void vprintf(void);
void fprintf(void);
void printf(void);
void __StringWrite(void);
void __FileWrite(int, long, int);
void __pformatter(void);
void float2str(void);
void round_decimal(void);
void double2hex(void);
void longlong2str(void);
void long2str(void);
void parse_format(void);

#endif
