//
//  AWHVBPPlayVideoView.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2024/12/7.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHVBPPlayVideoView : UIView

@property (nonatomic, strong) NSString *videoUrl;

@property (nonatomic, strong) NSString *title;

@property(nonatomic,copy)void (^clearBackClick)(void);

- (void)play;

@end

NS_ASSUME_NONNULL_END
