#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  
  vector<int> l(n);
  for (int i = 0; i < n; i++) {
    cin >> l.at(i);
  }
  
  double position = 0.5;
  int cnt = 0;
  
  for (int i = 0; i < n; i++) {
    if (position > 0) {
      position -= l.at(i);
      if (position < 0) {
        cnt++;
      }
    } else if (position < 0) {
      position += l.at(i);
      if (position > 0) {
        cnt++;
      }
    }
  }
  
  cout << cnt << endl;
  return 0;
}