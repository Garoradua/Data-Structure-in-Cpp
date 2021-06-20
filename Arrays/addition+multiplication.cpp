#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int m,n;
    cin >> m;
    cin >> n;
    int m1[m][n];
    int m2[m][n];
    int add[m][n];
    int mul[m][n];
    
    for(int i=0; i<m; i++){
      for(int j=0; j<n; j++){
        cin >> m1[i][j];
      }
    }
    for(int i=0; i<m; i++){
      for(int j=0; j<n; j++){
        cin >> m2[i][j];
      }
    }
    for(int i=0; i<m; i++){
      for(int j=0; j<n; j++){
        add[i][j] = m1[i][j] + m2[i][j];
      }
    }
    for(int i=0; i<m; i++){
      for(int j=0; j<n; j++){
        mul[i][j] = 0;
        for(int k=0; k<m; k++){
          mul[i][j] += m1[i][k]*m2[k][j];
        }
      }
    }
    for(int i=0; i<m; i++){
      for(int j=0; j<n; j++){
        cout << add[i][j] << " ";
      }
      cout << endl;
    }
    for(int i=0; i<m; i++){
      for(int j=0; j<n; j++){
        cout << mul[i][j] << " ";
      }
      cout << endl;
    }
    
    return 0;
  }