//
//  DFBlunoDevice.h
//  BluBot
//
//  Created by felix king on 5/09/2015.
//  Copyright (c) 2015 Felix King. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DFBlunoDevice : NSObject
{
@public
    BOOL _bReadyToWrite;
}

@property(strong, nonatomic) NSString* identifier;
@property(strong, nonatomic) NSString* name;
@property(assign, nonatomic, readonly) BOOL bReadyToWrite;

@end
