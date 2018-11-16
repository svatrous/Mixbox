#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 120000

#import "Xcode10_XCTest_CDStructures.h"
#import "Xcode10_SharedHeader.h"
#import <Foundation/Foundation.h>

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface _XCTAttachmentImplementation : NSObject
{
    NSString *_uniformTypeIdentifier;
    long long _lifetime;
    NSString *_name;
    NSDate *_timestamp;
    NSDictionary *_userInfo;
    NSData *_payload;
    NSString *_fileNameOverride;
    CDUnknownBlockType _serializationBlock;
    _Bool _hasPayload;
}

@property _Bool hasPayload; // @synthesize hasPayload=_hasPayload;
@property(copy) CDUnknownBlockType serializationBlock; // @synthesize serializationBlock=_serializationBlock;
@property(copy) NSString *fileNameOverride; // @synthesize fileNameOverride=_fileNameOverride;
@property(copy) NSData *payload; // @synthesize payload=_payload;
@property(copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(copy) NSString *name; // @synthesize name=_name;
@property long long lifetime; // @synthesize lifetime=_lifetime;
@property(copy) NSString *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;

@end

#endif