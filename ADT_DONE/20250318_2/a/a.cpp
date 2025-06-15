#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
 
int main() {
  vector<int> x(3), y(3);
  rep(i,3) cin >> x[i] >> y[i];
  
  int a = 0, b = 0;
  
  if (x[0] == x[1]) {
    a = x[2];
  } else if (x[0] == x[2]) {
    a = x[1];
  } else {
    a = x[0];
  }
  
  if (y[0] == y[1]) {
    b = y[2];
  } else if (y[0] == y[2]) {
    b = y[1];
  } else {
    b = y[0];
  }
 
  cout << a << " " << b << endl;
}

/* 解説より
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int x1, y1, x2, y2, x3, y3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  int x = x1^x2^x3;
  int y = y1^y2^y3;
  cout << x << " " << y << endl;
  return 0;
}
*/
