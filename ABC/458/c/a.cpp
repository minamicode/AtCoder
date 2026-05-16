/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  string s;
  cin >> s;
  int n = s.size();

  ll ans = 0;
  rep(i,n) if (s[i] == 'C') {
    ans += min(i+1, n-i);
  }
  cout << ans << endl;
  return 0;
}
*/