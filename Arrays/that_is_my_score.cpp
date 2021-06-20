#include<iostream>
using namespace std;
int main(){
	int n;
	int pi, si;
	int m[11] = {0};
	// cout << m[1];
	cin >> n;
	int sum=0;
	// cout << "hi 1";
	// for(int i=0; i<11; i++){
	// 	cout << m[i];
	// }

	for(int i=1; i<=n; i++){
		cin >>pi;
		cin >>si;
		// cout << "hi 2";
		if((m[pi])<si){
			m[pi] = si;
			// cout << "hi 3";
		}
	}
	// cout << "hi 4";
	for(int i=1; i<=8; i++){
		sum+=m[i];
	}
	cout<< sum;
	return 0;
}
