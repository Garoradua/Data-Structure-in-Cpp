#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
      int n;
      cin >> n;
      string str;
      cin >> str;
        int countA=0, countD=0;
      for(int i=0; i<n; i++){
        // cout << str[i];
        if(str[i]=='A'){
          countA++;
        }else{
          countD++;
        }
      }
      if(countA>countD){
        cout << "Aditya" << endl;
      }else if(countD>countA){
        cout << "Danish" << endl;
      }else{
        cout << "AdiDan" << endl;
      }
    
    return 0;
  }