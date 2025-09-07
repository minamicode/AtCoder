/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  const int INF = 1001001001;
  int minR = INF, maxR = -INF;
  int minC = INF, maxC = -INF;
  rep(i,n) {
    int r,c;
    cin >> r >> c;
    minR = min(minR, r); maxR = max(maxR, r);
    minC = min(minC, c); maxC = max(maxC, c);
  }

  int ans = (max(maxR-minR, maxC-minC)+1) / 2;
  cout << ans << endl;
  return 0;
}
*/