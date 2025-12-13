/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];

  int ans = 0;
  rep(r,n)rep(l,r+1) {
    int s = 0;
    for (int i = l; i <= r; i++) s += a[i];
    
    bool ok = true;
    for (int i = l; i <= r; i++) {
      if (s%a[i] == 0) ok = false;
    }
    if (ok) ans++;
  }
  cout << ans << endl;
  return 0;
}
*/