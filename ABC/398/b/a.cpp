/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
 
int main() {
  int n = 7;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  do {
    if (a[0] != a[1]) continue;
    if (a[1] == a[2]) continue;
    if (a[2] != a[3]) continue;
    if (a[3] != a[4]) continue;
    cout << "Yes" << endl;
    return 0;
  } while (next_permutation(a.begin(), a.end()));
  cout << "No" << endl;
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
 
int main() {
  int n = 7;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int m = 13;
  vector<int> cnt(m + 1);
  for (int x : a) cnt[x]++;

  sort(cnt.rbegin(), cnt.rend());
  if(cnt[0] >= 3 && cnt[1] >= 2) {
    cout << "Yes" << endl;
  } else cout << "No" << endl;
  return 0;
}
*/