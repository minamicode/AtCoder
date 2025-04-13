/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(max(k,n+1));
  vector<int> s(a.size()+1);

  rep(i,k) a[i] = 1;
  rep(i,k) s[i+1] = s[i]+a[i];

  const int mod = 1e9;
  for (int i = k; i <= n; i++) {
    a[i] = (s[i] - s[i-k] + mod) % mod;
    s[i+1] = (s[i]+a[i]) % mod;
  }
  cout << a[n] << endl;
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using mint = modint;

int main() {
  int n, k;
  cin >> n >> k;
  vector<mint> a(max(k,n+1));
  vector<mint> s(a.size()+1);

  rep(i,k) a[i] = 1;
  rep(i,k) s[i+1] = s[i]+a[i];

  mint::set_mod(1e9);
  for (int i = k; i <= n; i++) {
    a[i] = s[i] - s[i-k];
    s[i+1] = s[i]+a[i];
  }
  cout << a[n].val() << endl;
  return 0;
}
*/