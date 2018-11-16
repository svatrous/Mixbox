#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 110000 && __IPHONE_OS_VERSION_MAX_ALLOWED < 120000

#import "Xcode9_XCTAutomationSupport_CDStructures.h"
#import "Xcode9_SharedHeader.h"
#import <Foundation/Foundation.h>

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol XCUICapabilities <NSObject>
@property(readonly) NSDictionary *truncatedValueSnapshotParameter;
@property(readonly) NSString *truncatedValueAttribute;
@property(readonly) _Bool supportsTruncatedValue;
@property(readonly) _Bool supportsAutomationSessions;
@end

#endif
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 110000 && __IPHONE_OS_VERSION_MAX_ALLOWED < 120000

#import "Xcode9_XCTAutomationSupport_CDStructures.h"
#import "Xcode9_SharedHeader.h"
#import "Xcode9_XCUICapabilities.h"
#import <Foundation/Foundation.h>

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCUICapabilities : NSObject <XCUICapabilities>
{
}

@property(readonly) NSDictionary *truncatedValueSnapshotParameter;
@property(readonly) NSString *truncatedValueAttribute;
@property(readonly) _Bool supportsTruncatedValue;
@property(readonly) _Bool supportsAutomationSessions;
- (_Bool)_supportsFeature:(id)arg1 requiresMacOS:(long long)arg2 iOS:(long long)arg3 tvOS:(long long)arg4 watchOS:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

#endif