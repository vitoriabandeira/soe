#include <iostream>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

float ear;
eye[0] = 1.0;
eye[1] = 2.0;
eye[2] = 3.0;
eye[3] = 4.0;
eye[4] = 5.0; 


float euclideanDist1(cv::Point2f& eye[1], cv::Point2f& eye[5])
{
    cv::Point2f diff = eye[1] - eye[5];
    return cv::sqrt(diff.x*diff.x + diff.y*diff.y);
}

float euclideanDist2(cv::Point2f& eye[2], cv::Point2f& eye[4])
{
    cv::Point2f diff = eye[2] - eye[4];
    return cv::sqrt(diff.x*diff.x + diff.y*diff.y);
}

float euclideanDist3(cv::Point2f& eye[0], cv::Point2f& eye[3])
{
    cv::Point2f diff = eye[0] - eye[3];
    return cv::sqrt(diff.x*diff.x + diff.y*diff.y);
}

    # compute the eye aspect ratio
    ear = (euclideanDist1 + euclideanDist2) / (2.0 * euclideanDist3);
	
	printf(%f, ear);
