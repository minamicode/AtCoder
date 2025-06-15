/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int h, w;
  cin >> h >> w;
  vector a(h, vector<int>(w));
  rep(i,h)rep(j,w) cin >> a[i][j];
  vector<string> s(h, string(w,'.'));
  rep(i,h)rep(j,w) {
    if (a[i][j] == 0) continue;
    s[i][j] = 'A'+a[i][j]-1;
  }
  rep(i,h) cout << s[i] << endl;
  return 0;
}
*/