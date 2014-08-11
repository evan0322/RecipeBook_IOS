//
//  RecipeDetailViewController.h
//  RecipeBook
//
//  Created by Aetonix on 2014-08-10.
//  Copyright (c) 2014 aetonix. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Recipe.h"

@interface RecipeDetailViewController : UIViewController


@property (strong, nonatomic) IBOutlet UIImageView *recipePhoto;
@property (strong, nonatomic) IBOutlet UILabel *prepTimeLabel;
@property (strong, nonatomic) IBOutlet UITextView *ingredientTextView;

@property (nonatomic, strong) Recipe *recipe;

@end
