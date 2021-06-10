#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	int lucky=0, unlucky=0;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	for(int i=0; i<n; i++){
		if(a[i]%2==0){
			lucky++;
		}else{
			unlucky++;
		}
	}

	if(lucky>unlucky){
		cout << "Ready for Battle";
	}else{
		cout << "Not Ready";
	}
}