//
//  Digest.h
//  PointMissionSDK
//
//  Created by dtkad on 6/15/2558 BE.
//  Copyright (c) 2558 dtkad. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <Security/Security.h>
#import <CommonCrypto/CommonDigest.h>

@interface Digest : NSObject
{
@public     NSString *uuidString;
@private    NSString *uniqueid;
}

- (NSString *)loadKeychainServices;

@end

@interface NSData(exDigest)
+ (NSData *)utf8Data: (NSString *)string;
- (NSData *)sha1Digest;
- (NSData *)md5Digest;
- (NSString *)hexString;
- (NSString *)sha1String;
@end

@interface NSString(exDigest)
- (NSString *)sha1String;
@end