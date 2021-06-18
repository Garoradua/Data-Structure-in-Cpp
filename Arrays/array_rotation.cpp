#include<iostream>
using namespace std;
int main(){
	int a[] = {1,2,3,4,5,6};
	int n=6;
	// left shift 2 position
	int d =2;
	int temp[2];

	for(int i=0; i<d; i++){
		temp[i]= a[i];
	}

	for(int i=0; i<n-d; i++){
		a[i] = a[i+2];
	}
	int j=0;
	for(int i=n-d; i<n; i++){
		a[i] = temp[j++];
	}

	for(int i=0; i<n; i++){
		cout << a[i] << " ";
	}
}