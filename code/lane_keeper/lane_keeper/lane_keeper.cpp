#include "frameProcessing.h"
#include <iostream>

using namespace std;

int main()
{
    std::string inputVideoPath = "production_id_4608285 (2160p).mp4";
    std::string outputVideoPath = "output_video.mp4";

    FrameProcessor framerProc(inputVideoPath, outputVideoPath);
    framerProc.processFrames();

    return 0;
}
