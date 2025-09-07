#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  for (int j = 0; j < n; j++) {
    cin >> b.at(j);
  }

  int count1 = 0;
  int count2 = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (a.at(i) == b.at(j) && i == j) {
        count1++;
      } else if (a.at(i) == b.at(j) && i != j) {
        count2++;
      }
    }
  }

  cout << count1 << endl;
  cout << count2 << endl;
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];

  int ans1 = 0;
  rep (i, n) if (a[i] == b[i]) ans1++;
  cout << ans1 << endl;

  int ans2 = 0;
  map<int, int> mp;
  rep (i, n) mp[b[i]] = i;
  rep (i, n) {
    if (mp.count(a[i]) == 0) continue;
    int j = mp [a[i]];
      if (i != j) ans2++;
  }
  cout << ans2 << endl;

  return 0;
}
*/