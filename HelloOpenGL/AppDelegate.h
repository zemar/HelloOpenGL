//
//  AppDelegate.h
//  HelloOpenGL
//
//  Created by MHoward2 on 6/19/14.
//  Copyright (c) 2014 mike. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OpenGLView.h"

@interface AppDelegate : NSObject <UIApplicationDelegate> {
    OpenGLView* _glView;
}

@property (strong, nonatomic) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet OpenGLView *glView;

@end
