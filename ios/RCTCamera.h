//
//  RCTCamera.h
//  RNOpenAlpr
//
//  Created by Evan Rosenfeld on 2/24/17.
//  Copyright © 2017 Facebook. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <React/RCTBridge.h>
#import <React/RCTEventDispatcher.h>
#import <React/RCTUtils.h>
#import <React/RCTLog.h>
#import <React/UIView+React.h>
#import <AVFoundation/AVFoundation.h>

@class RCTCameraManager;

@interface RCTCamera : UIView

@property (nonatomic, copy) RCTBubblingEventBlock onPlateRecognized;

- (id)initWithManager:(RCTCameraManager*)manager bridge:(RCTBridge *)bridge;
@end
