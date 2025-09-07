#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  
  bool ok = false;
 
  for (char c : s) { 
    if (c == 'o') {
      ok = true;
      continue;
    } else if (c == 'x') {
      ok = false; 
      break;
    }
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
#define rep(i, n) for (int i = 0; i < (n); ++i)
 
int main() {
    int n;
    string s;
    cin >> n >> s;
    bool good = false;
    rep (i, n) if (s[i] == 'o') good = true;
    bool bad = false;
    rep (i, n) if (s[i] == 'x') bad = true;
    if (good && !bad) cout << "Yes" << endl;
    else cout << "No" << endl; 
    return 0;
}
*/
