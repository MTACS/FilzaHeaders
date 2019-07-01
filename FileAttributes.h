//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseTableViewController.h"

#import "UIGestureRecognizerDelegate.h"

@class FileItem, NSArray, NSDictionary, NSMutableArray, NSMutableString, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface FileAttributes : BaseTableViewController <UIGestureRecognizerDelegate>
{
    _Bool _stopFolderSizeCalc;
    unsigned long long _iFolderSize;
    NSTimer *timer;
    _Bool _isCloud;
    FileItem *_file;
    NSDictionary *_metadata;
    NSArray *_allKeys;
    NSMutableString *_md5;
    NSMutableString *_sha1;
    NSMutableString *_sha256;
    NSMutableString *_folderSize;
    NSString *_aText;
    NSMutableArray *_attributesList;
    NSMutableArray *_sections;
    FileItem *___fileStrong;
    NSString *___needToLoadURL;
}

@property(retain, nonatomic) NSString *__needToLoadURL; // @synthesize __needToLoadURL=___needToLoadURL;
@property(retain, nonatomic) FileItem *__fileStrong; // @synthesize __fileStrong=___fileStrong;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSMutableArray *attributesList; // @synthesize attributesList=_attributesList;
@property(retain, nonatomic) NSString *aText; // @synthesize aText=_aText;
@property(retain, nonatomic) NSMutableString *folderSize; // @synthesize folderSize=_folderSize;
@property(retain, nonatomic) NSMutableString *sha256; // @synthesize sha256=_sha256;
@property(retain, nonatomic) NSMutableString *sha1; // @synthesize sha1=_sha1;
@property(retain, nonatomic) NSMutableString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSArray *allKeys; // @synthesize allKeys=_allKeys;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) _Bool isCloud; // @synthesize isCloud=_isCloud;
@property(nonatomic) __weak FileItem *file; // @synthesize file=_file;
- (void).cxx_destruct;
- (_Bool)canBecomeFirstReponder;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)reloadMd5Sha1Row:(id)arg1;
- (void)calculateMD5:(id)arg1 SHA1:(id)arg2 SHA256:(id)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)copyZText:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)longPress:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)cancelTouched:(id)arg1;
- (void)doneTouched:(id)arg1;
- (id)permissionToString:(unsigned long long)arg1 type:(int)arg2;
- (void)hideLoadingProgress;
- (void)showLoadingProgress;
- (void)openItem:(id)arg1 withViewerName:(id)arg2;
- (void)openWithClicked:(id)arg1;
- (void)reloadAttributes;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)reloadPermissions:(id)arg1;
- (void)viewDidLoad;
- (void)setURL:(id)arg1;
- (void)setFileStrong:(id)arg1;
- (void)updateFoldersizeWithIndexPath:(id)arg1;
- (void)calculateFordersize:(id)arg1;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
