#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  
  vector<int> a(n);
  vector<int> b(n);
  
  for (int i = 0; i < n; i++) {
    int c, d;
    cin >> c >> d;
    a.push_back(c);
    b.push_back(d);
  }
  
  for (int i = 1; i <= m; i++) {
    int x = count(a.begin(), a.end(), i);
    int y = count(b.begin(), b.end(), i);
    cout << y - x << endl;  
  }

  return 0;
}