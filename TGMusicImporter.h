//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TGMusicImporter : NSObject
{
    NSString *_randomTitle;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *randomTitle; // @synthesize randomTitle=_randomTitle;
- (void).cxx_destruct;
- (long long)importLibraryItemFromFilePath:(id)arg1 title:(id)arg2 artworkData:(id)arg3;
- (id)_importPropertiesFromFilePath:(id)arg1 title:(id)arg2 artwork:(id)arg3 usingLibrary:(id)arg4;

@end
