/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int h, w, n;
  cin >> h >> w >> n;
  vector<vector<int>> a(h, vector<int>(w));
  rep(i,h)rep(j,w) cin >> a[i][j];
  vector<int> b(n);
  rep(i,n) cin >> b[i];

  set<int> st;
  rep(i,n) st.insert(b[i]);

  int ans = 0;
  rep(i,h) {
    int cnt = 0;
    rep(j,w) {
      cnt += st.count(a[i][j]);
    }
    ans = max(ans, cnt);
  }
  cout << ans << endl;
  return 0;
}
*/