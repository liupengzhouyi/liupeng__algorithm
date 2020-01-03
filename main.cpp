#include <iostream>
#include <string>
#include "二分查找/BinarySearch.h"

int main() {
    BinarySearch binarySearch;
    auto key = binarySearch.hasNumber(905);
    auto index = binarySearch.index(28);
    std::cout << index << std::endl;
    if (key) {
        std::cout << "has" << std::endl;
    } else {
        std::cout << "not has" << std::endl;
    }
    return 0;
}


