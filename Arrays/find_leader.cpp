#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin >> t;
    while(t--){
     int n;
      cin >> n;
      int a[n];
      int k;
      for(int i=0; i<n; i++){
        cin >> a[i];
      }
      cout << a[n-1] << " ";
      for(int i=n-2; i>=0; i--){
      if(a[i]>a[i+1]){
        k=0
        // cout << a[i] << " ";
     
      }
       
        }
        if(k==0){
          cout << a[i] << " ";
        }
      }
      cout << endl;
    }
    
    return 0;
  }