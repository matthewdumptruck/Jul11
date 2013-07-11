//
//  View.h
//  Jul11
//
//  Created by matthewdumptruck on 7/11/13.
//  Copyright (c) 2013 matthewdumptruck. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface View : UIView {
    NSArray *subViews;
    NSUInteger currentView;
}

- (void)nextImage;
- (void)previousImage;

@end