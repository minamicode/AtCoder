#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int m;
  cin >> m;
  vector<int> a;
  for (int i = 10; i >= 0; --i) {
    int x = 1;
    rep(j,i) x *= 3;
    while (m >= x) {
      m -= x;
      a.push_back(i);
    }
  }

  cout << a.size() << endl;
  for (int na : a) cout << na << ' ';
  cout << endl;
  return 0;
}