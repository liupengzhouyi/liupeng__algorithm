//
// Created by 刘鹏 on 2020/1/14.
//

#ifndef LIUPENG__ALGORITHM_NODE_H
#define LIUPENG__ALGORITHM_NODE_H

#include <iostream>
#include <string>

class Node {

private:
    std::string name;
    std::string phoneNumber;
    int isUsed;
    Node * nextNode;

public:

    Node();

    Node(const std::string &name, const std::string &phoneNumber);

    void createName();

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getPhoneNumber() const;

    void setPhoneNumber(const std::string &phoneNumber);

    Node *getNextNode() const;

    void setNextNode(Node *nextNode);

    int getIsUsed() const;

    void setIsUsed(int isUsed);

    void print();
};


#endif //LIUPENG__ALGORITHM_NODE_H
