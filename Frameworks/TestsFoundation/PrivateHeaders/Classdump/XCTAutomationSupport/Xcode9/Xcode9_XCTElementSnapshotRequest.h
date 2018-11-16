#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 110000 && __IPHONE_OS_VERSION_MAX_ALLOWED < 120000

#import "Xcode9_XCTAutomationSupport_CDStructures.h"
#import "Xcode9_SharedHeader.h"
#import <Foundation/Foundation.h>

@class XCAccessibilityElement, XCElementSnapshot, XCTAccessibilitySnapshot_iOS;

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCTElementSnapshotRequest : NSObject
{
    _Bool _loadResult;
    _Bool _hasLoaded;
    XCAccessibilityElement *_element;
    NSArray *_attributes;
    NSDictionary *_parameters;
    XCElementSnapshot *_elementSnapshot;
    id <NSCopying> _accessibilitySnapshot;
    double _mainThreadResponsivenessTolerance;
    double _snapshotDurationTolerance;
    NSObject *_queue;
    NSError *_loadError;
}

@property(retain) NSError *loadError; // @synthesize loadError=_loadError;
@property _Bool hasLoaded; // @synthesize hasLoaded=_hasLoaded;
@property _Bool loadResult; // @synthesize loadResult=_loadResult;
@property(readonly) NSObject *queue; // @synthesize queue=_queue;
@property double snapshotDurationTolerance; // @synthesize snapshotDurationTolerance=_snapshotDurationTolerance;
@property double mainThreadResponsivenessTolerance; // @synthesize mainThreadResponsivenessTolerance=_mainThreadResponsivenessTolerance;
@property(copy) id <NSCopying> accessibilitySnapshot; // @synthesize accessibilitySnapshot=_accessibilitySnapshot;
@property(retain) XCElementSnapshot *elementSnapshot; // @synthesize elementSnapshot=_elementSnapshot;
@property(copy) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly) NSArray *attributes; // @synthesize attributes=_attributes;
@property(readonly) XCAccessibilityElement *element; // @synthesize element=_element;
- (_Bool)loadSnapshotAndReturnError:(id *)arg1;
- (id)initWithElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3;
- (id)initWithElement:(id)arg1 rawAttributes:(id)arg2 parameters:(id)arg3;
- (id)elementSnapshotOrError:(id *)arg1;
- (id)accessibilitySnapshotOrError:(id *)arg1;
- (id)safeParametersForParameters:(id)arg1;
- (id)safeAttributesForAttributes:(id)arg1;
- (id)_snapshotFromUserTestingSnapshot:(id)arg1 frameTransformer:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)_childrenOfElement:(id)arg1 userTestingSnapshot:(id)arg2 frameTransformer:(CDUnknownBlockType)arg3 outError:(id *)arg4;
- (id)_snapshotFromRemoteElementUserTestingSnapshot:(id)arg1 parentElement:(id)arg2 error:(id *)arg3;
@property(readonly) XCTAccessibilitySnapshot_iOS *accessibilitySnapshot_iOS;

@end

#endif