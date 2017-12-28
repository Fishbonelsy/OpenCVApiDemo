//
//  LinearFilter.cpp
//  CppDemoOnMac
//
//  Created by LongSiyang on 2017/12/28.
//  Copyright © 2017年 LongSiyang. All rights reserved.
//

#include "LinearFilter.hpp"


#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include"opencv2/imgproc/imgproc.hpp" 

using namespace cv;

void box_filter(){
    //载入原图
    Mat image=imread("/Users/longsiyang/cppdemoonmac/CppDemoOnMac/OpenCVApiDemo/1.jpg");
    //进行均值滤波操作
    Mat out;
    
    //创建窗口
    namedWindow("均值滤波【原图】" );
    namedWindow("均值滤波【效果图】");

    
    boxFilter(image, out, -1,Size(5, 5));
    
    //显示效果图
    imshow("均值滤波【效果图】" ,out );
}

void blur_filter(){
    //载入原图
    Mat image=imread("/Users/longsiyang/cppdemoonmac/CppDemoOnMac/OpenCVApiDemo/1.jpg");
    //进行均值滤波操作
    Mat out;
    
    //创建窗口
    namedWindow("均值滤波【原图】" );
    namedWindow("均值滤波【效果图】");
    
    
    blur(image, out, Size(5, 5));
    
    //显示效果图
    imshow("均值滤波【效果图】" ,out );
}

void gussian_blur(){
    //载入原图
    Mat image=imread("/Users/longsiyang/cppdemoonmac/CppDemoOnMac/OpenCVApiDemo/1.jpg");
    //进行均值滤波操作
    Mat out;
    
    //创建窗口
    namedWindow("均值滤波【原图】" );
    namedWindow("均值滤波【效果图】");
    
    
    GaussianBlur(image, out, Size(5, 5),0,0);
    
    //显示效果图
    imshow("均值滤波【效果图】" ,out );
}
