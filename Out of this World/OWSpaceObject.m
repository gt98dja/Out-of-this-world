//
//  OWSpaceObject.m
//  Out of this World
//
//  Created by Daniel Jansson on 2014-04-16.
//  Copyright (c) 2014 Daniel Jansson. All rights reserved.
//

#import "OWSpaceObject.h"
#import "AstronomicalData.h"

@implementation OWSpaceObject

-(id)init
{
    self = [self initWithData:nil andImage:nil];
    retain self;
}

-(id)initWithData:(NSDictionary *)data andImage:(UIImage *)image
{
    self = [super init];
    
    self.name = data[PLANET_NAME];
    self.gravitationalForce = [data[PLANET_GRAVITY] floatValue];
    
    
}

@end
