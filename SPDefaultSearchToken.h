//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SDSearchToken.h"

@class NSDictionary, NSString, SPDefaultSearchDatastore;

@interface SPDefaultSearchToken : NSObject <SDSearchToken>
{
    SPDefaultSearchDatastore *_store;
}

@property(readonly) SPDefaultSearchDatastore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithStore:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSDictionary *category_stats;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

