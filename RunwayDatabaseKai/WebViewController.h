//
//  WebViewController.h
//  RunwayDatabaseKai
//
//  Created by arman on 11/12/15.
//  Copyright © 2015 arman. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController <UIWebViewDelegate>
@property(nonatomic, copy) NSString *legacyURL;

@end
