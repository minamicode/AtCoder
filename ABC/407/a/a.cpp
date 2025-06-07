#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b;
  cin >> a >> b;

  cout << round(a / b) << endl;
}


/* 解説より
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int ans = round(double(a)/b);
  cout << ans << endl;
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  double x = double(a)/b;
  int l = a/b, r = l+1;
  if (x-l < r-x) cout << l << endl;
  else cout << r << endl;
  return 0;
}
*/