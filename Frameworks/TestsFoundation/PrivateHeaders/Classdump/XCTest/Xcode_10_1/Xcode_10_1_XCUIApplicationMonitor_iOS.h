#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 120100 && __IPHONE_OS_VERSION_MAX_ALLOWED < 120200

#import "Xcode_10_1_XCTest_CDStructures.h"
#import "Xcode_10_1_SharedHeader.h"
#import "Xcode_10_1_XCUIApplicationMonitor.h"

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCUIApplicationMonitor_iOS : XCUIApplicationMonitor
{
}

- (void)_terminateApplicationProcess:(id)arg1;
- (id)monitoredApplicationWithProcessIdentifier:(int)arg1;
- (void)_beginMonitoringApplication:(id)arg1;

@end

#endif