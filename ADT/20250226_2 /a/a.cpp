#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
 
int main() {
  int n, p, q, r, s;
  cin >> n >> p >> q >> r >> s;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  p--; q--; r--; s--;
  for (int i = p; i <= q; i++) {
    int j = (i - p) + r;
    swap(a[i], a[j]);
  }

  rep(i, n) cout << a[i] << " ";
  cout << endl;
  return 0;
}
