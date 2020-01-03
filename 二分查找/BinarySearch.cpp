//
// Created by 刘鹏 on 2020/1/3.
//

#include <iostream>
#include "BinarySearch.h"

BinarySearch::BinarySearch() {
    this->init();
}

void BinarySearch::init() {
    auto index = 0;
    while (index < 100) {
        this->vector_.push_back(index);
        index = index + 2;
    }
}

bool BinarySearch::hasNumber(int number) {
    int form = 0;
    int size = this->vector_.size() - 1;
    while(form <= size) {
        int index = (size + form) / 2;
        if (this->vector_[index] == number) {
            return true;
        }
        if (this->vector_[index] > number) {
            size = index - 1;
        } else {
            form = index + 1;
        }
    }
    return false;
}

int BinarySearch::index(int number) {
    int form = 0;
    int size = this->vector_.size() - 1;
    while(form <= size) {
        int index = (size + form) / 2;
        if (this->vector_[index] == number) {
            return index;
        }
        if (this->vector_[index] > number) {
            size = index - 1;
        } else {
            form = index + 1;
        }
    }
    return -1;
}
