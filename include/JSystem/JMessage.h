#ifndef _JSYSTEM_JMESSAGE_H
#define _JSYSTEM_JMESSAGE_H

struct JMessage {
    struct TReference {
    };

    struct TProcessor {
        void reset_(char const*);
        void setBegin_messageID(unsigned long, unsigned long, bool*);
    };

    struct TRenderingProcessor : public TProcessor {
        void process(char const*);
    };
};

#endif