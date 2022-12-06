// #include<iostream>
// using namespace std;
// int main(){
// 	cout << "Array size ?\t";
// 	int size;
// 	cin >> size;
// 	int arr[size];
// 	for(int i=0; i<size; i++){
// 		cin >> arr[i];
// 	} 
// 	for(int i=0; i<=size/2; i++){
// 		swap(arr[i],arr[size-1-i]);
// 	}
// 	for(int i=0; i<size; i++){
// 		cout << arr[i];
// 	}
// }
#include<iostream>
using namespace std;
int main(){
	cout << "Array size ?\t";
	int size;
	cin >> size;
	int arr[size];
	for(int i=0; i<size; i++){
		cin >> arr[i];
	} 
	int extra;
	for(int i=0; i<=size/2; i++){
		extra = arr[i];
		arr[i]=arr[size-1-i];
		arr[size-1-i] = extra;
	}
	for(int i=0; i<size; i++){
		cout << arr[i];
	}
}