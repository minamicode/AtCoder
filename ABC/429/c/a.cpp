/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

ll c2(ll n) {
  return n*(n-1)/2;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  rep(i,n) a[i]--;

  vector<int> cnt(n);
  rep(i,n) cnt[a[i]]++;

  ll ans = 0;
  rep(i,n) {
    ans += c2(cnt[i])*(n-cnt[i]);
  }
  cout << ans << endl;
  return 0;
}
*/