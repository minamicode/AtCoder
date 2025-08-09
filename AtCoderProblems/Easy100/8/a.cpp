#include <bits/stdc++.h>
using namespace std;

bool is_squere (int n) {
  int r = sqrt(n);
  return r * r == n;
}

int main() {
  string a, b;
  cin >> a >> b;

  string c = a + b;

  int n = stoi(c);

  if (is_squere(n)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
       
  return 0;
}