//
//  NSArray+Extras.h
//  Parsers
//
//  Created by Martin Klöppner on 02/06/14.
//  Copyright (c) 2014 Chris Eidhof. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (Extras)

- (NSArray *)map:(id (^)(id obj))exec;

@end
