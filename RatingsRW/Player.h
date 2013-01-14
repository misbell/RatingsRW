//
//  Player.h
//  RatingsRW
//
//  Created by Michael Isbell on 1/13/13.
//  Copyright (c) 2013 Michael Prenez-Isbell. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *game;
@property (nonatomic, assign) int rating;

@end
// 