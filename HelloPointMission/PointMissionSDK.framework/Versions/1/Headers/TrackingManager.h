//
//  TrackingManager.h
//  PointMissionSDK
//
//  Created by dtkad on 6/15/2558 BE.
//  Copyright (c) 2558 dtkad. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Tracking.h"

@interface TrackingManager : NSObject

// CPI
+ (void)sendCPI:(NSString *)pak digest:(NSString *)digest;

// CPA
+ (void)sendCPA:(NSString *)pak digest:(NSString *)digest;

@end