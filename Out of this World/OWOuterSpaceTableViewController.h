//
//  OWOuterSpaceTableViewController.h
//  Out of this World
//
//  Created by Daniel Jansson on 2014-04-15.
//  Copyright (c) 2014 Daniel Jansson. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OWAddSpaceObjectViewController.h"

@interface OWOuterSpaceTableViewController : UITableViewController <OWAddSpaceObjectViewControllerDelegate>

@property (strong, nonatomic) NSMutableArray *planets;
@property (strong, nonatomic) NSMutableArray *addedSpaceObjects;

@end
