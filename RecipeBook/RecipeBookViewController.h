//
//  RecipeBookViewController.h
//  RecipeBook
//
//  Created by Aetonix on 2014-08-10.
//  Copyright (c) 2014 aetonix. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RecipeBookViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) IBOutlet UITableView *tableView;

@end
