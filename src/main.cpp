#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    // Read an image file
    cv::Mat image = cv::imread("data/test_image.jpg", cv::IMREAD_COLOR);

    // Check for failure
    if (image.empty()) {
        std::cerr << "Could not open or find the image" << std::endl;
        return -1;
    }

    // Display the image
    cv::imshow("Test Image", image);

    // Wait for a keystroke in the window
    cv::waitKey(0);

    return 0;
}
