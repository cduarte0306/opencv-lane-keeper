#include "frameProcessing.h"
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>

FrameProcessor::FrameProcessor(const std::string& inputVideoPath, const std::string& outputVideoPath) {
    // Initialize VideoCapture and VideoWriter objects
    cap.open(inputVideoPath);
    output.open(outputVideoPath, cv::VideoWriter::fourcc('M', 'J', 'P', 'G'), 30, cv::Size(640, 480));

    // Initialize other member variables and parameters
}


FrameProcessor::~FrameProcessor() {
    // Release VideoCapture and VideoWriter
    cap.release();
    output.release();
}


void FrameProcessor::processFrames() {
    while (cap.isOpened()) {
        /* Read a frame */
        cv::Mat frame;
        cap >> frame;

        if (frame.empty())
            break;

        // Preprocessing (convert to grayscale, apply blur, edge detection, etc.)

        // Region of Interest (ROI) selection

        // Hough Line Transform for lane detection

        // Line filtering to isolate left and right lanes

        // Lane line estimation

        // Draw lanes on the frame

        output.write(frame);
        cv::imshow("Lane Detection", frame);

        if (cv::waitKey(1) == 27) // Exit when ESC key is pressed
            break;
    }

    cv::destroyAllWindows();
}
