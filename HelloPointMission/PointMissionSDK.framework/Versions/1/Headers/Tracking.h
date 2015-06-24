//
//  Tracking.h
//  PointMissionSDK
//
//  Created by dtkad on 6/15/2558 BE.
//  Copyright (c) 2558 dtkad. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

// URL to server
static const NSString *SERVER_URL = @"http://192.168.1.145";

@interface Tracking : NSObject<UIApplicationDelegate>

@property (nonatomic) BOOL checkLaunchFlag;
@property (nonatomic) BOOL launchFlag;
@property (nonatomic,retain) NSString *check_data;
@property (nonatomic,retain) NSUserDefaults *userDefault;

- (void)checkServer:(NSString *)pak;
- (void)sendCPIRequest:(NSString *)pak digest:(NSString *)digest;
- (void)sendCPARequest:(NSString *)pak digest:(NSString *)digest;

@end
