#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 120000

#import "Xcode10_XCTest_CDStructures.h"
#import "Xcode10_SharedHeader.h"
#import <XCTest/XCTNSNotificationExpectation.h>
#import <XCTest/XCTestExpectation.h>

@class XCTNSNotificationExpectationImplementation, _XCTNSNotificationExpectationImplementation;

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCTNSNotificationExpectation ()
{
    _XCTNSNotificationExpectationImplementation *_internal;
}

@property(retain) _XCTNSNotificationExpectationImplementation *internal; // @synthesize internal=_internal;
- (void)cleanup;

@end

#endif