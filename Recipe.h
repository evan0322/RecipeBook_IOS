//
//  Recipe.h
//  RecipeBook
//
//  Created by Aetonix on 2014-08-10.
//  Copyright (c) 2014 aetonix. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Recipe : NSObject
@property (nonatomic, strong) NSString *name; // name of recipe
@property (nonatomic, strong) NSString *prepTime; // preparation time
@property (nonatomic, strong) NSString *imageFile; // image filename of recipe
@property (nonatomic, strong) NSArray *ingredients; // ingredients

@end
