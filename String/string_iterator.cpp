#include<iostream>
using namespace std;
int main(){
	string str1 = "Gourav";
	string str2 = "Arora";

	string::iterator itr1, itr2;
	// string::iterator itr2;
	// itr1 = str1.begin();
	// cout << *itr1;

	// itr2 = str1.begin();
	// cout << *itr2;

	for(itr1 = str1.begin(); itr1!=str1.end(); itr1++){
		cout << *itr1;
	}
}