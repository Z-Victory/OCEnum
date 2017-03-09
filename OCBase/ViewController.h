//
//  ViewController.h
//  OCBase
//
//  Created by IOS on 17/2/10.
//  Copyright © 2017年 IOS. All rights reserved.
//

#import <UIKit/UIKit.h>
//#import "SayHiViewController.h"
enum weatherState
{
    sunshineDay = 0,
    rain = 0,
};
typedef enum : NSUInteger {
    low = 0,
    middle = 1,
    tall = 2,
} heigth;
typedef NS_ENUM(NSUInteger , LoginState)
{
    outLine = 0,
    login,
    logout
};
typedef NS_OPTIONS(NSUInteger, viewStyle)
{
    top = 0,
    bottom = 1 << 0,
    left = 1 << 1,
    right = 1 << 2
};
@interface ViewController : UIViewController
@property (nonatomic, assign) heigth  high;
@property (nonatomic, assign) viewStyle  style;
@end

