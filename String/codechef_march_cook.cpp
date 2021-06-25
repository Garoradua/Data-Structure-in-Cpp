#include<iostream>
using namespace std;
int main(){
	int n;
	string str; ///LLLUU
	cin >> str;
	n = str.length(); // 5
	char current;
	// cout << str[0];
	int x=0,y=0;
	if(str[0] == 'L'){
		x--;          // x=1 current-L
		current = str[0];
	}else if(str[0]=='R'){
		x++;
		current = str[0];
	}else if(str[0]=='U'){
		y++;
		current = str[0];
	}else{
		y--;
		current = str[0];
	}
	for(int i=1; i<n; i++){
		if(current=='L' || current == 'R'){
			current = str[i];
			if(str[i]=='U'){
				y++;	
			}else if(str[i]=='D'){
				y--;
			}
		}
		else{
			current = str[i];
			if(str[i]=='L'){
				x--;
			}else if(str[i]=='R'){
				x++;
			}
		}

	}
	cout << x << " " << y;

}