#include<bits/stdc++.h>
using namespace std;
int n =5;
int a[5];
int front = -1;
int rear = -1;

void enqueue(){
	cout << "Enter the element you want to enqueue:\t " ;
	int ele;
	cin >> ele;
	if(rear==n-1){
		cout << "Queue is full" << endl;
	}
	else if(front == -1 && rear == -1){
		front++;
		rear ++;
		a[rear]=ele;
	}
	else{
		rear++;
		a[rear] = ele;
	}
}
void dequeue(){
	if(front == rear && front != -1 ){
		cout << "The Dequeue element is: \t " << a[front] << endl;
		front = rear = -1;
	}
	else if(front == -1 && rear == -1){
		cout << "queue is empty" << endl;
	}
	else{
		cout << "The Dequeue element is: \t " << a[front] << endl;
		front++; 
	}
}
void peek(){
	if(front == -1){
		cout << "Queue is empty" << endl;;
	}
	else{
	cout << "The element is :\t" << a[front];
}
}
void display(){
	if(front == -1){
		cout << "Queue is empty" << endl;
	}
	else{
		cout << "The elements are\t";
		for(int i=front ; i<=rear; i++){
			cout << a[i] << " ";
		}
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