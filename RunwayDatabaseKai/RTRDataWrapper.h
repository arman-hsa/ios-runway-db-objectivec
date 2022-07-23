//
//  RTRDataWrapper.h
//  RunwayDatabaseKai
//
//  Created by arman on 11/9/15.
//  Copyright © 2015 arman. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SVProgressHUD/SVProgressHUD.h>

#import "DesignerItem.h"

typedef void (^RTRCompletionBlock)(NSArray *designerArray, NSError *error);

@class DesignerItem;
@interface RTRDataWrapper : NSObject<NSURLSessionDataDelegate, NSURLSessionDownloadDelegate>

+(RTRDataWrapper *)sharedDressManager;

-(void)fetchmeDesignersAndAccessories:(void (^)(NSArray *designerArray, NSError *error)) completionHandler;
-(void)fetchmeDressesByDesigner:(NSString *)designerName completionBlock:(RTRCompletionBlock)completionHandler;

@end
