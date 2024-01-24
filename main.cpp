#include "rust.hpp"
#include <opencv4/opencv2/opencv.hpp>

extern "C" void printPoints(cv::Point2i* v, uint size);

int main() {
    cv::Point2i p = cv::Point2i(1, 2);
    cv::Point2i p2 = cv::Point2i(10, 20);
    cv::Point2i Pptr[2] = {p, p2};
    // p.x += 3
    printPoints(Pptr, 3);
    std::cout << p << "\n";
}