#include <bits/stdc++.h>
  using namespace std;
  
  // voi
  
  void rotation(int arr[], int start, int end){
    int i = start;
    int j = end;
    int temp;
    if(i>j){
      return;
    }
    while(i<j){
      temp = arr[i];
      arr[i] = arr[j];
      arr[j]= temp;
      i++;
      j--;
    }
    
  }
  int main()
  {
    //write your code here
    int t;
    cin >> t;
    while(t--){
      int n;
      int k;
      cin >> n;
      cin >> k;
      int a[n];
      for(int i=0; i<n; i++){
        cin >> a[i];
      }
      if(k>n){
        k = k%n;
      }
    rotation(a, 0, n);
    rotation(a, 0, k);
    rotation(a, k, n);
    for(int i=0; i<n; i++){
      cout << a[i] << " ";
    }
    }
    
    return 0;
 
  }