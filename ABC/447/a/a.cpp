#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  
  if (n % 2) {
    if ((m * 2) <= (n + 1)) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  } else {
    if ((m * 2) <= n) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  
  return 0;
}