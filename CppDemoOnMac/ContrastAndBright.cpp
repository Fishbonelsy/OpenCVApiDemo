//
//  ContrastAndBright.cpp
//  CppDemoOnMac
//
//  Created by LongSiyang on 2017/12/23.
//  Copyright © 2017年 LongSiyang. All rights reserved.
//

#include "ContrastAndBright.hpp"

#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>

using namespace cv;

void adjust_contrast_and_bright(int contrast , int bright){
    
    Mat g_srcImage = imread("/Users/longsiyang/cppdemoonmac/CppDemoOnMac/OpenCVApiDemo/1.jpg");
    Mat g_dstImage = imread("/Users/longsiyang/cppdemoonmac/CppDemoOnMac/OpenCVApiDemo/1.jpg");
    //三个for循环，执行运算 g_dstImage(i,j) =a*g_srcImage(i,j) + b
    for(int y = 0; y < g_srcImage.rows; y++ )
    {
        for(int x = 0; x < g_srcImage.cols; x++ )
        {
            for(int c = 0; c < 3; c++ )
            {
                // g_dstImage.at<Vec3b>(y,x)[c]每个像素点的通道值
                // saturate_cast<uchar> 保证像素点的rgb值，不会超过0-255的范围
                g_dstImage.at<Vec3b>(y,x)[c]= saturate_cast<uchar>( (contrast*0.01)*(g_srcImage.at<Vec3b>(y,x)[c] ) + bright );
            }
        }
    }
    
    //显示图像
    namedWindow("效果图窗口】");
    imshow("【效果图窗口】", g_dstImage);
}
