#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;

  int a[n][m];
  int v[m];
  int c[n] = {0};
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  
  for (int j = 0; j < m; j++) {
    cin >> v[j];
  }
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      c[i] += a[i][j] * v[j];
    }
  }
  
  for (int i = 0; i < n; i++) {
    cout << c[i] << endl;
  }
}