//
//  ZKAppDelegate.h
//  GCDHttpdIOS
//
//  Created by 曾科 on 13-2-22.
//  Copyright (c) 2013年 zengke. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GCDHttpd.h"

@interface ZKAppDelegate : UIResponder <UIApplicationDelegate, GCDHttpdDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) UIViewController *viewController;
@property (strong, nonatomic) GCDHttpd * httpd;
@property (nonatomic) NSInteger httpdPort;

@end
