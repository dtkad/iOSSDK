//
//  ViewController.m
//  HelloPointMission
//
//  Created by dtkad on 6/16/2558 BE.
//  Copyright (c) 2558 dtkad. All rights reserved.
//

#import "ViewController.h"
#import <PointMissionSDK/DigestManager.h>
#import <PointMissionSDK/TrackingManager.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    // Logo
    self.logoImage.layer.cornerRadius = self.logoImage.frame.size.width / 2;
    self.logoImage.clipsToBounds = YES;
    self.logoImage.layer.borderWidth = 3.0f;
    self.logoImage.layer.borderColor = [UIColor whiteColor].CGColor;
    
    // Add click function
    UITapGestureRecognizer *click = [[UITapGestureRecognizer alloc]
                                     initWithTarget:self
                                     action:@selector(pressedAction)];
    [click setNumberOfTapsRequired:1];
    self.logoImage.userInteractionEnabled = YES;
    [self.logoImage addGestureRecognizer:click];
}

// Function call sendCPA function
- (void)pressedAction
{
    NSLog(@"Button Pressed!");
    
    NSString *digest = [DigestManager createDigest];
    NSString *pak = @"efUCa8GvnrYmWC7NwrGp"; // APP_KEY
    
    // Send CPA
    [TrackingManager sendCPA:pak digest:digest];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
