#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  
  vector<int> a(n + 1);
  
  for (int i = 0; i < n + 1; i++) {
    if (i < k) {
      a.at(i) = 1;
    } else if (i >= k) {
      int x = 0;
      for (int j = 0; j <= i - 1; j++) {
        x += a.at(i - k + j);
      }
      a.at(i) = x;
    }
  }
  
  cout << a.at(n) % 1000000000 << endl;
}
