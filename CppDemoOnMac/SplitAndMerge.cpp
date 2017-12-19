//
//  SplitAndMerge.cpp
//  CppDemoOnMac
//
//  Created by LongSiyang on 2017/12/19.
//  Copyright © 2017年 LongSiyang. All rights reserved.
//

#include "SplitAndMerge.hpp"

#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>

using namespace cv;

void cv_split(){
    std::vector<Mat> channels;
    Mat image=imread("/Users/longsiyang/cppdemoonmac/CppDemoOnMac/OpenCVApiDemo/2.jpeg");
    split(image,channels);
    // 图片是灰色的，因为split之后，图片是单通道所以，只会显示黑白
    namedWindow("<1>利用ROI实现图像叠加示例窗口");
    imshow("<1>利用ROI实现图像叠加示例窗口",channels.at(1));
}
