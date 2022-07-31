#ifndef _J2DPRINT_H
#define _J2DPRINT_H

/*
    __vt__8J2DPrint:
    .4byte 0
    .4byte 0
    .4byte __dt__8J2DPrintFv
    .4byte 0
*/

struct J2DPrint {
	virtual ~J2DPrint();    // _08
	virtual void _0C() = 0; // _0C

	J2DPrint(JUTFont*, float);
	J2DPrint(JUTFont*, JUtility::TColor, JUtility::TColor);
	J2DPrint(JUTFont*, float, float, JUtility::TColor, JUtility::TColor, JUtility::TColor, JUtility::TColor);
	void initiate();
	void private_initiate(JUTFont*, float, float, JUtility::TColor, JUtility::TColor, JUtility::TColor, JUtility::TColor, bool);
	void setFont(JUTFont*);
	void setBuffer(unsigned long);
	void setFontSize();
	void locate(float, float);
	void print(float, float, const char*, ...);
	void print(float, float, unsigned char, const char*, ...);
	void getWidth(const char*, ...);
	void printReturn(const char*, float, float, J2DTextBoxHBinding, J2DTextBoxVBinding, float, float, unsigned char);
	void parse(const unsigned char*, int, int, unsigned short*, J2DPrint::TSize&, unsigned char, bool);
	void doCtrlCode(int);
	void doEscapeCode(const unsigned char**, unsigned char);
	void initchar();
	void getNumberS32(const unsigned char**, long, long, int);
	void getNumberF32(const unsigned char**, float, float, int);
};

#endif
