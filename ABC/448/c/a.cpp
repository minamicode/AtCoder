/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  rep(i,n) cin >> a[i];

  vector<int> is(n);
  rep(i,n) is[i] = i;
  sort(is.begin(), is.end(), [&](int i, int j) {
    return a[i] < a[j];
  });

  const int INF = 1001001001;
  rep(qi,q) {
    int k;
    cin >> k;
    vector<int> b(k);
    rep(i,k) cin >> b[i], b[i]--;

    int ans = INF;
    rep(i,6) {
      bool ng = false;
      for (int j : b) if (is[i] == j) ng = true;
      if (!ng) ans = min(ans, a[is[i]]);
    }
    cout << ans << endl;
  }
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  rep(i,n) cin >> a[i];

  vector<int> is(n);
  rep(i,n) is[i] = i;
  sort(is.begin(), is.end(), [&](int i, int j) {
    return a[i] < a[j];
  });

  const int INF = 1001001001;
  rep(qi,q) {
    int k;
    cin >> k;
    vector<int> b(k);
    rep(i,k) cin >> b[i], b[i]--;
    vector<int> ban(k);
    rep(i,k) ban[i] = a[b[i]];
    sort(ban.begin(), ban.end());

    rep(i,n) {
      if (i >= k || a[is[i]] != ban[i]) {
        cout << a[is[i]] << endl;
        break;
      }
    }
  }
  return 0;
}
*/