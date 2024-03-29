//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GDMetadataCache.h"

@class NSManagedObjectContext, NSManagedObjectModel, NSObject<OS_dispatch_queue>, NSPersistentStoreCoordinator, NSPredicate, NSString, NSTimer, NSURL;

__attribute__((visibility("hidden")))
@interface GDCoreDataMetadataCache : NSObject <GDMetadataCache>
{
    NSManagedObjectModel *__managedObjectModel;
    NSPersistentStoreCoordinator *__persistentStoreCoordinator;
    NSManagedObjectContext *__managedObjectContext;
    NSURL *_persistentStoreURL;
    NSTimer *_saveTimer;
    NSTimer *_discardTimer;
    NSPredicate *_prefetchChildrenPredicateTemplate;
    NSPredicate *_fetchChildrenFromParentPredicateTemplate;
    NSPredicate *_fetchNodeFromURLStringPredicateTemplate;
    NSPredicate *_fetchNodesFromURLStringsPredicateTemplate;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSPredicate *fetchNodesFromURLStringsPredicateTemplate; // @synthesize fetchNodesFromURLStringsPredicateTemplate=_fetchNodesFromURLStringsPredicateTemplate;
@property(readonly, nonatomic) NSPredicate *fetchNodeFromURLStringPredicateTemplate; // @synthesize fetchNodeFromURLStringPredicateTemplate=_fetchNodeFromURLStringPredicateTemplate;
@property(readonly, nonatomic) NSPredicate *fetchChildrenFromParentPredicateTemplate; // @synthesize fetchChildrenFromParentPredicateTemplate=_fetchChildrenFromParentPredicateTemplate;
@property(readonly, nonatomic) NSPredicate *prefetchChildrenPredicateTemplate; // @synthesize prefetchChildrenPredicateTemplate=_prefetchChildrenPredicateTemplate;
@property(retain) NSTimer *discardTimer; // @synthesize discardTimer=_discardTimer;
@property(retain) NSTimer *saveTimer; // @synthesize saveTimer=_saveTimer;
@property(readonly, nonatomic) NSURL *persistentStoreURL; // @synthesize persistentStoreURL=_persistentStoreURL;
- (void).cxx_destruct;
- (void)discardInMemoryCache:(id)arg1;
- (void)saveOnNotification:(id)arg1;
- (void)saveWithContinuation:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=__persistentStoreCoordinator;
@property(readonly, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=__managedObjectModel;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=__managedObjectContext;
- (void)triggerPendingDiscard;
- (void)triggerPendingSave;
- (void)reset;
- (id)bulkFetchFileNodesForURLs:(id)arg1;
- (id)createFileNodeForURL:(id)arg1;
- (id)fileNodeForURL:(id)arg1 createIfNeeded:(_Bool)arg2;
- (id)urlMetadataForStoreMetadata:(id)arg1;
- (void)getForURL:(id)arg1 metadata:(id *)arg2 directoryContents:(id *)arg3;
- (void)setMetadata:(id)arg1 directoryContents:(id)arg2 forURL:(id)arg3 addToParent:(id)arg4;
- (id)metadataForURL:(id)arg1 directoryContents:(id *)arg2;
- (id)directoryContentsMetadataArrayForURL:(id)arg1;
- (id)directoryContentsForURL:(id)arg1;
- (void)setDirectoryContents:(id)arg1 forURL:(id)arg2;
- (void)removeMetadataForURL:(id)arg1 removeFromParent:(id)arg2;
- (void)setMetadata:(id)arg1 forURL:(id)arg2 addToParent:(id)arg3;
- (void)setMetadata:(id)arg1 forURL:(id)arg2;
- (id)metadataForURL:(id)arg1;
- (id)initWithCacheDirectory:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

