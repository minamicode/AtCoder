#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, l, r;
  cin >> n >> l >> r; 
  
  string s;
  cin >> s;
  
  bool ok = true;

  for (int i = l - 1; i <= r - 1; i++) {
    if (s.at(i) == 'x') {
      ok = false;
      break;
    }
  }
  
  if (ok) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
	return 0;
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, l, r;
  string s;
  cin >> n >> l >> r >> s;
  for (int i = l; i <= r; i++) {
    if (s[i-1] == 'x') {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
*/