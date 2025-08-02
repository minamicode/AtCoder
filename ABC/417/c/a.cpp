#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }

  int cnt = 0;
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (a.at(i) + a.at(j) == j - i) {
        cnt++;
      }
    }
  }
  
  cout << cnt << endl;
  return 0;
}

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
  map<int,int> cnt;
  rep(i,n) cnt[i+a[i]]++;
  ll ans = 0;
  rep(i,n) ans += cnt[i-a[i]];
  cout << ans << endl;
  return 0;
}
*/