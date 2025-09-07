#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  
  bool ok = false;
  
  for (int i = 0; i < n - 2; i++) {
    if (a.at(i) == a.at(i + 1) && a.at(i + 1) == a.at(i + 2)) {
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
  vector<int> a(n);
  rep(i,n) cin >> a[i];

  rep(i,n-2) {
    if (a[i] == a[i+1] && a[i] == a[i+2]) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
*/