#include<iostream>
using namespace std;
int n = 5;
int arr[5];
int top =-1;

void push(){
	if(top==n-1){
		cout << "Stack Overflow" << endl;
	}else{
		top++;
		cin >> arr[top];
		cout <<endl;
	}
}

void pop(){
	if(top==-1){
		cout <<"Stack underflow" << endl;
	}else{
		cout << arr[top];
		top--;
	}
}
void peek(){
	if(top==-1){
		cout <<"Stack underflow" << endl;
	}else{
		cout << arr[top];
	}
}

void display(){
	if(top==-1){
		cout <<"Stack underflow" << endl;
	}else{
		for(int i=top; i>=0; i--){
			cout << arr[i] <<"\t";
		}
	}
}
int main(){
	int add =1;
	do{
		
	cout << "1. push \n 2. pop \n 3. peek \n 4. Display \n";
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

		default: cout <<"Enter write choice";
	}
	cout <<"add more things ?";
	cin >> add;
}while(add);
}