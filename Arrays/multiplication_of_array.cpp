#include <bits/stdc++.h>
  using namespace std;
  
   int main()
  {
    //write your code here
    int n;
    cin >> n;
    int array_size;
    int sum=0;
    for(int i=0; i<n; i++){
      cin >> array_size;
      int a[array_size];
      sum=0;
      for(int j=0; j<array_size; j++){
        cin >> a[j];
      }
      sum = a[0];
      for(int k=1; k<array_size; k++){
        sum = sum * a[k];
      }
      cout << sum << endl;
    }
    
    return 0;
  }