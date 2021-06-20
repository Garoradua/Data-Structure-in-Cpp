#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
	int n,m;
	cin >> n;
	int all[n];
	cin >> m;
	int unfinished;
	int remain[n-m];
	for(int i=1; i<=n; i++){
		all[i] = 0;
	}
	for(int i=1; i<=m; i++){
		cin >> unfinished;
		all[unfinished] = 1;
	}
	int k=0;
	for(int i=1; i<=n; i++){
		if(all[i]==0){
			remain[k++] = i;
		}
	}
	for(int i=0; i<(n-m); i=i+2){
		cout << remain[i] << " ";
	}
	cout << endl;
	for(int i=1; i<(n-m); i=i+2){
		cout << remain[i] << " ";
	}

}
}