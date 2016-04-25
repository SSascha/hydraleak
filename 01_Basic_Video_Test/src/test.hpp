/*
 *  calibrate.hpp
 *
 *  Created on: 20.10.2015
 *  Author: Sascha Seefelder
 */

#ifndef CALIBRATE_HPP_
#define CALIBRATE_HPP_

	#include "includes.hpp"
	#include "opencv2/highgui/highgui.hpp"
	#include "opencv2/imgproc/imgproc.hpp"

	using namespace cv;

	class calibrator {
		public:
			calibrator();
			~calibrator();
			bool calibrate();
		private:
			std::vector<Point> drawline(Mat& frame);
			VideoCapture cap;
			Mat A;
	};
	
#endif