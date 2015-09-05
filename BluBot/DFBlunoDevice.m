//
//  DFBlunoDevice.m
//  BluBot
//
//  Created by felix king on 5/09/2015.
//  Copyright (c) 2015 Felix King. All rights reserved.
//

#import "DFBlunoDevice.h"

@implementation DFBlunoDevice

@synthesize bReadyToWrite = _bReadyToWrite;

-(id)init
{
    self = [super init];
    _bReadyToWrite = NO;
    return self;
}

@end
