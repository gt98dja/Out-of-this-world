//
//  OWSpaceDataViewController.h
//  Out of this World
//
//  Created by Daniel Jansson on 2014-04-22.
//  Copyright (c) 2014 Daniel Jansson. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OWSpaceObject.h"

@interface OWSpaceDataViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) OWSpaceObject *spaceObject;

@end
