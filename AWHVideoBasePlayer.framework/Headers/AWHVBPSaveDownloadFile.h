//
//  AWHVBPSaveDownloadFile.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2023/11/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHVBPSaveDownloadFile : NSObject

- (void)saveImage:(UIImage *)image;
- (void)savePHPhotoLibraryImage:(UIImage *)image;

- (void)saveVideo:(NSURL *)mediaURL;
- (void)savePhotoLibraryVideo:(NSURL *)mediaURL;

@end

NS_ASSUME_NONNULL_END
