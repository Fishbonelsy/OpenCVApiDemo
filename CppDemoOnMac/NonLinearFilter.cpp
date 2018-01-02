//
//  NonLinearFilter.cpp
//  CppDemoOnMac
//
//  Created by LongSiyang on 2018/1/2.
//  Copyright © 2018年 LongSiyang. All rights reserved.
//

#include "NonLinearFilter.hpp"


#include <iostream>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include"opencv2/imgproc/imgproc.hpp" 

using namespace cv;

void median_blur()
{
    //载入原图
    Mat image=imread("/Users/longsiyang/cppdemoonmac/CppDemoOnMac/OpenCVApiDemo/1.jpg");
    //进行均值滤波操作
    Mat out;
    
    //创建窗口
    namedWindow("均值滤波【原图】" );
    namedWindow("均值滤波【效果图】");
    
    
    medianBlur(image, out,5);
    
    //显示效果图
    imshow("均值滤波【效果图】" ,out );
}

void bilateral_filter()
{
    //载入原图
    Mat image=imread("/Users/longsiyang/cppdemoonmac/CppDemoOnMac/OpenCVApiDemo/1.jpg");
    //进行均值滤波操作
    Mat out;
    
    //创建窗口
    namedWindow("均值滤波【原图】" );
    namedWindow("均值滤波【效果图】");
    
    bilateralFilter(image, out, 25, 25*2, 25/2);
    
    //显示效果图
    imshow("均值滤波【效果图】" ,out );
}
