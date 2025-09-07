/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> b(n), w(m);
  rep(i,n) cin >> b[i];
  rep(i,m) cin >> w[i];
  sort(b.rbegin(), b.rend());
  sort(w.rbegin(), w.rend());

  ll ans = 0;
  ll sumb = 0;
  ll maxw = 0, sumw = 0;
  rep(i,n) {
    sumb += b[i];
    if (i < m) sumw += w[i];
    maxw = max(maxw, sumw);
    ans = max(ans, sumb+maxw);
  }
  cout << ans << endl;
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> b, w;
  
  ll sum = 0;
  int dif = 0;

  rep(i,n) {
    int a;
    cin >> a;
    if (a >= 0) sum += a, dif++;
    else b.push_back(a);
  }
  rep(i,m) {
    int a;
    cin >> a;
    if (a >= 0) w.push_back(a);
  }

  sort(w.begin(), w.end());
  while (dif > 0 && w.size()) {
    sum += w.back(); w.pop_back();
    dif--;
  }

  ll ans = sum;
  if (dif == 0) {
    sort(b.rbegin(), b.rend());
    sort(w.rbegin(), w.rend());
    rep(i,min(b.size(),w.size())) {
      sum += b[i]+w[i];
      ans = max(ans,sum);
    }
  }

  cout << ans << endl;
  return 0;
}
*/