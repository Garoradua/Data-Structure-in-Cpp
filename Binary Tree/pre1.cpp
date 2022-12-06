#include<iostream>
using namespace std;

class Node{
public:
	int data;
	Node* left;
	Node* right;

	Node(int d){
		data = d;
		right=left=NULL;
	}
};

Node* BuildTree(){
	int d;
	cin>>d;
	if(d==-1){
		return NULL;
	}
	Node* n = new Node(d);
	n->left = BuildTree();
	n->right = BuildTree();
	return n;

}
void printTree(Node* root){
	if(root==NULL){
		return;
	}
	cout << root->data;
	printTree(root->left);
	printTree(root->right);

}
int main()
{
	Node* root = BuildTree();
	printTree(root);
}
