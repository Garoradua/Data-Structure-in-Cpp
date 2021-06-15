#include<iostream>
using namespace std;
int main(){
	int a[] = {0,1,2,0,0,3,1,0,3};
	int len = 9;
	// string str = "gourav";
	// int l = str.length(); 
	int left[len];
	left[0]= a[0];
	int right[len];
	right[len-1] = a[len-1];
	int water=0;
	// cout << water;
	for(int i=1; i<len; i++){
		if(a[i]>left[i-1]){
			left[i] = a[i];
		}else{
			left[i] = left[i-1];
		}
	}
	// cout << water;
	for(int i=len-1; i>=0; i--){
		if(a[i]>right[i+1]){
			right[i] = a[i];
		}else{
			right[i] = right[i+1];
		}
	}
	
	for(int i=1; i<len-1; i++){
		water += min(left[i],right[i]) - a[i];
	}

	cout << water;

}