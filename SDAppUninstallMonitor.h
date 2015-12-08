//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SDEventHandlerProvider.h"

@interface SDAppUninstallMonitor : NSObject <SDEventHandlerProvider>
{
    id <MDIndexer> _indexer;
}

+ (void)_writeAppsListToDisk:(id)arg1;
+ (id)_installedAppsListFromDisk;
+ (id)_installedAppsBundleIDsListFilePath;
+ (id)_trackingInfoDir;
+ (id)_filename;
@property(nonatomic) __weak id <MDIndexer> indexer; // @synthesize indexer=_indexer;
- (void).cxx_destruct;
- (id)_allInstalledApplicationsIdentifiers;
- (void)_purgeAppsWithBundleIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_purgeUninstalledApplicationsFromIndex;
- (void)registerHandlerWithEventMonitor:(id)arg1;
- (id)initWithIndexer:(id)arg1;
- (id)init;

@end
