#include<iostream>
using namespace std;
int main(){
	string str;
	cin >> str;
	int len = str.length();
	int freq[26] = {0};
	int a;
	for(int i=0; i<len; i++){
		a =str[i]-97;
		freq[a]++;
	}
	for(int i=0; i<len; i++){
		if(freq[str[i]-97]==1){
			cout << str[i];break;
			// cout << Character.toString(b);
		}
	}
}