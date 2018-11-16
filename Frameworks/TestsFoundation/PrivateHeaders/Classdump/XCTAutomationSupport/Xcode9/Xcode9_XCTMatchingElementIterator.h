#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 110000 && __IPHONE_OS_VERSION_MAX_ALLOWED < 120000

#import "Xcode9_XCTAutomationSupport_CDStructures.h"
#import "Xcode9_SharedHeader.h"
#import <Foundation/Foundation.h>

@protocol XCTElementSetTransformer;

@class XCElementSnapshot;

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol XCTMatchingElementIterator <NSObject>
@property(readonly) id <XCTElementSetTransformer> transformer;
@property(readonly) NSSet *currentRelatedElements;
@property(readonly) XCElementSnapshot *currentMatch;
- (XCElementSnapshot *)nextMatch;
@end

#endif
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 110000 && __IPHONE_OS_VERSION_MAX_ALLOWED < 120000

#import "Xcode9_XCTAutomationSupport_CDStructures.h"
#import "Xcode9_SharedHeader.h"
#import "Xcode9_XCTMatchingElementIterator.h"
#import <Foundation/Foundation.h>

@protocol XCTElementSetTransformer;

@class XCElementSnapshot;

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCTMatchingElementIterator : NSObject <XCTMatchingElementIterator>
{
    NSEnumerator *_outputEnumerator;
    XCElementSnapshot *_input;
    id <XCTElementSetTransformer> _transformer;
    XCElementSnapshot *_currentMatch;
    NSSet *_currentRelatedElements;
}

@property(retain) NSSet *currentRelatedElements; // @synthesize currentRelatedElements=_currentRelatedElements;
@property(retain) XCElementSnapshot *currentMatch; // @synthesize currentMatch=_currentMatch;
@property(readonly) id <XCTElementSetTransformer> transformer; // @synthesize transformer=_transformer;
@property(readonly) XCElementSnapshot *input; // @synthesize input=_input;
- (id)nextMatch;
- (id)initWithInput:(id)arg1 transformer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

#endif