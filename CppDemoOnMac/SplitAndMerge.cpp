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

void cv_merge(){
    std::vector<Mat> channels;
    Mat logoImage =imread("/Users/longsiyang/cppdemoonmac/CppDemoOnMac/OpenCVApiDemo/1.jpg",0);
    Mat srcImage=imread("/Users/longsiyang/cppdemoonmac/CppDemoOnMac/OpenCVApiDemo/2.jpeg");
    
    split(srcImage,channels);//分离色彩通道
    Mat imageROI=channels.at(0);
    addWeighted(imageROI(Rect(0,0,logoImage.cols,logoImage.rows)),1.0,
                logoImage,0.5,0.,imageROI(Rect(0,0,logoImage.cols,logoImage.rows)));
    
    merge(channels,srcImage);
    
    namedWindow("sample");
    imshow("sample",srcImage);
}
