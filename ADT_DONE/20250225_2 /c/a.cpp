/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
 
int main() {
  const int n = 10;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  int a = n, b = 1, c = n, d = 1;
  rep(i, n) rep (j, n) {
    if (s[i][j]=='#') {
        a = min(a, i + 1);
        b = max(b, i + 1);
        c = min(c, j + 1);
        d = max(d, j + 1);
    }
  }
  
  printf ("%d %d\n%d %d\n", a, b, c, d);
  return 0;
}
*/