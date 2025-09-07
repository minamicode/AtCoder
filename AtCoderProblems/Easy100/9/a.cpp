#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> x(n);
  for (int i = 0; i < n; i++) {
    cin >> x.at(i);
  }

  int ans = 0;
  
  for (int i = 0; i < n; i ++) {
    ans += 2 * min(x.at(i), k - x.at(i));
  }

  cout << ans << endl;
  return 0;
}