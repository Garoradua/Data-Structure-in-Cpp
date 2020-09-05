#include<bits/stdc++.h>
using namespace std;
int main(){
	struct node {
		int data;
		struct node *next;
	};

	struct node *head;
	// Delete from Beginning
	struct node * temp;
	temp = head;
	head=head->next;
	free(temp);
	return 0;

}