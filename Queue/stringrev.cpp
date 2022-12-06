#include<bits/stdc++.h>
using namespace std;
int main(){
	cout << "Enter String : ";
	string str;
	getline(cin,str);
	int length = str.length();
	for(int i=0; i<=length/2; i++){
		swap(str[i],str[length-1-i]);
	}
	cout << str;
}