//
//  Lexer.h
//  Parsers
//
//  Created by Chris Eidhof on 09.01.14.
//  Copyright (c) 2014 Chris Eidhof. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Lexer : NSObject

- (NSArray *)tokenize:(NSString *)contents;
+ (instancetype)lexerWithOperators:(NSArray *)operators;
@end
