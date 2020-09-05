//Stack using array
#include<bits/stdc++.h>
using namespace std;
#define n 5
int top=-1;

// // cout << "";
int a[n];



void push(){
	if(top==(n-1)){
		cout << "Stack is Overflow";
	}
	else{
		cout << "Enter the element you want to push";
		int ele;
		cin >> ele;
		top++;
		a[top]= ele;
	}
}

void pop(){
	if(top==-1){
		cout << "Stack underflow";
	}
	else{
		int ele;
		ele = a[top];
		top--;
		cout << "Element is removed that is" << ele;
	}
}
void peek(){
	if(top==-1){
		cout << "Stack underflow";
	}
	else{
		int ele;
		ele = a[top];
		cout << "Element is removed that is" << ele;
	}
}
void display(){
	if(top==-1){
		cout << "Stack underflow";
	}
	else{
		int i;
		for(i=top; i>=0; i--){
		cout << "Elements are" << a[i];
	}
	}
}
int main(){
	int add = 1;
	// cout << "Enter the Size of the array";
	// int n;
	// cin >> n;

	do{
		cout << "Enter your choice" << endl;
		cout << "Push element - 1\n Pop element -2\n Peek element - 3\n Display all Elements -4\n";
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

			default:
			cout << "you enter wrong number";
		}
		cout << "if we want to perform more actions  0-for exit       1-continue";
		cin >> add ;
	} while(add);
	return 0;
}