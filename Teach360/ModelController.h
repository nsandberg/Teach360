//
//  ModelController.h
//  Teach360
//
//  Created by Nathan Sandberg on 6/16/16.
//  Copyright © 2016 Nathan Sandberg. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

