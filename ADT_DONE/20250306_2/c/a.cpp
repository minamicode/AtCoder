#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<vector<int>> a(n, vector<int>(n));
  rep(i,n)rep(j,i+1) {
    cin >> a[i][j];
    a[i][j]--;
    a[j][i] = a[i][j];
  }
  int x = 0;
  rep(y,n) x = a[x][y];
  cout << x+1 << endl;
  return 0;
}