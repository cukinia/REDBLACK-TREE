#ifndef TREE_H
#define TREE_H

#include "includer.hpp"
#include "Node.h"

class Tree{
public:
    Tree();
    ~Tree();
	Node* root;
    Node* s;
    bool search(int);
	bool search(Node*, int);
	Node* getNodeParent(int);
    void insert(int);
    /*void deleteElem(int);*/

};

#endif // TREE_H
