/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<bool> juice(m+1);
  rep(i,n) {
    int l;
    cin >> l;
    vector<int> x(l);
    rep(j,l) cin >> x[j];
    int k = 0;
    rep(j,l) {
      if (!juice[x[j]]) {
        k = x[j];
        break;
      }
    }
    cout << k << endl;
    juice[k] = true;
  }
  return 0;
}
*/