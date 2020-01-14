//
// Created by 刘鹏 on 2020/1/14.
//

#include "HashTable.h"
#include <functional>

HashTable::HashTable() {
    for (int i = 0; i < 100; i++) {
        this->node[i] = new Node();
        this->node[i]->setIsUsed(0);
        this->node[i]->setNextNode(NULL);
        //std::cout << i << " init over" << std::endl;
    }
}

int HashTable::addInformation(int index, Node node1) {
    auto key = 0;
    Node *tempNode = this->node[index];
    if (tempNode->getIsUsed() == 1) {
        Node *newNode = new Node(node1.getName(), node1.getPhoneNumber());
        while (tempNode->getNextNode() != NULL) {
            tempNode = tempNode->getNextNode();
        }
        tempNode->setIsUsed(1);
        tempNode->setNextNode(newNode);
        // node1.print();
        key = 1;
    } else {
        tempNode->setIsUsed(1);
        tempNode->setName(node1.getName());
        tempNode->setPhoneNumber(node1.getPhoneNumber());
        key = 1;
        // node1.print();
    }
    return key;
}

void HashTable::show() {
    for (int i = 0; i < 100; i++) {
        if (this->node[i]->getIsUsed() == 1) {
            std::cout << i << " : ";
            if (this->node[i]->getNextNode() == NULL) {
                this->node[i]->print();
            } else {
                Node *tempNode = this->node[i];
                tempNode->print();
                while (tempNode->getNextNode() != NULL) {
                    tempNode = tempNode->getNextNode();
                    std::cout << "    ";
                    tempNode->print();
                }
            }
        } else {
            std::cout << "null" << std::endl;
        }
    }
}

int HashTable::hash(std::string name) {
    std::hash<std::string> str_hash;
    //std::cout << "hashValue: " << str_hash(name) << std::endl;
    return str_hash(name)%100;
}

void HashTable::init() {
    srand(1);
    for (int i = 0; i < 800; i++) {
        Node tempNode;
        tempNode.createName();
        int index = this->hash(tempNode.getName());
        tempNode.setPhoneNumber("14747219744");
        this->addInformation(index, tempNode);
    }
}
