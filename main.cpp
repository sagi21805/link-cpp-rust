#include "rust.hpp"
#include <opencv4/opencv2/opencv.hpp>

extern "C" void printS(cv::Point2i* instance);

int main() {

    cv::Point2i p = cv::Point2i(1, 2);
    printS(&p);
    std::cout << p << "\n";
}