//
//  CVImageHelper.h
//  opencv-demo
//
//  Created by shujucn on 2018/7/20.
//  Copyright © 2018 shuju. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <OpenCV/opencv2/opencv.hpp>


@interface CVImageHelper : NSObject

- (cv::Mat)cvMatFromUIImage:(UIImage *)image;
- (cv::Mat)cvMatGrayFromUIImage:(UIImage *)image;
- (UIImage *)UIImageFromCVMat:(cv::Mat)cvMat;

@end
