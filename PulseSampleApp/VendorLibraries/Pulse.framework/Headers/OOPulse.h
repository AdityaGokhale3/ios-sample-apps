//
//  OOPulse.h
//  Pulse
//
//  Created by Jacques du Toit on 21/10/15.
//  Copyright © 2015 Ooyala. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <Pulse/Pulse.h>

@protocol OOPulseSession;
@protocol OOPulseSessionDelegate;

extern NSString *OOPulseIllegalOperationException;

/**
 * The Ooyala Pulse SDK.
 *
 * This class is used to request ad sessions from Ooyala Pulse. An ad session
 * contains all the ads that will be played along with a specific piece of
 * content. 
 * 
 * When your application has content which it wants to display alongside advertisements,
 * it requests a new ad session using this class. (See OOPulseSession.)
 *
 * For access to the low-level Core API, please refer to VPAdRequester and VPTracker.
 */
@interface OOPulse : NSObject

/**  @name Methods  */

/**
 *  Initialize the Pulse SDK.
 *
 *  This method must be called before requesting any ad sessions.
 *
 *  @param host            The Ooyala Pulse hostname for the client account being used.
 *  @param deviceContainer The Ooyala Pulse device container, if any; can be nil.
 *  @param persistentId    The Ooyala Pulse persistent user id, if any; can be nil.
 */
+ (void)setPulseHost:(NSString *)host
     deviceContainer:(NSString *)deviceContainer
        persistentId:(NSString *)persistentId;


/**
 *  Set a listener to receive low-level log messages about errors, warnings and 
 *  the like, which may be dispatched during ad or tracking requests.
 *
 * @param listener A VPLogListenerBlock which is called with the log messages.
 */
+ (void)setLogListener:(VPLogListenerBlock)listener;

/**
 * Create a new Pulse ad session with the passed metadata and request settings.
 *
 *  @param contentMetadata Information about the content along with which the requested ads are to be displayed.
 *  @param requestSettings Information about the environment in which the ad will play.
 *
 *  @return An object conforming to the OOPulseSession protocol.
 */
+ (id<OOPulseSession>)sessionWithContentMetadata:(VPContentMetadata *)contentMetadata
                                 requestSettings:(VPRequestSettings *)requestSettings;


@end


