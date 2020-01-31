#include <iostream>
#include <string>
#include "BinarySearch/BinarySearch.h"
#include "QuickSorting/QuickSorting.h"
#include "HashTable/HashTable.h"
#include "BFS/NodeForBFS.h"


int main() {
    std::vector<NodeForBFS> vector;

    int numbers[10][10] =
            {
            {0,0,1,1,1,1,1,1,1,1},
            {1,0,0,0,0,0,1,0,0,1},
            {1,1,1,1,1,0,0,1,0,1},
            {1,1,1,1,1,1,0,1,0,1},
            {1,1,0,1,0,0,0,0,0,1},
            {1,9,1,1,1,1,0,1,1,1},
            {1,0,0,1,1,1,0,0,0,1},
            {1,1,0,0,1,0,1,1,0,1},
            {1,1,1,0,0,0,0,0,0,1},
            {1,1,1,1,1,1,1,1,1,1},
            };

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            NodeForBFS nodeForBfs;
            auto id = i*10+j;
            auto value = numbers[i][j];
            auto visited = 0;
            nodeForBfs.setId(id);
            nodeForBfs.setValue(value);
            nodeForBfs.setVisited(visited);
            if (value == 0) {
                std::vector<int> vector1;
                if (i > 0) {
                    if (numbers[i-1][j] == 0) {
                        vector1.push_back((i-1)*10 + j);
                    }
                }
                if (i < 9) {
                    if (numbers[i + 1][j] == 0) {
                        vector1.push_back((i+1)*10 + j);
                    }
                }
                if (j > 0) {
                    if (numbers[i][j-1] == 0) {
                        vector1.push_back((i)*10 + j-1);
                    }
                }
                if (j < 9) {
                    if (numbers[i][j+1] == 0) {
                        vector1.push_back((i)*10 + j+1);
                    }
                }
                nodeForBfs.setVector(vector1);
                vector.push_back(nodeForBfs);
            }
        }
    }

    for (auto item : vector){
        item.say();
    }

    return 0;
}


