#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  if (s.find(t) != string::npos) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  string s, t;
  cin >> s >> t;
  int n = s.size(), m = t.size();
  rep(i,n-m+1) {
    bool ok = true;
    rep(j,m) if (s[i+j] != t[j]) ok = false;
    if (ok) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}
*/