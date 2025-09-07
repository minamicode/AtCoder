/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> s(n+1);
  rep(i,m) {
    int l, r;
    cin >> l >> r;
    l--;
    s[l]++; s[r]--;
  }

  rep(i,n) s[i+1] += s[i];

  int ans = *min_element(s.begin(), s.begin()+n);
  cout << ans << endl;
  return 0;
}
*/