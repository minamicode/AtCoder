#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  int ans = s.size();
  rep(i,s.size()) {
    if (s.substr(i,2) == "00") {
      ans--;
      s[i] = 'X';
      s[i+1] = 'X';
    }
  }

  cout << ans << endl;
  return 0;
}