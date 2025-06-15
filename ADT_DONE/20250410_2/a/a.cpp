/* 解説より
#include <bits/stdc++.h>
using namespace std;

int main() {
  int v, a, b, c;
  cin >> v >> a >> b >> c;
  int v2 = v % (a+b+c);
  if (v2 < a) cout << "F" << endl;
  else if (v2 < a+b) cout << "M" << endl;
  else cout << "T" << endl;
  return 0;
}
*/