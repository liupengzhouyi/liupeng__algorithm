//
// Created by 刘鹏 on 2020/2/1.
//

#include "NodeForBFS.h"

NodeForBFS::NodeForBFS(int value, NodeForBFS *wNodeForBfs, NodeForBFS *sNodeForBfs, NodeForBFS *aNodeForBfs,
                       NodeForBFS *dNodeForBfs) : value(value), wNodeForBfs(wNodeForBfs), sNodeForBfs(sNodeForBfs),
                                                  aNodeForBfs(aNodeForBfs), dNodeForBfs(dNodeForBfs) {}

int NodeForBFS::getValue() const {
    return value;
}

void NodeForBFS::setValue(int value) {
    NodeForBFS::value = value;
}

NodeForBFS *NodeForBFS::getWNodeForBfs() const {
    return wNodeForBfs;
}

void NodeForBFS::setWNodeForBfs(NodeForBFS *wNodeForBfs) {
    NodeForBFS::wNodeForBfs = wNodeForBfs;
}

NodeForBFS *NodeForBFS::getSNodeForBfs() const {
    return sNodeForBfs;
}

void NodeForBFS::setSNodeForBfs(NodeForBFS *sNodeForBfs) {
    NodeForBFS::sNodeForBfs = sNodeForBfs;
}

NodeForBFS *NodeForBFS::getANodeForBfs() const {
    return aNodeForBfs;
}

void NodeForBFS::setANodeForBfs(NodeForBFS *aNodeForBfs) {
    NodeForBFS::aNodeForBfs = aNodeForBfs;
}

NodeForBFS *NodeForBFS::getDNodeForBfs() const {
    return dNodeForBfs;
}

void NodeForBFS::setDNodeForBfs(NodeForBFS *dNodeForBfs) {
    NodeForBFS::dNodeForBfs = dNodeForBfs;
}
