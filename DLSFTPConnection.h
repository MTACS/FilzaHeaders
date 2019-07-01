//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DLSFTPRequestDelegate.h"

@class DLSFTPRequest, NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface DLSFTPConnection : NSObject <DLSFTPRequestDelegate>
{
    NSObject<OS_dispatch_queue> *_requestQueue;
    NSObject<OS_dispatch_group> *_connectionGroup;
    NSObject<OS_dispatch_source> *_idleTimer;
    NSObject<OS_dispatch_source> *_writeSource;
    int _socket;
    struct _LIBSSH2_SESSION *_session;
    struct _LIBSSH2_SFTP *_sftp;
    NSObject<OS_dispatch_queue> *_socketQueue;
    CDUnknownBlockType _connectionSuccessBlock;
    CDUnknownBlockType _connectionFailureBlock;
    NSString *_username;
    NSString *_password;
    NSString *_keypath;
    NSString *_hostname;
    unsigned long long _port;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSMutableArray *_requests;
    DLSFTPRequest *_currentRequest;
}

@property(retain, nonatomic) DLSFTPRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(nonatomic) int socket; // @synthesize socket=_socket;
@property(nonatomic) unsigned long long port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(copy, nonatomic) NSString *keypath; // @synthesize keypath=_keypath;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) CDUnknownBlockType connectionFailureBlock; // @synthesize connectionFailureBlock=_connectionFailureBlock;
@property(copy, nonatomic) CDUnknownBlockType connectionSuccessBlock; // @synthesize connectionSuccessBlock=_connectionSuccessBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *socketQueue; // @synthesize socketQueue=_socketQueue;
@property(nonatomic) struct _LIBSSH2_SFTP *sftp; // @synthesize sftp=_sftp;
@property(nonatomic) struct _LIBSSH2_SESSION *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)disconnect;
- (void)timeoutTimerHandler;
- (void)connectToAddressAtIndex:(unsigned long long)arg1 inArray:(id)arg2;
- (void)connectWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (_Bool)isConnected;
- (unsigned long long)requestCount;
- (void)cancelAllRequests;
- (void)failConnectionWithErrorCode:(int)arg1 errorDescription:(id)arg2;
- (void)cancelIdleTimer;
- (void)startIdleTimer;
- (void)requestDidComplete:(id)arg1;
- (void)requestDidFail:(id)arg1 withError:(id)arg2;
- (void)finishRequest:(id)arg1 failed:(_Bool)arg2;
- (void)startRequest;
- (void)startNextRequest;
- (void)removeRequest:(id)arg1;
- (void)submitRequest:(id)arg1;
- (void)startSFTPSession;
- (void)disconnectedWithReason:(long long)arg1 message:(id)arg2;
- (void)_disconnect;
- (void)clearConnectionBlocks;
- (void)shutdownSftp;
- (void)disconnectSession;
- (id)idleTimer;
- (id)writeSource;
- (id)requestQueue;
- (void)dealloc;
- (id)initWithHostname:(id)arg1 port:(unsigned long long)arg2 username:(id)arg3 password:(id)arg4 keypath:(id)arg5;
- (id)initWithHostname:(id)arg1 port:(unsigned long long)arg2 username:(id)arg3 keypath:(id)arg4 passphrase:(id)arg5;
- (id)initWithHostname:(id)arg1 username:(id)arg2 keypath:(id)arg3 passphrase:(id)arg4;
- (id)initWithHostname:(id)arg1 port:(unsigned long long)arg2 username:(id)arg3 password:(id)arg4;
- (id)initWithHostname:(id)arg1 username:(id)arg2 password:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

