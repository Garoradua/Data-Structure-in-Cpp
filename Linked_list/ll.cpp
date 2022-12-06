#include<iostream>
using namespace std;
int main(){
	struct node{
		int data;
		struct node *next;
	};
	struct node *newnode, *head, *temp;
	head =0;
	int again =1;
	while(again){
	newnode = (struct node *)malloc(sizeof(struct node));
	cin >> newnode-> data;
	newnode->next = NULL;

	if(head==0){
		head = temp = newnode;
	}else{
		temp->next = newnode;
		temp = newnode;
	}
	cout << "add more  ?";
	cin >> again;
}

	cout <<"Values are...\n";
	temp = head;
	while(temp != NULL){
		cout << temp->data;
		temp = temp->next;
	}
	return 0;
}