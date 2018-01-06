//
//  BaseMorphology.cpp
//  CppDemoOnMac
//
//  Created by LongSiyang on 2018/1/6.
//  Copyright © 2018年 LongSiyang. All rights reserved.
//

#include "BaseMorphology.hpp"

#include <iostream>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include"opencv2/imgproc/imgproc.hpp"

using namespace cv;

void dilate()
{
    //载入原图
    Mat image=imread("/Users/longsiyang/cppdemoonmac/CppDemoOnMac/OpenCVApiDemo/2.jpeg");
    //进行膨胀操作
    Mat out;
    dilate(image, out, getStructuringElement(MORPH_RECT, Size(5, 5)));
    imshow("膨胀【效果图】" ,out );
}

void erode()
{
    //载入原图
    Mat image=imread("/Users/longsiyang/cppdemoonmac/CppDemoOnMac/OpenCVApiDemo/2.jpeg");
    //进行腐蚀操作
    Mat out;
    erode(image, out, getStructuringElement(MORPH_RECT, Size(5, 5)));
    imshow("腐蚀【效果图】" ,out );
}

