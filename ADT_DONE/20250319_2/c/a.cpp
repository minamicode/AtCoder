#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int a, b, d;
  cin >> a >> b >> d;
  double theta = atan2(b,a);
  double r = sqrt(a*a+b*b);
  const double pi = acos(-1);
  theta += d/180.*pi;
  double x = cos(theta)*r;
  double y = sin(theta)*r;
  printf("%.10f %.10f\n", x, y);
  return 0;
}