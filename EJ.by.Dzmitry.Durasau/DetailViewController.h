//
//  DetailViewController.h
//  EJ.by.Dzmitry.Durasau
//
//  Created by Dzmitry Durasau on 6/7/15.
//  Copyright (c) 2015 Dzmitry Durasau. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

