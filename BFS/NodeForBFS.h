//
// Created by 刘鹏 on 2020/2/1.
//

#ifndef LIUPENG__ALGORITHM_NODEFORBFS_H
#define LIUPENG__ALGORITHM_NODEFORBFS_H


class NodeForBFS {
private:
    int value;
    NodeForBFS * wNodeForBfs;
    NodeForBFS * sNodeForBfs;
    NodeForBFS * aNodeForBfs;
    NodeForBFS * dNodeForBfs;
public:

    NodeForBFS(int value, NodeForBFS *wNodeForBfs, NodeForBFS *sNodeForBfs, NodeForBFS *aNodeForBfs,
               NodeForBFS *dNodeForBfs);

    int getValue() const;

    void setValue(int value);

    NodeForBFS *getWNodeForBfs() const;

    void setWNodeForBfs(NodeForBFS *wNodeForBfs);

    NodeForBFS *getSNodeForBfs() const;

    void setSNodeForBfs(NodeForBFS *sNodeForBfs);

    NodeForBFS *getANodeForBfs() const;

    void setANodeForBfs(NodeForBFS *aNodeForBfs);

    NodeForBFS *getDNodeForBfs() const;

    void setDNodeForBfs(NodeForBFS *dNodeForBfs);

};


#endif //LIUPENG__ALGORITHM_NODEFORBFS_H
