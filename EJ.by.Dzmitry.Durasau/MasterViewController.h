//
//  MasterViewController.h
//  EJ.by.Dzmitry.Durasau
//
//  Created by Dzmitry Durasau on 6/7/15.
//  Copyright (c) 2015 Dzmitry Durasau. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

