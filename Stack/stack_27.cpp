#include<iostream>
using namespace std;
int top = -1;
int size = 5;
int array[5];

void push(){
	if(top==size-1){
		cout << "Stack Overflow" << endl;
	}else{
	cout << "Enter the element you want to push \t";
	top++;
 	cin >> array[top] ;
}
}

void pop(){
	if(top==-1){
		cout << "stack underflow" << endl;
	}else{
		cout << "Pop element is " << array[top] << endl;
		top--;
	}
}
void peak(){
	if(top==-1){
		cout << "Stack is empty" << endl;
	}else{
		cout << array[top];
	}
}
void display(){
	if(top==-1){
		cout << "Stack is empty" << endl;
	}else{
		for(int i=top; i>=0; i--){
			cout << array[i]<<endl;
		}
	}
}
int main(){
	//  size;
	// cout << "Enter the Size of array" <<endl;
	// cin >> size;
	int again=1;
	do{
	cout << " 1. push \n 2. pop \n 3. peak \n 4. display " << endl;
	int input;
	cin >> input;
	switch(input){
		case 1: push();
				break;

		case 2: pop();
				break;

		case 3: peak();
				break;

		case 4: display();
				break;

	}
	cout << "Want more ? 1. Yes 2. No";
	cin >> again;
}while(again);
}