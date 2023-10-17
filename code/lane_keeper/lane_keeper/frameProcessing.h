#pragma once
#ifndef LANE_DETECTOR_H
#define LANE_DETECTOR_H

#include <opencv2/opencv.hpp>

class FrameProcessor {
public:
    FrameProcessor(const std::string& inputVideoPath, const std::string& outputVideoPath);
    ~FrameProcessor();

    void processFrames();

private:
    cv::VideoCapture cap;
    cv::VideoWriter output;

    // Add private member variables and methods for lane detection.
};

#endif
