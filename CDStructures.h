//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _LIBSSH2_SFTP_ATTRIBUTES {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct _xmlAttr {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlAttr *_field7;
    struct _xmlAttr *_field8;
    struct _xmlDoc *_field9;
    struct _xmlNs *_field10;
    int _field11;
    void *_field12;
};

struct _xmlDoc {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    int _field10;
    int _field11;
    struct _xmlDtd *_field12;
    struct _xmlDtd *_field13;
    struct _xmlNs *_field14;
    char *_field15;
    char *_field16;
    void *_field17;
    void *_field18;
    char *_field19;
    int _field20;
    struct _xmlDict *_field21;
    void *_field22;
    int _field23;
    int _field24;
};

struct _xmlDtd;

struct _xmlKind {
    void *_field1;
    int _field2;
};

struct _xmlNode {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    struct _xmlNs *_field10;
    char *_field11;
    struct _xmlAttr *_field12;
    struct _xmlNs *_field13;
    void *_field14;
    unsigned short _field15;
    unsigned short _field16;
};

struct _xmlNs {
    struct _xmlNs *_field1;
    int _field2;
    char *_field3;
    char *_field4;
    void *_field5;
    struct _xmlDoc *_field6;
};

struct _xmlStd {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlStd *_field7;
    struct _xmlStd *_field8;
    struct _xmlDoc *_field9;
};

struct fsid {
    int val[2];
};

struct pollfd {
    int fd;
    short events;
    short revents;
};

struct smb2_async {
    unsigned long long _field1;
};

struct smb2_context {
    int _field1;
    int _field2;
    int _field3;
    unsigned short _field4;
    int _field5;
    int _field6;
    char *_field7;
    char *_field8;
    char *_field9;
    char *_field10;
    char *_field11;
    char *_field12;
    char _field13[8];
    CDUnknownFunctionPointerType _field14;
    void *_field15;
    int _field16;
    char _field17[16];
    unsigned int _field18;
    unsigned long long _field19;
    unsigned long long _field20;
    char *_field21;
    unsigned char _field22;
    unsigned char _field23;
    unsigned char _field24[16];
    struct smb2_pdu *_field25;
    struct smb2_pdu *_field26;
    struct smb2_io_vectors _field27;
    int _field28;
    unsigned int _field29;
    unsigned char _field30[64];
    struct smb2_header _field31;
    unsigned long long _field32;
    struct smb2_pdu *_field33;
    unsigned char _field34;
    unsigned int _field35;
    unsigned int _field36;
    unsigned int _field37;
    unsigned short _field38;
    char _field39[256];
};

struct smb2_header {
    unsigned char _field1[4];
    unsigned short _field2;
    unsigned short _field3;
    unsigned int _field4;
    unsigned short _field5;
    unsigned short _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned long long _field9;
    union {
        struct smb2_async _field1;
        struct smb2_sync _field2;
    } _field10;
    unsigned long long _field11;
    unsigned char _field12[16];
};

struct smb2_io_vectors {
    unsigned long long _field1;
    unsigned long long _field2;
    int _field3;
    struct smb2_iovec _field4[256];
};

struct smb2_iovec {
    char *_field1;
    unsigned long long _field2;
    CDUnknownFunctionPointerType _field3;
};

struct smb2_pdu;

struct smb2_stat_64 {
    unsigned int _field1;
    unsigned int _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
};

struct smb2_sync {
    unsigned int _field1;
    unsigned int _field2;
};

struct stat {
    int _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned long long _field4;
    unsigned int _field5;
    unsigned int _field6;
    int _field7;
    struct timespec _field8;
    struct timespec _field9;
    struct timespec _field10;
    struct timespec _field11;
    long long _field12;
    long long _field13;
    int _field14;
    unsigned int _field15;
    unsigned int _field16;
    int _field17;
    long long _field18[2];
};

struct statfs {
    unsigned int f_bsize;
    int f_iosize;
    unsigned long long f_blocks;
    unsigned long long f_bfree;
    unsigned long long f_bavail;
    unsigned long long f_files;
    unsigned long long f_ffree;
    struct fsid f_fsid;
    unsigned int f_owner;
    unsigned int f_type;
    unsigned int f_flags;
    unsigned int f_fssubtype;
    char f_fstypename[16];
    char f_mntonname[1024];
    char f_mntfromname[1024];
    unsigned int f_reserved[8];
};

struct termios {
    unsigned long long c_iflag;
    unsigned long long c_oflag;
    unsigned long long c_cflag;
    unsigned long long c_lflag;
    unsigned char c_cc[20];
    unsigned long long c_ispeed;
    unsigned long long c_ospeed;
};

struct timespec {
    long long _field1;
    long long _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
    unsigned char _field7;
    unsigned char _field8;
    unsigned char _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
    unsigned char _field13;
    unsigned char _field14;
    unsigned char _field15;
    unsigned char _field16;
} CDStruct_bd2f613f;

typedef struct {
    double top;
    double bottom;
    double left;
    double right;
} CDStruct_f6c3f719;

typedef struct {
    long long _field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
} CDStruct_e097db04;

typedef struct {
    CDStruct_bd2f613f _field1;
    CDStruct_bd2f613f _field2;
} CDStruct_2c0d991e;
