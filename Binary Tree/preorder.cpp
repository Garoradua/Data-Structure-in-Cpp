#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* left;
		 Node* right;

		Node(int d){
			data = d;
			left = right = NULL;
		}
};

	Node* buildtree(){
		int c;
		cin >> c;

		if(c==-1){
			return NULL;
		}

		Node* n = new Node(c);
		n->left = buildtree();
		n->right = buildtree();
		return n;

	}

	void printpreorder(Node* root){
		if(root==NULL){
			return;
		}
		cout << root->data;
		printpreorder(root->left);
		printpreorder(root->right);
	}

	int main(){
		Node* root = buildtree();
		printpreorder(root);
	}
