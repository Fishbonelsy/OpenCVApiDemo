//
//  HelloWorld.cpp
//  CppDemoOnMac
//
//  Created by LongSiyang on 2017/12/18.
//  Copyright © 2017年 LongSiyang. All rights reserved.
//

#include <stdio.h>

#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>

using namespace cv;

void hello_world(){
    //-----------------------------------【一、图像的载入和显示】--------------------------------------
    //     描述：以下三行代码用于完成图像的载入和显示
    //--------------------------------------------------------------------------------------------------
    
    Mat logo=imread("/Users/longsiyang/cppdemoonmac/CppDemoOnMac/OpenCVApiDemo/1.jpg"); //载入图像到Mat
    
    Mat image=imread("/Users/longsiyang/cppdemoonmac/CppDemoOnMac/OpenCVApiDemo/2.jpeg"); //载入图像到Mat
    
    
    
    //定义一个Mat类型，用于存放，图像的ROI
    Mat imageROI;
    imageROI=image(Rect(0,0,logo.cols,logo.rows));
    
    //将logo加到原图上
    addWeighted(imageROI,0.5,logo,0.3,0.,imageROI);
    
    //显示结果
    namedWindow("叠加图");
    imshow("叠加图",image);
    
    //输出一张jpg图片到工程目录下
    imwrite("/Users/longsiyang/cppdemoonmac/CppDemoOnMac/OpenCVApiDemo/叠加图.jpg",image);
    
    
    waitKey();

}
