#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int w, h, x, y, r;
  cin >> w >> h >> x >> y >> r;

  int a = min(w, h);

  if (0 < x && x <= w - r && 0 < y && y <= h - r && r * 2 <= a) { // x <= w - r && x >= r && y <= h - r && y >= r
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
