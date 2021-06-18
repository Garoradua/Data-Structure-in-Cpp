// 7 2 7 3 7 2 7 7

#include<iostream>
using namespace std;
int main(){
	int a[] = {7, 2, 7, 3, 7, 2, 7, 7};
	int n =8;
	int major_element;
	int major[8];
	int time=1;

	for(int i=0; i<n; i++){
		for(int j=0; j<n-1; j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
	// for(int i=0; i<n; i++){
	// 	cout << a[i];
	// }
	int k=0;
	for(int i=0; i<n-1; i++){
		if(a[i]==a[i+1]){
			time++;
		}
		else{
			time=1;
		}
		// cout << time;
		if(time> (n/2)){
		major[k]=a[i];
			k++;	
		}
		
	
	}
for(int i=0; i<k; i++){
		cout << major[i] << " ";
	}

}