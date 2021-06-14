#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int n;
    cin >> n;
    int array_size;
    
    for(int i=0; i<n; i++){
      int min =10000000, max = 0;
      cin >> array_size;
      int a[array_size];
      for(int j=0; j<array_size; j++){
        cin >> a[j];
        if(min>a[j]){
          min = a[j];
        }if(max<a[j]){
          max = a[j];
        }
      }
      cout << min << " ";
    cout << max;
    cout << endl;
    }
    
    return 0;
  }