#include <bits/stdc++.h>
using namespace std;
int main() {
  int q;
  cin >> q;
  
  vector<int> height;
  int tree = 0;
  for (int i = 0; i < q; i++) {
    int type;
    cin >> type;
    if (type == 1) {
      int h;
      cin >> h;
      tree++;
      height.push_back(h);
      cout << tree << endl;
    }
    if (type == 2) {
      int h;
      cin >> h;
      for (int j = 0; j < height.size(); j++) {
        if (height.at(j) <= h) {
          height.at(j) = 1000000001;
          tree--;
        }
      }
      cout << tree << endl;
    }
  }
  
  return 0;
}