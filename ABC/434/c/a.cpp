/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

void solve() {
  int n, h;
  cin >> n >> h;
  int now = 0, lh = h, rh = h;
  bool ans = true;
  rep(i,n) {
    int t, l, u;
    cin >> t >> l >> u;
    lh -= t-now; rh += t-now;
    now = t;
    lh = max(lh, l);
    rh = min(rh, u);
    if (lh > rh) ans = false;
  }
  if (ans) cout << "Yes" << endl;
  else cout << "No" << endl;
}

int main() {
  int T;
  cin >> T;
  rep(ti,T) solve();
  return 0;
}
*/