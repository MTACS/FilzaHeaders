//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface GSDK_OpenInChromeController : NSObject
{
}

+ (id)sharedInstance;
- (id)pasteboardContent;
- (int)openInChromePreference;
- (_Bool)openInChrome:(id)arg1 withCallbackURL:(id)arg2 createNewTab:(_Bool)arg3;
- (_Bool)openInChrome:(id)arg1;
- (_Bool)isChromeInstalled;

@end

