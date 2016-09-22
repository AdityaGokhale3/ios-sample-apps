/**
 * @class      SampleAppPlayerViewController SampleAppPlayerViewController.m "SampleAppPlayerViewController.m"
 * @brief      An abstract ViewController which is used as the outlet for all Player nibs
 * @details    An abstract ViewController which is used as the outlet for all Player nibs.  Subclass this whenever you develop a new player.
               When creating a new PlayerViewControler, use this as your superclass.
               When creating a new nib, use this class as your owner
 * @date       12/12/14
 * @copyright  Copyright (c) 2014 Ooyala, Inc. All rights reserved.
 */

#import <Foundation/Foundation.h>
#import "SampleAppPlayerViewController.h"

@interface SampleAppPlayerViewController (GestureDelegate) <UIGestureRecognizerDelegate>
@end

@implementation SampleAppPlayerViewController
- (id)initWithPlayerSelectionOption:(PlayerSelectionOption *)playerSelectionOption {
  self = [super init];
  if (self) {
    self.playerSelectionOption = playerSelectionOption;
  }
  return self;
}

- (IBAction)onButtonClick:(id)sender {}

- (void)viewDidAppear:(BOOL)animated
{
  [super viewDidAppear:animated];
  
  if ([self.navigationController respondsToSelector:@selector(interactivePopGestureRecognizer)]) {
    self.navigationController.interactivePopGestureRecognizer.enabled = NO;
    self.navigationController.interactivePopGestureRecognizer.delegate = self;
  }
}

- (void)viewWillDisappear:(BOOL)animated
{
  [super viewWillDisappear:animated];
  
  if ([self.navigationController respondsToSelector:@selector(interactivePopGestureRecognizer)]) {
    self.navigationController.interactivePopGestureRecognizer.enabled = YES;
    self.navigationController.interactivePopGestureRecognizer.delegate = nil;
  }
}

@end

@implementation SampleAppPlayerViewController (GestureDelegate)

- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer *)gestureRecognizer
{
  return NO;
}

@end