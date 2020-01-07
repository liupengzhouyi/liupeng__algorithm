//
// Created by liupeng on 1/7/2020.
//

#ifndef LIUPENG__ALGORITHM_QUICKSORTING_H
#define LIUPENG__ALGORITHM_QUICKSORTING_H

#include <vector>

class QuickSorting {

private:
    std::vector<int> vector_;

public:

    QuickSorting();

    void init();

    const std::vector<int> &getVector() const;

    void setVector(const std::vector<int> &vector);

    std::vector<int> quickSorting(std::vector<int> tempVector);

    void toString();
};


#endif //LIUPENG__ALGORITHM_QUICKSORTING_H
