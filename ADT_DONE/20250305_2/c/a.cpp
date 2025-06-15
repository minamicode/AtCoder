#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, x;
  cin >> n >> x;
  x--;
  vector<int> a(n);
  rep(i,n) cin >> a[i], a[i]--;
  vector<int> used(n);
  int ans = 0;
  while (!used[x]) {
    used[x] = 1;
    x = a[x];
    ++ans;
  }
  cout << ans << endl;
  return 0;
}