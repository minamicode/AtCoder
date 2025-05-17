#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, x;
  cin >> r >> x;
  
  if (x == 1) {
    if (r >= 1600 && r <= 2999) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  } else {
    if (r >= 1200 && r <= 2399) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, x;
  cin >> r >> x;
  int l, u;
  if (x == 1) {
    l = 1600; u = 2999;
  } else {
    l = 1200; u = 2399;
  }
  if (l <= r && r <= u) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
*/