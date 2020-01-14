//
// Created by 刘鹏 on 2020/1/14.
//

#ifndef LIUPENG__ALGORITHM_HASHTABLE_H
#define LIUPENG__ALGORITHM_HASHTABLE_H


#include "Node.h"

class HashTable {

private:
    Node * node[100];

public:

    HashTable();

    void init();

    int hash(std::string name);

    int addInformation(int index, Node node1);

    void show();
};


#endif //LIUPENG__ALGORITHM_HASHTABLE_H
