/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;

  int pre = 0, water = 0;
  rep(i,n) {
    int t, v;
    cin >> t >> v;

    water -= t-pre;
    water = max(water, 0);
    water += v;
    pre = t;
  }

  cout << water << endl;
  return 0;
}
*/