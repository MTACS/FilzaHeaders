//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface MiniSMB : NSObject
{
    NSDate *echo_expriation_time;
    int smb_version;
    NSObject<OS_dispatch_queue> *share_management_queue;
    NSObject<OS_dispatch_queue> *share_completion_queue;
    _Bool _shouldOverwrite;
    NSString *_server;
    NSString *_username;
    NSString *_password;
    NSString *_workgroup;
    long long _timeout;
    NSMutableDictionary *_shares;
    NSString *_resovled_ipv4;
}

@property(retain, nonatomic) NSString *resovled_ipv4; // @synthesize resovled_ipv4=_resovled_ipv4;
@property(retain, nonatomic) NSMutableDictionary *shares; // @synthesize shares=_shares;
@property(nonatomic) long long timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSString *workgroup; // @synthesize workgroup=_workgroup;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *server; // @synthesize server=_server;
@property(nonatomic) _Bool shouldOverwrite; // @synthesize shouldOverwrite=_shouldOverwrite;
- (void).cxx_destruct;
- (void)dealloc;
- (void)deinitInstance;
- (id)smbPathFromPath:(id)arg1;
- (id)smbPathFromPath:(id)arg1 appendingPath:(id)arg2;
- (id)pathFromSmbPath:(id)arg1;
- (id)pathForPath:(id)arg1;
- (id)shareNameForPath:(id)arg1;
- (void)chmodItemAtPath:(id)arg1 withMode:(unsigned short)arg2 recursive:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (int)uploadToPath:(id)arg1 fromLocalPath:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (int)downloadFromPath:(id)arg1 toLocalPath:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)abortJobId:(int)arg1;
- (void)moveItemAtPath:(id)arg1 toNewPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)removeFolderAtPath:(id)arg1 context:(struct smb2_context *)arg2 contextv1:(struct smb_session *)arg3 tidv1:(unsigned short)arg4;
- (id)removeFileAtPath:(id)arg1 context:(struct smb2_context *)arg2 contextv1:(struct smb_session *)arg3 tidv1:(unsigned short)arg4;
- (void)removeItemAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createFileAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getContentsAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)shareForShare:(id)arg1;
- (void)createFolderAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getMetadataAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)connectShare:(id)arg1 completion:(CDUnknownBlockType)arg2 completionv1:(CDUnknownBlockType)arg3;
- (void)refreshServerAddress;
- (id)connectable_server;
- (id)init;
- (void)initInstance;

@end
