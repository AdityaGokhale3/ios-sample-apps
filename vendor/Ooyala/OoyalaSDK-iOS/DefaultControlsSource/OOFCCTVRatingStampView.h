//
// Created by Jon Slenk on 8/27/14.
// Copyright (c) 2014 Ooyala, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OOOoyalaPlayer.h"

@interface OOFCCTVRatingStampView : UIView
-(id) __unavailable initWithCoder:(NSCoder *)aDecoder;
-(BOOL) pointInside:(CGPoint)point; /**< point must already be in our coordinate system. */
@property (nonatomic) OOPlayer *player;
@property (nonatomic) OOFCCTVRating *tvRating;
@property (nonatomic) OOFCCTVRatingConfiguration *tvRatingConfiguration;
@property (nonatomic) OOOoyalaPlayerVideoGravity videoGravity;
@end
