//
//  main.cpp
//  OpenCVtest
//
//  Created by Elmeri Poikolainen on 15.2.2014.
//  Copyright (c) 2014 Elmeri Poikolainen. All rights reserved.
//

#include <iostream>

// Example showing how to read and write images
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv/cvaux.h>

int main(int argc, char** argv)
{
	IplImage * pInpImg = 0;
	
	// Load an image from file - change this based on your image name
	pInpImg = cvLoadImage("my_image.jpg", CV_LOAD_IMAGE_UNCHANGED);
	if(!pInpImg)
	{
		fprintf(stderr, "failed to load input image\n");
		return -1;
	}
	
	// Write the image to a file with a different name,
	// using a different image format -- .png instead of .jpg
	if( !cvSaveImage("my_image_copy.png", pInpImg) )
	{
		fprintf(stderr, "failed to write image file\n");
	}
	
	// Remember to free image memory after using it!
	cvReleaseImage(&pInpImg);
	
	return 0;
}