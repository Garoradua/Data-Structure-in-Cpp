#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int m,n;
    cin >> m;
    cin >> n;
    int arr[m][n];
    for(int i=0; i<m; i++){
      for(int j=0; j<n; j++){
        cin >> arr[i][j];
      }
    }
    for(int i=0; i<m; i++){
      for(int j=0; j<n; j++){
        if(j>i){
          cout << 0 << " ";
        }else{
          cout << arr[i][j] << " ";
        }
      }
      cout << endl;
    }
    
    for(int i=0; i<m; i++){
      for(int j=0; j<n; j++){
        if(j<i){
          cout << 0 << " ";
        }else{
          cout << arr[i][j] << " ";
        }
      }
      cout << endl;
    }
    
    return 0;
  }