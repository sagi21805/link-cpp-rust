#include "rust.hpp"
#include <opencv4/opencv2/opencv.hpp>

extern "C" void printPoints(cv::Point2i* v, uint size);

extern "C" void changeVectorVals(int* vectStart, uint size);

int main() {
    cv::Point2i p = cv::Point2i(1, 2);
    cv::Point2i p2 = cv::Point2i(20, 20);
    cv::Point2i Pptr[2] = {p, p2};
    // p.x += 3
    printPoints(Pptr, 2);
    std::cout << p << "\n";

    std::vector<int> v = {1, 2, 3, 4, 5, 6};
    changeVectorVals(&v[0], 6);
    for (int item : v){
        std::cout << item << " ";
    }
    std::cout << "\n";
}