// insert at given location
#include<bits/stdc++.h>
using namespace std;

int main(){
	struct node{
		int data;
		struct node *next;
	};

	struct node *head, *newnode, *temp;
	newnode = (struct node *) malloc(sizeof(struct node)); 
	cout << "Enter the position";

	int p;
	cin >> p; // if count is 3 and inser node after 2
	if(p>count){ // coutn is total no of elements in linked list
		cout <<"Invalid position";
	}
	else{
		temp=head;
		int i=1;
		while(i<p){
			temp = temp->next;
			i++;
		}
	}

	newnode->next = temp->next;
	temp->next = newnode;


}