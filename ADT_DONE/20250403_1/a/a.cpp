#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  
  bool ok = false;
  
  if (n > 1) {
    for (int i = 0; i < n - 1; i++) {
      if (s.at(i) == s.at(i + 1)) {
        ok = false;
        break;
      } else {
        ok = true;
      }
    }
  } else {
    ok = true;
  }
  
  if (ok) {
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
  int n;
  cin >> n;
  string s;
  cin >> s;

  rep(i,n-1) {
    if (s[i] == s[i+1]) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
*/