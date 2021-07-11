#include<bits/stdc++.h>
using namespace std;
int main(){
	struct node{
		int data;
		struct node *next;
	};

struct node *head, *newnode, *temp;
head = 0;
int again =1;
while(again){
newnode = (struct node*)malloc(sizeof(struct node));
int element;
cin >> element;
newnode->data = element;
newnode->next = NULL;
if(head==0){
	head = temp = newnode;
}else{
	temp->next = newnode;
	temp = newnode;
	
}
cin >> again;

}


temp = head;
while(temp!=0){
	cout << temp->data;
	temp = temp->next;

}
}