#include<iostream>
using namespace std;
int main(){
	int n;
	cin >>n;
	int k;
	cin >> k;
	char a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}//h h h h h h t
	int count =0;
	cout << a[k-1];
	if(a[k-1]=='H'){
		for(int i=0; i<n-k; i++){
			if(a[i]=='T'){
				count++;
			}
		}
	}else{
		for(int i=0; i<n-k; i++){
			if(a[i]=='H'){
				count++;
			}
		}
	}
	cout << count;
}