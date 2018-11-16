#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 120000

#import "Xcode10_XCTAutomationSupport_CDStructures.h"
#import "Xcode10_SharedHeader.h"
#import <Foundation/Foundation.h>

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCTSpindumpRequestSpecification : NSObject <NSSecureCoding>
{
    int _processID;
    unsigned long long _durationMilliseconds;
    unsigned long long _intervalMicroseconds;
    unsigned long long _spindumpFlags;
    NSString *_reason;
    NSString *_signature;
    NSString *_filename;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) NSString *filename; // @synthesize filename=_filename;
@property(readonly) NSString *signature; // @synthesize signature=_signature;
@property(readonly) NSString *reason; // @synthesize reason=_reason;
@property(readonly) unsigned long long spindumpFlags; // @synthesize spindumpFlags=_spindumpFlags;
@property(readonly) unsigned long long intervalMicroseconds; // @synthesize intervalMicroseconds=_intervalMicroseconds;
@property(readonly) unsigned long long durationMilliseconds; // @synthesize durationMilliseconds=_durationMilliseconds;
@property(readonly) int processID; // @synthesize processID=_processID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithProcessID:(int)arg1;
- (id)initWithProcessID:(int)arg1 durationMilliseconds:(unsigned long long)arg2 intervalMicroseconds:(unsigned long long)arg3 spindumpFlags:(unsigned long long)arg4 reason:(id)arg5 signature:(id)arg6 filename:(id)arg7;

@end

#endif