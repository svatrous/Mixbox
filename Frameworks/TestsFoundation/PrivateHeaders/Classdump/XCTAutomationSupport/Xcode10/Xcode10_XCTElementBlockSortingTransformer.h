#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 120000

#import "Xcode10_XCTAutomationSupport_CDStructures.h"
#import "Xcode10_SharedHeader.h"
#import "Xcode10_XCTElementSetTransformer.h"
#import <Foundation/Foundation.h>

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCTElementBlockSortingTransformer : NSObject <XCTElementSetTransformer>
{
    _Bool stopsOnFirstMatch;
    NSString *transformationDescription;
    CDUnknownBlockType _comparator;
}

@property(readonly, copy) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
@property _Bool stopsOnFirstMatch; // @synthesize stopsOnFirstMatch;
@property(copy) NSString *transformationDescription; // @synthesize transformationDescription;
- (id)iteratorForInput:(id)arg1;
- (id)requiredKeyPathsOrError:(id *)arg1;
@property(readonly) _Bool supportsAttributeKeyPathAnalysis;
@property(readonly) _Bool supportsRemoteEvaluation;
- (id)transform:(id)arg1 relatedElements:(id *)arg2;
- (id)initWithComparator:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

#endif