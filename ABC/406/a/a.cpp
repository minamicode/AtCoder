#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if (a == c) {
    if (b > d) {
      cout << "Yes" << endl;
    } else if (b < d) {
      cout << "No" << endl;
    }
  } else if (a > c) {
    cout << "Yes" << endl;
  } else if (a < c) {
    cout << "No" << endl;
  }
}

/* 解説より 
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  using P = pair<int,int>;
  if (P(c,d) < P(a,b)) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
*/