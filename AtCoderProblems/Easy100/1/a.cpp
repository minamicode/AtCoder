#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;

  int s = a - 1;
  int t = b - 1;
  int ans = (t + s - 1) / s;

  cout << ans << endl;

  return 0;
}