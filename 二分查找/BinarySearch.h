//
// Created by 刘鹏 on 2020/1/3.
//

#ifndef LIUPENG__ALGORITHM_BINARYSEARCH_H
#define LIUPENG__ALGORITHM_BINARYSEARCH_H

#include <vector>

class BinarySearch {

private:
    std::vector<int> vector_;

public:
    BinarySearch();

    void init();

    bool hasNumber(int number);

    int index(int number);

};


#endif //LIUPENG__ALGORITHM_BINARYSEARCH_H
