#include<iostream>
using namespace std;
int main(){
	int arr[129];
	arr[1] = 0;
	int val;
	cin >> val;
	int count =0;
	int validate_arr[256];
	for(int i=0; i<256; i++){
		validate_arr[i] =0;
	}
	for(int i=2; i<129; i++){
		if(validate_arr[arr[i-1]]==0){
			arr[i]=0;
			// cout << arr[i];
			validate_arr[arr[i-1]] = i-1;
		}else{
			arr[i] = (i-1)-validate_arr[arr[i-1]];
			validate_arr[arr[i-1]] = i-1;
			// cout << arr[i];
		}
	
}

// for(int i=1; i<129; i++){
	
// 	cout << arr[i] << " ";
// } cout << endl;
int number = arr[val];
for(int i=1; i<=val; i++){
	if(arr[i]==number){
		count++;
	}
}

cout << count;
}