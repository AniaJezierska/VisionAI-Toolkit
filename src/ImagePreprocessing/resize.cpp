#include "resize.h"
#include <opencv2/opencv.hpp>

cv::Mat resizeImage(const cv::Mat& inputImage, int width, int height) {
    cv::Mat outputImage;
    cv::resize(inputImage, outputImage, cv::Size(width, height));
    return outputImage;
}
