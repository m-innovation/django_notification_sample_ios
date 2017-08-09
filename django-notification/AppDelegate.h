//
//  AppDelegate.h
//  django-notification
//
//  Created by M.Amatani on 2017/07/20.
//  Copyright © 2017年 Mobile Innovation. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    NSURLConnection *_conection;
    long _statusCode;
    NSMutableData *_initialiseData;
}
+ (AppDelegate*) sharedAppDelegate;
@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, weak) NSString *deviceTokenString;

@end

