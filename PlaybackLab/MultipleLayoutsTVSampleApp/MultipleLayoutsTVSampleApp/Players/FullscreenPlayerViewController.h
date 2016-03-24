//
//  FullscreenPlayerViewController.h
//  MultipleLayoutsTVSampleApp
//
//  Copyright © 2016 Ooyala. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <OoyalaTVSDK/OOOoyalaTVPlayerViewController.h>

@class PlayerSelectionOption;

@interface FullscreenPlayerViewController : OOOoyalaTVPlayerViewController

@property (nonatomic, strong) PlayerSelectionOption *option;

@end
