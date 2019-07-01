//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CkoFtp2.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TGCkoFtp2 : CkoFtp2
{
    _Bool _didFeat;
    NSMutableDictionary *_cachedLinkInfo;
    NSString *_featResult;
}

@property(retain, nonatomic) NSString *featResult; // @synthesize featResult=_featResult;
@property(retain, nonatomic) NSMutableDictionary *cachedLinkInfo; // @synthesize cachedLinkInfo=_cachedLinkInfo;
- (void).cxx_destruct;
- (unsigned long long)filePermissionFromString:(id)arg1 isLink:(_Bool *)arg2 isDir:(_Bool *)arg3;
- (id)GetSize:(id)arg1;
- (id)GetLastModifiedTime:(id)arg1;
- (_Bool)GetIsSymbolicLink:(id)arg1;
- (_Bool)GetIsDirectory:(id)arg1;
- (id)GetFilename:(id)arg1;
- (unsigned long long)GetFilePermission:(id)arg1;
- (id)GetFileUserID:(id)arg1;
- (id)GetFileGroupID:(id)arg1;
- (id)GetCreateTime:(id)arg1;
- (_Bool)ChangeRemoteDir:(id)arg1;
- (id)GetDestinationPath:(id)arg1;
- (id)NumFilesAndDirs;
- (_Bool)Connect;
- (id)init;

@end

