//
//  DemoVideoCaptureViewController.h
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

#import "VideoCaptureViewController.h"

@interface DemoVideoCaptureViewController : VideoCaptureViewController
{
    cv::CascadeClassifier _faceCascade;
}

- (IBAction)toggleFps:(id)sender;
- (IBAction)toggleTorch:(id)sender;
- (IBAction)toggleCamera:(id)sender;

@end
