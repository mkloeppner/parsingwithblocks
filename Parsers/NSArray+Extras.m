//
//  NSArray+Extras.m
//  Parsers
//
//  Created by Martin Klöppner on 02/06/14.
//  Copyright (c) 2014 Chris Eidhof. All rights reserved.
//

#import "NSArray+Extras.h"

@implementation NSArray (Extras)

- (NSArray *)map:(id (^)(id))exec
{
    NSMutableArray *mappedArray = [[NSMutableArray alloc] initWithCapacity:self.count];
    for (id obj in self) {
        [mappedArray addObject:exec(obj)];
    }
    return [NSArray arrayWithArray:mappedArray];
}

@end
