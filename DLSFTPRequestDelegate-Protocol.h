//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DLSFTPRequest, NSError;

@protocol DLSFTPRequestDelegate <NSObject>
- (struct _LIBSSH2_SFTP *)sftp;
- (struct _LIBSSH2_SESSION *)session;
- (int)socket;
- (void)requestDidComplete:(DLSFTPRequest *)arg1;
- (void)requestDidFail:(DLSFTPRequest *)arg1 withError:(NSError *)arg2;
@end

