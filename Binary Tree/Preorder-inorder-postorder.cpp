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

Node* buildTree(){
	int c;
	cin >> c;

	if(c==-1){
		return NULL;
	}
	Node* n = new Node(c);
	n->left = buildTree();
	n->right = buildTree();
	return n;
}

void preOrder(Node* root){
	if(root==NULL){
		return;
	}
	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}

void inOrder(Node* root){
	if(root==NULL){
		return;
	}
	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);

}

void postOrder(Node* root){
	if(root==NULL){
		return;
	}
	postOrder(root->left);
	postOrder(root->right);
	cout<< root->data << " ";

}
int main()
{
	
	Node* root = buildTree();
	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;
}