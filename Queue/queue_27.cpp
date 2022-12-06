#include <bits/stdc++.h>
using namespace std;
#define size 5
int qqueue[5];
int front =-1;
int rear = -1;
void enqueue(){
	if(rear==size-1){
		cout <<"Queue is full" <<endl;
	}
	else if(front==-1){
		cout << "Enter Element" << endl;
		front++;
		rear++;
		cin >> qqueue[rear]; 
	}else{
		rear++;
		cin >> qqueue[rear]; 
	}
}

void dequeue(){
	if(front==-1){
		cout << "Queue is Empty" <<endl;
	}else if(front==rear){
		cout << "dequeue element is "<< qqueue[front] <<endl;
		front=rear=-1;
	}else{
		cout << "dequeue element is "<< qqueue[front] <<endl;
		front++;
	}
}

void display(){
	if(front==-1){
		cout << "Queue is Empty" <<endl;
	}else{
		for(int i=front; i<=rear; i++){
			cout << qqueue[i] << " " ;
		}
		cout <<endl;
	}
}
int main(){
	int again=1;
	do{
	cout << "1. Enqeue \n 2. Dequeue \n 3. Display" << endl;
	int input;
	cin>>input;
	switch(input){
		case 1: enqueue();
				break;

		case 2: dequeue();
				break;

		case 3: display();
		        break;

		default: cout <<"please enter correct input";
	}
	cout << "Wanna more ? 1/0 ? " << endl;
	cin>> again;
}while(again);
}