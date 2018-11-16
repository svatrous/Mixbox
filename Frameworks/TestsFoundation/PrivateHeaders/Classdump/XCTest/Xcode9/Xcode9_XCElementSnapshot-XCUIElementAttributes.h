#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 110000 && __IPHONE_OS_VERSION_MAX_ALLOWED < 120000

#import "Xcode9_XCTest_CDStructures.h"
#import "Xcode9_SharedHeader.h"
#import "Xcode9_XCElementSnapshot.h"
#import <XCTest/XCUIElementAttributes.h>
#import <XCTest/XCUIElementTypes.h>

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCElementSnapshot (XCUIElementAttributes) <XCUIElementAttributes>

// Remaining properties
@property(readonly) XCUIElementType elementType;
@property(readonly, getter=isEnabled) _Bool enabled;
@property(readonly) struct CGRect frame;
@property(readonly) long long horizontalSizeClass;
@property(readonly) NSString *identifier;
@property(readonly, copy) NSString *label;
@property(readonly) NSString *placeholderValue;
@property(readonly, getter=isSelected) _Bool selected;
@property(readonly, copy) NSString *title;
@property(readonly) id value;
@property(readonly) long long verticalSizeClass;
@end

#endif