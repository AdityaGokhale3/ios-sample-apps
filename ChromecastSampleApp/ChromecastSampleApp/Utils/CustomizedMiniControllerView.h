//
//  CustomizedMiniControllerView.h
//  OoyalaChromecastSampleApp
//
//  Created by Liusha Huang on 9/25/14.
//  Copyright (c) 2014 Liusha Huang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <OoyalaCastSDK/OOCastMiniControllerProtocol.h>
@class OOChromecastPlugin;

@interface CustomizedMiniControllerView : UIView<OOCastMiniControllerProtocol>

@property(nonatomic, strong) UITableViewCell *cell;

- (id)initWithFrame:(CGRect)frame castPlugin:(OOChromecastPlugin *)castPlugin;
@end
