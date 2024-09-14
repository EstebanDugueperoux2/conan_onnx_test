#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define ONNX_TEST_EXPORT __declspec(dllexport)
#else
  #define ONNX_TEST_EXPORT
#endif

ONNX_TEST_EXPORT void onnx_test();
ONNX_TEST_EXPORT void onnx_test_print_vector(const std::vector<std::string> &strings);
