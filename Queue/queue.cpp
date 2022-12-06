#include<iostream>
using namespace std;
int front =-1;
int rear = -1;
int n=5;
int arr[5];

void enqueue(){
	if(rear ==n-1){
		cout << "Queue is full " << endl;
	}else if(rear==-1){
		front++;
		rear++;
		cin >> arr[rear];
	}else{
		rear++;
		cin >> arr[rear];
	}
}

void dequeue(){
	if(front==-1){
		cout << "Queue is empty" <<endl;
	}else if(front==rear && front!=-1){
		cout << arr[front];
		front = rear = -1;
	}else{
		cout << arr[front];
		front++;
	}
}

void peek(){
	if(front==-1){
		cout << "Queue is empty" <<endl;
	}else{
		cout << arr[front];
	}
}

void display(){
	if(front==-1){
		cout << "Queue is empty" <<endl;
	}else{
		for(int i=front; i<=rear; i++){
			cout << arr[i] <<endl;
		}
	}
}
int main(){
	int add =1;
	do{
		
	cout << "1. Enqueue \n 2. Dequeue \n 3. peek \n 4. Display \n";
	int choice;
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

		default: cout <<"Enter write choice";
	}
	cout <<"add more things ?";
	cin >> add;
}while(add);
}