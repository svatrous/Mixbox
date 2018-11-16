#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 110000 && __IPHONE_OS_VERSION_MAX_ALLOWED < 120000

#import "Xcode9_XCTest_CDStructures.h"
#import "Xcode9_SharedHeader.h"
#import <Foundation/Foundation.h>

@protocol XCTWaiterManagement;

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol XCTWaiterManagement <NSObject>
@property(readonly, getter=isInProgress) _Bool inProgress;
- (void)interruptForWaiter:(id <XCTWaiterManagement>)arg1;
@end

#endif
