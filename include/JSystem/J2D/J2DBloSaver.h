#ifndef _JSYSTEM_J2D_J2DBLOSAVER_H
#define _JSYSTEM_J2D_J2DBLOSAVER_H

#include "JSystem/ResTIMG.h"
#include "types.h"

struct J2DBloSaver {
	struct ResFONTName {
	};
	struct ResTIMGName {
	};
	struct MaterialName {
	};
	struct CTextureNameConnect {
		struct TNC {
			TNC(const ResTIMG* img, const char* name);

			inline ~TNC() { delete[] m_name; }

			const ResTIMG* m_texture; // _00
			const char* m_name;       // _04
			TNC* m_next;              // _08
		};

		~CTextureNameConnect();
		void set(const ResTIMG* img, const char* name);
		void clear();

		TNC* m_elements; // _00
	};

	static CTextureNameConnect* TextureNameConnect;
};

#endif
