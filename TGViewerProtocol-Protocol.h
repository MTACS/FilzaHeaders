//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FileItem, MBProgressHUD, NSArray, NSDictionary, NSIndexPath, NSString, TGNetworkOperationObject, UILabel, UINavigationController<TGViewerProtocol>, UIProgressView, UIViewController;

@protocol TGViewerProtocol <NSObject>
+ (void)showAsksToOpenDialogWithCompletion:(void (^)(_Bool))arg1;
+ (_Bool)shouldAsksUserToOpen;
+ (Class)realClassNameForFileItem:(FileItem *)arg1;
+ (_Bool)canOpenFile:(NSString *)arg1;
@property(retain, nonatomic) NSIndexPath *fileIndexPath;
@property(nonatomic) __weak id <TGViewerDelegate> viewerDelegate;
@property(retain, nonatomic) UILabel *downloadinglabel;
@property(retain, nonatomic) UINavigationController<TGViewerProtocol> *errorVc;
@property(nonatomic) __weak TGNetworkOperationObject *loadingObject;
@property(retain, nonatomic) UILabel *titleLabel;
@property(retain, nonatomic) UIProgressView *progressView;
@property(nonatomic, getter=isPreviewing) _Bool previewing;
@property(nonatomic) _Bool isFileChanged;
@property(nonatomic) _Bool needsDismissAnimation;
@property(nonatomic) _Bool animated;
@property(retain, nonatomic) MBProgressHUD *HUD;
@property(retain, nonatomic) NSString *viewerId;
@property(nonatomic) __weak NSArray *fileList;
@property(retain, nonatomic) FileItem *resultItem;
@property(retain, nonatomic) FileItem *fileItem;
@property(retain, nonatomic) NSArray *tempFileList;
- (void)cancelRemoteFileLoading:(TGNetworkOperationObject *)arg1;
- (TGNetworkOperationObject *)loadRemoteFileWithCompletion:(void (^)(_Bool, FileItem *))arg1;
- (void)showErrorScreenWithMessage:(NSString *)arg1 showHexdump:(_Bool)arg2;
- (NSString *)viewerName;
- (void)writeRecents;
- (void)commit;
- (void)dismiss;
- (void)showInController:(UIViewController *)arg1 animated:(_Bool)arg2;
- (id)initForPreviewingWithFileItem:(FileItem *)arg1 moreInfo:(NSDictionary *)arg2 delegate:(id <TGViewerDelegate>)arg3;
- (id)initWithFileItem:(FileItem *)arg1 moreInfo:(NSDictionary *)arg2 delegate:(id <TGViewerDelegate>)arg3;

@optional
- (void)didCompleteCustomAnimation;
@end
