//
// Created by 刘鹏 on 2020/2/1.
//

#include <iostream>
#include "NodeForBFS.h"

NodeForBFS::NodeForBFS() {}

int NodeForBFS::getId() const {
    return id;
}

void NodeForBFS::setId(int id) {
    NodeForBFS::id = id;
}

int NodeForBFS::getValue() const {
    return value;
}

void NodeForBFS::setValue(int value) {
    NodeForBFS::value = value;
}

int NodeForBFS::getVisited() const {
    return visited;
}

void NodeForBFS::setVisited(int visited) {
    NodeForBFS::visited = visited;
}

const std::vector<int> &NodeForBFS::getVector() const {
    return vector;
}

void NodeForBFS::setVector(const std::vector<int> &vector) {
    NodeForBFS::vector = vector;
}

void NodeForBFS::say() {
    std::cout << "-----------------" << std::endl;
    std::cout << "id: " << this->getId() << std::endl;
    std::cout << "Visit: " << this->getVisited() << std::endl;
    std::cout << "value:" << this->getValue() << std::endl;
    std::cout << "vector:";
    for (auto item:this->getVector()) {
        std::cout << item << " - ";
    }
    std::cout << std::endl;
    std::cout << "-----------------" << std::endl;
}

