#include "Tree.h"
enum sons { RIGHT, LEFT };

Tree::Tree(){
	s = nullptr;
	root = s;
}

Tree::~Tree(){}

bool Tree::search(int value){
	Node* current = root;
    while(current != s){
		if(current->cont == value) return true;
		current = (value > current->cont) ? current->right : current->left;
	}
	return false;
}

void Tree::insert(int value){
	Node* current = root;
	sons son; 
	while(current != s){
		if(current->cont == value) return;
		if(value > current->cont){
			son = RIGHT;
			current = current->right;
		}
		else{
			son = LEFT;
			current = current->left;
		}
	}
	(son == RIGHT) ? current->parent->right = new Node(value, s) : current->parent->left = new Node(value, s);
}
/*
void Tree::deleteElem(int value){

}
*/