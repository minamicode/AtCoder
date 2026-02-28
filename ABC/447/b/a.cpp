/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;

  map<char,int> cnt;
  for (char c : s) cnt[c]++;

  int mx = 0;
  for (auto p : cnt) mx = max(mx, p.second);
  // p: pair<char,int>

  string ans;
  for (char c : s) {
    if (cnt[c] != mx) ans += c;
  }

  cout << ans << endl;
  return 0;
}
*/