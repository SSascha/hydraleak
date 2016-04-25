

#include "test.hpp"
#include "includes.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace std;
using namespace cv;

int main(int argc, char** argv) {
	VideoCapture cap = VideoCapture(0);
	Mat frame;

	namedWindow("Test", CV_WINDOW_FULLSCREEN);
	while(1) {
		cap >> frame;
		waitKey(100);
		imshow("Test", frame);
	}
	return 0;
}