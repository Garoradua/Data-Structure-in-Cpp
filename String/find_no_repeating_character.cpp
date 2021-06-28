#include<iostream>
using namespace std;
int main(){
	string str;
	cin >> str;
	int n = str.length();
	for(int i=0; i<n; i++){
		char ch = str[i];
		bool flag = true;
		for(int j=i+1; j<n; j++){
			if(ch==str[j]){
				flag = false;
				break;
			}
		}
		if(flag==true){
			cout << str[i];
			break;
		}
	}
	char a = str[0];
	cout << int(a);
}