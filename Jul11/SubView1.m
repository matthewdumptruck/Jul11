//
//  kubrick.m
//  Jul11
//
//  Created by matthewdumptruck on 7/11/13.
//  Copyright (c) 2013 matthewdumptruck. All rights reserved.
//

#import "SubView1.h"

@implementation SubView1

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        
        UIImage *image = [UIImage imageNamed: @"kubrick.jpg"];
        if (image == nil) {
            NSLog(@"could not find the image");
        }
        
        imageView = [[UIImageView alloc] initWithImage:image];
        imageView.contentMode = UIViewContentModeScaleAspectFill;
        imageView.frame = self.bounds;
        imageView.userInteractionEnabled = YES;
        
        [self addSubview:imageView];
        
    }
    return self;
}

@end


