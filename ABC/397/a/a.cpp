#include <bits/stdc++.h>
using namespace std;

int main() {
  double x;
  cin >> x;

  if (x >= 38.0) {
    cout << 1 << endl;
  } else if (37.5 <= x && x < 38.0) {
    cout << 2 << endl;
  } else {
    cout << 3 << endl;
  }
}
