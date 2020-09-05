#include<bits/stdc++.h>
using namespace std;
int main(){
	struct node {
		int data;
		struct node *next;
	};

	struct node *head, *temp, *temp2;
	// Delete from particular position
	cout << "enter the position";
	int pos;
	cin >> pos;
	int i=1; // starting from head
	// if we remove node at pos 3 out of 4
	temp=head;
	while(i<pos){
		temp2=temp;
		temp = temp->next;
		i++;
	}
	temp2->next=temp->next;
	free(temp);
	free(temp2);

	

}