#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 120000

#import "Xcode10_XCTAutomationSupport_CDStructures.h"
#import "Xcode10_SharedHeader.h"
#import <Foundation/Foundation.h>

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCTLocalizableStringInfo : NSObject <NSSecureCoding>
{
    NSString *_bundleID;
    NSString *_bundlePath;
    NSString *_tableName;
    NSString *_stringKey;
    struct CGRect _frame;
}

+ (_Bool)supportsSecureCoding;
@property struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, copy) NSString *stringKey; // @synthesize stringKey=_stringKey;
@property(readonly, copy) NSString *tableName; // @synthesize tableName=_tableName;
@property(readonly, copy) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(readonly, copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)dictionaryRepresentation;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleID:(id)arg1 bundlePath:(id)arg2 tableName:(id)arg3 stringKey:(id)arg4 frame:(struct CGRect)arg5;

@end

#endif