#include <iostream>
#include <string>
#include "BinarySearch/BinarySearch.h"
#include "QuickSorting/QuickSorting.h"


int main() {
    /*BinarySearch binarySearch;
    auto key = binarySearch.hasNumber(905);
    auto index = binarySearch.index(28);
    std::cout << index << std::endl;
    if (key) {
        std::cout << "has" << std::endl;
    } else {
        std::cout << "not has" << std::endl;
    }*/

    QuickSorting *quickSorting = new QuickSorting();
    quickSorting->setVector(quickSorting->quickSorting(quickSorting->getVector()));
    quickSorting->toString();

    return 0;
}


