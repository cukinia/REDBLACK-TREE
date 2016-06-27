/**
 * File:   Node.h
 * Author: Kasia
 *
 * Created on 23 czerwca 2016, 12:29
 */
#ifndef NODE_H
#define NODE_H

#include "includer.hpp"

enum color { BLACK, RED };

class Node{
public:
    Node(int value, Node* s);
    ~Node() {}
    Node* parent;
    Node* left;
    Node* right;
    int cont;
    color c;
    string print() const;
private:
	Node(Node&);
    const Node& operator=(Node&);
};


#endif /* NODE_H */
