


#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace std;
using namespace cv;

int main(int argc, char** argv) {
	Mat src = imread("/home/sascha/Bilder/test_02_a.jpg", 1); //1:color, 0:gray 
	Mat dst = imread("/home/sascha/Bilder/test_02_b.jpg", 1); //1:color, 0:gray
	Mat diff; 
	absdiff(src, dst, diff);   
	threshold(diff, diff, 10, 255, CV_THRESH_BINARY); // grayscale needed

	while(1) {
		imshow("original", src);   
		imshow("new", dst);   
		imshow("diff", diff);
		waitKey(100);
	}
	return 0;
}