cmake_minimum_required(VERSION 3.23)
project(VisionAI_Toolkit)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Specify OpenCV path
set(OpenCV_DIR "/usr/local/Cellar/opencv/4.x.x/lib/cmake/opencv4") # Adjust to your OpenCV version

# Add executable
add_executable(VisionAI_Toolkit src/main.cpp)

# Find and include OpenCV
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(VisionAI_Toolkit ${OpenCV_LIBS})

# Find and include Eigen3
set(EIGEN3_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/externals/eigen-3.4.0")
include_directories(${EIGEN3_INCLUDE_DIR})

# Find and include Boost
find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})
target_link_libraries(VisionAI_Toolkit ${Boost_LIBRARIES})

# Find and include OpenMP
find_package(OpenMP REQUIRED)
if(OpenMP_CXX_FOUND)
    target_link_libraries(VisionAI_Toolkit OpenMP::OpenMP_CXX)
endif()

# Find and include CUDA
#find_package(CUDA REQUIRED)
#if(CUDA_FOUND)
#    include_directories(${CUDA_INCLUDE_DIRS})
#    target_link_libraries(VisionAI_Toolkit ${CUDA_LIBRARIES})
#endif()
