//
//  AppDelegate.h
//  Jul11
//
//  Created by matthewdumptruck on 7/11/13.
//  Copyright (c) 2013 matthewdumptruck. All rights reserved.
//


#import <UIKit/UIKit.h>
#import <AVFoundation/AVAudioPlayer.h>
@class View;

@interface Jul11AppDelegate : UIResponder <UIApplicationDelegate, UIGestureRecognizerDelegate> {
    View *view;
    UIWindow *_window;
    AVAudioPlayer *player;
}

@property (strong, nonatomic) UIWindow *window;

@end
