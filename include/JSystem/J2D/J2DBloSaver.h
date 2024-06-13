#ifndef _JSYSTEM_J2D_J2DBLOSAVER_H
#define _JSYSTEM_J2D_J2DBLOSAVER_H

#include "JSystem/ResTIMG.h"
#include "types.h"

struct J2DMaterial;
struct JUTNameTab;

// this is stripped in P2
struct J2DMaterial_SaveBlock {
	void countParts(J2DMaterial**, u16);
	void setOffset(J2DMaterial**, u16, JUTNameTab*);
};

struct J2DBloSaver {
	// NB: almost all of this is stripped
	struct ResFONTName {
	};
	struct ResTIMGName {
	};
	struct MaterialName {
	};

	struct CTextureNameConnect {
		struct TNC {
			TNC(const ResTIMG* img, const char* name);

			inline ~TNC() { delete[] mName; }

			const ResTIMG* mTexture; // _00
			const char* mName;       // _04
			TNC* mNext;              // _08
		};

		CTextureNameConnect() { mElements = nullptr; }

		~CTextureNameConnect();
		void set(const ResTIMG* img, const char* name);
		void clear();

		TNC* mElements; // _00
	};

	static CTextureNameConnect TextureNameConnect;

	// unused/stripped functions (to spawn weak functions):
	void writeMaterialBlock(const MaterialName*, J2DMaterial**, u16, const ResTIMGName*, u16);
};
#endif
