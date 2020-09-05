#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *next;
};

struct node *top=0;
void push(){
	cout << "Enter the Element you want to push" << endl;
	int number;
	cin >> number;
	struct  node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data = number;
	newnode->next=top;
	top = newnode;
}

void pop(){
	if(top==0){
		cout << "Stack undeflow" << endl;
	}
	else{
	struct node *temp;
	temp=top;
	cout << "The deleted element is : "<< top->data << endl;
	top=top->next;
	free(temp);
	}
}

void peek(){
	if(top==0){
		cout<<"Stack underflow" << endl;
	}
	else{
		cout << top->data << endl;
	}
}

void display(){
	struct node *temp;
	temp=top;
	if(top==0){
		cout << "Stack is empty" << endl;
	}
	else{
		while(temp!=0){
			cout << temp->data << endl;
			temp = temp->next;
		}
	}
}


int main(){
	int op = 1;
	while(op){
	cout << " push - 1\n pop - 2\n peek - 3\n display - 4\n" << endl;
	cout << "Enter your choice\n" ;
	int choice;
	cin >> choice;
	

	switch(choice){
		case 1: push();
		break;

		case 2: pop();
		break;

		case 3: peek();
		break;

		case 4: display();
		break;

		default: cout << " Invalid Statement" << endl;

		
	}
cout << "Do you want to perform more operations 0/1" << "\n";
		cin >> op;}

	return 0;
}