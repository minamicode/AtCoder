#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    vector<string> vec(n);
    for (int i = 0; i < n; i++) {
      cin >> vec.at(i);
    }

    int m = -1;
    for (int i = 0; i < n; i++) {
      int n = vec.at(i).size();
      m = max(m, n);
    }
    
    for (int i = 0; i < n; i++) {
      int n = vec.at(i).size();
      if (n < m) {
        int o = (m - n) / 2;
        for (int j = 0; j < o; j++) {
          vec.at(i).insert(0, ".");
          vec.at(i).push_back('.');
        }
      }
    }
    
    for (int i = 0; i < n; i++) {
      cout << vec.at(i) << endl;
    }

    return 0;
}