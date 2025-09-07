/* 解説より
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  for (char c = 'a';; c++) {
    if (find(s.begin(), s.end(), c) == s.end()) {
      cout << c << endl;
      return 0;
    }
  }
  return 0;
}
*/