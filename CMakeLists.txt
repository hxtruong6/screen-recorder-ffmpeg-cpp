cmake_minimum_required(VERSION 3.15)
project(QtTest)

set(CMAKE_CXX_STANDARD 17)

# Tell cmake where Qt is located
set(Qt5_DIR "~/Qt/5.12.2/clang_64/lib/cmake/Qt5")
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)


# Tell cmake to find the modules Qt5Core and Qt5widgets
find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

#add_library(QtTest libavformat libavutil)
add_executable(QtTest main.cpp src/ScreenRecorder.cpp include/ScreenRecorder.h)

# Link the library to the executable
target_link_libraries(QtTest Qt5::Core Qt5::Widgets
        avformat
        avutil
        avdevice
        avcodec
        )
