//
// Created by 刘鹏 on 2020/2/1.
//

#ifndef LIUPENG__ALGORITHM_NODEFORBFS_H
#define LIUPENG__ALGORITHM_NODEFORBFS_H


#include <vector>

class NodeForBFS {
private:
    int id;
    int value;
    int visited = 0;
    std::vector<int> vector;

public:

    NodeForBFS();

    int getId() const;

    void setId(int id);

    int getValue() const;

    void setValue(int value);

    int getVisited() const;

    void setVisited(int visited);

    const std::vector<int> &getVector() const;

    void setVector(const std::vector<int> &vector);

    void say();
};


#endif //LIUPENG__ALGORITHM_NODEFORBFS_H
