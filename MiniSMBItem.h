//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface MiniSMBItem : NSObject
{
    _Bool _isDirectory;
    _Bool _isSymbolicLink;
    unsigned long long _type;
    NSString *_path;
    NSDate *_modificationDate;
    NSDate *_creationDate;
    long long _permissions;
    long long _fileSize;
    long long _userId;
    long long _groupId;
}

+ (id)dateFromLDAPTimeStamp:(unsigned long long)arg1;
@property(nonatomic) _Bool isSymbolicLink; // @synthesize isSymbolicLink=_isSymbolicLink;
@property(nonatomic) _Bool isDirectory; // @synthesize isDirectory=_isDirectory;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) long long permissions; // @synthesize permissions=_permissions;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithStat:(struct smb2_stat_64 *)arg1 path:(id)arg2;
- (id)initWithStatv1:(struct smb_file *)arg1 path:(id)arg2;

@end

