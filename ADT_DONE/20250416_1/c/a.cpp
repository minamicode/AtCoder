/* 解説より
#include <bits/stdc++.h>
using namespace std;

bool f(int n) {
  int a = n/100;
  int b = n/10%10;
  int c = n%10;
  return a*b == c;
}

int main() {
  int n;
  cin >> n;
  while (!f(n)) n++;
  cout << n << endl;
  return 0;
}
*/
