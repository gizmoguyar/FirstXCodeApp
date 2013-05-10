//
//  MasterViewController.h
//  FirstApp
//
//  Created by August  Rabe on 5/10/13.
//
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
