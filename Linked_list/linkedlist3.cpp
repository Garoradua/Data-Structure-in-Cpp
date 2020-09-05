//Insert node at end
#include <bits/stdc++.h>
using namespace std;
int main(){
	struct node
	{
		int data;
		struct node *next;
	};

	struct node *head, *newnode, *temp;
	newnode= (struct node *) malloc(sizeof(struct node));
	cin >> newnode->data;
	newnode->next=NULL;
	temp = head;

	while(temp->next!=0){
		temp=temp->next;
	}
	temp->next = newnode;




}