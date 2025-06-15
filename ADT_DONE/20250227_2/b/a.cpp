/* 解説より
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int cnt = 0;
  string ans;
  for (char c : s) {
    if (c == '|') cnt++;
    else {
        if (cnt != 1) ans += c;
    }
  }
  cout << ans << endl;
  return 0;
}
*/