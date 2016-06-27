#include "Node.h"
//#include<sstream>

string operator+(const string& lhs, const string& rhs) {
	string result = lhs;
	result += rhs;
	return result;
}
/*
 *  Main constructor
 */
Node::Node(int value, Node* s):  parent(s), left(s), right(s), cont(value), c(RED) {}
/*
 *  Returns a string representation of a node.
 */
string Node::print() const {
	string result = (c==RED)? "R:" : "B:";
	//stringstream ss;
	//ss << cont;
	//result += ss.str();
	return result;
}
