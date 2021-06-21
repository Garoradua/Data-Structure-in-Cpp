#include<iostream>
using namespace std;
int main(){
	int n;
	int k;
	cin >> n;
	int a[n];
	cin >> k;
	// int c;
	int sum =0;
	int gave=0;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<n-1; i++){
		if(a[i]%k==0){
			sum+= 0;
		}else if(a[i]>k){
			sum+= (a[i]%k);
		}else{
			sum += a[i];
			}
		
	}
	for(int i=n-1; i<n; i++){
		if(a[i]<k){
			gave = k-a[i];
		}
	}
	cout << sum-gave;

	return 0;
}