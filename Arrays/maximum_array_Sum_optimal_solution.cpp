#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int k;
	cin >> k;
	int sum=0;
	int max;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<k; i++){
		sum+=a[i];
		max = sum;
	}
	for(int i=k; i<n; i++){
		sum = sum-a[i-k]+a[i];
		if(max<sum){
			max = sum;
		}
	}
	cout << max;

}