#include <iostream>
#include <sstream>
#include <conio.h>

using namespace std ;

class Node{
	public :
	Node *left ;
	Node *right ;
	int value ;
	Node(){
		left = right = NULL ;
		value = 0 ;
//		cout << "\nNew node initialized";
	}
	Node(int v){
		left = right = NULL ;
		value = v ;
//		cout << "\nNew node initialized";
	}
	string show(){
		stringstream toReturn;
		toReturn  << "(" ;
			toReturn  <<  " value: " <<  value ;
		if(left != NULL){
			toReturn << " left: " << left->show() ;
		}
	
		if(right != NULL){
			toReturn << " right: " << right->show() ;
		}
		toReturn << ")" ;
		return toReturn.str() ;	
	}
	bool search(int value){
		if(value == this->value) return true ;
		if(left != NULL) return left->search(value) ;
		else if(right != NULL) return right->search(value) ;
	}
	
	void insert(int value){
		if(value == this->value) {
		cout << endl << value << " already present. cant insert" ;
		}
		if(value < this->value){
			if(this->left ==NULL){
				this->left = new Node(value) ;
				cout << endl << "Inserted " << value << " to left of " << this->value;
			}else return left->insert(value) ;
		}else if(value > this->value){
			if(this->right == NULL){
				this->right = new Node(value) ;
				cout << endl << "Inserted " << value << " to right of " <<  this->value;
			}else 
			return right->insert(value) ;
		}
	}
};

class BST{
	public :
	Node *tree ;
	
	BST(){
		tree = new Node(6) ;
	}
	
	void show(){
		cout << endl << tree->show() ;
	}
	
	bool search(int value){
		return tree->search(value);
	}
	
	void insert(int value){
		return tree->insert(value) ;
	}
	
};


int main(){
	BST * bst = new BST() ;
	
	char choice = 's' ;
	
	while(choice != 'x'){
		cout << endl <<endl <<endl <<endl <<endl <<endl << "BST Demo" ;
		cout << endl << "Press: " ;
		cout << endl << "b to Show BST" << endl << "a to add item in BST" << endl << "s to search for item in BST" << endl << "x to exit" << endl ;
		choice = getch() ;
		switch(choice){
			case 'b':
				bst->show() ;
				break ;
			case 'a':
				int v ;
				cout << "Enter new value to add: " ;
				cin >> v ;
				bst->insert(v) ;
				break ;
			case 's':
				int vs ;
				cout << "Enter a value to search: " ;
				cin >> vs ;
				cout << endl << vs << " is" << (bst->search(vs) ? " Found" :" Not found" );
				
				case 'x': break ;
			default: 
			cout << endl << "Invalid choice." ;
			break ;	
		}
		
	}
	
	
	return 4 ;
}


