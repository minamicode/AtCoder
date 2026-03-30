#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  
  int len = s.size();

  if (len % 5) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }

  return 0;
}