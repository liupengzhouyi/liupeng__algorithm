//
// Created by liupeng on 1/7/2020.
//

#include <cstdlib>
#include <iostream>
#include "QuickSorting.h"

QuickSorting::QuickSorting() {
    this->init();
}

const std::vector<int> &QuickSorting::getVector() const {
    return vector_;
}

void QuickSorting::setVector(const std::vector<int> &vector) {
    vector_ = vector;
}

void QuickSorting::init() {
    this->vector_ = std::vector<int>();
    for (int index = 0; index <= 2; index++) {
        this->vector_.push_back(rand());
    }
    this->vector_.push_back(9);
    this->vector_.push_back(4);
    this->vector_.push_back(4);
    this->vector_.push_back(5);
}

std::vector<int> QuickSorting::quickSorting(std::vector<int> tempVector) {
    /*std::cout << "this sorting:";
    for (auto item : tempVector) {
        std::cout << item << " ";
    }
    std::cout << std::endl;*/
    int index = tempVector[0];
    auto times = 1;
    std::vector<int> leftVector = std::vector<int>();
    std::vector<int> rightVector = std::vector<int>();
    for (auto item : tempVector) {
        if (item > index) {
            rightVector.push_back(item);
        }
        else if (item < index) {
            leftVector.push_back(item);
        } else {
            times = times + 1;
        }
    }
    /*std::cout << "leftVector:";
    for (auto item : leftVector) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
    std::cout << "rightVector";
    for (auto item : rightVector) {
        std::cout << item << " ";
    }
    std::cout << std::endl;*/
    if (leftVector.size() > 2) {
        leftVector = this->quickSorting(leftVector);
    }
    if (rightVector.size() > 2) {
        rightVector = this->quickSorting(rightVector);
    }
    std::vector<int> returnVector = std::vector<int>();
    for (auto item1 : leftVector) {
        returnVector.push_back(item1);
    }
    for (auto i = 1; i < times; i++) {
        returnVector.push_back(index);
    }
    for (auto item2 : rightVector) {
        returnVector.push_back(item2);
    }
    /*std::cout << "returnVector:";
    for (auto item : returnVector) {
        std::cout << item << " ";
    }
    std::cout << std::endl;*/
    return returnVector;
}

void QuickSorting::toString() {
    for (auto item : this->vector_) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
}
