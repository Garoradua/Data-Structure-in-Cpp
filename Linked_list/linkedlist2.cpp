// Insert at Beginning
#include<bits/stdc++.h>
using namespace std;

int main(){
	struct node
	{
		int data;
		struct node *next;
	};

	struct node *head, *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	cin >> newnode->data;
	newnode->next = head;
	head= newnode;

}