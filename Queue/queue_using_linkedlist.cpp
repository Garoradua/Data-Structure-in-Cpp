#include<bits/stdc++.h>
using namespace std;
struct node {
	int data;
	struct node *next;

};
struct node *head;
struct node *temp, *temp2;
// head = 0;

void enqueue(){
	cout << "Enter the Element you want to add" << endl;
	int ele;
	cin >> ele;
struct node *newnode;
newnode = (struct node *)malloc(sizeof(struct node));
	if(head == 0){
		temp = newnode;
		head = newnode;
		temp->data = ele;
		temp->next = NULL;
	}
	else{
		temp->next = newnode;
		newnode->data = ele;
		newnode->next = NULL;
		temp=newnode;
	}
}

void dequeue(){
	if(head == temp && head!=0){
		cout << "The dequeue element is " << head->data << endl;
		head = 0;
		free(temp);
	}
	else if(head ==0){
		cout << "The Queue is empty" << endl;
	}
		else{
			cout << "The dequeue element is" << head->data << endl;
			temp2 = head;
			head = head->next;
			free(temp2);
		}
}

void peek(){
	if(head==0){
		cout << "Queue is empty\n";
	}
	else{
		cout << "The Element is " << head->data << endl;
	}
}
void display(){
	if(head==0){
		cout << "Queue is empty\n";
	}
	else{
		struct node *temp3;
		cout << "the elements are :\t";
		temp3 = head;
		while(temp3!=0){
			cout << temp3->data << "";
			temp3=temp3->next;
		}
		
		cout << endl;
	}
}

int main(){
	int op=1;
	do{
	int choice;
	cout << "Enter your choice : \n enqueue-1 \n dequeue-2 \n peek-3 \n display-4 \n" << endl;
	cin >> choice;
	switch(choice){
		case 1: enqueue();
		break;

		case 2: dequeue();
		break;

		case 3: peek();
		break;

		case 4: display();
		break;

		default: cout << "Invalid input" << endl;
	}
	cout << "Do you want to perform more operations: 0/1" << endl;
	cin >> op;
	}while(op);
	return 0;
}