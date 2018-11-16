#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 120000

#import "Xcode10_XCTAutomationSupport_CDStructures.h"
#import "Xcode10_SharedHeader.h"
#import <Foundation/Foundation.h>

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCAccessibilityElement : NSObject <NSCopying, NSSecureCoding>
{
    int _processIdentifier;
    /* unknown type (const struct __AXUIElement) */ void *_AXUIElement;
    unsigned long long _originPlatform;
    NSData *_token;
    unsigned long long _elementOrHash;
    unsigned long long _elementID;
    unsigned long long _elementType;
}

+ (_Bool)supportsSecureCoding;
+ (id)deviceElement;
+ (id)elementWithProcessIdentifier:(int)arg1;
+ (id)elementWithAXUIElement:(/* unknown type (struct __AXUIElement) */ void *)arg1;
+ (id)mockElementWithProcessIdentifier:(int)arg1 originPlatform:(unsigned long long)arg2 payload:(id)arg3;
+ (id)mockElementWithProcessIdentifier:(int)arg1 originPlatform:(unsigned long long)arg2;
+ (id)mockElementWithProcessIdentifier:(int)arg1 payload:(id)arg2;
+ (id)mockElementWithProcessIdentifier:(int)arg1;
@property(readonly) unsigned long long elementType; // @synthesize elementType=_elementType;
@property(readonly) unsigned long long elementID; // @synthesize elementID=_elementID;
@property(readonly) unsigned long long elementOrHash; // @synthesize elementOrHash=_elementOrHash;
@property(readonly, copy) NSData *token; // @synthesize token=_token;
@property(readonly) unsigned long long originPlatform; // @synthesize originPlatform=_originPlatform;
@property(readonly) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(readonly) /* unknown type (const struct __AXUIElement) */ void *AXUIElement; // @synthesize AXUIElement=_AXUIElement;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithAXUIElement:(/* unknown type (struct __AXUIElement) */ void *)arg1 elementType:(unsigned long long)arg2;
- (id)initWithToken:(id)arg1 elementOrHash:(unsigned long long)arg2 elementID:(unsigned long long)arg3 pid:(int)arg4 elementType:(unsigned long long)arg5 originPlatform:(unsigned long long)arg6;
- (void)dealloc;

@end

#endif