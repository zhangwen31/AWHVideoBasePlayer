//
//  AWHRMZFPlayerGestureControl.h
//  AWHRMZFPlayer
//
// Copyright (c) 2016年 任子丰 ( http://github.com/renzifeng )
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, AWHRMZFPlayerGestureType) {
    AWHRMZFPlayerGestureTypeUnknown,
    AWHRMZFPlayerGestureTypeSingleTap,
    AWHRMZFPlayerGestureTypeDoubleTap,
    AWHRMZFPlayerGestureTypePan,
    AWHRMZFPlayerGestureTypePinch
};

typedef NS_ENUM(NSUInteger, AWHRMZFPanDirection) {
    AWHRMZFPanDirectionUnknown,
    AWHRMZFPanDirectionV,
    AWHRMZFPanDirectionH,
};

typedef NS_ENUM(NSUInteger, AWHRMZFPanLocation) {
    AWHRMZFPanLocationUnknown,
    AWHRMZFPanLocationLeft,
    AWHRMZFPanLocationRight,
};

typedef NS_ENUM(NSUInteger, AWHRMZFPanMovingDirection) {
    AWHRMZFPanMovingDirectionUnkown,
    AWHRMZFPanMovingDirectionTop,
    AWHRMZFPanMovingDirectionLeft,
    AWHRMZFPanMovingDirectionBottom,
    AWHRMZFPanMovingDirectionRight,
};

/// This enumeration lists some of the gesture types that the player has by default.
typedef NS_OPTIONS(NSUInteger, AWHRMZFPlayerDisableGestureTypes) {
    AWHRMZFPlayerDisableGestureTypesNone         = 0,
    AWHRMZFPlayerDisableGestureTypesSingleTap    = 1 << 0,
    AWHRMZFPlayerDisableGestureTypesDoubleTap    = 1 << 1,
    AWHRMZFPlayerDisableGestureTypesPan          = 1 << 2,
    AWHRMZFPlayerDisableGestureTypesPinch        = 1 << 3,
    AWHRMZFPlayerDisableGestureTypesAll          = (AWHRMZFPlayerDisableGestureTypesSingleTap | AWHRMZFPlayerDisableGestureTypesDoubleTap | AWHRMZFPlayerDisableGestureTypesPan | AWHRMZFPlayerDisableGestureTypesPinch)
};

/// This enumeration lists some of the pan gesture moving direction that the player not support.
typedef NS_OPTIONS(NSUInteger, AWHRMZFPlayerDisablePanMovingDirection) {
    AWHRMZFPlayerDisablePanMovingDirectionNone         = 0,       /// Not disable pan moving direction.
    AWHRMZFPlayerDisablePanMovingDirectionVertical     = 1 << 0,  /// Disable pan moving vertical direction.
    AWHRMZFPlayerDisablePanMovingDirectionHorizontal   = 1 << 1,  /// Disable pan moving horizontal direction.
    AWHRMZFPlayerDisablePanMovingDirectionAll          = (AWHRMZFPlayerDisablePanMovingDirectionVertical | AWHRMZFPlayerDisablePanMovingDirectionHorizontal)  /// Disable pan moving all direction.
};

@interface AWHRMZFPlayerGestureControl : NSObject

/// Gesture condition callback.
@property (nonatomic, copy, nullable) BOOL(^triggerCondition)(AWHRMZFPlayerGestureControl *control, AWHRMZFPlayerGestureType type, UIGestureRecognizer *gesture, UITouch *touch);

/// Single tap gesture callback.
@property (nonatomic, copy, nullable) void(^singleTapped)(AWHRMZFPlayerGestureControl *control);

/// Double tap gesture callback.
@property (nonatomic, copy, nullable) void(^doubleTapped)(AWHRMZFPlayerGestureControl *control);

/// Begin pan gesture callback.
@property (nonatomic, copy, nullable) void(^beganPan)(AWHRMZFPlayerGestureControl *control, AWHRMZFPanDirection direction, AWHRMZFPanLocation location);

/// Pan gesture changing callback.
@property (nonatomic, copy, nullable) void(^changedPan)(AWHRMZFPlayerGestureControl *control, AWHRMZFPanDirection direction, AWHRMZFPanLocation location, CGPoint velocity);

/// End the Pan gesture callback.
@property (nonatomic, copy, nullable) void(^endedPan)(AWHRMZFPlayerGestureControl *control, AWHRMZFPanDirection direction, AWHRMZFPanLocation location);

/// Pinch gesture callback.
@property (nonatomic, copy, nullable) void(^pinched)(AWHRMZFPlayerGestureControl *control, float scale);

/// The single tap gesture.
@property (nonatomic, strong, readonly) UITapGestureRecognizer *singleTap;

/// The double tap gesture.
@property (nonatomic, strong, readonly) UITapGestureRecognizer *doubleTap;

/// The pan tap gesture.
@property (nonatomic, strong, readonly) UIPanGestureRecognizer *panGR;

/// The pinch tap gesture.
@property (nonatomic, strong, readonly) UIPinchGestureRecognizer *pinchGR;

/// The pan gesture direction.
@property (nonatomic, readonly) AWHRMZFPanDirection panDirection;

/// The pan location.
@property (nonatomic, readonly) AWHRMZFPanLocation panLocation;

/// The moving drection.
@property (nonatomic, readonly) AWHRMZFPanMovingDirection panMovingDirection;

/// The gesture types that the player not support.
@property (nonatomic) AWHRMZFPlayerDisableGestureTypes disableTypes;

/// The pan gesture moving direction that the player not support.
@property (nonatomic) AWHRMZFPlayerDisablePanMovingDirection disablePanMovingDirection;

/**
 Add  all gestures(singleTap、doubleTap、panGR、pinchGR) to the view.
 */
- (void)addGestureToView:(UIView *)view;

/**
 Remove all gestures(singleTap、doubleTap、panGR、pinchGR) form the view.
 */
- (void)removeGestureToView:(UIView *)view;

@end

NS_ASSUME_NONNULL_END
