#include <opencv2/opencv.hpp>
#include<iostream>
using namespace std;
using namespace cv;
int main()
{

	Mat image = imread("aa.jpeg",0);
namedWindow("gh", 0);
imshow("gh", image);
waitKey(0);

}