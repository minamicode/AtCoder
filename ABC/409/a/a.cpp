#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  string t, a;
  cin >> n >> t >> a;
  
  bool ok = false;
  
  for (int i = 0; i < n; i++) {
    if (t.at(i) == 'o' && a.at(i) == 'o') {
      ok = true;
      break;
    } else {
      ok = false;
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
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  string t, a;
  cin >> t >> a;
  rep(i,n) {
    if (t[i] == 'o' && a[i] == 'o') {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
*/