//
// Created by 刘鹏 on 2020/1/14.
//

#include "Node.h"
#include <ctime>
#include <cstdlib>

Node::Node(const std::string &name, const std::string &phoneNumber) : name(name), phoneNumber(phoneNumber) {}

Node::Node() {}

const std::string &Node::getName() const {
    return name;
}

void Node::setName(const std::string &name) {
    Node::name = name;
}

const std::string &Node::getPhoneNumber() const {
    return phoneNumber;
}

void Node::setPhoneNumber(const std::string &phoneNumber) {
    Node::phoneNumber = phoneNumber;
}

Node *Node::getNextNode() const {
    return nextNode;
}

void Node::setNextNode(Node *nextNode) {
    Node::nextNode = nextNode;
}

int Node::getIsUsed() const {
    return isUsed;
}

void Node::setIsUsed(int isUsed) {
    Node::isUsed = isUsed;
}

void Node::print() {
    std::cout << this->getName() << " : " << this->getPhoneNumber() << std::endl;
}

void Node::createName() {
    // std::cout << "create name" << std::endl;
    std::string strName = "";
    char ch[10];
    for (int i = 0; i < 10; i++) {
        int number = (rand()%26)+1;
        // std::cout << "number : " << number << std::endl;
        ch[i] = (char)(((int)'a') + number);
        strName = strName + ch[i];
    }
    this->setName(strName);
}
