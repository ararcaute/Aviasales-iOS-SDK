//
//  JRAdvertisementTableManager.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import "JRTableManager.h"

@interface JRAdvertisementTableManager : NSObject <JRTableManager>

@property (strong, nonatomic) UIView *appodealAd;
@property (strong, nonatomic) UIView *aviasalesAd;

+ (CGFloat)appodealAdHeight;

@end
