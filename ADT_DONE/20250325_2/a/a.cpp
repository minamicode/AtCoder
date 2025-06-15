#include <bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> s(8);
  for (int i = 0; i < 8; i++) {
    cin >> s.at(i);
  }
  
  bool ok1 = false;
  bool ok2 = false;
  bool ok3 = false;
  
  for (int i = 0; i < 7; i++) {
    if (s.at(i) <= s.at(i + 1)) {
      ok1 = true;
    } else {
      ok1 = false;
      break;
    }
  }
  
  for (int i = 0; i < 8; i++) {
    if (100 <= s.at(i) && 675 >= s.at(i)) {
      ok2 = true;
    } else {
      ok2 = false;
      break;
    }
  }
  
  for (int i = 0; i < 8; i++) {
    if (s.at(i) % 25 == 0) {
      ok3 = true;
    } else {
      ok3 = false;
      break;
    }
  }

  if (ok1 && ok2 && ok3) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
 
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

bool solve() {
  vector<int> s(8);
  rep(i,8) cin >> s[i];
  rep(i,8) {
    if (s[i]%25 != 0) return false;
    if (s[i] < 100 || s[i] > 675) return false;
  }
  rep(i,7) {
    if (s[i] > s[i+1]) return false;
  }
  return true;
}

int main() {
  if (solve()) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
*/