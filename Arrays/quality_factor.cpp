#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    // int n;
    // cin >> n;
    // long long int a[n];
    // for(int i=0; i<n; i++){
    //   cin >> a[i];
    // }
    
    long long n,a,b;
    cin>>n>>a;
    // cout << a;
    long long count = abs(a);
    for(int i=1;i<n;i++){
      cin>>b;
      count=count+abs(b-a);
      a=b;
    }
    cout<<count;
    // int steps=0;
    // long long int b[n]={0};
    
    // int i=0,j=0;
    
    // while(i<n){
    //   if(a[i]>b[i]){
    //     steps += a[i]-b[i];
    //     b[i]= a[i];
    //   }else{
    //     steps += b[i]-a[i];
    //     b[i] = a[i];
    //   }
    //   b[i+1] = b[i];
    //       i++;
    // }
    // cout << steps;
    return 0;
  }