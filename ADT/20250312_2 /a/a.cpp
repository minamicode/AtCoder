#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  cin >> x;

  if (x <= 10) {
    cout << 10 << endl;
  } else if (x > 10 && x <= 15) {
    cout << 15 << endl;
  } else {
    cout << 17 << endl;
  }
}
