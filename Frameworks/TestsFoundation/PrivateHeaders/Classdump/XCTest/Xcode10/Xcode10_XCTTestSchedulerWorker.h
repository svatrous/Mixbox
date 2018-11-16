#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 120000

#import "Xcode10_XCTest_CDStructures.h"
#import "Xcode10_SharedHeader.h"
#import <Foundation/Foundation.h>

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol XCTTestSchedulerWorker <NSObject>
- (void)shutdown;
- (void)executeTestIdentifiers:(NSSet *)arg1 skippingTestIdentifiers:(NSSet *)arg2 completionHandler:(void (^)(NSError *))arg3 completionQueue:(NSObject *)arg4;
@end

#endif
