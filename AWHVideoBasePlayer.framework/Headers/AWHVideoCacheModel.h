//
//  AWHVideoCacheModel.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2025/12/7.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHVideoCacheModel : NSObject

@property (nonatomic, copy) NSString *name;

@property (nonatomic, copy) NSString *fileName;

@property (nonatomic, copy) NSString *fileSize;

@property (nonatomic, assign) BOOL isSelect;

@property (nonatomic, strong) UIImage *image;

@end

NS_ASSUME_NONNULL_END
