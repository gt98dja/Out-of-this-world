//
//  OWSpaceImageViewController.h
//  Out of this World
//
//  Created by Sven Jansson on 2014-04-19.
//  Copyright (c) 2014 Daniel Jansson. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OWSpaceImageViewController : UIViewController <UIScrollViewDelegate>

@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic) UIImageView *imageView;



@end
