cmake_minimum_required(VERSION 3.15)
project(onnx_test CXX)



add_executable(onnx_test src/onnx_test.cpp src/main.cpp)



install(TARGETS onnx_test DESTINATION "."
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )
