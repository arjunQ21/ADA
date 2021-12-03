#include <iostream>

using namespace std ;

class Node{
	public :
	Node *left ;
	Node *right ;
	int value ;
	Node(){
		left = right = NULL ;
		value = 0 ;
		cout << "\nNew node initialized";
	}
};

class BST{
	public :
	Node *tree ;
	
	 BST(){
		tree = new Node() ;
	}
	
	
	
};


int main(){
	BST * bst = new BST() ;
	return 4 ;
}


