#ifndef _JSYSTEM_JMESSAGE_H
#define _JSYSTEM_JMESSAGE_H

struct JMessage {
	struct TParse {
	};
	struct TParse_color {
	};

	struct TControl {
	};

	struct TReference {
		virtual ~TReference();
		virtual char* do_word(unsigned long) const;
	};

	struct TProcessor {
		void reset_(char const*);
		void setBegin_messageID(unsigned long, unsigned long, bool*);
	};

	struct TSequenceProcessor {
	};

	struct TRenderingProcessor : public TProcessor {
		void process(char const*);
	};
};

#endif
