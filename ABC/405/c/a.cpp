/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  ll s = 0, s2 = 0;
  rep(i,n) s += a[i];
  rep(i,n) s2 += a[i]*a[i];
  ll ans = (s*s - s2)/2;
  cout << ans << endl;
  return 0;
}
*/