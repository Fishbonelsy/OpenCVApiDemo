//
//  RoiAndMixed.cpp
//  CppDemoOnMac
//
//  Created by LongSiyang on 2017/12/18.
//  Copyright © 2017年 LongSiyang. All rights reserved.
//

#include "RoiAndMixed.hpp"

#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>

using namespace cv;

void copyto(){
    Mat logo=imread("/Users/longsiyang/cppdemoonmac/CppDemoOnMac/OpenCVApiDemo/1.jpg");
    
    Mat image=imread("/Users/longsiyang/cppdemoonmac/CppDemoOnMac/OpenCVApiDemo/2.jpeg");
    if (!logo.data) {
        printf("logo 获取失败");
    }
    if (!image.data) {
        printf("image 获取失败");
    }
    Mat imageROI = image(Rect(200,200 , logo.cols , logo.rows ));
    
    Mat mask = imread("/Users/longsiyang/cppdemoonmac/CppDemoOnMac/OpenCVApiDemo/1.jpg" , 0);
    logo.copyTo(imageROI,mask);
    
    //【5】显示结果
    namedWindow("<1>利用ROI实现图像叠加示例窗口");
    imshow("<1>利用ROI实现图像叠加示例窗口",image);
    
}

void mixed(){
    Mat logo=imread("/Users/longsiyang/cppdemoonmac/CppDemoOnMac/OpenCVApiDemo/1.jpg");
    
    Mat image=imread("/Users/longsiyang/cppdemoonmac/CppDemoOnMac/OpenCVApiDemo/2.jpeg");
    if (!logo.data) {
        printf("logo 获取失败");
    }
    if (!image.data) {
        printf("image 获取失败");
    }
    Mat imageROI = image(Rect(200,200 , logo.cols , logo.rows ));
    
    double alphaValue = 0.7;
    double betaValue= ( 1.0 - alphaValue );
    addWeighted(imageROI, alphaValue, logo, betaValue, 0.0, imageROI);
    
    //【5】显示结果
    namedWindow("<2>利用ROI实现图像叠加示例窗口");
    imshow("<2>利用ROI实现图像叠加示例窗口",image);
}
