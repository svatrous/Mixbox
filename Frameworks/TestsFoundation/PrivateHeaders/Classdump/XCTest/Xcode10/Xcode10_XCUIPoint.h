#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 120000

#import "Xcode10_XCTest_CDStructures.h"
#import "Xcode10_SharedHeader.h"
#import <Foundation/Foundation.h>

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCUIPoint : NSObject
{
    struct CGPoint _point;
}

@property(readonly) struct CGPoint point; // @synthesize point=_point;
- (id)initWithPoint:(struct CGPoint)arg1;

@end

#endif