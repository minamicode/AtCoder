#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> h(n);
  rep(i,n) cin >> h[i];
  int p = 0;
  while (p < n-1 && h[p+1] > h[p]) {
    p++;
  }
  cout << h[p] << endl;
  return 0;
}
