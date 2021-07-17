#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int n;
    cin >> n;
    long long int a[n];
    for(int i=0; i<n; i++){
      cin >> a[i];
    }
    int steps=0;
    long long int b[n]={0};
    for(int i=0; i<n; i++){
        if(a[i]>b[i]){
           steps++;
      for(int j=i; j<n; j++){
        b[j]++;
      }
        }else if(a[i]<b[i]){
          steps++;
          for(int j=i; j<n; j++){
        b[j]--;
        }
    }
    else{
      continue;
    }
    }
    cout << steps;
    return 0;
  }