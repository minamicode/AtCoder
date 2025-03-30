#include <bits/stdc++.h>
using namespace std;
 
int main() {
  double r;
  cin >> r;

  double pi = 3.141592653589793238;

  double s = pi * r * r;
  double l = 2 * r * pi;

  cout << fixed << setprecision(10);
  cout << s << " " << l << endl;
}