/* 解説より
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int x, y;
  cin >> x >> y;
  int cnt = 0;
  for (int i = 1; i <= 6; i++) {
    for (int j = 1; j <= 6; j++) {
      if (i+j >= x || abs(i-j) >= y) cnt++;
    }
  }
  double ans = cnt/36.;
  printf("%.10f\n", ans);
  return 0;
}
*/