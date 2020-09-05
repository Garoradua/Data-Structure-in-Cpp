#include<bits/stdc++.h>
using namespace std;
int main(){
	struct node {
		int data;
		struct node *next;
	};

	struct node *head;
	// Delete from end
	struct node * temp;
	temp = head;
	struct node* previous_node;
	while(temp->next!=0){
		previous_node = temp;
		temp=temp->next;
	}
	previous_node->next=NULL;
	free(temp);
	free(previous_node);
	

}