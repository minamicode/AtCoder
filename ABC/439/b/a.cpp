#include <bits/stdc++.h>
using namespace std;

int is_happy(int x) {
  if (x < 10) {
    int a = x / 1000;
    return pow(a, 2);
  } else if (x < 100) {
    int a = x / 1000;
    int b = (x / 100) % 10;
    return pow(a, 2) + pow(b, 2);
  } else if (x < 1000) {
    int a = x / 1000;
    int b = (x / 100) % 10;
    int c = (x / 10) % 10;
    return pow(a, 2) + pow(b, 2) + pow(c, 2);
  } else {
    int a = x / 1000;
    int b = (x / 100) % 10;
    int c = (x / 10) % 10;
    int d = x % 10;
    return pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2);
  }
}

int main() {
  int n;
  cin >> n;

  while (n > 0) {
    n = is_happy(n);
  }

  if (n == 1) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }


    return 0;
}