#include <bits/stdc++.h>
using namespace std;
int main() {
  int t, x;
  cin >> t >> x;
  
  vector<int> a(t + 1);
  for (int i = 0; i < t + 1; i++) {
    cin >> a.at(i);
  }
  
  cout << '0' << " " << a.at(0) << endl;
  int save = a.at(0);
  for (int i = 1; i < t + 1; i++) {
    if (abs(save - a.at(i)) >= x) {
      save = a.at(i);
      cout << i << " " << a.at(i) << endl;
    } else {
      continue;
    }
  }
  
  return 0;
}