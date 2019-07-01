//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DLSFTPConnection, NSError;

@interface DLSFTPRequest : NSObject
{
    _Bool _cancelled;
    DLSFTPConnection *_connection;
    CDUnknownBlockType _cancelHandler;
    NSError *_error;
    id _successBlock;
    CDUnknownBlockType _failureBlock;
}

@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) id successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(nonatomic) __weak DLSFTPConnection *connection; // @synthesize connection=_connection;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (void).cxx_destruct;
- (void)fail;
- (id)errorWithCode:(int)arg1 errorDescription:(id)arg2 underlyingError:(id)arg3;
- (_Bool)checkSftp;
- (_Bool)pathIsValid:(id)arg1;
- (_Bool)ready;
- (void)succeed;
- (void)start;
- (void)cancel;

@end

