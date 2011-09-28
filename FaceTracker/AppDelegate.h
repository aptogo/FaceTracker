//
//  AppDelegate.h
//  FaceTracker
//
//  Created by Robin Summerhill on 9/22/11.
//  Copyright 2011 Aptogo Limited. All rights reserved.
//
//  Permission is given to use this source code file without charge in any
//  project, commercial or otherwise, entirely at your risk, with the condition
//  that any redistribution (in part or whole) of source code must retain
//  this copyright and permission notice. Attribution in compiled projects is
//  appreciated but not required.
//

#import <UIKit/UIKit.h>

@class VideoCaptureViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (nonatomic, retain) UIWindow *window;

@property (nonatomic, retain) VideoCaptureViewController *viewController;

@end
