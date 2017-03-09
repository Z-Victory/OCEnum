//
//  ViewController.m
//  OCBase
//
//  Created by IOS on 17/2/10.
//  Copyright © 2017年 IOS. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    NSString * a = @"hello";
    
    NSString * b = a;
    
    a = @"world";
    
    NSLog(@"%@\n%@",a,b);
    
    self.high = low;
    
    self.style = top | bottom;
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
