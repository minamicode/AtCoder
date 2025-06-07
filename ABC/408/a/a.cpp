#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, s;
  cin >> n >> s;
  
  vector<int> t(n);
  for (int i = 0; i < n; i++) {
    cin >> t.at(i);
  }
  
  bool sleep = false;
  
  if (t.at(0) > s) {
    sleep = true;
  } else {
    for (int i = 0; i < n - 1; i++) {
      if (t.at(i + 1) - t.at(i) <= s) {
        sleep = false;
      } else {
        sleep = true;
        break;
      }
    }
  }
  
  if (sleep) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, s;
  cin >> n >> s;
  vector<int> t(n+1);
  rep(i,n) cin >> t[i+1];
  rep(i,n) {
    if (t[i+1]-t[i] > s) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
*/