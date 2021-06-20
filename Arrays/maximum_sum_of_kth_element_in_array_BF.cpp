#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin >> n;
	int a[n];
	cin >> k;
	int sum =-1;
	int max=0;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; (i+k-1)<n ; i++){
		sum=0;
		for(int j=i; j<(i+k); j++){
			sum += a[j];
		}
		if(sum>max){
			max = sum;
		}
	}
	cout << max << " " ;
}
