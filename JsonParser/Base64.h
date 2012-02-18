//
//  Base64.h
//  CryptTest
//
//  Created by Kiichi Takeuchi on 4/20/10.
//  Copyright 2010 ObjectGraph LLC. All rights reserved.
// 
//  Original Source Code is donated by Cyrus
//  Public Domain License
//  http://www.cocoadev.com/index.pl?BaseSixtyFour

#import <Foundation/Foundation.h>


@interface Base64 : NSObject {

}
// Initialize base64 object
+ (void)initialize;
// Encode base64 string
+ (NSString *)encode:(const uint8_t *)input length:(NSInteger)length;
// Encode base64 raw data
+ (NSString *)encode:(NSData *)rawBytes;
// Decode base64 string
+ (NSData *)decode:(const char *)string length:(NSInteger)inputLength;
// Decode base64 raw data
+ (NSData *)decode:(NSString *)string;

@end
