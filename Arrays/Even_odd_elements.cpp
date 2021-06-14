#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int array_size;
    cin >> array_size;
    int a[array_size];
    int even[array_size], odd[array_size];
    int j=0,k=0;
    for(int i=0; i<array_size; i++){
      cin >> a[i];
    }
    
    for(int i=0; i<array_size; i++){
      if(a[i]%2==0){
        even[j] = a[i];
        j++;
      }else{
        odd[k] = a[i];
        k++;
      }
    }
    for(int i=0; i<j; i++){
      cout << even[i] << " ";
    }
    cout << endl;
    for(int i=0; i<k; i++){
      cout << odd[i] << " ";
    }
    return 0;
  }