//
//  AWHRMZFOrentationObserver.h
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
#import <AWHVideoBasePlayer/AWHRMZFPlayerView.h>

NS_ASSUME_NONNULL_BEGIN

/// Full screen mode
typedef NS_ENUM(NSUInteger, AWHRMZFFullScreenMode) {
    AWHRMZFFullScreenModeAutomatic,  // Determine full screen mode automatically
    AWHRMZFFullScreenModeLandscape,  // Landscape full screen mode
    AWHRMZFFullScreenModePortrait    // Portrait full screen Model
};

/// Portrait full screen mode.
typedef NS_ENUM(NSUInteger, AWHRMZFPortraitFullScreenMode) {
    AWHRMZFPortraitFullScreenModeScaleToFill,    // Full fill
    AWHRMZFPortraitFullScreenModeScaleAspectFit  // contents scaled to fit with fixed aspect. remainder is transparent
};

/// Player view mode
typedef NS_ENUM(NSUInteger, AWHRMZFRotateType) {
    AWHRMZFRotateTypeNormal,         // Normal
    AWHRMZFRotateTypeCell            // Cell
};

/**
 Rotation of support direction
 */
typedef NS_OPTIONS(NSUInteger, AWHRMZFInterfaceOrientationMask) {
    AWHRMZFInterfaceOrientationMaskUnknow = 0,
    AWHRMZFInterfaceOrientationMaskPortrait = (1 << 0),
    AWHRMZFInterfaceOrientationMaskLandscapeLeft = (1 << 1),
    AWHRMZFInterfaceOrientationMaskLandscapeRight = (1 << 2),
    AWHRMZFInterfaceOrientationMaskPortraitUpsideDown = (1 << 3),
    AWHRMZFInterfaceOrientationMaskLandscape = (AWHRMZFInterfaceOrientationMaskLandscapeLeft | AWHRMZFInterfaceOrientationMaskLandscapeRight),
    AWHRMZFInterfaceOrientationMaskAll = (AWHRMZFInterfaceOrientationMaskPortrait | AWHRMZFInterfaceOrientationMaskLandscape | AWHRMZFInterfaceOrientationMaskPortraitUpsideDown),
    AWHRMZFInterfaceOrientationMaskAllButUpsideDown = (AWHRMZFInterfaceOrientationMaskPortrait | AWHRMZFInterfaceOrientationMaskLandscape),
};

/// This enumeration lists some of the gesture types that the player has by default.
typedef NS_OPTIONS(NSUInteger, AWHRMZFDisablePortraitGestureTypes) {
    AWHRMZFDisablePortraitGestureTypesNone         = 0,
    AWHRMZFDisablePortraitGestureTypesTap          = 1 << 0,
    AWHRMZFDisablePortraitGestureTypesPan          = 1 << 1,
    AWHRMZFDisablePortraitGestureTypesAll          = (AWHRMZFDisablePortraitGestureTypesTap | AWHRMZFDisablePortraitGestureTypesPan)
};

@protocol AWHRMZFPortraitOrientationDelegate <NSObject>

- (void)AWHRMZF_orientationWillChange:(BOOL)isFullScreen;

- (void)AWHRMZF_orientationDidChanged:(BOOL)isFullScreen;

- (void)AWHRMZF_interationState:(BOOL)isDragging;

@end

@interface AWHRMZFOrientationObserver : NSObject

/// update the rotateView and containerView.
- (void)updateRotateView:(AWHRMZFPlayerView *)rotateView
           containerView:(UIView *)containerView;

/// Container view of a full screen state player.
@property (nonatomic, strong, readonly, nullable) UIView *fullScreenContainerView;

/// Container view of a small screen state player.
@property (nonatomic, weak) UIView *containerView;

/// The block invoked When player will rotate.
@property (nonatomic, copy, nullable) void(^orientationWillChange)(AWHRMZFOrientationObserver *observer, BOOL isFullScreen);

/// The block invoked when player rotated.
@property (nonatomic, copy, nullable) void(^orientationDidChanged)(AWHRMZFOrientationObserver *observer, BOOL isFullScreen);

/// Full screen mode, the default landscape into full screen
@property (nonatomic) AWHRMZFFullScreenMode fullScreenMode;

@property (nonatomic, assign) AWHRMZFPortraitFullScreenMode portraitFullScreenMode;

/// rotate duration, default is 0.30
@property (nonatomic) NSTimeInterval duration;

/// If the full screen.
@property (nonatomic, readonly, getter=isFullScreen) BOOL fullScreen;

/// Lock screen orientation
@property (nonatomic, getter=isLockedScreen) BOOL lockedScreen;

/// The fullscreen statusbar hidden.
@property (nonatomic, assign) BOOL fullScreenStatusBarHidden;

/// default is  UIStatusBarStyleLightContent.
@property (nonatomic, assign) UIStatusBarStyle fullScreenStatusBarStyle;

/// defalut is UIStatusBarAnimationSlide.
@property (nonatomic, assign) UIStatusBarAnimation fullScreenStatusBarAnimation;

@property (nonatomic, assign) CGSize presentationSize;

/// default is AWHRMZFDisablePortraitGestureTypesAll.
@property (nonatomic, assign) AWHRMZFDisablePortraitGestureTypes disablePortraitGestureTypes;

/// The current orientation of the player.
/// Default is UIInterfaceOrientationPortrait.
@property (nonatomic, readonly) UIInterfaceOrientation currentOrientation;

/// Whether allow the video orientation rotate.
/// default is YES.
@property (nonatomic, assign) BOOL allowOrientationRotation;

/// The support Interface Orientation,default is AWHRMZFInterfaceOrientationMaskAllButUpsideDown
@property (nonatomic, assign) AWHRMZFInterfaceOrientationMask supportInterfaceOrientation;

/// Add the device orientation observer.
- (void)addDeviceOrientationObserver;

/// Remove the device orientation observer.
- (void)removeDeviceOrientationObserver;

/// Enter the fullScreen while the AWHRMZFFullScreenMode is AWHRMZFFullScreenModeLandscape.
- (void)rotateToOrientation:(UIInterfaceOrientation)orientation animated:(BOOL)animated;

/// Enter the fullScreen while the AWHRMZFFullScreenMode is AWHRMZFFullScreenModeLandscape.
- (void)rotateToOrientation:(UIInterfaceOrientation)orientation animated:(BOOL)animated completion:(void(^ __nullable)(void))completion;

/// Enter the fullScreen while the AWHRMZFFullScreenMode is AWHRMZFFullScreenModePortrait.
- (void)enterPortraitFullScreen:(BOOL)fullScreen animated:(BOOL)animated;

/// Enter the fullScreen while the AWHRMZFFullScreenMode is AWHRMZFFullScreenModePortrait.
- (void)enterPortraitFullScreen:(BOOL)fullScreen animated:(BOOL)animated completion:(void(^ __nullable)(void))completion;

/// FullScreen mode is determined by AWHRMZFFullScreenMode.
- (void)enterFullScreen:(BOOL)fullScreen animated:(BOOL)animated;

/// FullScreen mode is determined by AWHRMZFFullScreenMode.
- (void)enterFullScreen:(BOOL)fullScreen animated:(BOOL)animated completion:(void (^ _Nullable)(void))completion;

@end

NS_ASSUME_NONNULL_END


