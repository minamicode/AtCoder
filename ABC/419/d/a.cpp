/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  string s, t;
  cin >> s >> t;

  vector<int> d(n+1);
  rep(i,m) {
    int l, r;
    cin >> l >> r;
    --l;
    d[l]++; d[r]--;
  }

  rep(i,n) d[i+1] += d[i];

  string ans;
  rep(i,n) {
    if (d[i]%2 == 0) ans += s[i];
    else ans += t[i];
  }
  cout << ans << endl;
  return 0;
}
*/