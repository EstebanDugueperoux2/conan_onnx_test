#include "onnx_test.h"
#include <vector>
#include <string>

int main() {
    onnx_test();

    std::vector<std::string> vec;
    vec.push_back("test_package");

    onnx_test_print_vector(vec);
}
