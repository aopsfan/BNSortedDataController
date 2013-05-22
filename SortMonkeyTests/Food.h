//
//  Food.h
//  FoodsDemo
//
//  Created by Bruce Ricketts on 4/30/13.
//  Copyright (c) 2013 Bruce Ricketts. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SMSortableData.h"

@interface Food : NSObject <SMSortableData>
@property (weak, nonatomic)NSString *name;
@property (strong, nonatomic)NSString *category;

+ (Food *)foodWithName:(NSString *)name category:(NSString *)category;
+ (NSArray *)sampleFoods;

@end
