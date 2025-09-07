#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  
  int cnt = 0;
  int n = s.size();
  
  for (int i = 1; i < n; i++) {
    if (s.at(i) == 'o' && s.at(i - 1) == 'i') {
      cnt = cnt + 2;
    }
  }
  
  int ans = n - cnt;
  
  cout << ans << endl;
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  int ans = 0;
  char expect = 'i';
  for (char c : s) {
    if (c != expect) ans++;
    expect = c^'o'^'i';
  }
  if (s.back() == 'i') ans++;
  cout << ans << endl;
  return 0;
}
*/