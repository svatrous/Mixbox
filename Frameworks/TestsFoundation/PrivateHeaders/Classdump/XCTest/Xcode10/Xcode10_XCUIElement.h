#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 120000

#import "Xcode10_XCTest_CDStructures.h"
#import "Xcode10_SharedHeader.h"
#import "Xcode10_XCTNSPredicateExpectationObject.h"
#import "Xcode10_XCUIElementAttributesPrivate.h"
#import "Xcode10_XCUIElementSnapshotProviding.h"
#import "Xcode10_XCUIScreenshotProviding.h"
#import <Foundation/Foundation.h>
#import <XCTest/XCUIElement.h>
#import <XCTest/XCUIElementAttributes.h>
#import <XCTest/XCUIElementTypeQueryProvider.h>

@class XCElementSnapshot, XCTLocalizableStringInfo, XCUIApplication, XCUICoordinate, XCUIElement, XCUIElementQuery;

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCUIElement ()
{
    _Bool _safeQueryResolutionEnabled;
    XCUIElementQuery *_query;
    XCElementSnapshot *_lastSnapshot;
}

+ (id)standardAttributeNames;
+ (_Bool)_dispatchEvent:(CDUnknownBlockType)arg1 inContext:(id)arg2 withSnapshot:(id)arg3 applicationSnapshot:(id)arg4 process:(id)arg5 error:(id *)arg6;
+ (_Bool)_isInvalidEventDuration:(double)arg1;
@property _Bool safeQueryResolutionEnabled; // @synthesize safeQueryResolutionEnabled=_safeQueryResolutionEnabled;
@property(retain) XCElementSnapshot *lastSnapshot; // @synthesize lastSnapshot=_lastSnapshot;
@property(readonly) XCUIElementQuery *query; // @synthesize query=_query;

@property(readonly, copy) XCUICoordinate *hitPointCoordinate;
- (id)valueForAccessibilityAttribute:(id)arg1 error:(id *)arg2;
- (id)valuesForAccessibilityAttributes:(id)arg1 error:(id *)arg2;
@property(readonly) _Bool isTopLevelTouchBarElement;
@property(readonly) _Bool isTouchBarElement;
@property(readonly, nonatomic) long long interfaceOrientation;
@property(readonly) _Bool hasKeyboardFocus;
- (unsigned long long)traits;
@property(readonly, copy) XCTLocalizableStringInfo *localizableStringInfo;
- (_Bool)resolveHandleUIInterruption:(_Bool)arg1 error:(id *)arg2;
- (void)resolveHandleUIInterruption:(_Bool)arg1;
- (_Bool)resolve:(id *)arg1;
- (void)resolve;
- (_Bool)waitForNonExistenceWithTimeout:(double)arg1;
- (id)makeNonExistenceExpectation;

- (_Bool)_waitForExistenceWithTimeout:(double)arg1;
- (_Bool)evaluatePredicateForExpectation:(id)arg1 debugMessage:(id *)arg2;
- (id)_debugDescriptionWithSnapshot:(id)arg1;

@property(readonly, nonatomic) XCUIApplication *application;
- (id)elementBoundByAccessibilityElement;
- (id)initWithElementQuery:(id)arg1;
- (id)screenshot;
- (id)_screen;
- (id)snapshotWithError:(id *)arg1;
- (_Bool)_shouldDispatchEvent:(id *)arg1;
- (void)_dispatchEvent:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)_dispatchEvent:(CDUnknownBlockType)arg1 error:(id *)arg2;

- (void)swipeRight;
- (void)swipeLeft;
- (void)swipeDown;
- (void)swipeUp;
- (void)_swipe:(unsigned long long)arg1;

- (void)_tapWithNumberOfTaps:(unsigned long long)arg1 numberOfTouches:(unsigned long long)arg2 activityTitle:(id)arg3;
- (id)_highestNonWindowAncestorOfElement:(id)arg1 notSharedWithElement:(id)arg2;
- (id)_pointsInFrame:(struct CGRect)arg1 numberOfTouches:(unsigned long long)arg2;

- (void)twoFingerTap;
- (void)doubleTap;
- (void)tap;
- (id)_hitPointByAttemptingToScrollToVisibleSnapshot:(id)arg1 error:(id *)arg2;

- (void)tapOrClick;
- (void)forcePress;

// Remaining properties

@end

#endif