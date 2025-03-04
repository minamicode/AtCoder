#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
 
int main() {
  int n, t, p;
  cin >> n >> t >> p;
  vector<int> l(n);
  rep (i, n) cin >> l[i];
  
  int day = 0;
  while (true) {
    int cnt = 0;
    rep(i, n) {
        if (l[i] >= t) cnt++;
    }
    if (cnt >= p) {
        cout << day << endl;
        return 0; 
    }

    rep(i, n) l[i]++;
    day++;
  }

  return 0;
}