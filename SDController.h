//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>, SPCoreSpotlightIndexer, SPXPCMessage, SPXPCServer;

@interface SDController : NSObject
{
    SPXPCServer *_xpcServer;
    NSObject<OS_dispatch_source> *signal_handlers[4];
    NSObject<OS_dispatch_source> *_memoryStatusSource;
    int signal_count;
    SPCoreSpotlightIndexer *_indexer;
    SPXPCMessage *_currentActivation;
}

+ (id)defaultDatastoreForDomain:(unsigned int)arg1;
+ (id)defaultDatastoreDomainMap;
+ (id)defaultDatastores;
+ (id)datastoreForDomain:(unsigned int)arg1;
+ (id)domainMap;
+ (id)datastores;
+ (void)setDatastores:(id)arg1;
+ (void)setParsecDatastore:(id)arg1;
+ (void)sendParsecFeedback:(id)arg1;
+ (void)initialize;
+ (id)imageFetchingQueue;
+ (void)decrementOutstandingBackgroundJobs;
+ (void)incrementOutstandingBackgroundJobs;
+ (id)backgroundWorkQueue;
+ (id)workQueue;
- (void).cxx_destruct;
- (_Bool)keepRunning;
- (id)init;
- (void)registerMessageHandlers;
- (void)setActivation:(id)arg1;
- (_Bool)_valueFromArray:(id)arg1 notInSet:(id)arg2;
- (void)addSignalHandler;
- (void)addMemoryHandler;

@end
