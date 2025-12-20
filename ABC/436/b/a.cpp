/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<vector<int>> a(n, vector<int>(n));

  int r = 0, c = n/2, k = 1;
  a[r][c] = k;
  rep(i,n*n-1) {
    k++;
    int nr = (r-1+n)%n;
    int nc = (c+1)%n;
    if (a[nr][nc] != 0) {
      nr = (r+1)%n;
      nc = c;
    }
    r = nr; c = nc;
    a[r][c] = k;
  }

  rep(i,n) {
    rep(j,n) cout << a[i][j] << ' ';
    cout << endl;
  }
  return 0;
}
*/