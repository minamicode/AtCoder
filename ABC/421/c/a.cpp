/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  ll ans = 1e18;
  rep(ri,2) {
    ll now = 0;
    int ai = 0;
    rep(i,n*2) {
      if (s[i] == 'A') {
        now += abs(i - ai*2);
        ai++;
      }
    }
    ans = min(ans, now);
    reverse(s.begin(), s.end());
  }

  cout << ans << endl;
  return 0;
}
*/