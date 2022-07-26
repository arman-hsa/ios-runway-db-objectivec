//
//  DetailsViewController.h
//  RunwayDatabaseKai
//
//  Created by arman on 11/12/15.
//  Copyright © 2015 arman. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SafariServices/SafariServices.h>

#import "DesignerItem.h"


@class DesignerItem;
@interface DetailsViewController : UIViewController<SFSafariViewControllerDelegate>

@property(nonatomic, strong) DesignerItem  *selectedItem;

@property(nonatomic, weak) IBOutlet UIImageView *dressImageView1080x;

@end
