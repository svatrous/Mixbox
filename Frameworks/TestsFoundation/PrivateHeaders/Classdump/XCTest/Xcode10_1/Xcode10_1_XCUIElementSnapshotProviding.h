#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 120100 && __IPHONE_OS_VERSION_MAX_ALLOWED < 120200

#import "Xcode10_1_XCTest_CDStructures.h"
#import "Xcode10_1_SharedHeader.h"
#import <Foundation/Foundation.h>

@protocol XCUIElementSnapshot;

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol XCUIElementSnapshotProviding <NSObject>
- (id <XCUIElementSnapshot>)snapshotWithError:(id *)arg1;
@end

#endif