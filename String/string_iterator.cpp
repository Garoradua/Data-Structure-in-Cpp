#include<iostream>
using namespace std;
int main(){
	string str1 = "Gourav";
	string str2 = "Arora";

	string::iterator itr1;
	string::reverse_iterator itr2;
	// string::iterator itr2;
	// itr1 = str1.begin();
	// cout << *itr1;

	// itr2 = str1.begin();
	// cout << *itr2;


	// string from beginning
	for(itr1 = str1.begin(); itr1!=str1.end(); itr1++){
		cout << *itr1;
	}

	// string from reverse
	for(itr2 = str1.rbegin(); itr2!=str1.rend(); itr2++){
		cout << *itr2;
	}
}