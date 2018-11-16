#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 110000 && __IPHONE_OS_VERSION_MAX_ALLOWED < 120000

#import "Xcode9_XCTest_CDStructures.h"
#import "Xcode9_SharedHeader.h"
#import <Foundation/Foundation.h>

@class XCTNSNotificationExpectation;

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface _XCTNSNotificationExpectationImplementation : NSObject
{
    XCTNSNotificationExpectation *_expectation;
    id _observedObject;
    NSString *_notificationName;
    NSNotificationCenter *_notificationCenter;
    CDUnknownBlockType _handler;
    NSObject *_queue;
    _Bool _hasCleanedUp;
}

@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, copy) NSString *notificationName; // @synthesize notificationName=_notificationName;
@property(readonly) id observedObject; // @synthesize observedObject=_observedObject;
- (void)cleanup;
- (void)_observeExpectedNotification:(id)arg1;
@property(copy) CDUnknownBlockType handler;
- (id)initWithName:(id)arg1 object:(id)arg2 notificationCenter:(id)arg3 expectation:(id)arg4;
- (void)dealloc;

@end

#endif