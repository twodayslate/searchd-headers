//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CSSearchableIndexInterface.h"

@class CSSearchableItem, CSUserAction, NSDictionary, NSString, SPCoreSpotlightTask;

@protocol MDIndexer <CSSearchableIndexInterface>
- (void)runMigration;
- (double)lastUpdateTime;
- (void)userPerformedAction:(CSUserAction *)arg1 withItem:(CSSearchableItem *)arg2 protectionClass:(NSString *)arg3 forBundleID:(NSString *)arg4;
- (void)clientDidCheckin:(NSString *)arg1 protectionClass:(NSString *)arg2 service:(id <CSSearchableIndexServiceInterface>)arg3 completionHandler:(void (^)(CSIndexJob *, NSError *))arg4;
- (SPCoreSpotlightTask *)startQuery:(NSString *)arg1 options:(NSDictionary *)arg2 handler:(void (^)(int, unsigned long long, struct __MDStoreOIDArray *, struct __MDPlistBytes *, NSString *))arg3;

@optional
@property __weak id <CSIndexExtensionDelegate> extensionDelegate;
@end

