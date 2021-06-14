#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int n;
    cin >> n;
    int array_size;
    for(int i=0; i<n; i++){
        cin >> array_size;
        int a[array_size];
        for(int j=0; j<array_size; j++){
          cin >> a[j];
        }
        for(int k=0; k<array_size; k++){
          cout << a[k] << " ";
        }
        cout << endl;
    }
    
    return 0;
  }